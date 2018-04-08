// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UObject;
struct FKey;
#ifdef NATIVIZEDASSETS_PlayerC_Regular__pf4061722237_generated_h
#error "PlayerC_Regular__pf4061722237.generated.h already included, missing '#pragma once' in PlayerC_Regular__pf4061722237.h"
#endif
#define NATIVIZEDASSETS_PlayerC_Regular__pf4061722237_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_RPC_WRAPPERS \
	virtual void bpf__SpawnxPlayer__pfT_Implementation(); \
	virtual void bpf__OnPostLogin__pf_Implementation(); \
	virtual void bpf__ChangeWidget_Locally__pf_Implementation(); \
	virtual void bpf__UpdateLIves_FromController__pf_Implementation(); \
	virtual void bpf__UpdatexScore_FromController__pfT_Implementation(); \
	virtual void bpf__InformxP2xisxready__pfTTT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__Changexwidget__pfT) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_bpp__WidgetFrom__pf); \
		P_GET_OBJECT(UClass,Z_Param_bpp__WidgetTo__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Changexwidget__pfT(Z_Param_bpp__WidgetFrom__pf,Z_Param_bpp__WidgetTo__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RemovexWidget__pfT) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_bpp__WidgetxtoxRemove__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RemovexWidget__pfT(Z_Param_bpp__WidgetxtoxRemove__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnxWidget__pfT) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_bpp__Widgetxtoxspawn__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxWidget__pfT(Z_Param_bpp__Widgetxtoxspawn__pfTT); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_Usexshittyxcam_K2Node_InputActionEvent_5__pfTT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Usexshittyxcam_K2Node_InputActionEvent_5__pfTT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_4__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_4__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_DebugxxxGoxtoxmainxscreen_K2Node_InputActionEvent_3__pfTGTTTT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_DebugxxxGoxtoxmainxscreen_K2Node_InputActionEvent_3__pfTGTTTT(Z_Param_bpp__Key__pf); \
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
	DECLARE_FUNCTION(execbpf__SpawnxPlayer__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxPlayer__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnPostLogin__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnPostLogin__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ChangeWidget_Locally__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ChangeWidget_Locally__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateLIves_FromController__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateLIves_FromController__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexScore_FromController__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatexScore_FromController__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InformxP2xisxready__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InformxP2xisxready__pfTTT_Implementation(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__SpawnxPlayer__pfT_Implementation(); \
	virtual void bpf__OnPostLogin__pf_Implementation(); \
	virtual void bpf__ChangeWidget_Locally__pf_Implementation(); \
	virtual void bpf__UpdateLIves_FromController__pf_Implementation(); \
	virtual void bpf__UpdatexScore_FromController__pfT_Implementation(); \
	virtual void bpf__InformxP2xisxready__pfTTT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__Changexwidget__pfT) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_bpp__WidgetFrom__pf); \
		P_GET_OBJECT(UClass,Z_Param_bpp__WidgetTo__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Changexwidget__pfT(Z_Param_bpp__WidgetFrom__pf,Z_Param_bpp__WidgetTo__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RemovexWidget__pfT) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_bpp__WidgetxtoxRemove__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RemovexWidget__pfT(Z_Param_bpp__WidgetxtoxRemove__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SpawnxWidget__pfT) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_bpp__Widgetxtoxspawn__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxWidget__pfT(Z_Param_bpp__Widgetxtoxspawn__pfTT); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_Usexshittyxcam_K2Node_InputActionEvent_5__pfTT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Usexshittyxcam_K2Node_InputActionEvent_5__pfTT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_4__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_4__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_DebugxxxGoxtoxmainxscreen_K2Node_InputActionEvent_3__pfTGTTTT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_DebugxxxGoxtoxmainxscreen_K2Node_InputActionEvent_3__pfTGTTTT(Z_Param_bpp__Key__pf); \
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
	DECLARE_FUNCTION(execbpf__SpawnxPlayer__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SpawnxPlayer__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnPostLogin__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnPostLogin__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ChangeWidget_Locally__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ChangeWidget_Locally__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateLIves_FromController__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateLIves_FromController__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexScore_FromController__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdatexScore_FromController__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InformxP2xisxready__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InformxP2xisxready__pfTTT_Implementation(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_EVENT_PARMS
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerC_Regular_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237(); \
public: \
	DECLARE_CLASS(APlayerC_Regular_C__pf4061722237, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Game/Player/PlayerC_Regular"), NO_API) \
	DECLARE_SERIALIZER(APlayerC_Regular_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerC_Regular_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237(); \
public: \
	DECLARE_CLASS(APlayerC_Regular_C__pf4061722237, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Game/Player/PlayerC_Regular"), NO_API) \
	DECLARE_SERIALIZER(APlayerC_Regular_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerC_Regular_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerC_Regular_C__pf4061722237) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerC_Regular_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerC_Regular_C__pf4061722237); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerC_Regular_C__pf4061722237(APlayerC_Regular_C__pf4061722237&&); \
	NO_API APlayerC_Regular_C__pf4061722237(const APlayerC_Regular_C__pf4061722237&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerC_Regular_C__pf4061722237(APlayerC_Regular_C__pf4061722237&&); \
	NO_API APlayerC_Regular_C__pf4061722237(const APlayerC_Regular_C__pf4061722237&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerC_Regular_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerC_Regular_C__pf4061722237); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerC_Regular_C__pf4061722237)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_15_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_PlayerC_Regular__pf4061722237_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
