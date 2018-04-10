// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef NATIVIZEDASSETS_GameState_1979__pf2955639682_generated_h
#error "GameState_1979__pf2955639682.generated.h already included, missing '#pragma once' in GameState_1979__pf2955639682.h"
#endif
#define NATIVIZEDASSETS_GameState_1979__pf2955639682_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__SetPlayerControllers__pf) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__Player__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetPlayerControllers__pf(Z_Param_bpp__Player__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__SetPlayerControllers__pf) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__Player__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetPlayerControllers__pf(Z_Param_bpp__Player__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_EVENT_PARMS
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_CALLBACK_WRAPPERS \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameState_1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(AGameState_1979_C__pf2955639682, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Modes/Arcade1979/GameState_1979"), NO_API) \
	DECLARE_SERIALIZER(AGameState_1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameState_1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(AGameState_1979_C__pf2955639682, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Modes/Arcade1979/GameState_1979"), NO_API) \
	DECLARE_SERIALIZER(AGameState_1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameState_1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameState_1979_C__pf2955639682) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState_1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState_1979_C__pf2955639682); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameState_1979_C__pf2955639682(AGameState_1979_C__pf2955639682&&); \
	NO_API AGameState_1979_C__pf2955639682(const AGameState_1979_C__pf2955639682&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameState_1979_C__pf2955639682(AGameState_1979_C__pf2955639682&&); \
	NO_API AGameState_1979_C__pf2955639682(const AGameState_1979_C__pf2955639682&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState_1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState_1979_C__pf2955639682); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameState_1979_C__pf2955639682)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_8_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameState_1979__pf2955639682_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
