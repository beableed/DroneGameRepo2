// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DroneGameGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneGameGameInstance() {}
// Cross Module References
	DRONEGAME_API UClass* Z_Construct_UClass_UDroneGameGameInstance_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UDroneGameGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDroneGameGameInstance_AssignUIManually();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDroneGameGameInstance_Host();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDroneGameGameInstance_InGameLoadMenu();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDroneGameGameInstance_Join();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UDroneGameGameInstance_LoadMenuWidget();
	DRONEGAME_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	void UDroneGameGameInstance::StaticRegisterNativesUDroneGameGameInstance()
	{
		UClass* Class = UDroneGameGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignUIManually", &UDroneGameGameInstance::execAssignUIManually },
			{ "Host", &UDroneGameGameInstance::execHost },
			{ "InGameLoadMenu", &UDroneGameGameInstance::execInGameLoadMenu },
			{ "Join", &UDroneGameGameInstance::execJoin },
			{ "LoadMenuWidget", &UDroneGameGameInstance::execLoadMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDroneGameGameInstance_AssignUIManually()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DroneGameGameInstance.h" },
				{ "ToolTip", "Test function to call in console to see if refreshing the UI input mode is the problem with the host pawn not posessing on listen server" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneGameGameInstance, "AssignUIManually", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDroneGameGameInstance_Host()
	{
		struct DroneGameGameInstance_eventHost_Parms
		{
			FString ServerName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName = { UE4CodeGen_Private::EPropertyClass::Str, "ServerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DroneGameGameInstance_eventHost_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DroneGameGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneGameGameInstance, "Host", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(DroneGameGameInstance_eventHost_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDroneGameGameInstance_InGameLoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DroneGameGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneGameGameInstance, "InGameLoadMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDroneGameGameInstance_Join()
	{
		struct DroneGameGameInstance_eventJoin_Parms
		{
			uint32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::UInt32, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DroneGameGameInstance_eventJoin_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DroneGameGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneGameGameInstance, "Join", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(DroneGameGameInstance_eventJoin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDroneGameGameInstance_LoadMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DroneGameGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneGameGameInstance, "LoadMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDroneGameGameInstance_NoRegister()
	{
		return UDroneGameGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UDroneGameGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDroneGameGameInstance_AssignUIManually, "AssignUIManually" }, // 3670937155
				{ &Z_Construct_UFunction_UDroneGameGameInstance_Host, "Host" }, // 2352599519
				{ &Z_Construct_UFunction_UDroneGameGameInstance_InGameLoadMenu, "InGameLoadMenu" }, // 2886788169
				{ &Z_Construct_UFunction_UDroneGameGameInstance_Join, "Join" }, // 3375087154
				{ &Z_Construct_UFunction_UDroneGameGameInstance_LoadMenuWidget, "LoadMenuWidget" }, // 866164571
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DroneGameGameInstance.h" },
				{ "ModuleRelativePath", "DroneGameGameInstance.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UDroneGameGameInstance, IMenuInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDroneGameGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDroneGameGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDroneGameGameInstance, 969577320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDroneGameGameInstance(Z_Construct_UClass_UDroneGameGameInstance, &UDroneGameGameInstance::StaticClass, TEXT("/Script/DroneGame"), TEXT("UDroneGameGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneGameGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
