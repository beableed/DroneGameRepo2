// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuSystem/InGameMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMenu() {}
// Cross Module References
	DRONEGAME_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UInGameMenu();
	DRONEGAME_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UInGameMenu_CancelPressed();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UInGameMenu_QuitPressed();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UInGameMenu::StaticRegisterNativesUInGameMenu()
	{
		UClass* Class = UInGameMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelPressed", &UInGameMenu::execCancelPressed },
			{ "QuitPressed", &UInGameMenu::execQuitPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInGameMenu_CancelPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, "CancelPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInGameMenu_QuitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, "QuitPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInGameMenu_NoRegister()
	{
		return UInGameMenu::StaticClass();
	}
	UClass* Z_Construct_UClass_UInGameMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMenuWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInGameMenu_CancelPressed, "CancelPressed" }, // 4289597433
				{ &Z_Construct_UFunction_UInGameMenu_QuitPressed, "QuitPressed" }, // 3571958642
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MenuSystem/InGameMenu.h" },
				{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton = { UE4CodeGen_Private::EPropertyClass::Object, "QuitButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UInGameMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_QuitButton_MetaData, ARRAY_COUNT(NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelButton = { UE4CodeGen_Private::EPropertyClass::Object, "CancelButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UInGameMenu, CancelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_CancelButton_MetaData, ARRAY_COUNT(NewProp_CancelButton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuitButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CancelButton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInGameMenu>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInGameMenu::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UInGameMenu, 1847075258);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameMenu(Z_Construct_UClass_UInGameMenu, &UInGameMenu::StaticClass, TEXT("/Script/DroneGame"), TEXT("UInGameMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
