// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_DroneGameCharacter_generated_h
#error "DroneGameCharacter.generated.h already included, missing '#pragma once' in DroneGameCharacter.h"
#endif
#define DRONEGAME_DroneGameCharacter_generated_h

#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_RPC_WRAPPERS
#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADroneGameCharacter(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_ADroneGameCharacter(); \
public: \
	DECLARE_CLASS(ADroneGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(ADroneGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADroneGameCharacter(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_ADroneGameCharacter(); \
public: \
	DECLARE_CLASS(ADroneGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(ADroneGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADroneGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADroneGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneGameCharacter(ADroneGameCharacter&&); \
	NO_API ADroneGameCharacter(const ADroneGameCharacter&); \
public:


#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneGameCharacter(ADroneGameCharacter&&); \
	NO_API ADroneGameCharacter(const ADroneGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADroneGameCharacter)


#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADroneGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADroneGameCharacter, FollowCamera); }


#define DroneGame_Source_DroneGame_DroneGameCharacter_h_9_PROLOG
#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_INCLASS \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_DroneGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DroneGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_DroneGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS