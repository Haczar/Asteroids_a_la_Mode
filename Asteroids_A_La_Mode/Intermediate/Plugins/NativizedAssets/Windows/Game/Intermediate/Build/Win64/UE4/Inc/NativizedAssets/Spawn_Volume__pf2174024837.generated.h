// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NATIVIZEDASSETS_Spawn_Volume__pf2174024837_generated_h
#error "Spawn_Volume__pf2174024837.generated.h already included, missing '#pragma once' in Spawn_Volume__pf2174024837.h"
#endif
#define NATIVIZEDASSETS_Spawn_Volume__pf2174024837_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_RPC_WRAPPERS \
	virtual void bpf__SpawnAsteroidOnServer__pf_Implementation(UClass* bpp__NewParam__pf); \
	virtual void bpf__SpawnAlienOnServer__pf_Implementation(UClass* bpp__AlienxClass__pfT); \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnAsteroidOnServer__pf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_bpp__NewParam__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnAsteroidOnServer__pf_Implementation(Z_Param_bpp__NewParam__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnAlienOnServer__pf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_bpp__AlienxClass__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnAlienOnServer__pf_Implementation(Z_Param_bpp__AlienxClass__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnxLargexAsteroid__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxLargexAsteroid__pfTT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__SpawnAsteroidOnServer__pf_Implementation(UClass* bpp__NewParam__pf); \
	virtual void bpf__SpawnAlienOnServer__pf_Implementation(UClass* bpp__AlienxClass__pfT); \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnAsteroidOnServer__pf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_bpp__NewParam__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnAsteroidOnServer__pf_Implementation(Z_Param_bpp__NewParam__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnAlienOnServer__pf) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_bpp__AlienxClass__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnAlienOnServer__pf_Implementation(Z_Param_bpp__AlienxClass__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnxLargexAsteroid__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxLargexAsteroid__pfTT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_EVENT_PARMS \
	struct Spawn_Volume_C__pf2174024837_eventbpf__SpawnAlienOnServer__pf_Parms \
	{ \
		UClass* bpp__AlienxClass__pfT; \
	}; \
	struct Spawn_Volume_C__pf2174024837_eventbpf__SpawnAsteroidOnServer__pf_Parms \
	{ \
		UClass* bpp__NewParam__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_CALLBACK_WRAPPERS \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawn_Volume_C__pf2174024837(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837(); \
public: \
	DECLARE_CLASS(ASpawn_Volume_C__pf2174024837, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Levels/Assets/Colliders/Spawn_Volume"), NO_API) \
	DECLARE_SERIALIZER(ASpawn_Volume_C__pf2174024837) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpawn_Volume_C__pf2174024837(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837(); \
public: \
	DECLARE_CLASS(ASpawn_Volume_C__pf2174024837, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Levels/Assets/Colliders/Spawn_Volume"), NO_API) \
	DECLARE_SERIALIZER(ASpawn_Volume_C__pf2174024837) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawn_Volume_C__pf2174024837(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawn_Volume_C__pf2174024837) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawn_Volume_C__pf2174024837); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawn_Volume_C__pf2174024837); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawn_Volume_C__pf2174024837(ASpawn_Volume_C__pf2174024837&&); \
	NO_API ASpawn_Volume_C__pf2174024837(const ASpawn_Volume_C__pf2174024837&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawn_Volume_C__pf2174024837(ASpawn_Volume_C__pf2174024837&&); \
	NO_API ASpawn_Volume_C__pf2174024837(const ASpawn_Volume_C__pf2174024837&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawn_Volume_C__pf2174024837); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawn_Volume_C__pf2174024837); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawn_Volume_C__pf2174024837)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_10_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawn_Volume__pf2174024837_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
