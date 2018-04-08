// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NATIVIZEDASSETS_BP_Projectile__pf3227778944_generated_h
#error "BP_Projectile__pf3227778944.generated.h already included, missing '#pragma once' in BP_Projectile__pf3227778944.h"
#endif
#define NATIVIZEDASSETS_BP_Projectile__pf3227778944_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_RPC_WRAPPERS \
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
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_EVENT_PARMS \
	struct BP_Projectile_C__pf3227778944_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Projectile_C__pf3227778944(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944(); \
public: \
	DECLARE_CLASS(ABP_Projectile_C__pf3227778944, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Ship/BP_Projectile"), NO_API) \
	DECLARE_SERIALIZER(ABP_Projectile_C__pf3227778944) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABP_Projectile_C__pf3227778944(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944(); \
public: \
	DECLARE_CLASS(ABP_Projectile_C__pf3227778944, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Ship/BP_Projectile"), NO_API) \
	DECLARE_SERIALIZER(ABP_Projectile_C__pf3227778944) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Projectile_C__pf3227778944(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Projectile_C__pf3227778944) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Projectile_C__pf3227778944); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Projectile_C__pf3227778944); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Projectile_C__pf3227778944(ABP_Projectile_C__pf3227778944&&); \
	NO_API ABP_Projectile_C__pf3227778944(const ABP_Projectile_C__pf3227778944&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Projectile_C__pf3227778944(ABP_Projectile_C__pf3227778944&&); \
	NO_API ABP_Projectile_C__pf3227778944(const ABP_Projectile_C__pf3227778944&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Projectile_C__pf3227778944); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Projectile_C__pf3227778944); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Projectile_C__pf3227778944)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_15_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Projectile__pf3227778944_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
