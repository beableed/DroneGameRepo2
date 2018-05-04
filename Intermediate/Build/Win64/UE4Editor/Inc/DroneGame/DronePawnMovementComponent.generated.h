// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_DronePawnMovementComponent_generated_h
#error "DronePawnMovementComponent.generated.h already included, missing '#pragma once' in DronePawnMovementComponent.h"
#endif
#define DRONEGAME_DronePawnMovementComponent_generated_h

#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_12_GENERATED_BODY \
	friend DRONEGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FDronePawnMove(); \
	DRONEGAME_API static class UScriptStruct* StaticStruct();


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_RPC_WRAPPERS
#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDronePawnMovementComponent(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UDronePawnMovementComponent(); \
public: \
	DECLARE_CLASS(UDronePawnMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(UDronePawnMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDronePawnMovementComponent(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UDronePawnMovementComponent(); \
public: \
	DECLARE_CLASS(UDronePawnMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(UDronePawnMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDronePawnMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDronePawnMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDronePawnMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDronePawnMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDronePawnMovementComponent(UDronePawnMovementComponent&&); \
	NO_API UDronePawnMovementComponent(const UDronePawnMovementComponent&); \
public:


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDronePawnMovementComponent(UDronePawnMovementComponent&&); \
	NO_API UDronePawnMovementComponent(const UDronePawnMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDronePawnMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDronePawnMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDronePawnMovementComponent)


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mass() { return STRUCT_OFFSET(UDronePawnMovementComponent, Mass); } \
	FORCEINLINE static uint32 __PPO__MaxDrivingForce() { return STRUCT_OFFSET(UDronePawnMovementComponent, MaxDrivingForce); } \
	FORCEINLINE static uint32 __PPO__MinTurningRadius() { return STRUCT_OFFSET(UDronePawnMovementComponent, MinTurningRadius); } \
	FORCEINLINE static uint32 __PPO__DragCoefficient() { return STRUCT_OFFSET(UDronePawnMovementComponent, DragCoefficient); } \
	FORCEINLINE static uint32 __PPO__RollingResistanceCoefficient() { return STRUCT_OFFSET(UDronePawnMovementComponent, RollingResistanceCoefficient); }


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_30_PROLOG
#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_INCLASS \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DronePawnMovementComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_DronePawnMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
