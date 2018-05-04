// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuSystem/MainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	DRONEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FServerData();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UMainMenu();
	DRONEGAME_API UClass* Z_Construct_UClass_UMenuWidget();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UMainMenu_HostServer();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UMainMenu_JoinServer();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UMainMenu_OpenHostMenu();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UMainMenu_OpenJoinMenu();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UMainMenu_OpenMainMenu();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UMainMenu_QuitPressed();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
class UScriptStruct* FServerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRONEGAME_API uint32 Get_Z_Construct_UScriptStruct_FServerData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerData, Z_Construct_UPackage__Script_DroneGame(), TEXT("ServerData"), sizeof(FServerData), Get_Z_Construct_UScriptStruct_FServerData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerData(FServerData::StaticStruct, TEXT("/Script/DroneGame"), TEXT("ServerData"), false, nullptr, nullptr);
static struct FScriptStruct_DroneGame_StaticRegisterNativesFServerData
{
	FScriptStruct_DroneGame_StaticRegisterNativesFServerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ServerData")),new UScriptStruct::TCppStructOps<FServerData>);
	}
} ScriptStruct_DroneGame_StaticRegisterNativesFServerData;
	UScriptStruct* Z_Construct_UScriptStruct_FServerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DroneGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerData"), sizeof(FServerData), Get_Z_Construct_UScriptStruct_FServerData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ServerData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FServerData),
				alignof(FServerData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerData_CRC() { return 4183250979U; }
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostServer", &UMainMenu::execHostServer },
			{ "JoinServer", &UMainMenu::execJoinServer },
			{ "OpenHostMenu", &UMainMenu::execOpenHostMenu },
			{ "OpenJoinMenu", &UMainMenu::execOpenJoinMenu },
			{ "OpenMainMenu", &UMainMenu::execOpenMainMenu },
			{ "QuitPressed", &UMainMenu::execQuitPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMainMenu_HostServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "HostServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "JoinServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_OpenHostMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "OpenHostMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_OpenJoinMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "OpenJoinMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_OpenMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "OpenMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_QuitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, "QuitPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMenuWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMainMenu_HostServer, "HostServer" }, // 1922722908
				{ &Z_Construct_UFunction_UMainMenu_JoinServer, "JoinServer" }, // 941775147
				{ &Z_Construct_UFunction_UMainMenu_OpenHostMenu, "OpenHostMenu" }, // 3755710886
				{ &Z_Construct_UFunction_UMainMenu_OpenJoinMenu, "OpenJoinMenu" }, // 2753066117
				{ &Z_Construct_UFunction_UMainMenu_OpenMainMenu, "OpenMainMenu" }, // 3761292001
				{ &Z_Construct_UFunction_UMainMenu_QuitPressed, "QuitPressed" }, // 1369672325
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MenuSystem/MainMenu.h" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerList_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerList = { UE4CodeGen_Private::EPropertyClass::Object, "ServerList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, ServerList), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(NewProp_ServerList_MetaData, ARRAY_COUNT(NewProp_ServerList_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmHostMenuButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmHostMenuButton = { UE4CodeGen_Private::EPropertyClass::Object, "ConfirmHostMenuButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, ConfirmHostMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ConfirmHostMenuButton_MetaData, ARRAY_COUNT(NewProp_ConfirmHostMenuButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelHostMenuButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelHostMenuButton = { UE4CodeGen_Private::EPropertyClass::Object, "CancelHostMenuButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, CancelHostMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_CancelHostMenuButton_MetaData, ARRAY_COUNT(NewProp_CancelHostMenuButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHostName_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerHostName = { UE4CodeGen_Private::EPropertyClass::Object, "ServerHostName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, ServerHostName), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(NewProp_ServerHostName_MetaData, ARRAY_COUNT(NewProp_ServerHostName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostMenu_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostMenu = { UE4CodeGen_Private::EPropertyClass::Object, "HostMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, HostMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_HostMenu_MetaData, ARRAY_COUNT(NewProp_HostMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinMenu_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinMenu = { UE4CodeGen_Private::EPropertyClass::Object, "JoinMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, JoinMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_JoinMenu_MetaData, ARRAY_COUNT(NewProp_JoinMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenu = { UE4CodeGen_Private::EPropertyClass::Object, "MainMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, MainMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_MainMenu_MetaData, ARRAY_COUNT(NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuSwitcher_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuSwitcher = { UE4CodeGen_Private::EPropertyClass::Object, "MenuSwitcher", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, MenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(NewProp_MenuSwitcher_MetaData, ARRAY_COUNT(NewProp_MenuSwitcher_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmJoinMenuButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmJoinMenuButton = { UE4CodeGen_Private::EPropertyClass::Object, "ConfirmJoinMenuButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, ConfirmJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ConfirmJoinMenuButton_MetaData, ARRAY_COUNT(NewProp_ConfirmJoinMenuButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelJoinMenuButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelJoinMenuButton = { UE4CodeGen_Private::EPropertyClass::Object, "CancelJoinMenuButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, CancelJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_CancelJoinMenuButton_MetaData, ARRAY_COUNT(NewProp_CancelJoinMenuButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton = { UE4CodeGen_Private::EPropertyClass::Object, "QuitButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_QuitButton_MetaData, ARRAY_COUNT(NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinButton = { UE4CodeGen_Private::EPropertyClass::Object, "JoinButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_JoinButton_MetaData, ARRAY_COUNT(NewProp_JoinButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostButton = { UE4CodeGen_Private::EPropertyClass::Object, "HostButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_HostButton_MetaData, ARRAY_COUNT(NewProp_HostButton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfirmHostMenuButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CancelHostMenuButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerHostName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HostMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoinMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuSwitcher,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfirmJoinMenuButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CancelJoinMenuButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuitButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoinButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HostButton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMainMenu>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMainMenu::StaticClass,
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
	IMPLEMENT_CLASS(UMainMenu, 2123962955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu(Z_Construct_UClass_UMainMenu, &UMainMenu::StaticClass, TEXT("/Script/DroneGame"), TEXT("UMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
