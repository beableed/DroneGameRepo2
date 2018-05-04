// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MovingPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	DRONEGAME_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_AMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input" },
				{ "IncludePath", "MovingPlatform.h" },
				{ "ModuleRelativePath", "MovingPlatform.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTriggers_MetaData[] = {
				{ "Category", "MovingPlatform" },
				{ "ModuleRelativePath", "MovingPlatform.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActiveTriggers = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveTriggers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMovingPlatform, ActiveTriggers), METADATA_PARAMS(NewProp_ActiveTriggers_MetaData, ARRAY_COUNT(NewProp_ActiveTriggers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
				{ "Category", "MovingPlatform" },
				{ "MakeEditWidget", "TRUE" },
				{ "ModuleRelativePath", "MovingPlatform.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMovingPlatform, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetLocation_MetaData, ARRAY_COUNT(NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "MovingPlatform" },
				{ "ModuleRelativePath", "MovingPlatform.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMovingPlatform, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveTriggers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMovingPlatform::StaticClass,
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
	IMPLEMENT_CLASS(AMovingPlatform, 3644086999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingPlatform(Z_Construct_UClass_AMovingPlatform, &AMovingPlatform::StaticClass, TEXT("/Script/DroneGame"), TEXT("AMovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
