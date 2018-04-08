// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/DebugState__pf4162722864.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugState__pf4162722864() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugState_C__pf4162722864();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__AddxPlayer__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GetxDModexState__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GivexPlayerxLife__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GivexPoints__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__Player2IsReady__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerRef__pfT();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerxControllerxReference__pfTTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerxStartxRef__pfTTT();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxState__pfT();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__DStates__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__TakexPlayerxLife__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlyrState_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugMode_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameStart_C__pf3166771619_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_ADebugState_C__pf4162722864_bpf__AddxPlayer__pfT = FName(TEXT("Add Player"));
	void ADebugState_C__pf4162722864::bpf__AddxPlayer__pfT(bool bpp__Playerxtoxaddx__pfTTzy)
	{
		DebugState_C__pf4162722864_eventbpf__AddxPlayer__pfT_Parms Parms;
		Parms.bpp__Playerxtoxaddx__pfTTzy=bpp__Playerxtoxaddx__pfTTzy ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__AddxPlayer__pfT),&Parms);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__GivexPlayerxLife__pfTT = FName(TEXT("Give Player Life"));
	void ADebugState_C__pf4162722864::bpf__GivexPlayerxLife__pfTT(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxGive__pfTTTT)
	{
		DebugState_C__pf4162722864_eventbpf__GivexPlayerxLife__pfTT_Parms Parms;
		Parms.bpp__Playerx__pfzy=bpp__Playerx__pfzy ? true : false;
		Parms.bpp__NumberxofxLivesxtoxGive__pfTTTT=bpp__NumberxofxLivesxtoxGive__pfTTTT;
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__GivexPlayerxLife__pfTT),&Parms);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__GivexPoints__pfT = FName(TEXT("Give Points"));
	void ADebugState_C__pf4162722864::bpf__GivexPoints__pfT(bool bpp__Playerx__pfzy, int32 bpp__Amount__pf)
	{
		DebugState_C__pf4162722864_eventbpf__GivexPoints__pfT_Parms Parms;
		Parms.bpp__Playerx__pfzy=bpp__Playerx__pfzy ? true : false;
		Parms.bpp__Amount__pf=bpp__Amount__pf;
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__GivexPoints__pfT),&Parms);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__Player2IsReady__pf = FName(TEXT("Player2IsReady"));
	void ADebugState_C__pf4162722864::bpf__Player2IsReady__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__Player2IsReady__pf),NULL);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT = FName(TEXT("Send Player's to Game Over Screen"));
	void ADebugState_C__pf4162722864::bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT),NULL);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__SetxPlayerRef__pfT = FName(TEXT("Set PlayerRef"));
	void ADebugState_C__pf4162722864::bpf__SetxPlayerRef__pfT(APlayerController* bpp__PlayerxRef__pfT)
	{
		DebugState_C__pf4162722864_eventbpf__SetxPlayerRef__pfT_Parms Parms;
		Parms.bpp__PlayerxRef__pfT=bpp__PlayerxRef__pfT;
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__SetxPlayerRef__pfT),&Parms);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__SetxState__pfT = FName(TEXT("Set State"));
	void ADebugState_C__pf4162722864::bpf__SetxState__pfT(E__DStates__pf bpp__DesiredxState__pfT)
	{
		DebugState_C__pf4162722864_eventbpf__SetxState__pfT_Parms Parms;
		Parms.bpp__DesiredxState__pfT=bpp__DesiredxState__pfT;
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__SetxState__pfT),&Parms);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__TakexPlayerxLife__pfTT = FName(TEXT("Take Player Life"));
	void ADebugState_C__pf4162722864::bpf__TakexPlayerxLife__pfTT(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxTake__pfTTTT)
	{
		DebugState_C__pf4162722864_eventbpf__TakexPlayerxLife__pfTT_Parms Parms;
		Parms.bpp__Playerx__pfzy=bpp__Playerx__pfzy ? true : false;
		Parms.bpp__NumberxofxLivesxtoxTake__pfTTTT=bpp__NumberxofxLivesxtoxTake__pfTTTT;
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__TakexPlayerxLife__pfTT),&Parms);
	}
	static FName NAME_ADebugState_C__pf4162722864_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ADebugState_C__pf4162722864::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADebugState_C__pf4162722864_bpf__UserConstructionScript__pf),NULL);
	}
	void ADebugState_C__pf4162722864::StaticRegisterNativesADebugState_C__pf4162722864()
	{
		UClass* Class = ADebugState_C__pf4162722864::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add Player", &ADebugState_C__pf4162722864::execbpf__AddxPlayer__pfT },
			{ "Get DMode State", &ADebugState_C__pf4162722864::execbpf__GetxDModexState__pfTT },
			{ "Give Player Life", &ADebugState_C__pf4162722864::execbpf__GivexPlayerxLife__pfTT },
			{ "Give Points", &ADebugState_C__pf4162722864::execbpf__GivexPoints__pfT },
			{ "Player2IsReady", &ADebugState_C__pf4162722864::execbpf__Player2IsReady__pf },
			{ "Send Player's to Game Over Screen", &ADebugState_C__pf4162722864::execbpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT },
			{ "Set PlayerRef", &ADebugState_C__pf4162722864::execbpf__SetxPlayerRef__pfT },
			{ "Set Player Controller Reference", &ADebugState_C__pf4162722864::execbpf__SetxPlayerxControllerxReference__pfTTT },
			{ "Set Player Start Ref", &ADebugState_C__pf4162722864::execbpf__SetxPlayerxStartxRef__pfTTT },
			{ "Set State", &ADebugState_C__pf4162722864::execbpf__SetxState__pfT },
			{ "Take Player Life", &ADebugState_C__pf4162722864::execbpf__TakexPlayerxLife__pfTT },
			{ "UserConstructionScript", &ADebugState_C__pf4162722864::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__AddxPlayer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Add Player") ));
		if (!ReturnFunction)
		{
			auto NewProp_bpp__Playerxtoxaddx__pfTTzy_SetBit = [](void* Obj){ ((DebugState_C__pf4162722864_eventbpf__AddxPlayer__pfT_Parms*)Obj)->bpp__Playerxtoxaddx__pfTTzy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Playerxtoxaddx__pfTTzy = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__Playerxtoxaddx__pfTTzy", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DebugState_C__pf4162722864_eventbpf__AddxPlayer__pfT_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__Playerxtoxaddx__pfTTzy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Playerxtoxaddx__pfTTzy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Add Player" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Add Player", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220CC0, sizeof(DebugState_C__pf4162722864_eventbpf__AddxPlayer__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GetxDModexState__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get DMode State") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Get DMode State" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Get DMode State", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GivexPlayerxLife__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Give Player Life") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__NumberxofxLivesxtoxGive__pfTTTT = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__NumberxofxLivesxtoxGive__pfTTTT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__GivexPlayerxLife__pfTT_Parms, bpp__NumberxofxLivesxtoxGive__pfTTTT), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bpp__Playerx__pfzy_SetBit = [](void* Obj){ ((DebugState_C__pf4162722864_eventbpf__GivexPlayerxLife__pfTT_Parms*)Obj)->bpp__Playerx__pfzy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Playerx__pfzy = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__Playerx__pfzy", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DebugState_C__pf4162722864_eventbpf__GivexPlayerxLife__pfTT_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__Playerx__pfzy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__NumberxofxLivesxtoxGive__pfTTTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Playerx__pfzy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Give Player Life" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Give Player Life", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, sizeof(DebugState_C__pf4162722864_eventbpf__GivexPlayerxLife__pfTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GivexPoints__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Give Points") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Amount__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__Amount__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__GivexPoints__pfT_Parms, bpp__Amount__pf), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bpp__Playerx__pfzy_SetBit = [](void* Obj){ ((DebugState_C__pf4162722864_eventbpf__GivexPoints__pfT_Parms*)Obj)->bpp__Playerx__pfzy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Playerx__pfzy = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__Playerx__pfzy", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DebugState_C__pf4162722864_eventbpf__GivexPoints__pfT_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__Playerx__pfzy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Amount__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Playerx__pfzy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Give Points" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Give Points", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, sizeof(DebugState_C__pf4162722864_eventbpf__GivexPoints__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__Player2IsReady__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Player2IsReady") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Player2IsReady" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Player2IsReady", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Send Player's to Game Over Screen") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Send Player's to Game Over Screen" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Send Player\\'s to Game Over Screen", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerRef__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set PlayerRef") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerxRef__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__PlayerxRef__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__SetxPlayerRef__pfT_Parms, bpp__PlayerxRef__pfT), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__PlayerxRef__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Set PlayerRef" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Set PlayerRef", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, sizeof(DebugState_C__pf4162722864_eventbpf__SetxPlayerRef__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerxControllerxReference__pfTTT()
	{
		struct DebugState_C__pf4162722864_eventbpf__SetxPlayerxControllerxReference__pfTTT_Parms
		{
			APlayerController* bpp__PlayerxControllerxReference__pfTT;
			uint8 bpp__PlayerxSet__pfT;
		};
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Player Controller Reference") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__PlayerxSet__pfT = { UE4CodeGen_Private::EPropertyClass::Byte, "bpp__PlayerxSet__pfT", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__SetxPlayerxControllerxReference__pfTTT_Parms, bpp__PlayerxSet__pfT), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerxControllerxReference__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__PlayerxControllerxReference__pfTT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__SetxPlayerxControllerxReference__pfTTT_Parms, bpp__PlayerxControllerxReference__pfTT), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__PlayerxSet__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__PlayerxControllerxReference__pfTT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Set Player Controller Reference" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Set Player Controller Reference", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04420400, sizeof(DebugState_C__pf4162722864_eventbpf__SetxPlayerxControllerxReference__pfTTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerxStartxRef__pfTTT()
	{
		struct DebugState_C__pf4162722864_eventbpf__SetxPlayerxStartxRef__pfTTT_Parms
		{
			APlayerStart* bpp__PlayerxStartxReference__pfTT;
		};
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Player Start Ref") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerxStartxReference__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__PlayerxStartxReference__pfTT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__SetxPlayerxStartxRef__pfTTT_Parms, bpp__PlayerxStartxReference__pfTT), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__PlayerxStartxReference__pfTT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Set Player Start Ref" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Set Player Start Ref", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(DebugState_C__pf4162722864_eventbpf__SetxPlayerxStartxRef__pfTTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxState__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set State") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__DesiredxState__pfT = { UE4CodeGen_Private::EPropertyClass::Enum, "bpp__DesiredxState__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__SetxState__pfT_Parms, bpp__DesiredxState__pfT), Z_Construct_UEnum_NativizedAssets_E__DStates__pf, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__DesiredxState__pfT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DesiredxState__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DesiredxState__pfT_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Set State" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Set State", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x05020CC0, sizeof(DebugState_C__pf4162722864_eventbpf__SetxState__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__TakexPlayerxLife__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Take Player Life") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__NumberxofxLivesxtoxTake__pfTTTT = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__NumberxofxLivesxtoxTake__pfTTTT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugState_C__pf4162722864_eventbpf__TakexPlayerxLife__pfTT_Parms, bpp__NumberxofxLivesxtoxTake__pfTTTT), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bpp__Playerx__pfzy_SetBit = [](void* Obj){ ((DebugState_C__pf4162722864_eventbpf__TakexPlayerxLife__pfTT_Parms*)Obj)->bpp__Playerx__pfzy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Playerx__pfzy = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__Playerx__pfzy", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DebugState_C__pf4162722864_eventbpf__TakexPlayerxLife__pfTT_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__Playerx__pfzy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__NumberxofxLivesxtoxTake__pfTTTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Playerx__pfzy,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Take Player Life" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "Take Player Life", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, sizeof(DebugState_C__pf4162722864_eventbpf__TakexPlayerxLife__pfTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADebugState_C__pf4162722864();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugState_C__pf4162722864, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister()
	{
		return ADebugState_C__pf4162722864::StaticClass();
	}
	UClass* Z_Construct_UClass_ADebugState_C__pf4162722864()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Debug/DebugState"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("DebugState_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameState,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__AddxPlayer__pfT, "Add Player" }, // 63376854
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GetxDModexState__pfTT, "Get DMode State" }, // 3525325477
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GivexPlayerxLife__pfTT, "Give Player Life" }, // 1885120927
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__GivexPoints__pfT, "Give Points" }, // 2032284321
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__Player2IsReady__pf, "Player2IsReady" }, // 1122381656
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT, "Send Player's to Game Over Screen" }, // 2545410586
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerRef__pfT, "Set PlayerRef" }, // 2265947115
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerxControllerxReference__pfTTT, "Set Player Controller Reference" }, // 16788727
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxPlayerxStartxRef__pfTTT, "Set Player Start Ref" }, // 3781519674
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__SetxState__pfT, "Set State" }, // 88475250
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__TakexPlayerxLife__pfTT, "Take Player Life" }, // 3895547022
				{ &Z_Construct_UFunction_ADebugState_C__pf4162722864_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1456983522
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "DebugState__pf4162722864.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "DebugState_C" },
				{ "ReplaceConverted", "/Game/Modes/Debug/DebugState.DebugState_C" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess18" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess18__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess18", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsIn_Game_Hud4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsIn_Game_Hud4", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess17" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess17__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess17", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular9" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular9", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess16" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess16__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess16", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsIn_Game_Hud3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsIn_Game_Hud3", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess15" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess15__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess15", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular8" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular8", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess14" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess14__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess14", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlyr_State1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlyr_State1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlyr_State1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlyr_State1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlyr_State1__pf), Z_Construct_UClass_APlyrState_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlyr_State1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlyr_State1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess13" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess13__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess13", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Mode" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Mode", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsDebug_Mode__pf), Z_Construct_UClass_ADebugMode_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Number_of_Lives_to_Give" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf = { UE4CodeGen_Private::EPropertyClass::Int, "K2Node_CustomEvent_Number_of_Lives_to_Give", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf), METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player_2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player_2" },
			};
