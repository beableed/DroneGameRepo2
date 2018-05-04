// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DRONEGAME_PlatformTrigger_generated_h
#error "PlatformTrigger.generated.h already included, missing '#pragma once' in PlatformTrigger.h"
#endif
#define DRONEGAME_PlatformTrigger_generated_h

#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformTrigger(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_APlatformTrigger(); \
public: \
	DECLARE_CLASS(APlatformTrigger, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformTrigger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformTrigger(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_APlatformTrigger(); \
public: \
	DECLARE_CLASS(APlatformTrigger, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformTrigger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformTrigger(APlatformTrigger&&); \
	NO_API APlatformTrigger(const APlatformTrigger&); \
public:


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformTrigger(APlatformTrigger&&); \
	NO_API APlatformTrigger(const APlatformTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformTrigger)


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerVolume() { return STRUCT_OFFSET(APlatformTrigger, TriggerVolume); } \
	FORCEINLINE static uint32 __PPO__PlatformsToTrigger() { return STRUCT_OFFSET(APlatformTrigger, PlatformsToTrigger); }


#define DroneGame_Source_DroneGame_PlatformTrigger_h_9_PROLOG
#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_INCLASS \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_PlatformTrigger_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_PlatformTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_PlatformTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
