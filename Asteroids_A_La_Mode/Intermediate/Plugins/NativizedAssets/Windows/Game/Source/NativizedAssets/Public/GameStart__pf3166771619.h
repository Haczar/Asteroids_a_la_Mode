#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class ULeaderBoard_C__pf3166771619;
#include "GameStart__pf3166771619.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/GameStart.GameStart_C", OverrideNativeName="GameStart_C"))
class UGameStart_C__pf3166771619 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="LeaderBoard", Category="GameStart", OverrideNativeName="LeaderBoard"))
	ULeaderBoard_C__pf3166771619* bpv__LeaderBoard__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Player2is Ready ", Category="GameStart", OverrideNativeName="Text-Player2isReady"))
	UTextBlock* bpv__TextxPlayer2isReady__pfG;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UGameStart_C__pf3166771619(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GameStart__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowPlayer2isReady"))
	virtual void bpf__ShowPlayer2isReady__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
