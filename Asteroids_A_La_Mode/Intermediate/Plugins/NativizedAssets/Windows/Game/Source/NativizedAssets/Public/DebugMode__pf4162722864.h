#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "1979Rounds__pf2955639682.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
class AAsteroid_C__pf2772898577;
class UClass;
class ASpawn_Volume_C__pf2174024837;
class USceneComponent;
class ADebugState_C__pf4162722864;
class APlayerController;
class APlayerC_Regular_C__pf4061722237;
class APlyrState_C__pf4061722237;
class AController;
class APlayerStart;
class UDebugInstance_C__pf4162722864;
class AActor;
#include "DebugMode__pf4162722864.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Debug/DebugMode.DebugMode_C", OverrideNativeName="DebugMode_C"))
class ADebugMode_C__pf4162722864 : public AGameMode
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="1979 Game Started", Category="Asteroids 1979", OverrideNativeName="1979 GameStarted"))
	bool bpv__1979xGameStarted__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="1979 Asteroid Spawn Rate", Category="Asteroids 1979", OverrideNativeName="1979 AsteroidSpawnRate"))
	float bpv__1979xAsteroidSpawnRate__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Volumes", Category="Default", OverrideNativeName="SpawnVolumes"))
	TArray<ASpawn_Volume_C__pf2174024837*> bpv__SpawnVolumes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Asteroid Obstacles", Category="Default", OverrideNativeName="Asteroid Obstacles"))
	TArray<UClass*> bpv__AsteroidxObstacles__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="1979 Alien Spawn Rate", Category="Asteroids 1979", OverrideNativeName="1979 AlienSpawnRate"))
	float bpv__1979xAlienSpawnRate__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Num Bounds", Category="Default", OverrideNativeName="NumBounds"))
	int32 bpv__NumBounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="1979 Rounds", Category="Asteroids 1979", OverrideNativeName="1979 Rounds"))
	E__1979Rounds__pf bpv__1979xRounds__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="1979 Asteroid Count", Category="Asteroids 1979", OverrideNativeName="1979 Asteroid Count"))
	int32 bpv__1979xAsteroidxCount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="1979 Round in Session", Category="Asteroids 1979", OverrideNativeName="1979 Round In Session"))
	bool bpv__1979xRoundxInxSession__pfTTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ASpawn_Volume_C__pf2174024837*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Ship_Owner"))
	APlayerController* b0l__K2Node_CustomEvent_Ship_Owner__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_C_Regular"))
	APlayerC_Regular_C__pf4061722237* b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlyr_State"))
	APlyrState_C__pf4061722237* b0l__K2Node_DynamicCast_AsPlyr_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State1"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State2"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ASpawn_Volume_C__pf2174024837* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ExitingController"))
	AController* b0l__K2Node_Event_ExitingController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State3"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewPlayer"))
	APlayerController* b0l__K2Node_Event_NewPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_C_Regular1"))
	APlayerC_Regular_C__pf4061722237* b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum1_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum1_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State4"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State5"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b0l__K2Node_DynamicCast_bSuccess8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_Player_Controller_Reference_Player_Set"))
	uint8 b0l__CallFunc_Set_Player_Controller_Reference_Player_Set__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_C_Regular2"))
	APlayerC_Regular_C__pf4061722237* b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess9"))
	bool b0l__K2Node_DynamicCast_bSuccess9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_Controller_Ref"))
	APlayerController* b0l__K2Node_CustomEvent_Player_Controller_Ref__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_Start_Ref"))
	APlayerStart* b0l__K2Node_CustomEvent_Player_Start_Ref__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Color"))
	FLinearColor b0l__K2Node_CustomEvent_Color__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State6"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess10"))
	bool b0l__K2Node_DynamicCast_bSuccess10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State7"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess11"))
	bool b0l__K2Node_DynamicCast_bSuccess11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum2_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_State8"))
	ADebugState_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_State8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess12"))
	bool b0l__K2Node_DynamicCast_bSuccess12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Instance"))
	UDebugInstance_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess13"))
	bool b0l__K2Node_DynamicCast_bSuccess13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum3_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum3_CmpSuccess__pf;
	ADebugMode_C__pf4162722864(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DebugMode__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMode__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Spawn Ship"))
	virtual void bpf__SpawnxShip__pfT(APlayerController* bpp__PlayerxControllerxRef__pfTT, APlayerStart* bpp__PlayerxStartxRef__pfTT, FLinearColor bpp__Color__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnPostLogin", ScriptName="OnPostLogin", ToolTip="Notification that a player has successfully logged in, and has been given a player controller", CppFromBpEvent, OverrideNativeName="K2_PostLogin"))
	void bpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf);
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="State Changed"))
	virtual void bpf__StatexChanged__pfT();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnLogout", ScriptName="OnLogout", ToolTip="Implementable event when a Controller with a PlayerState leaves the game.", CppFromBpEvent, OverrideNativeName="K2_OnLogout"))
	void bpf__K2_OnLogout__pf(AController* bpp__ExitingController__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Ship Destroyed"))
	virtual void bpf__ShipxDestroyed__pfT(APlayerController* bpp__ShipxOwner__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Start Round"))
	virtual void bpf__StartxRound__pfT();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	virtual AActor*  ChoosePlayerStart_Implementation(AController* bpp__Player__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Setup MainMenu"))
	virtual void bpf__SetupxMainMenu__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Setup DebugMode"))
	virtual void bpf__SetupxDebugMode__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category="Asteroids1979", OverrideNativeName="Setup Arcade1979"))
	virtual void bpf__SetupxArcade1979__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category="Asteroids1979", OverrideNativeName="Spawn Asteroids"))
	virtual void bpf__SpawnxAsteroids__pfT(int32 bpp__Howxmanyx__pfTzy);
public:
};
