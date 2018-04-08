#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "DStates__pf4162722864.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
class ACameraActor;
class APlayerController;
class APlayerStart;
class USceneComponent;
class ARegUser_C__pf4061722237;
class UGameStart_C__pf3166771619;
class UInGameHud_C__pf515974370;
class ADebugMode_C__pf4162722864;
class AUserData_C__pf4061722237;
#include "DebugMData__pf4162722864.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Debug/DebugMData.DebugMData_C", OverrideNativeName="DebugMData_C"))
class ADebugMData_C__pf4162722864 : public AGameState
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_PlayerStart 1 Ref", meta=(DisplayName="Player Start 1 Ref", Category="Player 1", OverrideNativeName="PlayerStart 1 Ref"))
	APlayerStart* bpv__PlayerStartx1xRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Start 2 Ref", Category="Player 2", OverrideNativeName="PlayerStart 2 Ref"))
	APlayerStart* bpv__PlayerStartx2xRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_ScoreP1", meta=(DisplayName="Score P1", Category="Player 1", OverrideNativeName="ScoreP1"))
	int32 bpv__ScoreP1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Lives Left P1", meta=(DisplayName="Lives Left P1", Category="Player 1", OverrideNativeName="Lives Left P1"))
	int32 bpv__LivesxLeftxP1__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_ScoreP2", meta=(DisplayName="Score P2", Category="Player 2", OverrideNativeName="ScoreP2"))
	int32 bpv__ScoreP2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_ScoreTotal", meta=(DisplayName="Score Total", Category="General", OverrideNativeName="ScoreTotal"))
	int32 bpv__ScoreTotal__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Lives Left Shared", meta=(DisplayName="Lives Left Shared", Category="General", OverrideNativeName="Lives Left Shared"))
	int32 bpv__LivesxLeftxShared__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Lives Left P2", meta=(DisplayName="Lives Left P2", Category="Player 2", OverrideNativeName="Lives Left P2"))
	int32 bpv__LivesxLeftxP2__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_EDebugState", meta=(DisplayName="EDebug State", Category="Default", OverrideNativeName="EDebugState"))
	E__DStates__pf bpv__EDebugState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_PlayerC 1 Ref", meta=(DisplayName="Player C 1 Ref", Category="Player 1", OverrideNativeName="PlayerC 1 Ref"))
	APlayerController* bpv__PlayerCx1xRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_PlayerC 2 Ref", meta=(DisplayName="Player C 2 Ref", Category="Player 2", OverrideNativeName="PlayerC 2 Ref"))
	APlayerController* bpv__PlayerCx2xRef__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Cam One", meta=(DisplayName="Cam One", Category="Player 1", OverrideNativeName="Cam One"))
	ACameraActor* bpv__CamxOne__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Cam Two", meta=(DisplayName="Cam Two", Category="Player 2", OverrideNativeName="Cam Two"))
	ACameraActor* bpv__CamxTwo__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shitty Cam", Category="Default", OverrideNativeName="Shitty cam"))
	ACameraActor* bpv__Shittyxcam__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Player2Ready", meta=(DisplayName="Player 2Ready", Category="Player 2", OverrideNativeName="Player2Ready"))
	bool bpv__Player2Ready__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_"))
	bool b0l__K2Node_CustomEvent_Player___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Amount"))
	int32 b0l__K2Node_CustomEvent_Amount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_Ref"))
	APlayerController* b0l__K2Node_CustomEvent_Player_Ref__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User1"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Start"))
	UGameStart_C__pf3166771619* b0l__K2Node_DynamicCast_AsGame_Start__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User2"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_to_add_"))
	bool b0l__K2Node_CustomEvent_Player_to_add___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User3"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsIn_Game_Hud"))
	UInGameHud_C__pf515974370* b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User4"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_1"))
	bool b0l__K2Node_CustomEvent_Player_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Number_of_Lives_to_Take"))
	int32 b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player_2"))
	bool b0l__K2Node_CustomEvent_Player_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Number_of_Lives_to_Give"))
	int32 b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDebug_Mode"))
	ADebugMode_C__pf4162722864* b0l__K2Node_DynamicCast_AsDebug_Mode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Desired_State"))
	E__DStates__pf b0l__K2Node_CustomEvent_Desired_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User5"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b0l__K2Node_DynamicCast_bSuccess8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsIn_Game_Hud1"))
	UInGameHud_C__pf515974370* b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess9"))
	bool b0l__K2Node_DynamicCast_bSuccess9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User6"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess10"))
	bool b0l__K2Node_DynamicCast_bSuccess10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsIn_Game_Hud2"))
	UInGameHud_C__pf515974370* b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess11"))
	bool b0l__K2Node_DynamicCast_bSuccess11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Data"))
	AUserData_C__pf4061722237* b0l__K2Node_DynamicCast_AsUser_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess12"))
	bool b0l__K2Node_DynamicCast_bSuccess12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUser_Data1"))
	AUserData_C__pf4061722237* b0l__K2Node_DynamicCast_AsUser_Data1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess13"))
	bool b0l__K2Node_DynamicCast_bSuccess13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User7"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess14"))
	bool b0l__K2Node_DynamicCast_bSuccess14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User8"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess15"))
	bool b0l__K2Node_DynamicCast_bSuccess15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsIn_Game_Hud3"))
	UInGameHud_C__pf515974370* b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess16"))
	bool b0l__K2Node_DynamicCast_bSuccess16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsIn_Game_Hud4"))
	UInGameHud_C__pf515974370* b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess17"))
	bool b0l__K2Node_DynamicCast_bSuccess17__pf;
	ADebugMData_C__pf4162722864(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DebugMData__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugMData__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Add Player"))
	virtual void bpf__AddxPlayer__pfT(bool bpp__Playerxtoxaddx__pfTTzy);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Send Player\'s to Game Over Screen"))
	virtual void bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Set PlayerRef"))
	virtual void bpf__SetxPlayerRef__pfT(APlayerController* bpp__PlayerxRef__pfT);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Player2IsReady"))
	virtual void bpf__Player2IsReady__pf();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Give Points"))
	virtual void bpf__GivexPoints__pfT(bool bpp__Playerx__pfzy, int32 bpp__Amount__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Take Player Life"))
	virtual void bpf__TakexPlayerxLife__pfTT(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxTake__pfTTTT);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Give Player Life"))
	virtual void bpf__GivexPlayerxLife__pfTT(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxGive__pfTTTT);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Set State"))
	virtual void bpf__SetxState__pfT(E__DStates__pf bpp__DesiredxState__pfT);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Player Controller Reference"))
	virtual void bpf__SetxPlayerxControllerxReference__pfTTT(APlayerController* bpp__PlayerxControllerxReference__pfTT, /*out*/ uint8& bpp__PlayerxSet__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Player Start Ref"))
	virtual void bpf__SetxPlayerxStartxRef__pfTTT(APlayerStart* bpp__PlayerxStartxReference__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get DMode State"))
	virtual void bpf__GetxDModexState__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_PlayerC 2 Ref"))
	virtual void bpf__OnRep_PlayerCx2xRef__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Lives Left P2"))
	virtual void bpf__OnRep_LivesxLeftxP2__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_PlayerStart 1 Ref"))
	virtual void bpf__OnRep_PlayerStartx1xRef__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_ScoreP1"))
	virtual void bpf__OnRep_ScoreP1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Lives Left P1"))
	virtual void bpf__OnRep_LivesxLeftxP1__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_PlayerC 1 Ref"))
	virtual void bpf__OnRep_PlayerCx1xRef__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_ScoreTotal"))
	virtual void bpf__OnRep_ScoreTotal__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Lives Left Shared"))
	virtual void bpf__OnRep_LivesxLeftxShared__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Cam Two"))
	virtual void bpf__OnRep_CamxTwo__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Cam One"))
	virtual void bpf__OnRep_CamxOne__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_EDebugState"))
	virtual void bpf__OnRep_EDebugState__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Player2Ready"))
	virtual void bpf__OnRep_Player2Ready__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_ScoreP2"))
	virtual void bpf__OnRep_ScoreP2__pf();
public:
};
