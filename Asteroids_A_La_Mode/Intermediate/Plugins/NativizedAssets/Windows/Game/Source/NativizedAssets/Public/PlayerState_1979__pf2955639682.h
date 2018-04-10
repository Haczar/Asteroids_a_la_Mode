#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
class USceneComponent;
class UInGameHud_C__pf515974370;
class APlayerController_1979_C__pf2955639682;
class APlayerController;
#include "PlayerState_1979__pf2955639682.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Arcade1979/PlayerState_1979.PlayerState_1979_C", OverrideNativeName="PlayerState_1979_C"))
class APlayerState_1979_C__pf2955639682 : public APlayerState
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Plyr Name", Category="Default", OverrideNativeName="PlyrName"))
	FString bpv__PlyrName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_PlyrScore", meta=(DisplayName="Plyr Score", Category="Default", OverrideNativeName="PlyrScore"))
	int32 bpv__PlyrScore__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_PlyrLives", meta=(DisplayName="Plyr Lives", Category="Default", OverrideNativeName="PlyrLives"))
	int32 bpv__PlyrLives__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Ready", Category="Default", OverrideNativeName="PlayerReady"))
	bool bpv__PlayerReady__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NumLives"))
	int32 b0l__K2Node_CustomEvent_NumLives__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PlayerHud"))
	UInGameHud_C__pf515974370* b0l__K2Node_CustomEvent_PlayerHud__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller_1979"))
	APlayerController_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller_19791"))
	APlayerController_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	APlayerState_1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PlayerState_1979__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerState_1979__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerState_1979__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetPlayerLives"))
	virtual void bpf__SetPlayerLives__pf(int32 bpp__NumLives__pf, UInGameHud_C__pf515974370* bpp__PlayerHud__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="P2Joined"))
	virtual void bpf__P2Joined__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerHudSetup"))
	virtual void bpf__PlayerHudSetup__pf(UInGameHud_C__pf515974370* bpp__HudRef__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_PlyrLives"))
	virtual void bpf__OnRep_PlyrLives__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_PlyrScore"))
	virtual void bpf__OnRep_PlyrScore__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdatePlayerLives"))
	virtual void bpf__UpdatePlayerLives__pf(APlayerController* bpp__PlayerController__pf);
public:
};
