#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class ACameraActor;
class ULevelStart_Widget_C__pf515974370;
class UInGameHud_C__pf515974370;
class AAsteroids1979_C__pf2955639682;
class APlayerStart;
class APlayerState_1979_C__pf2955639682;
#include "PlayerController_1979__pf2955639682.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Arcade1979/PlayerController_1979.PlayerController_1979_C", OverrideNativeName="PlayerController_1979_C"))
class APlayerController_1979_C__pf2955639682 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Hud Ref", Category="Default", OverrideNativeName="PlayerHudRef"))
	UInGameHud_C__pf515974370* bpv__PlayerHudRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Start Ref", Category="Default", OverrideNativeName="LevelStartRef"))
	ULevelStart_Widget_C__pf515974370* bpv__LevelStartRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="One Cam", Category="Default", OverrideNativeName="OneCam"))
	ACameraActor* bpv__OneCam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAsteroids_1979"))
	AAsteroids1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsAsteroids_1979__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerStart* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_State_1979"))
	APlayerState_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_State_19791"))
	APlayerState_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	APlayerController_1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PlayerController_1979__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerController_1979__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerController_1979__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="StartLevel"))
	virtual void bpf__StartLevel__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Player Start_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetCamera"))
	virtual void bpf__SetCamera__pf();
public:
};
