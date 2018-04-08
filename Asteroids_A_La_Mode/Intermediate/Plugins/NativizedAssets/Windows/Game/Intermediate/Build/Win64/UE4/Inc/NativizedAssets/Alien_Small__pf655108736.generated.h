// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_Alien_Small__pf655108736_generated_h
#error "Alien_Small__pf655108736.generated.h already included, missing '#pragma once' in Alien_Small__pf655108736.h"
#endif
#define NATIVIZEDASSETS_Alien_Small__pf655108736_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_EVENT_PARMS \
	struct Alien_Small_C__pf655108736_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlien_Small_C__pf655108736(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AAlien_Small_C__pf655108736(); \
public: \
	DECLARE_CLASS(AAlien_Small_C__pf655108736, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Enemy/Alien_Small"), NO_API) \
	DECLARE_SERIALIZER(AAlien_Small_C__pf655108736) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAlien_Small_C__pf655108736(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AAlien_Small_C__pf655108736(); \
public: \
	DECLARE_CLASS(AAlien_Small_C__pf655108736, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Enemy/Alien_Small"), NO_API) \
	DECLARE_SERIALIZER(AAlien_Small_C__pf655108736) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlien_Small_C__pf655108736(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlien_Small_C__pf655108736) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlien_Small_C__pf655108736); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlien_Small_C__pf655108736); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlien_Small_C__pf655108736(AAlien_Small_C__pf655108736&&); \
	NO_API AAlien_Small_C__pf655108736(const AAlien_Small_C__pf655108736&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlien_Small_C__pf655108736(AAlien_Small_C__pf655108736&&); \
	NO_API AAlien_Small_C__pf655108736(const AAlien_Small_C__pf655108736&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlien_Small_C__pf655108736); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlien_Small_C__pf655108736); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlien_Small_C__pf655108736)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_8_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Alien_Small__pf655108736_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
