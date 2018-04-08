// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_SaveObj__pf4061722237_generated_h
#error "SaveObj__pf4061722237.generated.h already included, missing '#pragma once' in SaveObj__pf4061722237.h"
#endif
#define NATIVIZEDASSETS_SaveObj__pf4061722237_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxWindowxMode__pfTT) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__DesiredxMode__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxWindowxMode__pfTT(EWindowMode::Type(Z_Param_bpp__DesiredxMode__pfT)); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxWindowxMode__pfTT) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__DesiredxMode__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxWindowxMode__pfTT(EWindowMode::Type(Z_Param_bpp__DesiredxMode__pfT)); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveObj_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_USaveObj_C__pf4061722237(); \
public: \
	DECLARE_CLASS(USaveObj_C__pf4061722237, USaveGame, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Player/SaveObj"), NO_API) \
	DECLARE_SERIALIZER(USaveObj_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSaveObj_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_USaveObj_C__pf4061722237(); \
public: \
	DECLARE_CLASS(USaveObj_C__pf4061722237, USaveGame, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Player/SaveObj"), NO_API) \
	DECLARE_SERIALIZER(USaveObj_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveObj_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveObj_C__pf4061722237) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveObj_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveObj_C__pf4061722237); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveObj_C__pf4061722237(USaveObj_C__pf4061722237&&); \
	NO_API USaveObj_C__pf4061722237(const USaveObj_C__pf4061722237&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveObj_C__pf4061722237(USaveObj_C__pf4061722237&&); \
	NO_API USaveObj_C__pf4061722237(const USaveObj_C__pf4061722237&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveObj_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveObj_C__pf4061722237); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveObj_C__pf4061722237)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_7_PROLOG
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h_11_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_SaveObj__pf4061722237_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
