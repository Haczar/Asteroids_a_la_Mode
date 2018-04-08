// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APlayerController;
#ifdef NATIVIZEDASSETS_InGameHud__pf515974370_generated_h
#error "InGameHud__pf515974370.generated.h already included, missing '#pragma once' in InGameHud__pf515974370.h"
#endif
#define NATIVIZEDASSETS_InGameHud__pf515974370_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__DeterminexPlayer__pfT) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__Playah__pf); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__determination__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DeterminexPlayer__pfT(Z_Param_bpp__Playah__pf,Z_Param_Out_bpp__determination__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexLives__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__Player__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatexLives__pfT(Z_Param_bpp__Player__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexScore__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__Player__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatexScore__pfT(Z_Param_bpp__Player__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Makexp2xvisible__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Makexp2xvisible__pfTT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__DeterminexPlayer__pfT) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__Playah__pf); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__determination__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DeterminexPlayer__pfT(Z_Param_bpp__Playah__pf,Z_Param_Out_bpp__determination__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexLives__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__Player__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatexLives__pfT(Z_Param_bpp__Player__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexScore__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__Player__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatexScore__pfT(Z_Param_bpp__Player__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Makexp2xvisible__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Makexp2xvisible__pfTT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameHud_C__pf515974370(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UInGameHud_C__pf515974370(); \
public: \
	DECLARE_CLASS(UInGameHud_C__pf515974370, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/Dev_Test/InGameHud"), NO_API) \
	DECLARE_SERIALIZER(UInGameHud_C__pf515974370) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInGameHud_C__pf515974370(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UInGameHud_C__pf515974370(); \
public: \
	DECLARE_CLASS(UInGameHud_C__pf515974370, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/Dev_Test/InGameHud"), NO_API) \
	DECLARE_SERIALIZER(UInGameHud_C__pf515974370) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameHud_C__pf515974370(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameHud_C__pf515974370) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameHud_C__pf515974370); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameHud_C__pf515974370); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameHud_C__pf515974370(UInGameHud_C__pf515974370&&); \
	NO_API UInGameHud_C__pf515974370(const UInGameHud_C__pf515974370&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameHud_C__pf515974370(UInGameHud_C__pf515974370&&); \
	NO_API UInGameHud_C__pf515974370(const UInGameHud_C__pf515974370&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameHud_C__pf515974370); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameHud_C__pf515974370); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameHud_C__pf515974370)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_12_PROLOG
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InGameHud__pf515974370_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
