// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_DronePawn_generated_h
#error "DronePawn.generated.h already included, missing '#pragma once' in DronePawn.h"
#endif
#define DRONEGAME_DronePawn_generated_h

#define DroneGame_Source_DroneGame_DronePawn_h_14_RPC_WRAPPERS
#define DroneGame_Source_DroneGame_DronePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneGame_Source_DroneGame_DronePawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADronePawn(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_ADronePawn(); \
public: \
	DECLARE_CLASS(ADronePawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(ADronePawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_DronePawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADronePawn(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_ADronePawn(); \
public: \
	DECLARE_CLASS(ADronePawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(ADronePawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_DronePawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADronePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADronePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADronePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADronePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADronePawn(ADronePawn&&); \
	NO_API ADronePawn(const ADronePawn&); \
public:


#define DroneGame_Source_DroneGame_DronePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADronePawn(ADronePawn&&); \
	NO_API ADronePawn(const ADronePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADronePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADronePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADronePawn)


#define DroneGame_Source_DroneGame_DronePawn_h_14_PRIVATE_PROPERTY_OFFSET
#define DroneGame_Source_DroneGame_DronePawn_h_11_PROLOG
#define DroneGame_Source_DroneGame_DronePawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DronePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DronePawn_h_14_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_DronePawn_h_14_INCLASS \
	DroneGame_Source_DroneGame_DronePawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_DronePawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DronePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DronePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DronePawn_h_14_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DronePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_DronePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
