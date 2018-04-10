#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "SRotate__pf668171628.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UParticleSystemComponent;
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class AActor;
class AAlien_C__pf655108736;
class AAsteroid_C__pf2772898577;
class ADebugMode_C__pf4162722864;
class ARegUser_C__pf4061722237;
class AUserData_C__pf4061722237;
#include "Ship__pf668171628.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Pawns/Ship/Ship.Ship_C", OverrideNativeName="Ship_C"))
class AShip_C__pf668171628 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Thruster"))
	UParticleSystemComponent* bpv__Thruster__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Accelerate?", Category="Movement", OverrideNativeName="accelerate?"))
	bool bpv__acceleratex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Firing", Category="Combat", OverrideNativeName="Firing"))
	bool bpv__Firing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotate?", Category="Movement", OverrideNativeName="Rotate?"))
	E__SRotate__pf bpv__Rotatex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Degregation Constant", Category="Movement", OverrideNativeName="Degregation_Constant"))
	float bpv__Degregation_Constant__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Degredation Factor", Category="Movement", OverrideNativeName="Degredation_Factor"))
	float bpv__Degredation_Factor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Speed", Category="Movement", OverrideNativeName="MaxSpeed"))
	float bpv__MaxSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Constant", Category="Movement", OverrideNativeName="Rotation_Constant"))
	float bpv__Rotation_Constant__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Thurst Force Constant", Category="Movement", OverrideNativeName="ThurstForce_Constant"))
	float bpv__ThurstForce_Constant__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Firing Delay", Category="Combat", OverrideNativeName="FiringDelay"))
	float bpv__FiringDelay__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tilt", Category="Movement", OverrideNativeName="Tilt"))
	float bpv__Tilt__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Velocity V", Category="Movement", OverrideNativeName="VelocityV"))
	FVector bpv__VelocityV__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ship Mat Inst", Category="Default", OverrideNativeName="ShipMat_Inst"))
	UMaterialInstanceDynamic* bpv__ShipMat_Inst__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_ShipColor", meta=(DisplayName="Ship Color", Category="Default", OverrideNativeName="ShipColor"))
	FLinearColor bpv__ShipColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wish Rot", Category="Default", OverrideNativeName="WishRot"))
	FRotator bpv__WishRot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Missle Count", Category="Combat", OverrideNativeName="MissleCount"))
	int32 bpv__MissleCount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_IsFiring"))
	bool b0l__K2Node_CustomEvent_IsFiring__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable1"))
	FKey b0l__Temp_struct_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_accelerate_1"))
	bool b0l__K2Node_CustomEvent_accelerate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_accelerate_"))
	bool b0l__K2Node_CustomEvent_accelerate___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location"))
	FVector b0l__K2Node_CustomEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Rotation"))
	FRotator b0l__K2Node_CustomEvent_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Tilt"))
	float b0l__K2Node_CustomEvent_Tilt__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key1"))
	FKey b0l__K2Node_InputActionEvent_Key1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewLocation"))
	FVector b0l__K2Node_CustomEvent_NewLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewRotation"))
	FRotator b0l__K2Node_CustomEvent_NewRotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b0l__K2Node_InputActionEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAlien"))
	AAlien_C__pf655108736* b0l__K2Node_DynamicCast_AsAlien__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAsteroid"))
	AAsteroid_C__pf2772898577* b0l__K2Node_DynamicCast_AsAsteroid__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Mode"))
	ADebugMode_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Mode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Data"))
	AUserData_C__pf4061722237* b0l__K2Node_DynamicCast_AsUser_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	AShip_C__pf668171628(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Ship__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Ship__pf_16(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Destroyed", Keywords="delete", CppFromBpEvent, OverrideNativeName="ReceiveDestroyed"))
	void bpf__ReceiveDestroyed__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Destroyed: Server Side Stuff"))
	virtual void bpf__DestroyedxxServerxSidexStuff__pf3TTT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(Client, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="ClientReplicate"))
	virtual void bpf__ClientReplicate__pf(FVector bpp__NewLocation__pf, FRotator bpp__NewRotation__pf);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="ServerTick"))
	virtual void bpf__ServerTick__pf(FVector bpp__Location__pf, FRotator bpp__Rotation__pf, float bpp__Tilt__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Shield"))
	virtual void bpf__Shield__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HyperWarp"))
	virtual void bpf__HyperWarp__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="ClienToggleThrust"))
	virtual void bpf__ClienToggleThrust__pf(bool bpp__acceleratex__pfzy);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="ServerToggleThrust"))
	virtual void bpf__ServerToggleThrust__pf(bool bpp__acceleratex__pfzy);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="Server_FireWeapon"))
	virtual void bpf__Server_FireWeapon__pf(bool bpp__IsFiring__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Thrust_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_Thrust_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Thrust_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_Thrust_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Rotate Left_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_9__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Rotate Left_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_10__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Rotate Right_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_11__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Rotate Right_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_12__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Fire Weapon_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_FirexWeapon_K2Node_InputActionEvent_13__pfT(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HandleThrust"))
	virtual void bpf__HandleThrust__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HandleRotation"))
	virtual void bpf__HandleRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_ShipColor"))
	virtual void bpf__OnRep_ShipColor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ToggleThrusters"))
	virtual void bpf__ToggleThrusters__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_accelerate?"))
	virtual void bpf__OnRep_acceleratex__pfzy();
public:
};
