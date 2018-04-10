#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class USubmitScore_C__pf1232574660;
class UResultsDisplay_C__pf3166771619;
#include "GameOver__pf3166771619.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/GameOver.GameOver_C", OverrideNativeName="GameOver_C"))
class UGameOver_C__pf3166771619 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResultsDisplay", Category="GameOver", OverrideNativeName="ResultsDisplay"))
	UResultsDisplay_C__pf3166771619* bpv__ResultsDisplay__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SubmitScore", Category="GameOver", OverrideNativeName="SubmitScore"))
	USubmitScore_C__pf1232574660* bpv__SubmitScore__pf;
	UGameOver_C__pf3166771619(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
