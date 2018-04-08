#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "ECoOpSel__pf1232574660.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UButton;
class UDebugInstance_C__pf4162722864;
class APlayerC_Regular_C__pf4061722237;
#include "Coop__pf1232574660.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/Coop.Coop_C", OverrideNativeName="Coop_C"))
class UCoop_C__pf1232574660 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Asteroids", Category="Coop", OverrideNativeName="Asteroids"))
	UTextBlock* bpv__Asteroids__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Back", Category="Coop", OverrideNativeName="Back"))
	UButton* bpv__Back__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Host Game", Category="Coop", OverrideNativeName="HostGame"))
	UButton* bpv__HostGame__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Join Game", Category="Coop", OverrideNativeName="JoinGame"))
	UButton* bpv__JoinGame__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Back", Category="Coop", OverrideNativeName="Text-Back"))
	UTextBlock* bpv__TextxBack__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Host Game", Category="Coop", OverrideNativeName="Text-HostGame"))
	UTextBlock* bpv__TextxHostGame__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Join Game", Category="Coop", OverrideNativeName="Text-JoinGame"))
	UTextBlock* bpv__TextxJoinGame__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Co Op Selection", Category="Default", OverrideNativeName="CoOp Selection"))
	E__ECoOpSel__pf bpv__CoOpxSelection__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance"))
	UDebugInstance_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_C_Regular"))
	APlayerC_Regular_C__pf4061722237* b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_C_Regular1"))
	APlayerC_Regular_C__pf4061722237* b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UCoop_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Coop__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coop__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coop__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coop__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coop__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Back"))
	virtual void bpf__MenuxBack__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Select"))
	virtual void bpf__MenuxSelect__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Move Down"))
	virtual void bpf__MovexDown__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Move Up"))
	virtual void bpf__MovexUp__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Obj: Color and Opacity"))
	virtual void bpf__SetxObjxxColorxandxOpacity__pfT3TTT(UTextBlock* bpp__TextxObj__pfT, FSlateColor bpp__ColorxandxAlpha__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Revert Alpha (Menu Item)"))
	virtual void bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Alpha (Menu Item)"))
	virtual void bpf__SetxAlphaxxMenuxItemx__pfTTLTK(E__ECoOpSel__pf bpp__Selection__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