#endif
			auto NewProp_b0l__K2Node_CustomEvent_Player_2__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_CustomEvent_Player_2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_Player_2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_CustomEvent_Player_2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_CustomEvent_Player_2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player_2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player_2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Number_of_Lives_to_Take" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf = { UE4CodeGen_Private::EPropertyClass::Int, "K2Node_CustomEvent_Number_of_Lives_to_Take", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf), METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player_1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player_1" },
			};
#endif
			auto NewProp_b0l__K2Node_CustomEvent_Player_1__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_CustomEvent_Player_1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_Player_1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_CustomEvent_Player_1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_CustomEvent_Player_1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player_1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player_1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Desired_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Desired_State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__K2Node_CustomEvent_Desired_State__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "K2Node_CustomEvent_Desired_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_CustomEvent_Desired_State__pf), Z_Construct_UEnum_NativizedAssets_E__DStates__pf, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Desired_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Desired_State__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_CustomEvent_Desired_State__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess12" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess12__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess12", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsIn_Game_Hud2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsIn_Game_Hud2", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess11" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess11__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess11", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular7" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular7", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess10" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess10__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess10", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess9" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess9__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess9", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsIn_Game_Hud1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsIn_Game_Hud1", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess8" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess8__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess8", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlyr_State" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlyr_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlyr_State__pf), Z_Construct_UClass_APlyrState_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess7" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess7__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess7", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess6" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess6__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsIn_Game_Hud" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsIn_Game_Hud", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess5" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess5__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess4" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess4__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player_to_add_" },
			};
