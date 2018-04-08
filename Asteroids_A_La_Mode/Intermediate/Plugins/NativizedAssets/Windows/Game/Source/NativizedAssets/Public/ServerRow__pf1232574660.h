#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UButton;
class UDebugInstance_C__pf4162722864;
#include "ServerRow__pf1232574660.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/ServerRow.ServerRow_C", OverrideNativeName="ServerRow_C"))
class UServerRow_C__pf1232574660 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ServerRow", Category="ServerRow", OverrideNativeName="ServerRow"))
	UButton* bpv__ServerRow__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Counts", Category="Default", OverrideNativeName="PlayerCounts"))
	FString bpv__PlayerCounts__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Search Result", Category="Default", BlueprintPrivate="true", OverrideNativeName="SearchResult"))
	FBlueprintSessionResult bpv__SearchResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance"))
	UDebugInstance_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UServerRow_C__pf1232574660(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ServerRow__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Server Name"))
	virtual FText  bpf__GetxServerxName__pfTT();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Ping"))
	virtual FText  bpf__GetxPing__pfT();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPlayerCountText"))
	virtual FText  bpf__GetPlayerCountText__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSearchResult"))
	virtual void bpf__SetSearchResult__pf(FBlueprintSessionResult bpp__FoundxSession__pfT);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
