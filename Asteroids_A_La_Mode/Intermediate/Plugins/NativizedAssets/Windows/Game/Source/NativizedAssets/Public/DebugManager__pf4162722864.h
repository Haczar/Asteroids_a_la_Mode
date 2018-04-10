#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "DStates__pf4162722864.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class USaveObj_C__pf4061722237;
class AGameNetworkManager;
class ARegUser_C__pf4061722237;
class UCreateSessionCallbackProxy;
class UDestroySessionCallbackProxy;
class UJoinSessionCallbackProxy;
class UFindSessionsCallbackProxy;
#include "DebugManager__pf4162722864.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Modes/Debug/DebugManager.DebugManager_C", OverrideNativeName="DebugManager_C"))
class UDebugManager_C__pf4162722864 : public UGameInstance
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="BlueprintFindSessionsResultDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0, TArray<FBlueprintSessionResult> const& , bpp__Results__pf);
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_1);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lan?", Category="Default", OverrideNativeName="Lan?"))
	bool bpv__Lanx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Found Games", Category="Default", OverrideNativeName="Found Games"))
	TArray<FBlueprintSessionResult> bpv__FoundxGames__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Network Manager??!?!?!", Category="Default", OverrideNativeName="NetworkManager??!?!?!"))
	AGameNetworkManager* bpv__NetworkManagerxxxxxxx__pfzyzySzySzyS;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Search Complete", Category="Default", OverrideNativeName="Search Complete"))
	bool bpv__SearchxComplete__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="User Info", Category="Default", OverrideNativeName="User Info"))
	USaveObj_C__pf4061722237* bpv__UserxInfo__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Results1"))
	TArray<FBlueprintSessionResult> b0l__K2Node_CustomEvent_Results1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Results"))
	TArray<FBlueprintSessionResult> b0l__K2Node_CustomEvent_Results__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate1"))
	F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	TArray<FBlueprintSessionResult> b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate3"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate4"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate5"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FBlueprintSessionResult b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Session_to_join"))
	FBlueprintSessionResult b0l__K2Node_CustomEvent_Session_to_join__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSession_ReturnValue"))
	UCreateSessionCallbackProxy* b0l__CallFunc_CreateSession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate6"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_FailureType1"))
	TEnumAsByte<ENetworkFailure::Type> b0l__K2Node_Event_FailureType1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bIsServer"))
	bool b0l__K2Node_Event_bIsServer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_FailureType"))
	TEnumAsByte<ETravelFailure::Type> b0l__K2Node_Event_FailureType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TravelError_to_String_Error"))
	FString b0l__CallFunc_TravelError_to_String_Error__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_NetError_to_String_Error_Text"))
	FString b0l__CallFunc_NetError_to_String_Error_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DestroySession_ReturnValue"))
	UDestroySessionCallbackProxy* b0l__CallFunc_DestroySession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue1"))
	bool b0l__CallFunc_IsValid_ReturnValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User1"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_JoinSession_ReturnValue"))
	UJoinSessionCallbackProxy* b0l__CallFunc_JoinSession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate7"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue2"))
	bool b0l__CallFunc_IsValid_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReg_User2"))
	ARegUser_C__pf4061722237* b0l__K2Node_DynamicCast_AsReg_User2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FindSessions_ReturnValue"))
	UFindSessionsCallbackProxy* b0l__CallFunc_FindSessions_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue3"))
	bool b0l__CallFunc_IsValid_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UDebugManager_C__pf4162722864(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DebugManager__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_DebugManager_7"))
	void bpf__ExecuteUbergraph_DebugManager__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DebugManager__pf_20(int32 bpp__EntryPoint__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Load Settings"))
	virtual void bpf__LoadxSettings__pfT();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Set DebugM to Arcade1979"))
	virtual void bpf__SetxDebugMxtoxArcade1979__pfTTT();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Set DebugM to DebugMode"))
	virtual void bpf__SetxDebugMxtoxDebugMode__pfTTT();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Set DebugM to MainScreen"))
	virtual void bpf__SetxDebugMxtoxMainScreen__pfTTT();
	UFUNCTION(meta=(DisplayName="Init", ToolTip="Opportunity for blueprints to handle the game instance being initialized.", CppFromBpEvent, OverrideNativeName="ReceiveInit"))
	void bpf__ReceiveInit__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowLoadingScreen"))
	virtual void bpf__ShowLoadingScreen__pf();
	UFUNCTION(meta=(DisplayName="TravelError", ToolTip="Opportunity for blueprints to handle travel errors.", CppFromBpEvent, OverrideNativeName="HandleTravelError"))
	void bpf__HandleTravelError__pf(ETravelFailure::Type bpp__FailureType__pf);
	UFUNCTION(meta=(DisplayName="NetworkError", ToolTip="Opportunity for blueprints to handle network errors.", CppFromBpEvent, OverrideNativeName="HandleNetworkError"))
	void bpf__HandleNetworkError__pf(ENetworkFailure::Type bpp__FailureType__pf, bool bpp__bIsServer__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="DestroySesh"))
	virtual void bpf__DestroySesh__pf();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Find Games"))
	virtual void bpf__FindxGames__pfT();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Create Coop"))
	virtual void bpf__CreatexCoop__pfT();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Leave Game"))
	virtual void bpf__LeavexGame__pfT();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Join Game"))
	virtual void bpf__JoinxGame__pfT(FBlueprintSessionResult bpp__Sessionxtoxjoin__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F"))
	virtual void bpf__OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F"))
	virtual void bpf__OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_50E2515040AAF84455FDB1ADB5219E72"))
	virtual void bpf__OnSuccess_50E2515040AAF84455FDB1ADB5219E72__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_50E2515040AAF84455FDB1ADB5219E72"))
	virtual void bpf__OnFailure_50E2515040AAF84455FDB1ADB5219E72__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_8AFB58C5443B5AFADD60D0925753A253"))
	virtual void bpf__OnSuccess_8AFB58C5443B5AFADD60D0925753A253__pf(TArray<FBlueprintSessionResult> const& bpp__Results__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_8AFB58C5443B5AFADD60D0925753A253"))
	virtual void bpf__OnFailure_8AFB58C5443B5AFADD60D0925753A253__pf(TArray<FBlueprintSessionResult> const& bpp__Results__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E"))
	virtual void bpf__OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_7C4156FE49C8B859B34E9083CCA81E0E"))
	virtual void bpf__OnFailure_7C4156FE49C8B859B34E9083CCA81E0E__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Change State"))
	virtual void bpf__ChangexState__pfT(E__DStates__pf bpp__DesiredxState__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Load Level"))
	virtual void bpf__LoadxLevel__pfT(const FString& bpp__LevelxName__pfT__const);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="NetError to String"))
	virtual void bpf__NetErrorxtoxString__pfTT(ENetworkFailure::Type bpp__NetxError__pfT, /*out*/ FString& bpp__ErrorxText__pfT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="TravelError to String"))
	virtual void bpf__TravelErrorxtoxString__pfTT(ETravelFailure::Type bpp__TravelError__pf, /*out*/ FString& bpp__Error__pf);
public:
};
