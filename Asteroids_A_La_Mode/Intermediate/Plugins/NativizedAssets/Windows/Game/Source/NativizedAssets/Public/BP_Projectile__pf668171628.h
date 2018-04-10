#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class AAsteroid_C__pf2772898577;
class UObject;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class USceneComponent;
class AAsteroid_Medium_C__pf2772898577;
class AAsteroid_Large_C__pf2772898577;
class ADebugMData_C__pf4162722864;
class ARegUser_C__pf4061722237;
class AShip_C__pf668171628;
class AUserData_C__pf4061722237;
#include "BP_Projectile__pf668171628.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Pawns/Ship/BP_Projectile.BP_Projectile_C", OverrideNativeName="BP_Projectile_C"))
class ABP_Projectile_C__pf668171628 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectileMovement"))
	UProjectileMovementComponent* bpv__ProjectileMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Elapsed", Category="Default", OverrideNativeName="TimeElapsed"))
	float bpv__TimeElapsed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Object_Collided"))
	UObject* b0l__K2Node_CustomEvent_Object_Collided__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAsteroid_Small"))
	AAsteroid_C__pf2772898577* b0l__K2Node_DynamicCast_AsAsteroid_Small__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAsteroid_Medium"))
	AAsteroid_Medium_C__pf2772898577* b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAsteroid_Large"))
	AAsteroid_Large_C__pf2772898577* b0l__K2Node_DynamicCast_AsAsteroid_Large__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsShip"))
	AShip_C__pf668171628* b0l__K2Node_DynamicCast_AsShip__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Data"))
	AUserData_C__pf4061722237* b0l__K2Node_DynamicCast_AsUser_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsShip1"))
	AShip_C__pf668171628* b0l__K2Node_DynamicCast_AsShip1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	ABP_Projectile_C__pf668171628(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Projectile__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Projectile__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Projectile__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Projectile__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="process death"))
	virtual void bpf__processxdeath__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Kill Yurself"))
	virtual void bpf__KillxYurself__pfT(UObject* bpp__ObjectxCollided__pfT);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
