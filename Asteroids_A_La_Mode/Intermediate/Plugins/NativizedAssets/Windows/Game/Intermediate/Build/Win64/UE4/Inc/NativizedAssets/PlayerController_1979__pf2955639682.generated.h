// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef NATIVIZEDASSETS_PlayerController_1979__pf2955639682_generated_h
#error "PlayerController_1979__pf2955639682.generated.h already included, missing '#pragma once' in PlayerController_1979__pf2955639682.h"
#endif
#define NATIVIZEDASSETS_PlayerController_1979__pf2955639682_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_RPC_WRAPPERS \
	virtual void bpf__StartLevel__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__SetCamera__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetCamera__pf(); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT(Z_Param_bpp__Key__pf); \
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
	DECLARE_FUNCTION(execbpf__StartLevel__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__StartLevel__pf_Implementation(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__StartLevel__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__SetCamera__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetCamera__pf(); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT(Z_Param_bpp__Key__pf); \
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
	DECLARE_FUNCTION(execbpf__StartLevel__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__StartLevel__pf_Implementation(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_EVENT_PARMS
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController_1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(APlayerController_1979_C__pf2955639682, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Game/Modes/Arcade1979/PlayerController_1979"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerController_1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(APlayerController_1979_C__pf2955639682, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Game/Modes/Arcade1979/PlayerController_1979"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController_1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController_1979_C__pf2955639682) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_1979_C__pf2955639682); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController_1979_C__pf2955639682(APlayerController_1979_C__pf2955639682&&); \
	NO_API APlayerController_1979_C__pf2955639682(const APlayerController_1979_C__pf2955639682&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController_1979_C__pf2955639682(APlayerController_1979_C__pf2955639682&&); \
	NO_API APlayerController_1979_C__pf2955639682(const APlayerController_1979_C__pf2955639682&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_1979_C__pf2955639682); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController_1979_C__pf2955639682)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_12_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerController_1979__pf2955639682_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
