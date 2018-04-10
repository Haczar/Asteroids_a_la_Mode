// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ASTEROIDS_A_LA_MODE_ShipProjectile_generated_h
#error "ShipProjectile.generated.h already included, missing '#pragma once' in ShipProjectile.h"
#endif
#define ASTEROIDS_A_LA_MODE_ShipProjectile_generated_h

#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_RPC_WRAPPERS \
	virtual void Collided_Implementation(UObject* objectCollided); \
 \
	DECLARE_FUNCTION(execCollided) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_objectCollided); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collided_Implementation(Z_Param_objectCollided); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Collided_Implementation(UObject* objectCollided); \
 \
	DECLARE_FUNCTION(execCollided) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_objectCollided); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collided_Implementation(Z_Param_objectCollided); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_EVENT_PARMS \
	struct ShipProjectile_eventCollided_Parms \
	{ \
		UObject* objectCollided; \
	}; \
	struct ShipProjectile_eventHandleAsteroidCollision_Parms \
	{ \
		UObject* AsteroidObj; \
	};


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_CALLBACK_WRAPPERS
#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipProjectile(); \
	friend ASTEROIDS_A_LA_MODE_API class UClass* Z_Construct_UClass_AShipProjectile(); \
public: \
	DECLARE_CLASS(AShipProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids_A_La_Mode"), NO_API) \
	DECLARE_SERIALIZER(AShipProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAShipProjectile(); \
	friend ASTEROIDS_A_LA_MODE_API class UClass* Z_Construct_UClass_AShipProjectile(); \
public: \
	DECLARE_CLASS(AShipProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids_A_La_Mode"), NO_API) \
	DECLARE_SERIALIZER(AShipProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShipProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShipProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipProjectile(AShipProjectile&&); \
	NO_API AShipProjectile(const AShipProjectile&); \
public:


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipProjectile(AShipProjectile&&); \
	NO_API AShipProjectile(const AShipProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShipProjectile)


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_14_PROLOG \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_EVENT_PARMS


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_INCLASS \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Source_Asteroids_A_La_Mode_ShipProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
