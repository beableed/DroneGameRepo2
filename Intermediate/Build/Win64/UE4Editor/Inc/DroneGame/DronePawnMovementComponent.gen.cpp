// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DronePawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDronePawnMovementComponent() {}
// Cross Module References
	DRONEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDronePawnMove();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnMovementComponent_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FDronePawnMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRONEGAME_API uint32 Get_Z_Construct_UScriptStruct_FDronePawnMove_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDronePawnMove, Z_Construct_UPackage__Script_DroneGame(), TEXT("DronePawnMove"), sizeof(FDronePawnMove), Get_Z_Construct_UScriptStruct_FDronePawnMove_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDronePawnMove(FDronePawnMove::StaticStruct, TEXT("/Script/DroneGame"), TEXT("DronePawnMove"), false, nullptr, nullptr);
static struct FScriptStruct_DroneGame_StaticRegisterNativesFDronePawnMove
{
	FScriptStruct_DroneGame_StaticRegisterNativesFDronePawnMove()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DronePawnMove")),new UScriptStruct::TCppStructOps<FDronePawnMove>);
	}
} ScriptStruct_DroneGame_StaticRegisterNativesFDronePawnMove;
	UScriptStruct* Z_Construct_UScriptStruct_FDronePawnMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDronePawnMove_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DroneGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DronePawnMove"), sizeof(FDronePawnMove), Get_Z_Construct_UScriptStruct_FDronePawnMove_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDronePawnMove>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDronePawnMove, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDronePawnMove, DeltaTime), METADATA_PARAMS(NewProp_DeltaTime_MetaData, ARRAY_COUNT(NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringThrow_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringThrow = { UE4CodeGen_Private::EPropertyClass::Float, "SteeringThrow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDronePawnMove, SteeringThrow), METADATA_PARAMS(NewProp_SteeringThrow_MetaData, ARRAY_COUNT(NewProp_SteeringThrow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle = { UE4CodeGen_Private::EPropertyClass::Float, "Throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDronePawnMove, Throttle), METADATA_PARAMS(NewProp_Throttle_MetaData, ARRAY_COUNT(NewProp_Throttle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringThrow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throttle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DronePawnMove",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDronePawnMove),
				alignof(FDronePawnMove),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDronePawnMove_CRC() { return 1941333165U; }
	void UDronePawnMovementComponent::StaticRegisterNativesUDronePawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UDronePawnMovementComponent_NoRegister()
	{
		return UDronePawnMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDronePawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "DronePawnMovementComponent.h" },
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingResistanceCoefficient_MetaData[] = {
				{ "Category", "DronePawnMovementComponent" },
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
				{ "ToolTip", "Higher means more rolling resistance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingResistanceCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "RollingResistanceCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDronePawnMovementComponent, RollingResistanceCoefficient), METADATA_PARAMS(NewProp_RollingResistanceCoefficient_MetaData, ARRAY_COUNT(NewProp_RollingResistanceCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
				{ "Category", "DronePawnMovementComponent" },
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
				{ "ToolTip", "Higher means more drag." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "DragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDronePawnMovementComponent, DragCoefficient), METADATA_PARAMS(NewProp_DragCoefficient_MetaData, ARRAY_COUNT(NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTurningRadius_MetaData[] = {
				{ "Category", "DronePawnMovementComponent" },
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
				{ "ToolTip", "Minimum radius of the car turning circle at full lock (m)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTurningRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MinTurningRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDronePawnMovementComponent, MinTurningRadius), METADATA_PARAMS(NewProp_MinTurningRadius_MetaData, ARRAY_COUNT(NewProp_MinTurningRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrivingForce_MetaData[] = {
				{ "Category", "DronePawnMovementComponent" },
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
				{ "ToolTip", "The force applied to the car when the throttle is fully down (N)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDrivingForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDrivingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDronePawnMovementComponent, MaxDrivingForce), METADATA_PARAMS(NewProp_MaxDrivingForce_MetaData, ARRAY_COUNT(NewProp_MaxDrivingForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
				{ "Category", "DronePawnMovementComponent" },
				{ "ModuleRelativePath", "DronePawnMovementComponent.h" },
				{ "ToolTip", "The mass of the car (kg)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Float, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDronePawnMovementComponent, Mass), METADATA_PARAMS(NewProp_Mass_MetaData, ARRAY_COUNT(NewProp_Mass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollingResistanceCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinTurningRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDrivingForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDronePawnMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDronePawnMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UDronePawnMovementComponent, 1321898059);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDronePawnMovementComponent(Z_Construct_UClass_UDronePawnMovementComponent, &UDronePawnMovementComponent::StaticClass, TEXT("/Script/DroneGame"), TEXT("UDronePawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDronePawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
