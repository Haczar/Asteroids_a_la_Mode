#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UVerticalBox;
class UTextBlock;
class ADebugState_C__pf4162722864;
class APlayerController;
class AController;
#include "InGameHud__pf515974370.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/Dev_Test/InGameHud.InGameHud_C", OverrideNativeName="InGameHud_C"))
class UInGameHud_C__pf515974370 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HighScore", Category="InGameHud", OverrideNativeName="HighScore"))
	UTextBlock* bpv__HighScore__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HS_PlayerName", Category="InGameHud", OverrideNativeName="HS_PlayerName"))
	UTextBlock* bpv__HS_PlayerName__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Player1_Name", Category="InGameHud", OverrideNativeName="Player1_Name"))
	UTextBlock* bpv__Player1_Name__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Player1_Score", Category="InGameHud", OverrideNativeName="Player1_Score"))
	UTextBlock* bpv__Player1_Score__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Player2_Name", Category="InGameHud", OverrideNativeName="Player2_Name"))
	UTextBlock* bpv__Player2_Name__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Player2_Score", Category="InGameHud", OverrideNativeName="Player2_Score"))
	UTextBlock* bpv__Player2_Score__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Player2 Stats VB", Category="InGameHud", OverrideNativeName="Player2StatsVB"))
	UVerticalBox* bpv__Player2StatsVB__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_1", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_1"))
	UImage* bpv__PlayerLifeIcon1_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_2", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_2"))
	UImage* bpv__PlayerLifeIcon1_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_3", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_3"))
	UImage* bpv__PlayerLifeIcon1_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_4", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_4"))
	UImage* bpv__PlayerLifeIcon1_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_5", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_5"))
	UImage* bpv__PlayerLifeIcon1_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_6", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_6"))
	UImage* bpv__PlayerLifeIcon1_6__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon1_7", Category="InGameHud", OverrideNativeName="PlayerLifeIcon1_7"))
	UImage* bpv__PlayerLifeIcon1_7__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_1", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_1"))
	UImage* bpv__PlayerLifeIcon2_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_2", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_2"))
	UImage* bpv__PlayerLifeIcon2_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_3", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_3"))
	UImage* bpv__PlayerLifeIcon2_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_4", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_4"))
	UImage* bpv__PlayerLifeIcon2_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_5", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_5"))
	UImage* bpv__PlayerLifeIcon2_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_6", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_6"))
	UImage* bpv__PlayerLifeIcon2_6__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerLifeIcon2_7", Category="InGameHud", OverrideNativeName="PlayerLifeIcon2_7"))
	UImage* bpv__PlayerLifeIcon2_7__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player 1", Category="Default", OverrideNativeName="Player1"))
	bool bpv__Player1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable1"))
	int32 b0l__Temp_int_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger1_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable2"))
	int32 b0l__Temp_int_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger2_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State1"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player1"))
	APlayerController* b0l__K2Node_CustomEvent_Player1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player"))
	APlayerController* b0l__K2Node_CustomEvent_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State2"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State3"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable3"))
	int32 b0l__Temp_int_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger3_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger3_CmpSuccess__pf;
	UInGameHud_C__pf515974370(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InGameHud__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InGameHud__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InGameHud__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Make p2 visible"))
	virtual void bpf__Makexp2xvisible__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Score"))
	virtual void bpf__UpdatexScore__pfT(APlayerController* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Lives"))
	virtual void bpf__UpdatexLives__pfT(APlayerController* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Determine Player"))
	virtual void bpf__DeterminexPlayer__pfT(AController* bpp__Playah__pf, /*out*/ bool& bpp__determination__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
