// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FDronePawnMove;
#ifdef DRONEGAME_DronePawnReplicationComponent_generated_h
#error "DronePawnReplicationComponent.generated.h already included, missing '#pragma once' in DronePawnReplicationComponent.h"
#endif
#define DRONEGAME_DronePawnReplicationComponent_generated_h

#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_13_GENERATED_BODY \
	friend DRONEGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FDroneGameState(); \
	DRONEGAME_API static class UScriptStruct* StaticStruct();


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_RPC_WRAPPERS \
	virtual bool Server_SendMove_Validate(FDronePawnMove ); \
	virtual void Server_SendMove_Implementation(FDronePawnMove Move); \
 \
	DECLARE_FUNCTION(execSetMeshOffsetRoot) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Root); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshOffsetRoot(Z_Param_Root); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ServerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ServerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendMove) \
	{ \
		P_GET_STRUCT(FDronePawnMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendMove_Validate(Z_Param_Move)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendMove_Validate")); \
			return; \
		} \
		P_THIS->Server_SendMove_Implementation(Z_Param_Move); \
		P_NATIVE_END; \
	}


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendMove_Validate(FDronePawnMove ); \
	virtual void Server_SendMove_Implementation(FDronePawnMove Move); \
 \
	DECLARE_FUNCTION(execSetMeshOffsetRoot) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Root); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshOffsetRoot(Z_Param_Root); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ServerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ServerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendMove) \
	{ \
		P_GET_STRUCT(FDronePawnMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendMove_Validate(Z_Param_Move)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendMove_Validate")); \
			return; \
		} \
		P_THIS->Server_SendMove_Implementation(Z_Param_Move); \
		P_NATIVE_END; \
	}


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_EVENT_PARMS \
	struct DronePawnReplicationComponent_eventServer_SendMove_Parms \
	{ \
		FDronePawnMove Move; \
	};


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_CALLBACK_WRAPPERS
#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDronePawnReplicationComponent(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UDronePawnReplicationComponent(); \
public: \
	DECLARE_CLASS(UDronePawnReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(UDronePawnReplicationComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUDronePawnReplicationComponent(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UDronePawnReplicationComponent(); \
public: \
	DECLARE_CLASS(UDronePawnReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(UDronePawnReplicationComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDronePawnReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDronePawnReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDronePawnReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDronePawnReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDronePawnReplicationComponent(UDronePawnReplicationComponent&&); \
	NO_API UDronePawnReplicationComponent(const UDronePawnReplicationComponent&); \
public:


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDronePawnReplicationComponent(UDronePawnReplicationComponent&&); \
	NO_API UDronePawnReplicationComponent(const UDronePawnReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDronePawnReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDronePawnReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDronePawnReplicationComponent)


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerState() { return STRUCT_OFFSET(UDronePawnReplicationComponent, ServerState); } \
	FORCEINLINE static uint32 __PPO__DronePawnMovementComponent() { return STRUCT_OFFSET(UDronePawnReplicationComponent, DronePawnMovementComponent); } \
	FORCEINLINE static uint32 __PPO__MeshOffsetRoot() { return STRUCT_OFFSET(UDronePawnReplicationComponent, MeshOffsetRoot); }


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_39_PROLOG \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_EVENT_PARMS


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_CALLBACK_WRAPPERS \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_INCLASS \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_CALLBACK_WRAPPERS \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_DronePawnReplicationComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_DronePawnReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
