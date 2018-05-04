// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define DRONEGAME_MovingPlatform_generated_h

#define DroneGame_Source_DroneGame_MovingPlatform_h_15_RPC_WRAPPERS
#define DroneGame_Source_DroneGame_MovingPlatform_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneGame_Source_DroneGame_MovingPlatform_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_AMovingPlatform(); \
public: \
	DECLARE_CLASS(AMovingPlatform, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_MovingPlatform_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_AMovingPlatform(); \
public: \
	DECLARE_CLASS(AMovingPlatform, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_MovingPlatform_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public:


#define DroneGame_Source_DroneGame_MovingPlatform_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform)


#define DroneGame_Source_DroneGame_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveTriggers() { return STRUCT_OFFSET(AMovingPlatform, ActiveTriggers); }


#define DroneGame_Source_DroneGame_MovingPlatform_h_12_PROLOG
#define DroneGame_Source_DroneGame_MovingPlatform_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_INCLASS \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_MovingPlatform_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_MovingPlatform_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
