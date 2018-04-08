#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
class ACameraActor;
class APlayerController;
class USceneComponent;
#include "GameState_1979__pf2955639682.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Arcade1979/GameState_1979.GameState_1979_C", OverrideNativeName="GameState_1979_C"))
class AGameState_1979_C__pf2955639682 : public AGameState
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player C 1 Ref", Category="Default", OverrideNativeName="PlayerC 1 Ref"))
	APlayerController* bpv__PlayerCx1xRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player C 2 Ref", Category="Default", OverrideNativeName="PlayerC 2 Ref"))
	APlayerController* bpv__PlayerCx2xRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="One Camera", Category="Default", OverrideNativeName="OneCamera"))
	ACameraActor* bpv__OneCamera__pf;
	AGameState_1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetPlayerControllers"))
	virtual void bpf__SetPlayerControllers__pf(APlayerController* bpp__Player__pf);
public:
};
