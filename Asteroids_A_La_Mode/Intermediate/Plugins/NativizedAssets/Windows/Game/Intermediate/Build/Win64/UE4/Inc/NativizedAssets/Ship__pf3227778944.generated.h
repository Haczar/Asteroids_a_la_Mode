// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FVector;
struct FRotator;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NATIVIZEDASSETS_Ship__pf3227778944_generated_h
#error "Ship__pf3227778944.generated.h already included, missing '#pragma once' in Ship__pf3227778944.h"
#endif
#define NATIVIZEDASSETS_Ship__pf3227778944_generated_h

#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_RPC_WRAPPERS \
	virtual void bpf__Server_FireWeapon__pf_Implementation(bool bpp__IsFiring__pf); \
	virtual void bpf__ServerToggleThrust__pf_Implementation(bool bpp__acceleratex__pfzy); \
	virtual void bpf__ClienToggleThrust__pf_Implementation(bool bpp__acceleratex__pfzy); \
	virtual void bpf__ServerTick__pf_Implementation(FVector bpp__Location__pf, FRotator bpp__Rotation__pf, float bpp__Tilt__pf); \
	virtual void bpf__ClientReplicate__pf_Implementation(FVector bpp__NewLocation__pf, FRotator bpp__NewRotation__pf); \
	virtual void bpf__DestoryxShip__pfT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__OnRep_acceleratex__pfzy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_acceleratex__pfzy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ToggleThrusters__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ToggleThrusters__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ShipColor__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ShipColor__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleRotation__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleRotation__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleThrust__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleThrust__pf(Z_Param_bpp__DeltaSeconds__pf); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_FirexWeapon_K2Node_InputActionEvent_13__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_FirexWeapon_K2Node_InputActionEvent_13__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_12__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_12__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_11__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_11__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_10__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_10__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_9__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_9__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Thrust_K2Node_InputActionEvent_8__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Thrust_K2Node_InputActionEvent_8__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Thrust_K2Node_InputActionEvent_7__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Thrust_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_FireWeapon__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__IsFiring__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Server_FireWeapon__pf_Implementation(Z_Param_bpp__IsFiring__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ServerToggleThrust__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__acceleratex__pfzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ServerToggleThrust__pf_Implementation(Z_Param_bpp__acceleratex__pfzy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ClienToggleThrust__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__acceleratex__pfzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ClienToggleThrust__pf_Implementation(Z_Param_bpp__acceleratex__pfzy); \
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
	DECLARE_FUNCTION(execbpf__HyperWarp__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HyperWarp__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Shield__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Shield__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ServerTick__pf) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__Location__pf); \
		P_GET_STRUCT(FRotator,Z_Param_bpp__Rotation__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Tilt__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ServerTick__pf_Implementation(Z_Param_bpp__Location__pf,Z_Param_bpp__Rotation__pf,Z_Param_bpp__Tilt__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ClientReplicate__pf) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__NewLocation__pf); \
		P_GET_STRUCT(FRotator,Z_Param_bpp__NewRotation__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ClientReplicate__pf_Implementation(Z_Param_bpp__NewLocation__pf,Z_Param_bpp__NewRotation__pf); \
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
	DECLARE_FUNCTION(execbpf__DestoryxShip__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DestoryxShip__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveDestroyed__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveDestroyed__pf(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__Server_FireWeapon__pf_Implementation(bool bpp__IsFiring__pf); \
	virtual void bpf__ServerToggleThrust__pf_Implementation(bool bpp__acceleratex__pfzy); \
	virtual void bpf__ClienToggleThrust__pf_Implementation(bool bpp__acceleratex__pfzy); \
	virtual void bpf__ServerTick__pf_Implementation(FVector bpp__Location__pf, FRotator bpp__Rotation__pf, float bpp__Tilt__pf); \
	virtual void bpf__ClientReplicate__pf_Implementation(FVector bpp__NewLocation__pf, FRotator bpp__NewRotation__pf); \
	virtual void bpf__DestoryxShip__pfT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__OnRep_acceleratex__pfzy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_acceleratex__pfzy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ToggleThrusters__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ToggleThrusters__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_ShipColor__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__OnRep_ShipColor__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleRotation__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleRotation__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__HandleThrust__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HandleThrust__pf(Z_Param_bpp__DeltaSeconds__pf); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_FirexWeapon_K2Node_InputActionEvent_13__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_FirexWeapon_K2Node_InputActionEvent_13__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_12__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_12__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_11__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_11__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_10__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_10__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_9__pfT) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_9__pfT(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Thrust_K2Node_InputActionEvent_8__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Thrust_K2Node_InputActionEvent_8__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Thrust_K2Node_InputActionEvent_7__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Thrust_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_FireWeapon__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__IsFiring__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Server_FireWeapon__pf_Implementation(Z_Param_bpp__IsFiring__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ServerToggleThrust__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__acceleratex__pfzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ServerToggleThrust__pf_Implementation(Z_Param_bpp__acceleratex__pfzy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ClienToggleThrust__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__acceleratex__pfzy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ClienToggleThrust__pf_Implementation(Z_Param_bpp__acceleratex__pfzy); \
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
	DECLARE_FUNCTION(execbpf__HyperWarp__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__HyperWarp__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Shield__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Shield__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ServerTick__pf) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__Location__pf); \
		P_GET_STRUCT(FRotator,Z_Param_bpp__Rotation__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Tilt__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ServerTick__pf_Implementation(Z_Param_bpp__Location__pf,Z_Param_bpp__Rotation__pf,Z_Param_bpp__Tilt__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ClientReplicate__pf) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__NewLocation__pf); \
		P_GET_STRUCT(FRotator,Z_Param_bpp__NewRotation__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ClientReplicate__pf_Implementation(Z_Param_bpp__NewLocation__pf,Z_Param_bpp__NewRotation__pf); \
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
	DECLARE_FUNCTION(execbpf__DestoryxShip__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DestoryxShip__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveDestroyed__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveDestroyed__pf(); \
		P_NATIVE_END; \
	}


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_EVENT_PARMS \
	struct Ship_C__pf3227778944_eventbpf__ClienToggleThrust__pf_Parms \
	{ \
		bool bpp__acceleratex__pfzy; \
	}; \
	struct Ship_C__pf3227778944_eventbpf__ClientReplicate__pf_Parms \
	{ \
		FVector bpp__NewLocation__pf; \
		FRotator bpp__NewRotation__pf; \
	}; \
	struct Ship_C__pf3227778944_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	}; \
	struct Ship_C__pf3227778944_eventbpf__Server_FireWeapon__pf_Parms \
	{ \
		bool bpp__IsFiring__pf; \
	}; \
	struct Ship_C__pf3227778944_eventbpf__ServerTick__pf_Parms \
	{ \
		FVector bpp__Location__pf; \
		FRotator bpp__Rotation__pf; \
		float bpp__Tilt__pf; \
	}; \
	struct Ship_C__pf3227778944_eventbpf__ServerToggleThrust__pf_Parms \
	{ \
		bool bpp__acceleratex__pfzy; \
	};


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveDestroyed__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShip_C__pf3227778944(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AShip_C__pf3227778944(); \
public: \
	DECLARE_CLASS(AShip_C__pf3227778944, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Ship/Ship"), NO_API) \
	DECLARE_SERIALIZER(AShip_C__pf3227778944) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAShip_C__pf3227778944(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_AShip_C__pf3227778944(); \
public: \
	DECLARE_CLASS(AShip_C__pf3227778944, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Ship/Ship"), NO_API) \
	DECLARE_SERIALIZER(AShip_C__pf3227778944) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShip_C__pf3227778944(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShip_C__pf3227778944) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip_C__pf3227778944); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip_C__pf3227778944); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip_C__pf3227778944(AShip_C__pf3227778944&&); \
	NO_API AShip_C__pf3227778944(const AShip_C__pf3227778944&); \
public:


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip_C__pf3227778944(AShip_C__pf3227778944&&); \
	NO_API AShip_C__pf3227778944(const AShip_C__pf3227778944&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip_C__pf3227778944); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip_C__pf3227778944); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShip_C__pf3227778944)


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_PRIVATE_PROPERTY_OFFSET
#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_20_PROLOG \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_EVENT_PARMS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_RPC_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_INCLASS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_PRIVATE_PROPERTY_OFFSET \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_CALLBACK_WRAPPERS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_INCLASS_NO_PURE_DECLS \
	Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_A_La_Mode_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Ship__pf3227778944_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
