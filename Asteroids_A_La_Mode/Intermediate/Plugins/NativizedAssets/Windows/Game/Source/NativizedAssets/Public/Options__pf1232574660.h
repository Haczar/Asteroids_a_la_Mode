#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "ERenderValDirection__pf1232574660.h"
#include "EDisplayRes__pf1232574660.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "EOptionSel__pf1232574660.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "MenuBase__pf3166771619.h"
class UHorizontalBox;
class UTextBlock;
class APlayerC_Regular_C__pf4061722237;
class UDebugInstance_C__pf4162722864;
#include "Options__pf1232574660.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/Options.Options_C", OverrideNativeName="Options_C"))
class UOptions_C__pf1232574660 : public UMenuBase_C__pf3166771619
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Asteroids", Category="Options", OverrideNativeName="Asteroids"))
	UTextBlock* bpv__Asteroids__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DisplayModeOptions", Category="Options", OverrideNativeName="DisplayModeOptions"))
	UTextBlock* bpv__DisplayModeOptions__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Display Resolution", Category="Options", OverrideNativeName="DisplayResolution"))
	UHorizontalBox* bpv__DisplayResolution__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DisplayResolutionOptions", Category="Options", OverrideNativeName="DisplayResolutionOptions"))
	UTextBlock* bpv__DisplayResolutionOptions__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Graphics Skin", Category="Options", OverrideNativeName="GraphicsSkin"))
	UHorizontalBox* bpv__GraphicsSkin__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="GraphicsSkinOptions", Category="Options", OverrideNativeName="GraphicsSkinOptions"))
	UTextBlock* bpv__GraphicsSkinOptions__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Master Volume", Category="Options", OverrideNativeName="MasterVolume"))
	UHorizontalBox* bpv__MasterVolume__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Music Volume", Category="Options", OverrideNativeName="MusicVolume"))
	UHorizontalBox* bpv__MusicVolume__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Render Scale", Category="Options", OverrideNativeName="RenderScale"))
	UHorizontalBox* bpv__RenderScale__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RenderScaleOption", Category="Options", OverrideNativeName="RenderScaleOption"))
	UTextBlock* bpv__RenderScaleOption__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SFX Volume", Category="Options", OverrideNativeName="SFXVolume"))
	UHorizontalBox* bpv__SFXVolume__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Display Mode", Category="Options", OverrideNativeName="Text-DisplayMode"))
	UTextBlock* bpv__TextxDisplayMode__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Display Resolution", Category="Options", OverrideNativeName="Text-DisplayResolution"))
	UTextBlock* bpv__TextxDisplayResolution__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Graphics Skin", Category="Options", OverrideNativeName="Text-GraphicsSkin"))
	UTextBlock* bpv__TextxGraphicsSkin__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Master Volume", Category="Options", OverrideNativeName="Text-MasterVolume"))
	UTextBlock* bpv__TextxMasterVolume__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Music Volume", Category="Options", OverrideNativeName="Text-MusicVolume"))
	UTextBlock* bpv__TextxMusicVolume__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Render Scale", Category="Options", OverrideNativeName="Text-RenderScale"))
	UTextBlock* bpv__TextxRenderScale__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - SFX Volume", Category="Options", OverrideNativeName="Text-SFXVolume"))
	UTextBlock* bpv__TextxSFXVolume__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text-vSync", Category="Options", OverrideNativeName="Text-vSync"))
	UTextBlock* bpv__TextxvSync__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Vertical Sync", Category="Options", OverrideNativeName="VerticalSync"))
	UHorizontalBox* bpv__VerticalSync__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="vSyncOption", Category="Options", OverrideNativeName="vSyncOption"))
	UTextBlock* bpv__vSyncOption__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Windows display option", Category="Options", OverrideNativeName="Windowsdisplayoption"))
	UHorizontalBox* bpv__Windowsdisplayoption__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Option Selection", Category="Default", OverrideNativeName="Option Selection"))
	E__EOptionSel__pf bpv__OptionxSelection__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="In Option", Category="Default", OverrideNativeName="InOption"))
	bool bpv__InOption__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Window Mode Sel", Category="Default", OverrideNativeName="Window Mode Sel"))
	TEnumAsByte<EWindowMode::Type> bpv__WindowxModexSel__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Display Res Sel", Category="Default", OverrideNativeName="Display Res Sel"))
	E__EDisplayRes__pf bpv__DisplayxResxSel__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sel Res", Category="Default", OverrideNativeName="SelRes"))
	int32 bpv__SelRes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="V Sync String", Category="Default", OverrideNativeName="V_SyncString"))
	FText bpv__V_SyncString__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Render Scale Val", Category="Default", ClampMax="1000", ClampMin="1", OverrideNativeName="RenderScaleVal"))
	int32 bpv__RenderScaleVal__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Decrease Render Scale", Category="Default", OverrideNativeName="DecreaseRenderScale"))
	bool bpv__DecreaseRenderScale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Increase Render Scale", Category="Default", OverrideNativeName="IncreaseRenderScale"))
	bool bpv__IncreaseRenderScale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Render Val Direction", Category="Default", OverrideNativeName="RenderValDirection"))
	E__ERenderValDirection__pf bpv__RenderValDirection__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Val Change Interval", Category="Default", OverrideNativeName="ValChangeInterval"))
	float bpv__ValChangeInterval__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Elapsed Time", Category="Default", OverrideNativeName="ElapsedTime"))
	float bpv__ElapsedTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_C_Regular"))
	APlayerC_Regular_C__pf4061722237* b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum2_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum3_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum3_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum4_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum4_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance"))
	UDebugInstance_C__pf4162722864* b1l__K2Node_DynamicCast_AsDebug_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b1l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum5_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum5_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSupportedFullscreenResolutions_Resolutions"))
	TArray<FIntPoint> b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSupportedFullscreenResolutions_Resolutions1"))
	TArray<FIntPoint> b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FIntPoint b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum6_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum6_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	FIntPoint b1l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSupportedFullscreenResolutions_Resolutions2"))
	TArray<FIntPoint> b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	FIntPoint b1l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum7_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum7_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor1"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor2"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor3"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor4"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor5"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor6"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor7"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum8_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum8_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum9_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum9_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor8"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor9"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor10"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor11"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor12"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor13"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor14"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor15"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum10_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum10_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum11_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum11_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum12_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum12_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum13_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum13_CmpSuccess__pf;
	UOptions_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Options__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Up"))
	virtual void bpf__MenuxUp__pfT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Select"))
	virtual void bpf__MenuxSelect__pfT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Down Released"))
	virtual void bpf__MenuxDownxReleased__pfTT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Up Released"))
	virtual void bpf__MenuxUpxReleased__pfTT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Down"))
	virtual void bpf__MenuxDown__pfT() override;
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Back"))
	virtual void bpf__MenuxBack__pfT() override;
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
