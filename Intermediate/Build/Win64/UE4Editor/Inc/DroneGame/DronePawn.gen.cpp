// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DronePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDronePawn() {}
// Cross Module References
	DRONEGAME_API UClass* Z_Construct_UClass_ADronePawn_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_ADronePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnReplicationComponent_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UDronePawnMovementComponent_NoRegister();
// End Cross Module References
	void ADronePawn::StaticRegisterNativesADronePawn()
	{
	}
	UClass* Z_Construct_UClass_ADronePawn_NoRegister()
	{
		return ADronePawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ADronePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "DronePawn.h" },
				{ "ModuleRelativePath", "DronePawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationComponent_MetaData[] = {
				{ "Category", "DronePawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DronePawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ReplicationComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ADronePawn, ReplicationComponent), Z_Construct_UClass_UDronePawnReplicationComponent_NoRegister, METADATA_PARAMS(NewProp_ReplicationComponent_MetaData, ARRAY_COUNT(NewProp_ReplicationComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
				{ "Category", "DronePawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DronePawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ADronePawn, MovementComponent), Z_Construct_UClass_UDronePawnMovementComponent_NoRegister, METADATA_PARAMS(NewProp_MovementComponent_MetaData, ARRAY_COUNT(NewProp_MovementComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADronePawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADronePawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ADronePawn, 2199779046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADronePawn(Z_Construct_UClass_ADronePawn, &ADronePawn::StaticClass, TEXT("/Script/DroneGame"), TEXT("ADronePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADronePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
