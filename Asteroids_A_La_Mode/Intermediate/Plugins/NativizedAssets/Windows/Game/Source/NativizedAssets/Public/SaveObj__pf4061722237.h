#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SaveObj__pf4061722237.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Player/SaveObj.SaveObj_C", OverrideNativeName="SaveObj_C"))
class USaveObj_C__pf4061722237 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Window Display Mode", Category="Default", OverrideNativeName="WindowDisplayMode"))
	TEnumAsByte<EWindowMode::Type> bpv__WindowDisplayMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Supported Resolutions Ref", Category="Default", OverrideNativeName="Supported Resolutions Ref"))
	TArray<FIntPoint> bpv__SupportedxResolutionsxRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Resolution Ref", Category="Default", OverrideNativeName="Default Resolution Ref"))
	FIntPoint bpv__DefaultxResolutionxRef__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Desired_Mode"))
	TEnumAsByte<EWindowMode::Type> b0l__K2Node_CustomEvent_Desired_Mode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSupportedFullscreenResolutions_Resolutions"))
	TArray<FIntPoint> b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf;
	USaveObj_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SaveObj__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SaveObj__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Window Mode"))
	virtual void bpf__SetxWindowxMode__pfTT(EWindowMode::Type bpp__DesiredxMode__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get Info on Env from Unreal"))
	virtual void bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT();
public:
};
