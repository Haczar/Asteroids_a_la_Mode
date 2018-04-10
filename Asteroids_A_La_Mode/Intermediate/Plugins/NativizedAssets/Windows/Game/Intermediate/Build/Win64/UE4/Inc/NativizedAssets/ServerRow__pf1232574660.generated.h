// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
#ifdef NATIVIZEDASSETS_ServerRow__pf1232574660_generated_h
#error "ServerRow__pf1232574660.generated.h already included, missing '#pragma once' in ServerRow__pf1232574660.h"
#endif
#define NATIVIZEDASSETS_ServerRow__pf1232574660_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__SetSearchResult__pf) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_bpp__FoundxSession__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetSearchResult__pf(Z_Param_bpp__FoundxSession__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetPlayerCountText__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->bpf__GetPlayerCountText__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetxPing__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->bpf__GetxPing__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetxServerxName__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->bpf__GetxServerxName__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__SetSearchResult__pf) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_bpp__FoundxSession__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetSearchResult__pf(Z_Param_bpp__FoundxSession__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetPlayerCountText__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->bpf__GetPlayerCountText__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetxPing__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->bpf__GetxPing__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GetxServerxName__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->bpf__GetxServerxName__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerRow_C__pf1232574660(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UServerRow_C__pf1232574660(); \
public: \
	DECLARE_CLASS(UServerRow_C__pf1232574660, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/MainScreen/ServerRow"), NO_API) \
	DECLARE_SERIALIZER(UServerRow_C__pf1232574660) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUServerRow_C__pf1232574660(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UServerRow_C__pf1232574660(); \
public: \
	DECLARE_CLASS(UServerRow_C__pf1232574660, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/UserInterface/MainScreen/ServerRow"), NO_API) \
	DECLARE_SERIALIZER(UServerRow_C__pf1232574660) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerRow_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerRow_C__pf1232574660) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerRow_C__pf1232574660); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerRow_C__pf1232574660); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerRow_C__pf1232574660(UServerRow_C__pf1232574660&&); \
	NO_API UServerRow_C__pf1232574660(const UServerRow_C__pf1232574660&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerRow_C__pf1232574660(UServerRow_C__pf1232574660&&); \
	NO_API UServerRow_C__pf1232574660(const UServerRow_C__pf1232574660&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerRow_C__pf1232574660); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerRow_C__pf1232574660); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerRow_C__pf1232574660)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_10_PROLOG
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ServerRow__pf1232574660_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
