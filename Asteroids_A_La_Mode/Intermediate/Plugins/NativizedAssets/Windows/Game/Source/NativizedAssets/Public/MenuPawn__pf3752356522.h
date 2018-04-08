#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class USceneComponent;
class ARegUser_C__pf4061722237;
class UCoop_C__pf1232574660;
class UMenuBase_C__pf3166771619;
class UMainScreen_C__pf1232574660;
class ADebugMData_C__pf4162722864;
#include "MenuPawn__pf3752356522.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Pawns/MenuPawn.MenuPawn_C", OverrideNativeName="MenuPawn_C"))
class AMenuPawn_C__pf3752356522 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User1"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCoop"))
	UCoop_C__pf1232574660* b0l__K2Node_DynamicCast_AsCoop__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_Base"))
	UMenuBase_C__pf3166771619* b0l__K2Node_DynamicCast_AsMenu_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCoop1"))
	UCoop_C__pf1232574660* b0l__K2Node_DynamicCast_AsCoop1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Screen"))
	UMainScreen_C__pf1232574660* b0l__K2Node_DynamicCast_AsMain_Screen__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User2"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_Base1"))
	UMenuBase_C__pf3166771619* b0l__K2Node_DynamicCast_AsMenu_Base1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b0l__K2Node_DynamicCast_bSuccess8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCoop2"))
	UCoop_C__pf1232574660* b0l__K2Node_DynamicCast_AsCoop2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess9"))
	bool b0l__K2Node_DynamicCast_bSuccess9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Screen1"))
	UMainScreen_C__pf1232574660* b0l__K2Node_DynamicCast_AsMain_Screen1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess10"))
	bool b0l__K2Node_DynamicCast_bSuccess10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData1"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess11"))
	bool b0l__K2Node_DynamicCast_bSuccess11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User3"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess12"))
	bool b0l__K2Node_DynamicCast_bSuccess12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_Base2"))
	UMenuBase_C__pf3166771619* b0l__K2Node_DynamicCast_AsMenu_Base2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess13"))
	bool b0l__K2Node_DynamicCast_bSuccess13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCoop3"))
	UCoop_C__pf1232574660* b0l__K2Node_DynamicCast_AsCoop3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess14"))
	bool b0l__K2Node_DynamicCast_bSuccess14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Screen2"))
	UMainScreen_C__pf1232574660* b0l__K2Node_DynamicCast_AsMain_Screen2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess15"))
	bool b0l__K2Node_DynamicCast_bSuccess15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key1"))
	FKey b0l__K2Node_InputActionEvent_Key1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User4"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess16"))
	bool b0l__K2Node_DynamicCast_bSuccess16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_Base3"))
	UMenuBase_C__pf3166771619* b0l__K2Node_DynamicCast_AsMenu_Base3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess17"))
	bool b0l__K2Node_DynamicCast_bSuccess17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User5"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess18"))
	bool b0l__K2Node_DynamicCast_bSuccess18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCoop4"))
	UCoop_C__pf1232574660* b0l__K2Node_DynamicCast_AsCoop4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess19"))
	bool b0l__K2Node_DynamicCast_bSuccess19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_Base4"))
	UMenuBase_C__pf3166771619* b0l__K2Node_DynamicCast_AsMenu_Base4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess20"))
	bool b0l__K2Node_DynamicCast_bSuccess20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Screen3"))
	UMainScreen_C__pf1232574660* b0l__K2Node_DynamicCast_AsMain_Screen3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess21"))
	bool b0l__K2Node_DynamicCast_bSuccess21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable1"))
	FKey b0l__Temp_struct_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData2"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess22"))
	bool b0l__K2Node_DynamicCast_bSuccess22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum2_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User6"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess23"))
	bool b0l__K2Node_DynamicCast_bSuccess23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData3"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess24"))
	bool b0l__K2Node_DynamicCast_bSuccess24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Screen4"))
	UMainScreen_C__pf1232574660* b0l__K2Node_DynamicCast_AsMain_Screen4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess25"))
	bool b0l__K2Node_DynamicCast_bSuccess25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum3_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum3_CmpSuccess__pf;
	AMenuPawn_C__pf3752356522(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MenuPawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuPawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuPawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuPawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuPawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuPawn__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu Back_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu Select_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu Up_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu Up_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu Down_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Menu Down_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
