#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
class AActor;
class UClass;
class APlayerStart;
class ASpawn_Volume_C__pf2174024837;
class USceneComponent;
class APlayerController_1979_C__pf2955639682;
class APlayerState_1979_C__pf2955639682;
class APlayerController;
class AGameState_1979_C__pf2955639682;
#include "Asteroids1979__pf2955639682.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Arcade1979/Asteroids1979.Asteroids1979_C", OverrideNativeName="Asteroids1979_C"))
class AAsteroids1979_C__pf2955639682 : public AGameMode
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Volumes", Category="Default", OverrideNativeName="SpawnVolumes"))
	TArray<ASpawn_Volume_C__pf2174024837*> bpv__SpawnVolumes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Starts", Category="Default", OverrideNativeName="PlayerStarts"))
	TArray<APlayerStart*> bpv__PlayerStarts__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Alien Spawn Count", Category="Default", OverrideNativeName="AlienSpawnCount"))
	float bpv__AlienSpawnCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Alien Spawn Rate", Category="Default", OverrideNativeName="AlienSpawnRate"))
	float bpv__AlienSpawnRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Started?", Category="Default", OverrideNativeName="LevelStarted?"))
	bool bpv__LevelStartedx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Aliens", Category="Default", OverrideNativeName="Aliens"))
	TArray<UClass*> bpv__Aliens__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Instigator"))
	AActor* b0l__K2Node_CustomEvent_Instigator__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller_1979"))
	APlayerController_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_State_1979"))
	APlayerState_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewPlayer"))
	APlayerController* b0l__K2Node_Event_NewPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors1"))
	TArray<ASpawn_Volume_C__pf2174024837*> b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_State_1979"))
	AGameState_1979_C__pf2955639682* b0l__K2Node_DynamicCast_AsGame_State_1979__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	AAsteroids1979_C__pf2955639682(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Asteroids1979__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Asteroids1979_1"))
	void bpf__ExecuteUbergraph_Asteroids1979__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Asteroids1979__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Asteroids1979__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="PlayerDied"))
	virtual void bpf__PlayerDied__pf(AActor* bpp__Instigator__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnPostLogin", ScriptName="OnPostLogin", ToolTip="Notification that a player has successfully logged in, and has been given a player controller", CppFromBpEvent, OverrideNativeName="K2_PostLogin"))
	void bpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnLargeAsteroids"))
	virtual void bpf__SpawnLargeAsteroids__pf(int32 bpp__HowMany__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnAliens"))
	virtual void bpf__SpawnAliens__pf();
public:
};
