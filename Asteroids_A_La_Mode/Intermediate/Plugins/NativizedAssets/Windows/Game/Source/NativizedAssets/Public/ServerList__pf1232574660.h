#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "EServerSel__pf1232574660.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "MenuBase__pf3166771619.h"
class UServerRow_C__pf1232574660;
class UTextBlock;
class UScrollBox;
class UVerticalBox;
class UButton;
class UHorizontalBox;
class UDebugInstance_C__pf4162722864;
#include "ServerList__pf1232574660.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/ServerList.ServerList_C", OverrideNativeName="ServerList_C"))
class UServerList_C__pf1232574660 : public UMenuBase_C__pf3166771619
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BackButton", Category="ServerList", OverrideNativeName="BackButton"))
	UButton* bpv__BackButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ColumnNames", Category="ServerList", OverrideNativeName="ColumnNames"))
	UHorizontalBox* bpv__ColumnNames__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RefreshButton", Category="ServerList", OverrideNativeName="RefreshButton"))
	UButton* bpv__RefreshButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResultsContainer", Category="ServerList", OverrideNativeName="ResultsContainer"))
	UVerticalBox* bpv__ResultsContainer__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollingServers", Category="ServerList", OverrideNativeName="ScrollingServers"))
	UScrollBox* bpv__ScrollingServers__pf;
	UPROPERTY(Export, meta=(DisplayName="StatusMessage", OverrideNativeName="StatusMessage"))
	UTextBlock* bpv__StatusMessage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text- Back", Category="ServerList", OverrideNativeName="Text-Back"))
	UTextBlock* bpv__TextxBack__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text - Refresh", Category="ServerList", OverrideNativeName="Text-Refresh"))
	UTextBlock* bpv__TextxRefresh__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inside Server List", Category="States", OverrideNativeName="InsideServerList"))
	bool bpv__InsideServerList__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Refresh Button Enabled", Category="States", OverrideNativeName="RefreshButtonEnabled"))
	bool bpv__RefreshButtonEnabled__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Status Text Visibility", Category="States", OverrideNativeName="StatusTextVisibility"))
	ESlateVisibility bpv__StatusTextVisibility__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Status Text", Category="Default", OverrideNativeName="StatusText"))
	FString bpv__StatusText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Found Session Widgets", Category="Default", OverrideNativeName="FoundSessionWidgets"))
	TArray<UServerRow_C__pf1232574660*> bpv__FoundSessionWidgets__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Server Sel", Category="States", OverrideNativeName="ServerSel"))
	E__EServerSel__pf bpv__ServerSel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Server Row Sel", Category="States", OverrideNativeName="ServerRowSel"))
	int32 bpv__ServerRowSel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance"))
	UDebugInstance_C__pf4162722864* b1l__K2Node_DynamicCast_AsDebug_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UServerRow_C__pf1232574660* b1l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance1"))
	UDebugInstance_C__pf4162722864* b1l__K2Node_DynamicCast_AsDebug_Instance1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b1l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b1l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsServer_Row"))
	UServerRow_C__pf1232574660* b1l__K2Node_DynamicCast_AsServer_Row__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b1l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable1"))
	int32 b1l__Temp_int_Loop_Counter_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FBlueprintSessionResult b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable1"))
	int32 b1l__Temp_int_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance2"))
	UDebugInstance_C__pf4162722864* b1l__K2Node_DynamicCast_AsDebug_Instance2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b1l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsServer_Row1"))
	UServerRow_C__pf1232574660* b1l__K2Node_DynamicCast_AsServer_Row1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b1l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor1"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue1"))
	UServerRow_C__pf1232574660* b1l__CallFunc_Create_ReturnValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum2_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum3_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum3_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsServer_Row2"))
	UServerRow_C__pf1232574660* b1l__K2Node_DynamicCast_AsServer_Row2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b1l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsServer_Row3"))
	UServerRow_C__pf1232574660* b1l__K2Node_DynamicCast_AsServer_Row3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b1l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor2"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable1"))
	int32 b1l__Temp_int_Array_Index_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item1"))
	FBlueprintSessionResult b1l__CallFunc_Array_Get_Item1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor3"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum4_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum4_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsServer_Row4"))
	UServerRow_C__pf1232574660* b1l__K2Node_DynamicCast_AsServer_Row4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b1l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsServer_Row5"))
	UServerRow_C__pf1232574660* b1l__K2Node_DynamicCast_AsServer_Row5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b1l__K2Node_DynamicCast_bSuccess8__pf;
	UServerList_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ServerList__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ServerList_1"))
	void bpf__ExecuteUbergraph_ServerList__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ServerList_2"))
	void bpf__ExecuteUbergraph_ServerList__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ServerList__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ServerList__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Back"))
	virtual void bpf__MenuxBack__pfT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Select"))
	virtual void bpf__MenuxSelect__pfT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Down"))
	virtual void bpf__MenuxDown__pfT() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Menu Up"))
	virtual void bpf__MenuxUp__pfT() override;
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Status Message Visibility"))
	virtual void bpf__GetxStatusxMessagexVisibility__pfTTT(/*out*/ ESlateVisibility& bpp__ReturnxValue__pfT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Status Message Text"))
	virtual FText  bpf__GetxStatusxMessagexText__pfTTT();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Refresh Button Enabled"))
	virtual void bpf__GetxRefreshxButtonxEnabled__pfTTT(/*out*/ bool& bpp__ReturnxValue__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Clear ServerList"))
	virtual void bpf__ClearxServerList__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Go back to Mainscreen"))
	virtual void bpf__GoxbackxtoxMainscreen__pfTTT();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
