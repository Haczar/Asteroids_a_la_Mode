// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInGameHud_C__pf515974370;
#ifdef NATIVIZEDASSETS_PlayerState_1979__pf2955639682_generated_h
#error "PlayerState_1979__pf2955639682.generated.h already included, missing '#pragma once' in PlayerState_1979__pf2955639682.h"
#endif
#define NATIVIZEDASSETS_PlayerState_1979__pf2955639682_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_RPC_WRAPPERS \
	virtual void bpf__P2Joined__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__UpdatePlayerLives__pf) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatePlayerLives__pf(Z_Param_bpp__PlayerController__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlyrScore__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlyrScore__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlyrLives__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlyrLives__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PlayerHudSetup__pf) \
	{ \
		P_GET_OBJECT(UInGameHud_C__pf515974370,Z_Param_bpp__HudRef__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__PlayerHudSetup__pf(Z_Param_bpp__HudRef__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__P2Joined__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__P2Joined__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetPlayerLives__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__NumLives__pf); \
		P_GET_OBJECT(UInGameHud_C__pf515974370,Z_Param_bpp__PlayerHud__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetPlayerLives__pf(Z_Param_bpp__NumLives__pf,Z_Param_bpp__PlayerHud__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__P2Joined__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__UpdatePlayerLives__pf) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatePlayerLives__pf(Z_Param_bpp__PlayerController__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlyrScore__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlyrScore__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlyrLives__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlyrLives__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PlayerHudSetup__pf) \
	{ \
		P_GET_OBJECT(UInGameHud_C__pf515974370,Z_Param_bpp__HudRef__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__PlayerHudSetup__pf(Z_Param_bpp__HudRef__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__P2Joined__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__P2Joined__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetPlayerLives__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__NumLives__pf); \
		P_GET_OBJECT(UInGameHud_C__pf515974370,Z_Param_bpp__PlayerHud__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetPlayerLives__pf(Z_Param_bpp__NumLives__pf,Z_Param_bpp__PlayerHud__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_EVENT_PARMS
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerState_1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(APlayerState_1979_C__pf2955639682, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Modes/Arcade1979/PlayerState_1979"), NO_API) \
	DECLARE_SERIALIZER(APlayerState_1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerState_1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(APlayerState_1979_C__pf2955639682, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Modes/Arcade1979/PlayerState_1979"), NO_API) \
	DECLARE_SERIALIZER(APlayerState_1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState_1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState_1979_C__pf2955639682) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState_1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState_1979_C__pf2955639682); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState_1979_C__pf2955639682(APlayerState_1979_C__pf2955639682&&); \
	NO_API APlayerState_1979_C__pf2955639682(const APlayerState_1979_C__pf2955639682&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState_1979_C__pf2955639682(APlayerState_1979_C__pf2955639682&&); \
	NO_API APlayerState_1979_C__pf2955639682(const APlayerState_1979_C__pf2955639682&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState_1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState_1979_C__pf2955639682); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState_1979_C__pf2955639682)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_9_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerState_1979__pf2955639682_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
