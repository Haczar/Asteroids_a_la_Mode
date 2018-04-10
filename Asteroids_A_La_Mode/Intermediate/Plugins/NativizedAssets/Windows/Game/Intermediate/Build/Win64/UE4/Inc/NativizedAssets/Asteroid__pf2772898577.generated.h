// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NATIVIZEDASSETS_Asteroid__pf2772898577_generated_h
#error "Asteroid__pf2772898577.generated.h already included, missing '#pragma once' in Asteroid__pf2772898577.h"
#endif
#define NATIVIZEDASSETS_Asteroid__pf2772898577_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_RPC_WRAPPERS \
	virtual void bpf__Break__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Break__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Break__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
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
	DECLARE_FUNCTION(execbpf__ReceiveDestroyed__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveDestroyed__pf(); \
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


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__Break__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Break__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Break__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
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
	DECLARE_FUNCTION(execbpf__ReceiveDestroyed__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveDestroyed__pf(); \
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


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_EVENT_PARMS \
	struct Asteroid_C__pf2772898577_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveDestroyed__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroid_C__pf2772898577(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577(); \
public: \
	DECLARE_CLASS(AAsteroid_C__pf2772898577, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Obstacles/Asteroid"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid_C__pf2772898577) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroid_C__pf2772898577(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577(); \
public: \
	DECLARE_CLASS(AAsteroid_C__pf2772898577, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Obstacles/Asteroid"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid_C__pf2772898577) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroid_C__pf2772898577(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroid_C__pf2772898577) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid_C__pf2772898577); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid_C__pf2772898577); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid_C__pf2772898577(AAsteroid_C__pf2772898577&&); \
	NO_API AAsteroid_C__pf2772898577(const AAsteroid_C__pf2772898577&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid_C__pf2772898577(AAsteroid_C__pf2772898577&&); \
	NO_API AAsteroid_C__pf2772898577(const AAsteroid_C__pf2772898577&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid_C__pf2772898577); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid_C__pf2772898577); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroid_C__pf2772898577)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_14_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroid__pf2772898577_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
