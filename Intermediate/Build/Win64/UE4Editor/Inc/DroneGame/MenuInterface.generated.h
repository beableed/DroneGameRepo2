// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEGAME_MenuInterface_generated_h
#error "MenuInterface.generated.h already included, missing '#pragma once' in MenuInterface.h"
#endif
#define DRONEGAME_MenuInterface_generated_h

#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS
#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRONEGAME_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRONEGAME_API, UMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DRONEGAME_API UMenuInterface(UMenuInterface&&); \
	DRONEGAME_API UMenuInterface(const UMenuInterface&); \
public:


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRONEGAME_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DRONEGAME_API UMenuInterface(UMenuInterface&&); \
	DRONEGAME_API UMenuInterface(const UMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRONEGAME_API, UMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface)


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMenuInterface(); \
	friend DRONEGAME_API class UClass* Z_Construct_UClass_UMenuInterface(); \
public: \
	DECLARE_CLASS(UMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/DroneGame"), DRONEGAME_API) \
	DECLARE_SERIALIZER(UMenuInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_GENERATED_UINTERFACE_BODY() \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	typedef IMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	typedef IMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_9_PROLOG
#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneGame_Source_DroneGame_MenuSystem_MenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
