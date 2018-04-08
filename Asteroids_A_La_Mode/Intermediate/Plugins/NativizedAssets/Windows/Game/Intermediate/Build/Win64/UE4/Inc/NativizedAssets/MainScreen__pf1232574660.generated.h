// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class E__EMenSel__pf : uint8;
struct FSlateColor;
class UTextBlock;
#ifdef NATIVIZEDASSETS_MainScreen__pf1232574660_generated_h
#error "MainScreen__pf1232574660.generated.h already included, missing '#pragma once' in MainScreen__pf1232574660.h"
#endif
#define NATIVIZEDASSETS_MainScreen__pf1232574660_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__SetxAlphaxxMenuxItemx__pfTTLTK) \
	{ \
		P_GET_ENUM(E__EMenSel__pf,Z_Param_bpp__Selection__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxAlphaxxMenuxItemx__pfTTLTK(E__EMenSel__pf(Z_Param_bpp__Selection__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RevertxAlphaxxMenuxItemx__pfTTLTK) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RevertxAlphaxxMenuxItemx__pfTTLTK(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Get_TextxStartG_ColorAndOpacity_0__pfG) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateColor*)Z_Param__Result=P_THIS->bpf__Get_TextxStartG_ColorAndOpacity_0__pfG(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxObjxxColorxandxOpacity__pfT3TTT) \
	{ \
		P_GET_OBJECT_REF(UTextBlock,Z_Param_Out_bpp__TextxObj__pfT); \
		P_GET_STRUCT_REF(FSlateColor,Z_Param_Out_bpp__ColorxandxOpacity__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxObjxxColorxandxOpacity__pfT3TTT(Z_Param_Out_bpp__TextxObj__pfT,Z_Param_Out_bpp__ColorxandxOpacity__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MovexDown__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MovexDown__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MenuxSelect__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MenuxSelect__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Construct__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DebugxxChangeMode__pf3T) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DebugxxChangeMode__pf3T(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MovexUp__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MovexUp__pfT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__SetxAlphaxxMenuxItemx__pfTTLTK) \
	{ \
		P_GET_ENUM(E__EMenSel__pf,Z_Param_bpp__Selection__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxAlphaxxMenuxItemx__pfTTLTK(E__EMenSel__pf(Z_Param_bpp__Selection__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RevertxAlphaxxMenuxItemx__pfTTLTK) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RevertxAlphaxxMenuxItemx__pfTTLTK(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Get_TextxStartG_ColorAndOpacity_0__pfG) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateColor*)Z_Param__Result=P_THIS->bpf__Get_TextxStartG_ColorAndOpacity_0__pfG(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxObjxxColorxandxOpacity__pfT3TTT) \
	{ \
		P_GET_OBJECT_REF(UTextBlock,Z_Param_Out_bpp__TextxObj__pfT); \
		P_GET_STRUCT_REF(FSlateColor,Z_Param_Out_bpp__ColorxandxOpacity__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxObjxxColorxandxOpacity__pfT3TTT(Z_Param_Out_bpp__TextxObj__pfT,Z_Param_Out_bpp__ColorxandxOpacity__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MovexDown__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MovexDown__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MenuxSelect__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MenuxSelect__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Construct__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DebugxxChangeMode__pf3T) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DebugxxChangeMode__pf3T(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MovexUp__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MovexUp__pfT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_EVENT_PARMS
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainScreen_C__pf1232574660(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660(); \
public: \
	DECLARE_CLASS(UMainScreen_C__pf1232574660, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/MainScreen/MainScreen"), NO_API) \
	DECLARE_SERIALIZER(UMainScreen_C__pf1232574660) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMainScreen_C__pf1232574660(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660(); \
public: \
	DECLARE_CLASS(UMainScreen_C__pf1232574660, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/MainScreen/MainScreen"), NO_API) \
	DECLARE_SERIALIZER(UMainScreen_C__pf1232574660) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainScreen_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainScreen_C__pf1232574660) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainScreen_C__pf1232574660); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainScreen_C__pf1232574660); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainScreen_C__pf1232574660(UMainScreen_C__pf1232574660&&); \
	NO_API UMainScreen_C__pf1232574660(const UMainScreen_C__pf1232574660&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainScreen_C__pf1232574660(UMainScreen_C__pf1232574660&&); \
	NO_API UMainScreen_C__pf1232574660(const UMainScreen_C__pf1232574660&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainScreen_C__pf1232574660); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainScreen_C__pf1232574660); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainScreen_C__pf1232574660)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_15_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_MainScreen__pf1232574660_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
