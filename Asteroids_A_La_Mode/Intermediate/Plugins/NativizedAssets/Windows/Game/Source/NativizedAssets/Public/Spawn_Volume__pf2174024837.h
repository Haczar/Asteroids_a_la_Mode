#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BorderSide__pf2174024837.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class AActor;
class UClass;
class UBoxComponent;
#include "Spawn_Volume__pf2174024837.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Levels/Assets/Colliders/Spawn_Volume.Spawn_Volume_C,/Game/Levels/Assets/Colliders/LevelBorder_Volume.LevelBorder_Volume_C", OverrideNativeName="Spawn_Volume_C"))
class ASpawn_Volume_C__pf2174024837 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box Collider"))
	UBoxComponent* bpv__BoxxCollider__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Side", Category="Default", OverrideNativeName="Side"))
	E__BorderSide__pf bpv__Side__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Warping Offset", Category="Default", OverrideNativeName="WarpingOffset"))
	float bpv__WarpingOffset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spawn Rot Min", Category="Default", OverrideNativeName="SpawnRot_Min"))
	float bpv__SpawnRot_Min__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spawn Rot Max", Category="Default", OverrideNativeName="SpawnRot_Max"))
	float bpv__SpawnRot_Max__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewParam"))
	UClass* b0l__K2Node_CustomEvent_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Alien_Class"))
	UClass* b0l__K2Node_CustomEvent_Alien_Class__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin"))
	FVector b0l__CallFunc_GetComponentBounds_Origin__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin1"))
	FVector b0l__CallFunc_GetComponentBounds_Origin1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent1"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius1"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin2"))
	FVector b0l__CallFunc_GetComponentBounds_Origin2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent2"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius2"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll1"))
	float b0l__CallFunc_BreakRotator_Roll1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch1"))
	float b0l__CallFunc_BreakRotator_Pitch1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw1"))
	float b0l__CallFunc_BreakRotator_Yaw1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll2"))
	float b0l__CallFunc_BreakRotator_Roll2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch2"))
	float b0l__CallFunc_BreakRotator_Pitch2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw2"))
	float b0l__CallFunc_BreakRotator_Yaw2__pf;
	ASpawn_Volume_C__pf2174024837(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Spawn_Volume__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawn_Volume__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawn_Volume__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn Large Asteroid"))
	virtual void bpf__SpawnxLargexAsteroid__pfTT();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="SpawnAlienOnServer"))
	virtual void bpf__SpawnAlienOnServer__pf(UClass* bpp__AlienxClass__pfT);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="SpawnAsteroidOnServer"))
	virtual void bpf__SpawnAsteroidOnServer__pf(UClass* bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
