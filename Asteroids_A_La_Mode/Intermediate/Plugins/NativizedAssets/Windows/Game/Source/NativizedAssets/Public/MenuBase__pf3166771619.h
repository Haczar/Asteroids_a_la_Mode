#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "MenuBase__pf3166771619.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MenuBase.MenuBase_C", OverrideNativeName="MenuBase_C"))
class UMenuBase_C__pf3166771619 : public UUserWidget
{
public:
	GENERATED_BODY()
	UMenuBase_C__pf3166771619(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MenuBase__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuBase__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuBase__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuBase__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuBase__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Down Released"))
	virtual void bpf__MenuxDownxReleased__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Up Released"))
	virtual void bpf__MenuxUpxReleased__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Down"))
	virtual void bpf__MenuxDown__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Up"))
	virtual void bpf__MenuxUp__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Back"))
	virtual void bpf__MenuxBack__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Select"))
	virtual void bpf__MenuxSelect__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Obj: Color and Opacity"))
	virtual void bpf__SetxObjxxColorxandxOpacity__pfT3TTT(UTextBlock* bpp__TextxObj__pfT, FSlateColor bpp__ColorxandxOpactiy__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Revert Alpha (Menu Item)"))
	virtual void bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Alpha (Menu Item)"))
	virtual void bpf__SetxAlphaxxMenuxItemx__pfTTLTK();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
