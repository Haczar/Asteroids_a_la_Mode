// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_ShipCapture_BP__pf3162697386_generated_h
#error "ShipCapture_BP__pf3162697386.generated.h already included, missing '#pragma once' in ShipCapture_BP__pf3162697386.h"
#endif
#define NATIVIZEDASSETS_ShipCapture_BP__pf3162697386_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_RPC_WRAPPERS \
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


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_EVENT_PARMS \
	struct ShipCapture_BP_C__pf3162697386_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipCapture_BP_C__pf3162697386(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AShipCapture_BP_C__pf3162697386(); \
public: \
	DECLARE_CLASS(AShipCapture_BP_C__pf3162697386, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/Assets/ShipCapture_BP"), NO_API) \
	DECLARE_SERIALIZER(AShipCapture_BP_C__pf3162697386) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShipCapture_BP_C__pf3162697386(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AShipCapture_BP_C__pf3162697386(); \
public: \
	DECLARE_CLASS(AShipCapture_BP_C__pf3162697386, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/Assets/ShipCapture_BP"), NO_API) \
	DECLARE_SERIALIZER(AShipCapture_BP_C__pf3162697386) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShipCapture_BP_C__pf3162697386(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShipCapture_BP_C__pf3162697386) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipCapture_BP_C__pf3162697386); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipCapture_BP_C__pf3162697386); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipCapture_BP_C__pf3162697386(AShipCapture_BP_C__pf3162697386&&); \
	NO_API AShipCapture_BP_C__pf3162697386(const AShipCapture_BP_C__pf3162697386&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipCapture_BP_C__pf3162697386(AShipCapture_BP_C__pf3162697386&&); \
	NO_API AShipCapture_BP_C__pf3162697386(const AShipCapture_BP_C__pf3162697386&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipCapture_BP_C__pf3162697386); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipCapture_BP_C__pf3162697386); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShipCapture_BP_C__pf3162697386)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_10_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ShipCapture_BP__pf3162697386_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
