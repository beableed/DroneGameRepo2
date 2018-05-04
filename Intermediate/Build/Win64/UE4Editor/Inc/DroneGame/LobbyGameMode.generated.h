// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_LobbyGameMode_generated_h
#error "LobbyGameMode.generated.h already included, missing '#pragma once' in LobbyGameMode.h"
#endif
#define DRONEGAME_LobbyGameMode_generated_h

#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_RPC_WRAPPERS
#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_ALobbyGameMode(); \
public: \
	DECLARE_CLASS(ALobbyGameMode, ADroneGameGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_ALobbyGameMode(); \
public: \
	DECLARE_CLASS(ALobbyGameMode, ADroneGameGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/DroneGame"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyGameMode(ALobbyGameMode&&); \
	NO_API ALobbyGameMode(const ALobbyGameMode&); \
public:


#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameMode() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyGameMode(ALobbyGameMode&&); \
	NO_API ALobbyGameMode(const ALobbyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALobbyGameMode)


#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define DroneGame_Source_DroneGame_LobbyGameMode_h_12_PROLOG
#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_INCLASS \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_LobbyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_LobbyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
