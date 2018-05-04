// Fill out your copyright notice in the Description page of Project Settings.

#include "MyTestDroneCharacter.h"


// Sets default values
AMyTestDroneCharacter::AMyTestDroneCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTestDroneCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTestDroneCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyTestDroneCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

