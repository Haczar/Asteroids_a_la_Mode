#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "DStates__pf4162722864.h"
#include "EMenSel__pf1232574660.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UButton;
class UImage;
class UDebugManager_C__pf4162722864;
class ADebugMData_C__pf4162722864;
class ARegUser_C__pf4061722237;
#include "MainScreen__pf1232574660.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/MainScreen.MainScreen_C", OverrideNativeName="MainScreen_C"))
class UMainScreen_C__pf1232574660 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AsteroidsIMg", Category="MainScreen", OverrideNativeName="AsteroidsIMg"))
	UImage* bpv__AsteroidsIMg__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Co-Op", Category="MainScreen", OverrideNativeName="Co-Op"))
	UButton* bpv__CoxOp__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit", Category="MainScreen", OverrideNativeName="Exit"))
	UButton* bpv__Exit__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Option", Category="MainScreen", OverrideNativeName="Option"))
	UButton* bpv__Option__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Start Game", Category="MainScreen", OverrideNativeName="StartGame"))
	UButton* bpv__StartGame__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Co-Op", Category="MainScreen", OverrideNativeName="Text-Co-Op"))
	UTextBlock* bpv__TextxCoxOp__pfGG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text- Exit", Category="MainScreen", OverrideNativeName="Text-Exit"))
	UTextBlock* bpv__TextxExit__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Option", Category="MainScreen", OverrideNativeName="Text-Option"))
	UTextBlock* bpv__TextxOption__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - StartG", Category="MainScreen", OverrideNativeName="Text-StartG"))
	UTextBlock* bpv__TextxStartG__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Currently Sel", Category="Default", OverrideNativeName="CurrentlySel"))
	E__EMenSel__pf bpv__CurrentlySel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="DM Game Mode ", Category="Default", OverrideNativeName="DM_GameMode "))
	E__DStates__pf bpv__DM_GameModex__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Manager"))
	UDebugManager_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Manager__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Manager1"))
	UDebugManager_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Manager1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User1"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UMainScreen_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainScreen__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainScreen__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainScreen__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainScreen__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainScreen__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Move Up"))
	virtual void bpf__MovexUp__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Debug: ChangeMode"))
	virtual void bpf__DebugxxChangeMode__pf3T();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Select"))
	virtual void bpf__MenuxSelect__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Move Down"))
	virtual void bpf__MovexDown__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Obj: Color and Opacity"))
	virtual void bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ UTextBlock*& bpp__TextxObj__pfT, /*out*/ FSlateColor& bpp__ColorxandxOpacity__pfTT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Text-StartG_ColorAndOpacity_0"))
	virtual FSlateColor  bpf__Get_TextxStartG_ColorAndOpacity_0__pfG();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Revert Alpha (Menu Item)"))
	virtual void bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Alpha (Menu Item)"))
	virtual void bpf__SetxAlphaxxMenuxItemx__pfTTLTK(E__EMenSel__pf bpp__Selection__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
