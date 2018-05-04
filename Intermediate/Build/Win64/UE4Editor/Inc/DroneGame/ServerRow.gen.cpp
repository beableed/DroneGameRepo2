// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuSystem/ServerRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRow() {}
// Cross Module References
	DRONEGAME_API UClass* Z_Construct_UClass_UServerRow_NoRegister();
	DRONEGAME_API UClass* Z_Construct_UClass_UServerRow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DroneGame();
	DRONEGAME_API UFunction* Z_Construct_UFunction_UServerRow_OnClicked();
	DRONEGAME_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UServerRow::StaticRegisterNativesUServerRow()
	{
		UClass* Class = UServerRow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClicked", &UServerRow::execOnClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UServerRow_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow, "OnClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerRow_NoRegister()
	{
		return UServerRow::StaticClass();
	}
	UClass* Z_Construct_UClass_UServerRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_DroneGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UServerRow_OnClicked, "OnClicked" }, // 23073209
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MenuSystem/ServerRow.h" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow, Parent), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowButton_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowButton = { UE4CodeGen_Private::EPropertyClass::Object, "RowButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow, RowButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_RowButton_MetaData, ARRAY_COUNT(NewProp_RowButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[] = {
				{ "Category", "ServerRow" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			auto NewProp_Selected_SetBit = [](void* Obj){ ((UServerRow*)Obj)->Selected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Selected = { UE4CodeGen_Private::EPropertyClass::Bool, "Selected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerRow), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Selected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Selected_MetaData, ARRAY_COUNT(NewProp_Selected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionFraction_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionFraction = { UE4CodeGen_Private::EPropertyClass::Object, "ConnectionFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow, ConnectionFraction), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_ConnectionFraction_MetaData, ARRAY_COUNT(NewProp_ConnectionFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostUser = { UE4CodeGen_Private::EPropertyClass::Object, "HostUser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow, HostUser), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_HostUser_MetaData, ARRAY_COUNT(NewProp_HostUser_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
				{ "BindWidget", "" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerName = { UE4CodeGen_Private::EPropertyClass::Object, "ServerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow, ServerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_ServerName_MetaData, ARRAY_COUNT(NewProp_ServerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Selected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConnectionFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HostUser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UServerRow>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UServerRow::StaticClass,
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
	IMPLEMENT_CLASS(UServerRow, 4074800291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerRow(Z_Construct_UClass_UServerRow, &UServerRow::StaticClass, TEXT("/Script/DroneGame"), TEXT("UServerRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
