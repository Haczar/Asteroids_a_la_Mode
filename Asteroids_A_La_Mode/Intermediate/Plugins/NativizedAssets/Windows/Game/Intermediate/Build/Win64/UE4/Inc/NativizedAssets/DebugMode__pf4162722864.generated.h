// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AController;
class APlayerStart;
struct FLinearColor;
#ifdef NATIVIZEDASSETS_DebugMode__pf4162722864_generated_h
#error "DebugMode__pf4162722864.generated.h already included, missing '#pragma once' in DebugMode__pf4162722864.h"
#endif
#define NATIVIZEDASSETS_DebugMode__pf4162722864_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_RPC_WRAPPERS \
	virtual void bpf__ShipxDestroyed__pfT_Implementation(APlayerController* bpp__ShipxOwner__pfT); \
	virtual void bpf__StatexChanged__pfT_Implementation(); \
	virtual void bpf__SpawnxShip__pfT_Implementation(APlayerController* bpp__PlayerxControllerxRef__pfTT, APlayerStart* bpp__PlayerxStartxRef__pfTT, FLinearColor bpp__Color__pf); \
 \
	DECLARE_FUNCTION(execbpf__SpawnxAsteroids__pfT) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Howxmanyx__pfTzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxAsteroids__pfT(Z_Param_bpp__Howxmanyx__pfTzy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupxArcade1979__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupxArcade1979__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupxDebugMode__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupxDebugMode__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupxMainMenu__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupxMainMenu__pfT(); \
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
	DECLARE_FUNCTION(execbpf__StartxRound__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__StartxRound__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ShipxDestroyed__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__ShipxOwner__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ShipxDestroyed__pfT_Implementation(Z_Param_bpp__ShipxOwner__pfT); \
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
	DECLARE_FUNCTION(execbpf__K2_OnLogout__pf) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__ExitingController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__K2_OnLogout__pf(Z_Param_bpp__ExitingController__pf); \
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
	DECLARE_FUNCTION(execbpf__StatexChanged__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__StatexChanged__pfT_Implementation(); \
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
	DECLARE_FUNCTION(execbpf__SpawnxShip__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerxControllerxRef__pfTT); \
		P_GET_OBJECT(APlayerStart,Z_Param_bpp__PlayerxStartxRef__pfTT); \
		P_GET_STRUCT(FLinearColor,Z_Param_bpp__Color__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxShip__pfT_Implementation(Z_Param_bpp__PlayerxControllerxRef__pfTT,Z_Param_bpp__PlayerxStartxRef__pfTT,Z_Param_bpp__Color__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__ShipxDestroyed__pfT_Implementation(APlayerController* bpp__ShipxOwner__pfT); \
	virtual void bpf__StatexChanged__pfT_Implementation(); \
	virtual void bpf__SpawnxShip__pfT_Implementation(APlayerController* bpp__PlayerxControllerxRef__pfTT, APlayerStart* bpp__PlayerxStartxRef__pfTT, FLinearColor bpp__Color__pf); \
 \
	DECLARE_FUNCTION(execbpf__SpawnxAsteroids__pfT) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Howxmanyx__pfTzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxAsteroids__pfT(Z_Param_bpp__Howxmanyx__pfTzy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupxArcade1979__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupxArcade1979__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupxDebugMode__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupxDebugMode__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetupxMainMenu__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetupxMainMenu__pfT(); \
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
	DECLARE_FUNCTION(execbpf__StartxRound__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__StartxRound__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ShipxDestroyed__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__ShipxOwner__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ShipxDestroyed__pfT_Implementation(Z_Param_bpp__ShipxOwner__pfT); \
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
	DECLARE_FUNCTION(execbpf__K2_OnLogout__pf) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__ExitingController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__K2_OnLogout__pf(Z_Param_bpp__ExitingController__pf); \
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
	DECLARE_FUNCTION(execbpf__StatexChanged__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__StatexChanged__pfT_Implementation(); \
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
	DECLARE_FUNCTION(execbpf__SpawnxShip__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerxControllerxRef__pfTT); \
		P_GET_OBJECT(APlayerStart,Z_Param_bpp__PlayerxStartxRef__pfTT); \
		P_GET_STRUCT(FLinearColor,Z_Param_bpp__Color__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxShip__pfT_Implementation(Z_Param_bpp__PlayerxControllerxRef__pfTT,Z_Param_bpp__PlayerxStartxRef__pfTT,Z_Param_bpp__Color__pf); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_EVENT_PARMS \
	struct DebugMode_C__pf4162722864_eventbpf__K2_OnLogout__pf_Parms \
	{ \
		AController* bpp__ExitingController__pf; \
	}; \
	struct DebugMode_C__pf4162722864_eventbpf__K2_PostLogin__pf_Parms \
	{ \
		APlayerController* bpp__NewPlayer__pf; \
	}; \
	struct DebugMode_C__pf4162722864_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	}; \
	struct DebugMode_C__pf4162722864_eventbpf__ShipxDestroyed__pfT_Parms \
	{ \
		APlayerController* bpp__ShipxOwner__pfT; \
	}; \
	struct DebugMode_C__pf4162722864_eventbpf__SpawnxShip__pfT_Parms \
	{ \
		APlayerController* bpp__PlayerxControllerxRef__pfTT; \
		APlayerStart* bpp__PlayerxStartxRef__pfTT; \
		FLinearColor bpp__Color__pf; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_CALLBACK_WRAPPERS \
	void eventbpf__K2_OnLogout__pf(AController* bpp__ExitingController__pf); \
 \
	void eventbpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADebugMode_C__pf4162722864(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ADebugMode_C__pf4162722864(); \
public: \
	DECLARE_CLASS(ADebugMode_C__pf4162722864, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Game/Modes/Debug/DebugMode"), NO_API) \
	DECLARE_SERIALIZER(ADebugMode_C__pf4162722864) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADebugMode_C__pf4162722864(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ADebugMode_C__pf4162722864(); \
public: \
	DECLARE_CLASS(ADebugMode_C__pf4162722864, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Game/Modes/Debug/DebugMode"), NO_API) \
	DECLARE_SERIALIZER(ADebugMode_C__pf4162722864) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADebugMode_C__pf4162722864(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugMode_C__pf4162722864) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugMode_C__pf4162722864); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugMode_C__pf4162722864); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugMode_C__pf4162722864(ADebugMode_C__pf4162722864&&); \
	NO_API ADebugMode_C__pf4162722864(const ADebugMode_C__pf4162722864&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugMode_C__pf4162722864(ADebugMode_C__pf4162722864&&); \
	NO_API ADebugMode_C__pf4162722864(const ADebugMode_C__pf4162722864&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugMode_C__pf4162722864); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugMode_C__pf4162722864); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugMode_C__pf4162722864)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_19_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMode__pf4162722864_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
