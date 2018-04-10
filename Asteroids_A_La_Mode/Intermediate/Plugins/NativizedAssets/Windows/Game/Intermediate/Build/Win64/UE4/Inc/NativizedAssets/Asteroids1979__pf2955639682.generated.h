// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
#ifdef NATIVIZEDASSETS_Asteroids1979__pf2955639682_generated_h
#error "Asteroids1979__pf2955639682.generated.h already included, missing '#pragma once' in Asteroids1979__pf2955639682.h"
#endif
#define NATIVIZEDASSETS_Asteroids1979__pf2955639682_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_RPC_WRAPPERS \
	virtual void bpf__PlayerDied__pf_Implementation(AActor* bpp__Instigator__pf); \
 \
	DECLARE_FUNCTION(execbpf__SpawnAliens__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnAliens__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnLargeAsteroids__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__HowMany__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnLargeAsteroids__pf(Z_Param_bpp__HowMany__pf); \
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
	DECLARE_FUNCTION(execbpf__K2_PostLogin__pf) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__NewPlayer__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__K2_PostLogin__pf(Z_Param_bpp__NewPlayer__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PlayerDied__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Instigator__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__PlayerDied__pf_Implementation(Z_Param_bpp__Instigator__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Asteroids1979__pf_1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_Asteroids1979__pf_1(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__PlayerDied__pf_Implementation(AActor* bpp__Instigator__pf); \
 \
	DECLARE_FUNCTION(execbpf__SpawnAliens__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnAliens__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnLargeAsteroids__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__HowMany__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnLargeAsteroids__pf(Z_Param_bpp__HowMany__pf); \
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
	DECLARE_FUNCTION(execbpf__K2_PostLogin__pf) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__NewPlayer__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__K2_PostLogin__pf(Z_Param_bpp__NewPlayer__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PlayerDied__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Instigator__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__PlayerDied__pf_Implementation(Z_Param_bpp__Instigator__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Asteroids1979__pf_1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_Asteroids1979__pf_1(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_EVENT_PARMS \
	struct Asteroids1979_C__pf2955639682_eventbpf__K2_PostLogin__pf_Parms \
	{ \
		APlayerController* bpp__NewPlayer__pf; \
	}; \
	struct Asteroids1979_C__pf2955639682_eventbpf__PlayerDied__pf_Parms \
	{ \
		AActor* bpp__Instigator__pf; \
	}; \
	struct Asteroids1979_C__pf2955639682_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_CALLBACK_WRAPPERS \
	void eventbpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroids1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(AAsteroids1979_C__pf2955639682, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Game/Modes/Arcade1979/Asteroids1979"), NO_API) \
	DECLARE_SERIALIZER(AAsteroids1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroids1979_C__pf2955639682(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682(); \
public: \
	DECLARE_CLASS(AAsteroids1979_C__pf2955639682, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Game/Modes/Arcade1979/Asteroids1979"), NO_API) \
	DECLARE_SERIALIZER(AAsteroids1979_C__pf2955639682) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroids1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroids1979_C__pf2955639682) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroids1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroids1979_C__pf2955639682); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroids1979_C__pf2955639682(AAsteroids1979_C__pf2955639682&&); \
	NO_API AAsteroids1979_C__pf2955639682(const AAsteroids1979_C__pf2955639682&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroids1979_C__pf2955639682(AAsteroids1979_C__pf2955639682&&); \
	NO_API AAsteroids1979_C__pf2955639682(const AAsteroids1979_C__pf2955639682&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroids1979_C__pf2955639682); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroids1979_C__pf2955639682); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroids1979_C__pf2955639682)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_14_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Asteroids1979__pf2955639682_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
