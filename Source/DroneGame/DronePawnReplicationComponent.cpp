// Fill out your copyright notice in the Description page of Project Settings.

#include "DronePawnReplicationComponent.h"
#include "UnrealNetwork.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UDronePawnReplicationComponent::UDronePawnReplicationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SetIsReplicated(true);
}

// Called when the game starts
void UDronePawnReplicationComponent::BeginPlay()
{
	Super::BeginPlay();

	DronePawnMovementComponent = GetOwner()->FindComponentByClass<UDronePawnMovementComponent>();
}

void UDronePawnReplicationComponent::UpdateServerState(const FDronePawnMove& Move)
{
	ServerState.LastMove = Move;
	ServerState.Transform = GetOwner()->GetActorTransform();
	ServerState.Velocity = DronePawnMovementComponent->GetVelocity();
}
// Called every frame
void UDronePawnReplicationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (DronePawnMovementComponent == nullptr) 
		UE_LOG(LogTemp, Warning, TEXT("DRONEPAWN IS NULL"));
		return;

	FDronePawnMove LastMove = DronePawnMovementComponent->GetLastMove();

	if (GetOwnerRole() == ROLE_AutonomousProxy)
	{
		UnacknowledgedMoves.Add(LastMove);
		Server_SendMove(LastMove);
		
	}

	// We are the server and in control of the pawn.
	if (GetOwner()->GetRemoteRole() == ROLE_SimulatedProxy)
	{
		UpdateServerState(LastMove);
		
	}

	if (GetOwnerRole() == ROLE_SimulatedProxy)
	{
		ClientTick(DeltaTime);
		
		
	}
}

void UDronePawnReplicationComponent::ClientTick(float DeltaTime)
{
	ClientTimeSinceUpdate += DeltaTime;

	if (ClientTimeBetweenLastUpdates < KINDA_SMALL_NUMBER) return;
	if (DronePawnMovementComponent == nullptr) return;

	float LerpRatio = ClientTimeSinceUpdate / ClientTimeBetweenLastUpdates;
	FHermiteCubicSpline Spline = CreateSpline();

	InterpolateLocation(Spline, LerpRatio);

	InterpolateVelocity(Spline, LerpRatio);

	InterpolateRotation(LerpRatio);

}

FHermiteCubicSpline UDronePawnReplicationComponent::CreateSpline()
{
	FHermiteCubicSpline Spline;
	Spline.TargetLocation = ServerState.Transform.GetLocation();
	Spline.StartLocation = ClientStartTransform.GetLocation();
	Spline.StartDerivative = ClientStartVelocity * VelocityToDerivative();
	Spline.TargetDerivative = ServerState.Velocity * VelocityToDerivative();
	return Spline;
}

void UDronePawnReplicationComponent::InterpolateLocation(const FHermiteCubicSpline &Spline, float LerpRatio)
{
	FVector NewLocation = Spline.InterpolateLocation(LerpRatio);
	if (MeshOffsetRoot != nullptr)
	{
		MeshOffsetRoot->SetWorldLocation(NewLocation);
	}
}

void UDronePawnReplicationComponent::InterpolateVelocity(const FHermiteCubicSpline &Spline, float LerpRatio)
{
	FVector NewDerivative = Spline.InterpolateDerivative(LerpRatio);
	FVector NewVelocity = NewDerivative / VelocityToDerivative();
	DronePawnMovementComponent->SetVelocity(NewVelocity);
}

void UDronePawnReplicationComponent::InterpolateRotation(float LerpRatio)
{
	FQuat TargetRotation = ServerState.Transform.GetRotation();
	FQuat StartRotation = ClientStartTransform.GetRotation();

	FQuat NewRotation = FQuat::Slerp(StartRotation, TargetRotation, LerpRatio);

	if (MeshOffsetRoot != nullptr)
	{
		MeshOffsetRoot->SetWorldRotation(NewRotation);
	}
}

float UDronePawnReplicationComponent::VelocityToDerivative()
{
	return ClientTimeBetweenLastUpdates * 100;
}

bool UDronePawnReplicationComponent::Server_SendMove_Validate(FDronePawnMove Move)

{

	
	float ProposedTime = ClientSimulatedTime + Move.DeltaTime;
	bool ClientNotRunningAhead = ProposedTime < GetWorld()->TimeSeconds;
	if (!ClientNotRunningAhead) {
		UE_LOG(LogTemp, Error, TEXT("Client is running too fast."))
			return false;
	}

	if (!Move.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Received invalid move."))
			return false;
	}

	return true;


}

void UDronePawnReplicationComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UDronePawnReplicationComponent, ServerState);
}

void UDronePawnReplicationComponent::OnRep_ServerState()
{
	switch (GetOwnerRole())
	{
	case ROLE_AutonomousProxy:
		AutonomousProxy_OnRep_ServerState();
		break;
	case ROLE_SimulatedProxy:
		SimulatedProxy_OnRep_ServerState();
		break;
	default:
		break;
	}
}

void UDronePawnReplicationComponent::AutonomousProxy_OnRep_ServerState()
{
	if (DronePawnMovementComponent == nullptr) return;

	GetOwner()->SetActorTransform(ServerState.Transform);
	DronePawnMovementComponent->SetVelocity(ServerState.Velocity);

	ClearAcknowledgeMoves(ServerState.LastMove);

	for (const FDronePawnMove& Move : UnacknowledgedMoves)
	{
		DronePawnMovementComponent->SimulateMove(Move);
	}
}

void UDronePawnReplicationComponent::SimulatedProxy_OnRep_ServerState()
{
	if (DronePawnMovementComponent == nullptr) return;

	ClientTimeBetweenLastUpdates = ClientTimeSinceUpdate;
	ClientTimeSinceUpdate = 0;

	if (MeshOffsetRoot != nullptr)
	{
		ClientStartTransform.SetLocation(MeshOffsetRoot->GetComponentLocation());
		ClientStartTransform.SetRotation(MeshOffsetRoot->GetComponentQuat());
	}
	ClientStartVelocity = DronePawnMovementComponent->GetVelocity();

	GetOwner()->SetActorTransform(ServerState.Transform);
}

void UDronePawnReplicationComponent::ClearAcknowledgeMoves(FDronePawnMove LastMove)
{
	TArray<FDronePawnMove> NewMoves;

	for (const FDronePawnMove& Move : UnacknowledgedMoves)
	{
		if (Move.Time > LastMove.Time)
		{
			NewMoves.Add(Move);
		}
	}

	UnacknowledgedMoves = NewMoves;
}

void UDronePawnReplicationComponent::Server_SendMove_Implementation(FDronePawnMove Move)
{
	if (DronePawnMovementComponent == nullptr) return;

	ClientSimulatedTime += Move.DeltaTime;
	DronePawnMovementComponent->SimulateMove(Move);

	UpdateServerState(Move);
}

