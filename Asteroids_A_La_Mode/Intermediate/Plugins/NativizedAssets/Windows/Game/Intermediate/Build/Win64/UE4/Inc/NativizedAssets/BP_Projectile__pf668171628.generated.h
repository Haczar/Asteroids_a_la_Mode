// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NATIVIZEDASSETS_BP_Projectile__pf668171628_generated_h
#error "BP_Projectile__pf668171628.generated.h already included, missing '#pragma once' in BP_Projectile__pf668171628.h"
#endif
#define NATIVIZEDASSETS_BP_Projectile__pf668171628_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_RPC_WRAPPERS \
	virtual void bpf__processxdeath__pfT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
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
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__KillxYurself__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__ObjectxCollided__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__KillxYurself__pfT(Z_Param_bpp__ObjectxCollided__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__processxdeath__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__processxdeath__pfT_Implementation(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__processxdeath__pfT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
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
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__KillxYurself__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__ObjectxCollided__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__KillxYurself__pfT(Z_Param_bpp__ObjectxCollided__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__processxdeath__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__processxdeath__pfT_Implementation(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_EVENT_PARMS \
	struct BP_Projectile_C__pf668171628_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Projectile_C__pf668171628(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Projectile_C__pf668171628(); \
public: \
	DECLARE_CLASS(ABP_Projectile_C__pf668171628, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Pawns/Ship/BP_Projectile"), NO_API) \
	DECLARE_SERIALIZER(ABP_Projectile_C__pf668171628) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABP_Projectile_C__pf668171628(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Projectile_C__pf668171628(); \
public: \
	DECLARE_CLASS(ABP_Projectile_C__pf668171628, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Pawns/Ship/BP_Projectile"), NO_API) \
	DECLARE_SERIALIZER(ABP_Projectile_C__pf668171628) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Projectile_C__pf668171628(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Projectile_C__pf668171628) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Projectile_C__pf668171628); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Projectile_C__pf668171628); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Projectile_C__pf668171628(ABP_Projectile_C__pf668171628&&); \
	NO_API ABP_Projectile_C__pf668171628(const ABP_Projectile_C__pf668171628&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Projectile_C__pf668171628(ABP_Projectile_C__pf668171628&&); \
	NO_API ABP_Projectile_C__pf668171628(const ABP_Projectile_C__pf668171628&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Projectile_C__pf668171628); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Projectile_C__pf668171628); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Projectile_C__pf668171628)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_16_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf668171628_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
