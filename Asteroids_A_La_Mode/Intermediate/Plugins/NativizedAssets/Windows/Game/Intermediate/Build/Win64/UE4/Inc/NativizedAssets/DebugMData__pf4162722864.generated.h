// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerStart;
class APlayerController;
enum class E__DStates__pf : uint8;
#ifdef NATIVIZEDASSETS_DebugMData__pf4162722864_generated_h
#error "DebugMData__pf4162722864.generated.h already included, missing '#pragma once' in DebugMData__pf4162722864.h"
#endif
#define NATIVIZEDASSETS_DebugMData__pf4162722864_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_RPC_WRAPPERS \
	virtual void bpf__SetxState__pfT_Implementation(E__DStates__pf bpp__DesiredxState__pfT); \
	virtual void bpf__GivexPlayerxLife__pfTT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxGive__pfTTTT); \
	virtual void bpf__TakexPlayerxLife__pfTT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxTake__pfTTTT); \
	virtual void bpf__GivexPoints__pfT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__Amount__pf); \
	virtual void bpf__Player2IsReady__pf_Implementation(); \
	virtual void bpf__SetxPlayerRef__pfT_Implementation(APlayerController* bpp__PlayerxRef__pfT); \
	virtual void bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT_Implementation(); \
	virtual void bpf__AddxPlayer__pfT_Implementation(bool bpp__Playerxtoxaddx__pfTTzy); \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ScoreP2__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ScoreP2__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_Player2Ready__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_Player2Ready__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_EDebugState__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_EDebugState__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_CamxOne__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_CamxOne__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_CamxTwo__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_CamxTwo__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_LivesxLeftxShared__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_LivesxLeftxShared__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ScoreTotal__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ScoreTotal__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlayerCx1xRef__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlayerCx1xRef__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_LivesxLeftxP1__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_LivesxLeftxP1__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ScoreP1__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ScoreP1__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlayerStartx1xRef__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlayerStartx1xRef__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_LivesxLeftxP2__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_LivesxLeftxP2__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlayerCx2xRef__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlayerCx2xRef__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetxDModexState__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetxDModexState__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxPlayerxStartxRef__pfTTT) \
	{ \
		P_GET_OBJECT(APlayerStart,Z_Param_bpp__PlayerxStartxReference__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxPlayerxStartxRef__pfTTT(Z_Param_bpp__PlayerxStartxReference__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxPlayerxControllerxReference__pfTTT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerxControllerxReference__pfTT); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_bpp__PlayerxSet__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxPlayerxControllerxReference__pfTTT(Z_Param_bpp__PlayerxControllerxReference__pfTT,Z_Param_Out_bpp__PlayerxSet__pfT); \
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
	DECLARE_FUNCTION(execbpf__SetxState__pfT) \
	{ \
		P_GET_ENUM(E__DStates__pf,Z_Param_bpp__DesiredxState__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxState__pfT_Implementation(E__DStates__pf(Z_Param_bpp__DesiredxState__pfT)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GivexPlayerxLife__pfTT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerx__pfzy); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__NumberxofxLivesxtoxGive__pfTTTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GivexPlayerxLife__pfTT_Implementation(Z_Param_bpp__Playerx__pfzy,Z_Param_bpp__NumberxofxLivesxtoxGive__pfTTTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TakexPlayerxLife__pfTT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerx__pfzy); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__NumberxofxLivesxtoxTake__pfTTTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__TakexPlayerxLife__pfTT_Implementation(Z_Param_bpp__Playerx__pfzy,Z_Param_bpp__NumberxofxLivesxtoxTake__pfTTTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GivexPoints__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerx__pfzy); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Amount__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GivexPoints__pfT_Implementation(Z_Param_bpp__Playerx__pfzy,Z_Param_bpp__Amount__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Player2IsReady__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Player2IsReady__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxPlayerRef__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerxRef__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxPlayerRef__pfT_Implementation(Z_Param_bpp__PlayerxRef__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__AddxPlayer__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerxtoxaddx__pfTTzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AddxPlayer__pfT_Implementation(Z_Param_bpp__Playerxtoxaddx__pfTTzy); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__SetxState__pfT_Implementation(E__DStates__pf bpp__DesiredxState__pfT); \
	virtual void bpf__GivexPlayerxLife__pfTT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxGive__pfTTTT); \
	virtual void bpf__TakexPlayerxLife__pfTT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxTake__pfTTTT); \
	virtual void bpf__GivexPoints__pfT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__Amount__pf); \
	virtual void bpf__Player2IsReady__pf_Implementation(); \
	virtual void bpf__SetxPlayerRef__pfT_Implementation(APlayerController* bpp__PlayerxRef__pfT); \
	virtual void bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT_Implementation(); \
	virtual void bpf__AddxPlayer__pfT_Implementation(bool bpp__Playerxtoxaddx__pfTTzy); \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ScoreP2__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ScoreP2__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_Player2Ready__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_Player2Ready__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_EDebugState__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_EDebugState__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_CamxOne__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_CamxOne__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_CamxTwo__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_CamxTwo__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_LivesxLeftxShared__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_LivesxLeftxShared__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ScoreTotal__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ScoreTotal__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlayerCx1xRef__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlayerCx1xRef__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_LivesxLeftxP1__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_LivesxLeftxP1__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ScoreP1__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ScoreP1__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlayerStartx1xRef__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlayerStartx1xRef__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_LivesxLeftxP2__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_LivesxLeftxP2__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_PlayerCx2xRef__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_PlayerCx2xRef__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetxDModexState__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetxDModexState__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxPlayerxStartxRef__pfTTT) \
	{ \
		P_GET_OBJECT(APlayerStart,Z_Param_bpp__PlayerxStartxReference__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxPlayerxStartxRef__pfTTT(Z_Param_bpp__PlayerxStartxReference__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxPlayerxControllerxReference__pfTTT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerxControllerxReference__pfTT); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_bpp__PlayerxSet__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxPlayerxControllerxReference__pfTTT(Z_Param_bpp__PlayerxControllerxReference__pfTT,Z_Param_Out_bpp__PlayerxSet__pfT); \
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
	DECLARE_FUNCTION(execbpf__SetxState__pfT) \
	{ \
		P_GET_ENUM(E__DStates__pf,Z_Param_bpp__DesiredxState__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxState__pfT_Implementation(E__DStates__pf(Z_Param_bpp__DesiredxState__pfT)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GivexPlayerxLife__pfTT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerx__pfzy); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__NumberxofxLivesxtoxGive__pfTTTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GivexPlayerxLife__pfTT_Implementation(Z_Param_bpp__Playerx__pfzy,Z_Param_bpp__NumberxofxLivesxtoxGive__pfTTTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TakexPlayerxLife__pfTT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerx__pfzy); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__NumberxofxLivesxtoxTake__pfTTTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__TakexPlayerxLife__pfTT_Implementation(Z_Param_bpp__Playerx__pfzy,Z_Param_bpp__NumberxofxLivesxtoxTake__pfTTTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GivexPoints__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerx__pfzy); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Amount__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GivexPoints__pfT_Implementation(Z_Param_bpp__Playerx__pfzy,Z_Param_bpp__Amount__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Player2IsReady__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Player2IsReady__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxPlayerRef__pfT) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_bpp__PlayerxRef__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxPlayerRef__pfT_Implementation(Z_Param_bpp__PlayerxRef__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__AddxPlayer__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Playerxtoxaddx__pfTTzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AddxPlayer__pfT_Implementation(Z_Param_bpp__Playerxtoxaddx__pfTTzy); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_EVENT_PARMS \
	struct DebugMData_C__pf4162722864_eventbpf__AddxPlayer__pfT_Parms \
	{ \
		bool bpp__Playerxtoxaddx__pfTTzy; \
	}; \
	struct DebugMData_C__pf4162722864_eventbpf__GivexPlayerxLife__pfTT_Parms \
	{ \
		bool bpp__Playerx__pfzy; \
		int32 bpp__NumberxofxLivesxtoxGive__pfTTTT; \
	}; \
	struct DebugMData_C__pf4162722864_eventbpf__GivexPoints__pfT_Parms \
	{ \
		bool bpp__Playerx__pfzy; \
		int32 bpp__Amount__pf; \
	}; \
	struct DebugMData_C__pf4162722864_eventbpf__SetxPlayerRef__pfT_Parms \
	{ \
		APlayerController* bpp__PlayerxRef__pfT; \
	}; \
	struct DebugMData_C__pf4162722864_eventbpf__SetxState__pfT_Parms \
	{ \
		E__DStates__pf bpp__DesiredxState__pfT; \
	}; \
	struct DebugMData_C__pf4162722864_eventbpf__TakexPlayerxLife__pfTT_Parms \
	{ \
		bool bpp__Playerx__pfzy; \
		int32 bpp__NumberxofxLivesxtoxTake__pfTTTT; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_CALLBACK_WRAPPERS \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADebugMData_C__pf4162722864(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ADebugMData_C__pf4162722864(); \
public: \
	DECLARE_CLASS(ADebugMData_C__pf4162722864, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Modes/Debug/DebugMData"), NO_API) \
	DECLARE_SERIALIZER(ADebugMData_C__pf4162722864) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADebugMData_C__pf4162722864(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ADebugMData_C__pf4162722864(); \
public: \
	DECLARE_CLASS(ADebugMData_C__pf4162722864, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Modes/Debug/DebugMData"), NO_API) \
	DECLARE_SERIALIZER(ADebugMData_C__pf4162722864) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADebugMData_C__pf4162722864(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugMData_C__pf4162722864) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugMData_C__pf4162722864); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugMData_C__pf4162722864); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugMData_C__pf4162722864(ADebugMData_C__pf4162722864&&); \
	NO_API ADebugMData_C__pf4162722864(const ADebugMData_C__pf4162722864&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugMData_C__pf4162722864(ADebugMData_C__pf4162722864&&); \
	NO_API ADebugMData_C__pf4162722864(const ADebugMData_C__pf4162722864&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugMData_C__pf4162722864); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugMData_C__pf4162722864); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugMData_C__pf4162722864)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_15_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugMData__pf4162722864_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
