// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_DroneGameGameInstance_generated_h
#error "DroneGameGameInstance.generated.h already included, missing '#pragma once' in DroneGameGameInstance.h"
#endif
#define DRONEGAME_DroneGameGameInstance_generated_h

#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssignUIManually) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignUIManually(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignUIManually) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignUIManually(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneGameGameInstance(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UDroneGameGameInstance(); \
public: \
	DECLARE_CLASS(UDroneGameGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(UDroneGameGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDroneGameGameInstance*>(this); }


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDroneGameGameInstance(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UDroneGameGameInstance(); \
public: \
	DECLARE_CLASS(UDroneGameGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(UDroneGameGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDroneGameGameInstance*>(this); }


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneGameGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneGameGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneGameGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneGameGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDroneGameGameInstance(UDroneGameGameInstance&&); \
	NO_API UDroneGameGameInstance(const UDroneGameGameInstance&); \
public:


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDroneGameGameInstance(UDroneGameGameInstance&&); \
	NO_API UDroneGameGameInstance(const UDroneGameGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneGameGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneGameGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneGameGameInstance)


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_PRIVATE_PROPERTY_OFFSET
#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_17_PROLOG
#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_INCLASS \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DroneGameGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_DroneGameGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
