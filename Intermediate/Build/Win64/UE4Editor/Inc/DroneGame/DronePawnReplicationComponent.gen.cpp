// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DronePawnReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDronePawnReplicationComponent() {}
// Cross Module References
	DRONEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDroneGameState();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDronePawnMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnReplicationComponent_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnReplicationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDronePawnReplicationComponent_OnRep_ServerState();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDronePawnReplicationComponent_Server_SendMove();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDronePawnReplicationComponent_SetMeshOffsetRoot();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnMovementComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FDroneGameState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRONEGAME_API uint32 Get_Z_Construct_UScriptStruct_FDroneGameState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneGameState, Z_Construct_UPackage__Script_DroneGame(), TEXT("DroneGameState"), sizeof(FDroneGameState), Get_Z_Construct_UScriptStruct_FDroneGameState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDroneGameState(FDroneGameState::StaticStruct, TEXT("/Script/DroneGame"), TEXT("DroneGameState"), false, nullptr, nullptr);
static struct FScriptStruct_DroneGame_StaticRegisterNativesFDroneGameState
{
	FScriptStruct_DroneGame_StaticRegisterNativesFDroneGameState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DroneGameState")),new UScriptStruct::TCppStructOps<FDroneGameState>);
	}
} ScriptStruct_DroneGame_StaticRegisterNativesFDroneGameState;
	UScriptStruct* Z_Construct_UScriptStruct_FDroneGameState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDroneGameState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DroneGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DroneGameState"), sizeof(FDroneGameState), Get_Z_Construct_UScriptStruct_FDroneGameState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneGameState>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMove_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMove = { UE4CodeGen_Private::EPropertyClass::Struct, "LastMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDroneGameState, LastMove), Z_Construct_UScriptStruct_FDronePawnMove, METADATA_PARAMS(NewProp_LastMove_MetaData, ARRAY_COUNT(NewProp_LastMove_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDroneGameState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDroneGameState, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastMove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DroneGameState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDroneGameState),
				alignof(FDroneGameState),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDroneGameState_CRC() { return 3646155213U; }
	static FName NAME_UDronePawnReplicationComponent_Server_SendMove = FName(TEXT("Server_SendMove"));
	void UDronePawnReplicationComponent::Server_SendMove(FDronePawnMove Move)
	{
		DronePawnReplicationComponent_eventServer_SendMove_Parms Parms;
		Parms.Move=Move;
		ProcessEvent(FindFunctionChecked(NAME_UDronePawnReplicationComponent_Server_SendMove),&Parms);
	}
	void UDronePawnReplicationComponent::StaticRegisterNativesUDronePawnReplicationComponent()
	{
		UClass* Class = UDronePawnReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ServerState", &UDronePawnReplicationComponent::execOnRep_ServerState },
			{ "Server_SendMove", &UDronePawnReplicationComponent::execServer_SendMove },
			{ "SetMeshOffsetRoot", &UDronePawnReplicationComponent::execSetMeshOffsetRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDronePawnReplicationComponent_OnRep_ServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDronePawnReplicationComponent, "OnRep_ServerState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDronePawnReplicationComponent_Server_SendMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Struct, "Move", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DronePawnReplicationComponent_eventServer_SendMove_Parms, Move), Z_Construct_UScriptStruct_FDronePawnMove, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Move,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDronePawnReplicationComponent, "Server_SendMove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80240CC1, sizeof(DronePawnReplicationComponent_eventServer_SendMove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDronePawnReplicationComponent_SetMeshOffsetRoot()
	{
		struct DronePawnReplicationComponent_eventSetMeshOffsetRoot_Parms
		{
			USceneComponent* Root;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DronePawnReplicationComponent_eventSetMeshOffsetRoot_Parms, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDronePawnReplicationComponent, "SetMeshOffsetRoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(DronePawnReplicationComponent_eventSetMeshOffsetRoot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDronePawnReplicationComponent_NoRegister()
	{
		return UDronePawnReplicationComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDronePawnReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDronePawnReplicationComponent_OnRep_ServerState, "OnRep_ServerState" }, // 486382673
				{ &Z_Construct_UFunction_UDronePawnReplicationComponent_Server_SendMove, "Server_SendMove" }, // 1998089959
				{ &Z_Construct_UFunction_UDronePawnReplicationComponent_SetMeshOffsetRoot, "SetMeshOffsetRoot" }, // 3596251555
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "DronePawnReplicationComponent.h" },
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOffsetRoot_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshOffsetRoot = { UE4CodeGen_Private::EPropertyClass::Object, "MeshOffsetRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UDronePawnReplicationComponent, MeshOffsetRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_MeshOffsetRoot_MetaData, ARRAY_COUNT(NewProp_MeshOffsetRoot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DronePawnMovementComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DronePawnMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "DronePawnMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UDronePawnReplicationComponent, DronePawnMovementComponent), Z_Construct_UClass_UDronePawnMovementComponent_NoRegister, METADATA_PARAMS(NewProp_DronePawnMovementComponent_MetaData, ARRAY_COUNT(NewProp_DronePawnMovementComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerState_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnReplicationComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerState = { UE4CodeGen_Private::EPropertyClass::Struct, "ServerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000100000020, 1, "OnRep_ServerState", STRUCT_OFFSET(UDronePawnReplicationComponent, ServerState), Z_Construct_UScriptStruct_FDroneGameState, METADATA_PARAMS(NewProp_ServerState_MetaData, ARRAY_COUNT(NewProp_ServerState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshOffsetRoot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DronePawnMovementComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerState,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDronePawnReplicationComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDronePawnReplicationComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDronePawnReplicationComponent, 407368220);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDronePawnReplicationComponent(Z_Construct_UClass_UDronePawnReplicationComponent, &UDronePawnReplicationComponent::StaticClass, TEXT("/Script/DroneGame"), TEXT("UDronePawnReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDronePawnReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