#endif
			auto NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_CustomEvent_Player_to_add___pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_CustomEvent_Player_to_add_", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsGame_Start__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsGame_Start" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsGame_Start__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsGame_Start", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsGame_Start__pf), Z_Construct_UClass_UGameStart_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsGame_Start__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsGame_Start__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player_Ref__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player_Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Player_Ref__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_Player_Ref", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_CustomEvent_Player_Ref__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player_Ref__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player_Ref__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Amount__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Amount" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Amount__pf = { UE4CodeGen_Private::EPropertyClass::Int, "K2Node_CustomEvent_Amount", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, b0l__K2Node_CustomEvent_Amount__pf), METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Amount__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Amount__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player___pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player_" },
			};
#endif
			auto NewProp_b0l__K2Node_CustomEvent_Player___pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->b0l__K2Node_CustomEvent_Player___pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_Player___pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_CustomEvent_Player_", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_CustomEvent_Player___pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player___pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player___pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player2Ready__pf_MetaData[] = {
				{ "Category", "Player 2" },
				{ "DisplayName", "Player 2Ready" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Player2Ready" },
			};
#endif
			auto NewProp_bpv__Player2Ready__pf_SetBit = [](void* Obj){ ((ADebugState_C__pf4162722864*)Obj)->bpv__Player2Ready__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Player2Ready__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "Player2Ready", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADebugState_C__pf4162722864), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__Player2Ready__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__Player2Ready__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player2Ready__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Shittyxcam__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Shitty Cam" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Shitty cam" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Shittyxcam__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "Shitty cam", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__Shittyxcam__pfT), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_bpv__Shittyxcam__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__Shittyxcam__pfT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CamxTwo__pfT_MetaData[] = {
				{ "Category", "Player 2" },
				{ "DisplayName", "Cam Two" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Cam Two" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CamxTwo__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "Cam Two", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__CamxTwo__pfT), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_bpv__CamxTwo__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__CamxTwo__pfT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CamxOne__pfT_MetaData[] = {
				{ "Category", "Player 1" },
				{ "DisplayName", "Cam One" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Cam One" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CamxOne__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "Cam One", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__CamxOne__pfT), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_bpv__CamxOne__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__CamxOne__pfT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCx2xRef__pfTT_MetaData[] = {
				{ "Category", "Player 2" },
				{ "DisplayName", "Player C 2 Ref" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "PlayerC 2 Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerCx2xRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerC 2 Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__PlayerCx2xRef__pfTT), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerCx2xRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerCx2xRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCx1xRef__pfTT_MetaData[] = {
				{ "Category", "Player 1" },
				{ "DisplayName", "Player C 1 Ref" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "PlayerC 1 Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerCx1xRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerC 1 Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__PlayerCx1xRef__pfTT), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerCx1xRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerCx1xRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EDebugState__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "EDebug State" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "EDebugState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__EDebugState__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "EDebugState", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__EDebugState__pf), Z_Construct_UEnum_NativizedAssets_E__DStates__pf, METADATA_PARAMS(NewProp_bpv__EDebugState__pf_MetaData, ARRAY_COUNT(NewProp_bpv__EDebugState__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__EDebugState__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LivesxLeftxP2__pfTT_MetaData[] = {
				{ "Category", "Player 2" },
				{ "DisplayName", "Lives Left P2" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Lives Left P2" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__LivesxLeftxP2__pfTT = { UE4CodeGen_Private::EPropertyClass::Int, "Lives Left P2", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__LivesxLeftxP2__pfTT), METADATA_PARAMS(NewProp_bpv__LivesxLeftxP2__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__LivesxLeftxP2__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LivesxLeftxShared__pfTT_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Lives Left Shared" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Lives Left Shared" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__LivesxLeftxShared__pfTT = { UE4CodeGen_Private::EPropertyClass::Int, "Lives Left Shared", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__LivesxLeftxShared__pfTT), METADATA_PARAMS(NewProp_bpv__LivesxLeftxShared__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__LivesxLeftxShared__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScoreTotal__pf_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Score Total" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "ScoreTotal" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ScoreTotal__pf = { UE4CodeGen_Private::EPropertyClass::Int, "ScoreTotal", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__ScoreTotal__pf), METADATA_PARAMS(NewProp_bpv__ScoreTotal__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ScoreTotal__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScoreP2__pf_MetaData[] = {
				{ "Category", "Player 2" },
				{ "DisplayName", "Score P2" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "ScoreP2" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ScoreP2__pf = { UE4CodeGen_Private::EPropertyClass::Int, "ScoreP2", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__ScoreP2__pf), METADATA_PARAMS(NewProp_bpv__ScoreP2__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ScoreP2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LivesxLeftxP1__pfTT_MetaData[] = {
				{ "Category", "Player 1" },
				{ "DisplayName", "Lives Left P1" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "Lives Left P1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__LivesxLeftxP1__pfTT = { UE4CodeGen_Private::EPropertyClass::Int, "Lives Left P1", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__LivesxLeftxP1__pfTT), METADATA_PARAMS(NewProp_bpv__LivesxLeftxP1__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__LivesxLeftxP1__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScoreP1__pf_MetaData[] = {
				{ "Category", "Player 1" },
				{ "DisplayName", "Score P1" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "ScoreP1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ScoreP1__pf = { UE4CodeGen_Private::EPropertyClass::Int, "ScoreP1", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__ScoreP1__pf), METADATA_PARAMS(NewProp_bpv__ScoreP1__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ScoreP1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerStartx2xRef__pfTT_MetaData[] = {
				{ "Category", "Player 2" },
				{ "DisplayName", "Player Start 2 Ref" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "PlayerStart 2 Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerStartx2xRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerStart 2 Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__PlayerStartx2xRef__pfTT), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerStartx2xRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerStartx2xRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerStartx1xRef__pfTT_MetaData[] = {
				{ "Category", "Player 1" },
				{ "DisplayName", "Player Start 1 Ref" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "PlayerStart 1 Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerStartx1xRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerStart 1 Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__PlayerStartx1xRef__pfTT), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerStartx1xRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerStartx1xRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/DebugState__pf4162722864.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ADebugState_C__pf4162722864, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlyr_State1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player_2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player_1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Desired_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Desired_State__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player_to_add___pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsGame_Start__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player_Ref__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Amount__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player___pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player2Ready__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Shittyxcam__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CamxTwo__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CamxOne__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerCx2xRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerCx1xRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__EDebugState__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__EDebugState__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__LivesxLeftxP2__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__LivesxLeftxShared__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ScoreTotal__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ScoreP2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__LivesxLeftxP1__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ScoreP1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerStartx2xRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerStartx1xRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADebugState_C__pf4162722864>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADebugState_C__pf4162722864::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ADebugState_C__pf4162722864, TEXT("DebugState_C"), 3504233956);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugState_C__pf4162722864(Z_Construct_UClass_ADebugState_C__pf4162722864, &ADebugState_C__pf4162722864::StaticClass, TEXT("/Game/Modes/Debug/DebugState"), TEXT("DebugState_C"), true, TEXT("/Game/Modes/Debug/DebugState"), TEXT("/Game/Modes/Debug/DebugState.DebugState_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugState_C__pf4162722864);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
