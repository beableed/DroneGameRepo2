// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LobbyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}
// Cross Module References
	DRONEGAME_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_ALobbyGameMode();
	DRONEGAME_API UClass* Z_Construct_UClass_ADroneGameGameMode();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
// End Cross Module References
	void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
	{
		return ALobbyGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ALobbyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ADroneGameGameMode,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "LobbyGameMode.h" },
				{ "ModuleRelativePath", "LobbyGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALobbyGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyGameMode, 2253894097);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyGameMode(Z_Construct_UClass_ALobbyGameMode, &ALobbyGameMode::StaticClass, TEXT("/Script/DroneGame"), TEXT("ALobbyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
