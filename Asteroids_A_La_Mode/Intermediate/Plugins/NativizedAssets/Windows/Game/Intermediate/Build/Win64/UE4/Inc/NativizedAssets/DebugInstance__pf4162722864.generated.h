// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
enum class E__DStates__pf : uint8;
#ifdef NATIVIZEDASSETS_DebugInstance__pf4162722864_generated_h
#error "DebugInstance__pf4162722864.generated.h already included, missing '#pragma once' in DebugInstance__pf4162722864.h"
#endif
#define NATIVIZEDASSETS_DebugInstance__pf4162722864_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_24_DELEGATE \
static inline void F__EmptyOnlineDelegate__DelegateSignature__SC_1_DelegateWrapper(const FScriptDelegate& __EmptyOnlineDelegate__DelegateSignature__SC_1) \
{ \
	__EmptyOnlineDelegate__DelegateSignature__SC_1.ProcessDelegate<UObject>(NULL); \
}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_22_DELEGATE \
struct DebugInstance_C__pf4162722864_event__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0_Parms \
{ \
	TArray<FBlueprintSessionResult> bpp__Results__pf; \
}; \
static inline void F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0, TArray<FBlueprintSessionResult> const& bpp__Results__pf) \
{ \
	DebugInstance_C__pf4162722864_event__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__Results__pf=bpp__Results__pf; \
	__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_RPC_WRAPPERS \
	virtual void bpf__JoinxGame__pfT_Implementation(FBlueprintSessionResult bpp__Sessionxtoxjoin__pfTT); \
	virtual void bpf__CreatexCoop__pfT_Implementation(); \
	virtual void bpf__SetxDebugMxtoxDebugMode__pfTTT_Implementation(); \
	virtual void bpf__SetxDebugMxtoxArcade1979__pfTTT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__TravelErrorxtoxString__pfTT) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__TravelError__pf); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_bpp__Error__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__TravelErrorxtoxString__pfTT(ETravelFailure::Type(Z_Param_bpp__TravelError__pf),Z_Param_Out_bpp__Error__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__NetErrorxtoxString__pfTT) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__NetxError__pfT); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_bpp__ErrorxText__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__NetErrorxtoxString__pfTT(ENetworkFailure::Type(Z_Param_bpp__NetxError__pfT),Z_Param_Out_bpp__ErrorxText__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LoadxLevel__pfT) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_bpp__LevelxName__pfT__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__LoadxLevel__pfT(Z_Param_bpp__LevelxName__pfT__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ChangexState__pfT) \
	{ \
		P_GET_ENUM(E__DStates__pf,Z_Param_bpp__DesiredxState__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ChangexState__pfT(E__DStates__pf(Z_Param_bpp__DesiredxState__pfT)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_7C4156FE49C8B859B34E9083CCA81E0E__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_7C4156FE49C8B859B34E9083CCA81E0E__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_8AFB58C5443B5AFADD60D0925753A253__pf) \
	{ \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_bpp__Results__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_8AFB58C5443B5AFADD60D0925753A253__pf(Z_Param_Out_bpp__Results__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_8AFB58C5443B5AFADD60D0925753A253__pf) \
	{ \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_bpp__Results__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_8AFB58C5443B5AFADD60D0925753A253__pf(Z_Param_Out_bpp__Results__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_50E2515040AAF84455FDB1ADB5219E72__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_50E2515040AAF84455FDB1ADB5219E72__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_50E2515040AAF84455FDB1ADB5219E72__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_50E2515040AAF84455FDB1ADB5219E72__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__JoinxGame__pfT) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_bpp__Sessionxtoxjoin__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__JoinxGame__pfT_Implementation(Z_Param_bpp__Sessionxtoxjoin__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LeavexGame__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__LeavexGame__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreatexCoop__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CreatexCoop__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__FindxGames__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__FindxGames__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DestroySesh__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DestroySesh__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleNetworkError__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__FailureType__pf); \
		P_GET_UBOOL(Z_Param_bpp__bIsServer__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleNetworkError__pf(ENetworkFailure::Type(Z_Param_bpp__FailureType__pf),Z_Param_bpp__bIsServer__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleTravelError__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__FailureType__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleTravelError__pf(ETravelFailure::Type(Z_Param_bpp__FailureType__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ShowLoadingScreen__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ShowLoadingScreen__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxDebugMxtoxMainScreen__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxDebugMxtoxMainScreen__pfTTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxDebugMxtoxDebugMode__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxDebugMxtoxDebugMode__pfTTT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxDebugMxtoxArcade1979__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxDebugMxtoxArcade1979__pfTTT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LoadxSettings__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__LoadxSettings__pfT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__JoinxGame__pfT_Implementation(FBlueprintSessionResult bpp__Sessionxtoxjoin__pfTT); \
	virtual void bpf__CreatexCoop__pfT_Implementation(); \
	virtual void bpf__SetxDebugMxtoxDebugMode__pfTTT_Implementation(); \
	virtual void bpf__SetxDebugMxtoxArcade1979__pfTTT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__TravelErrorxtoxString__pfTT) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__TravelError__pf); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_bpp__Error__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__TravelErrorxtoxString__pfTT(ETravelFailure::Type(Z_Param_bpp__TravelError__pf),Z_Param_Out_bpp__Error__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__NetErrorxtoxString__pfTT) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__NetxError__pfT); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_bpp__ErrorxText__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__NetErrorxtoxString__pfTT(ENetworkFailure::Type(Z_Param_bpp__NetxError__pfT),Z_Param_Out_bpp__ErrorxText__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LoadxLevel__pfT) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_bpp__LevelxName__pfT__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__LoadxLevel__pfT(Z_Param_bpp__LevelxName__pfT__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ChangexState__pfT) \
	{ \
		P_GET_ENUM(E__DStates__pf,Z_Param_bpp__DesiredxState__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ChangexState__pfT(E__DStates__pf(Z_Param_bpp__DesiredxState__pfT)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_7C4156FE49C8B859B34E9083CCA81E0E__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_7C4156FE49C8B859B34E9083CCA81E0E__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_8AFB58C5443B5AFADD60D0925753A253__pf) \
	{ \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_bpp__Results__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_8AFB58C5443B5AFADD60D0925753A253__pf(Z_Param_Out_bpp__Results__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_8AFB58C5443B5AFADD60D0925753A253__pf) \
	{ \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_bpp__Results__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_8AFB58C5443B5AFADD60D0925753A253__pf(Z_Param_Out_bpp__Results__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_50E2515040AAF84455FDB1ADB5219E72__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_50E2515040AAF84455FDB1ADB5219E72__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_50E2515040AAF84455FDB1ADB5219E72__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_50E2515040AAF84455FDB1ADB5219E72__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__JoinxGame__pfT) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_bpp__Sessionxtoxjoin__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__JoinxGame__pfT_Implementation(Z_Param_bpp__Sessionxtoxjoin__pfTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LeavexGame__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__LeavexGame__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreatexCoop__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CreatexCoop__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__FindxGames__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__FindxGames__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DestroySesh__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DestroySesh__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleNetworkError__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__FailureType__pf); \
		P_GET_UBOOL(Z_Param_bpp__bIsServer__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleNetworkError__pf(ENetworkFailure::Type(Z_Param_bpp__FailureType__pf),Z_Param_bpp__bIsServer__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleTravelError__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__FailureType__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleTravelError__pf(ETravelFailure::Type(Z_Param_bpp__FailureType__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ShowLoadingScreen__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ShowLoadingScreen__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxDebugMxtoxMainScreen__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxDebugMxtoxMainScreen__pfTTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxDebugMxtoxDebugMode__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxDebugMxtoxDebugMode__pfTTT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxDebugMxtoxArcade1979__pfTTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetxDebugMxtoxArcade1979__pfTTT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LoadxSettings__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__LoadxSettings__pfT(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_EVENT_PARMS \
	struct DebugInstance_C__pf4162722864_eventbpf__HandleNetworkError__pf_Parms \
	{ \
		TEnumAsByte<ENetworkFailure::Type> bpp__FailureType__pf; \
		bool bpp__bIsServer__pf; \
	}; \
	struct DebugInstance_C__pf4162722864_eventbpf__HandleTravelError__pf_Parms \
	{ \
		TEnumAsByte<ETravelFailure::Type> bpp__FailureType__pf; \
	}; \
	struct DebugInstance_C__pf4162722864_eventbpf__JoinxGame__pfT_Parms \
	{ \
		FBlueprintSessionResult bpp__Sessionxtoxjoin__pfTT; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_CALLBACK_WRAPPERS \
	void eventbpf__HandleNetworkError__pf(ENetworkFailure::Type bpp__FailureType__pf, bool bpp__bIsServer__pf); \
 \
	void eventbpf__HandleTravelError__pf(ETravelFailure::Type bpp__FailureType__pf); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugInstance_C__pf4162722864(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UDebugInstance_C__pf4162722864(); \
public: \
	DECLARE_CLASS(UDebugInstance_C__pf4162722864, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Game/Modes/Debug/DebugInstance"), NO_API) \
	DECLARE_SERIALIZER(UDebugInstance_C__pf4162722864) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDebugInstance_C__pf4162722864(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_UDebugInstance_C__pf4162722864(); \
public: \
	DECLARE_CLASS(UDebugInstance_C__pf4162722864, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Game/Modes/Debug/DebugInstance"), NO_API) \
	DECLARE_SERIALIZER(UDebugInstance_C__pf4162722864) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugInstance_C__pf4162722864(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugInstance_C__pf4162722864) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugInstance_C__pf4162722864); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugInstance_C__pf4162722864); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugInstance_C__pf4162722864(UDebugInstance_C__pf4162722864&&); \
	NO_API UDebugInstance_C__pf4162722864(const UDebugInstance_C__pf4162722864&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugInstance_C__pf4162722864(UDebugInstance_C__pf4162722864&&); \
	NO_API UDebugInstance_C__pf4162722864(const UDebugInstance_C__pf4162722864&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugInstance_C__pf4162722864); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugInstance_C__pf4162722864); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugInstance_C__pf4162722864)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_16_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DebugInstance__pf4162722864_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
