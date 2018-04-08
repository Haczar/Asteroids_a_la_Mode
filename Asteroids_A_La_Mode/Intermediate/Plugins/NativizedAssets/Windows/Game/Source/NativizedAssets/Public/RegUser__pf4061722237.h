#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class ACameraActor;
class UUserWidget;
class ULevelStart_Widget_C__pf515974370;
class ADebugMData_C__pf4162722864;
class UDebugManager_C__pf4162722864;
class AUserData_C__pf4061722237;
class ADebugMode_C__pf4162722864;
class UClass;
#include "RegUser__pf4061722237.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Player/RegUser.RegUser_C", OverrideNativeName="RegUser_C"))
class ARegUser_C__pf4061722237 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Start Widget", Category="Default", OverrideNativeName="Level Start Widget"))
	ULevelStart_Widget_C__pf515974370* bpv__LevelxStartxWidget__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Widget Ref", Category="Default", OverrideNativeName="Widget Ref"))
	UUserWidget* bpv__WidgetxRef__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Ref", Category="Default", OverrideNativeName="Camera Ref"))
	ACameraActor* bpv__CameraxRef__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData1"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Manager"))
	UDebugManager_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Manager__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData2"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Data"))
	AUserData_C__pf4061722237* b0l__K2Node_DynamicCast_AsUser_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Mode"))
	ADebugMode_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Mode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key1"))
	FKey b0l__K2Node_InputActionEvent_Key1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData3"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Mode1"))
	ADebugMode_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Mode1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_MData4"))
	ADebugMData_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_MData4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b0l__K2Node_DynamicCast_bSuccess8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Manager1"))
	UDebugManager_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Manager1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess9"))
	bool b0l__K2Node_DynamicCast_bSuccess9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Data1"))
	AUserData_C__pf4061722237* b0l__K2Node_DynamicCast_AsUser_Data1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess10"))
	bool b0l__K2Node_DynamicCast_bSuccess10__pf;
	ARegUser_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_RegUser__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RegUser__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Tell DState P2Ready"))
	virtual void bpf__TellxDStatexP2Ready__pfTT();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="OnPostLogin"))
	virtual void bpf__OnPostLogin__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Spawn Player"))
	virtual void bpf__SpawnxPlayer__pfT();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="InformServerP2isReady"))
	virtual void bpf__InformServerP2isReady__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Debug - Go to main screen_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_DebugxxxGoxtoxmainxscreen_K2Node_InputActionEvent_3__pfTGTTTT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Player Start_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_4__pfT(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Use shitty cam_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Usexshittyxcam_K2Node_InputActionEvent_5__pfTT(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn Widget"))
	virtual void bpf__SpawnxWidget__pfT(UClass* bpp__Widgetxtoxspawn__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Remove Widget"))
	virtual void bpf__RemovexWidget__pfT(UUserWidget* bpp__WidgetxtoxRemove__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Change widget"))
	virtual void bpf__Changexwidget__pfT(UUserWidget* bpp__WidgetFrom__pf, UClass* bpp__WidgetTo__pf);
public:
};
