// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ServerList__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerList__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UServerList_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UServerList_C__pf1232574660();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ClearxServerList__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ExecuteUbergraph_ServerList__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ExecuteUbergraph_ServerList__pf_2();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxRefreshxButtonxEnabled__pfTTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxStatusxMessagexText__pfTTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxStatusxMessagexVisibility__pfTTT();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GoxbackxtoxMainscreen__pfTTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxBack__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxDown__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxSelect__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxUp__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebugManager_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	static FName NAME_UServerList_C__pf1232574660_bpf__Construct__pf = FName(TEXT("Construct"));
	void UServerList_C__pf1232574660::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UServerList_C__pf1232574660_bpf__Construct__pf),NULL);
	}
	void UServerList_C__pf1232574660::StaticRegisterNativesUServerList_C__pf1232574660()
	{
		UClass* Class = UServerList_C__pf1232574660::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear ServerList", &UServerList_C__pf1232574660::execbpf__ClearxServerList__pfT },
			{ "Construct", &UServerList_C__pf1232574660::execbpf__Construct__pf },
			{ "ExecuteUbergraph_ServerList_1", &UServerList_C__pf1232574660::execbpf__ExecuteUbergraph_ServerList__pf_1 },
			{ "ExecuteUbergraph_ServerList_2", &UServerList_C__pf1232574660::execbpf__ExecuteUbergraph_ServerList__pf_2 },
			{ "Get Refresh Button Enabled", &UServerList_C__pf1232574660::execbpf__GetxRefreshxButtonxEnabled__pfTTT },
			{ "Get Status Message Text", &UServerList_C__pf1232574660::execbpf__GetxStatusxMessagexText__pfTTT },
			{ "Get Status Message Visibility", &UServerList_C__pf1232574660::execbpf__GetxStatusxMessagexVisibility__pfTTT },
			{ "Go back to Mainscreen", &UServerList_C__pf1232574660::execbpf__GoxbackxtoxMainscreen__pfTTT },
			{ "Menu Back", &UServerList_C__pf1232574660::execbpf__MenuxBack__pfT },
			{ "Menu Down", &UServerList_C__pf1232574660::execbpf__MenuxDown__pfT },
			{ "Menu Select", &UServerList_C__pf1232574660::execbpf__MenuxSelect__pfT },
			{ "Menu Up", &UServerList_C__pf1232574660::execbpf__MenuxUp__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ClearxServerList__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Clear ServerList") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Clear ServerList" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Clear ServerList", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "Keywords", "Begin Play" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Construct" },
				{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Construct", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ExecuteUbergraph_ServerList__pf_1()
	{
		struct ServerList_C__pf1232574660_eventbpf__ExecuteUbergraph_ServerList__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_ServerList_1") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__EntryPoint__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ServerList_C__pf1232574660_eventbpf__ExecuteUbergraph_ServerList__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__EntryPoint__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ExecuteUbergraph_ServerList_1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "ExecuteUbergraph_ServerList_1", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020401, sizeof(ServerList_C__pf1232574660_eventbpf__ExecuteUbergraph_ServerList__pf_1_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ExecuteUbergraph_ServerList__pf_2()
	{
		struct ServerList_C__pf1232574660_eventbpf__ExecuteUbergraph_ServerList__pf_2_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_ServerList_2") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__EntryPoint__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ServerList_C__pf1232574660_eventbpf__ExecuteUbergraph_ServerList__pf_2_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__EntryPoint__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ExecuteUbergraph_ServerList_2" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "ExecuteUbergraph_ServerList_2", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020401, sizeof(ServerList_C__pf1232574660_eventbpf__ExecuteUbergraph_ServerList__pf_2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxRefreshxButtonxEnabled__pfTTT()
	{
		struct ServerList_C__pf1232574660_eventbpf__GetxRefreshxButtonxEnabled__pfTTT_Parms
		{
			bool bpp__ReturnxValue__pfT;
		};
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Refresh Button Enabled") ));
		if (!ReturnFunction)
		{
			auto NewProp_bpp__ReturnxValue__pfT_SetBit = [](void* Obj){ ((ServerList_C__pf1232574660_eventbpf__GetxRefreshxButtonxEnabled__pfTTT_Parms*)Obj)->bpp__ReturnxValue__pfT = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__ReturnxValue__pfT = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__ReturnxValue__pfT", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ServerList_C__pf1232574660_eventbpf__GetxRefreshxButtonxEnabled__pfTTT_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__ReturnxValue__pfT_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ReturnxValue__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Get Refresh Button Enabled" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Get Refresh Button Enabled", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14420400, sizeof(ServerList_C__pf1232574660_eventbpf__GetxRefreshxButtonxEnabled__pfTTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxStatusxMessagexText__pfTTT()
	{
		struct ServerList_C__pf1232574660_eventbpf__GetxStatusxMessagexText__pfTTT_Parms
		{
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Status Message Text") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ServerList_C__pf1232574660_eventbpf__GetxStatusxMessagexText__pfTTT_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Get Status Message Text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Get Status Message Text", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14020400, sizeof(ServerList_C__pf1232574660_eventbpf__GetxStatusxMessagexText__pfTTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxStatusxMessagexVisibility__pfTTT()
	{
		struct ServerList_C__pf1232574660_eventbpf__GetxStatusxMessagexVisibility__pfTTT_Parms
		{
			ESlateVisibility bpp__ReturnxValue__pfT;
		};
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Status Message Visibility") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__ReturnxValue__pfT = { UE4CodeGen_Private::EPropertyClass::Enum, "bpp__ReturnxValue__pfT", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ServerList_C__pf1232574660_eventbpf__GetxStatusxMessagexVisibility__pfTTT_Parms, bpp__ReturnxValue__pfT), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__ReturnxValue__pfT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ReturnxValue__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ReturnxValue__pfT_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Get Status Message Visibility" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Get Status Message Visibility", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14420400, sizeof(ServerList_C__pf1232574660_eventbpf__GetxStatusxMessagexVisibility__pfTTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GoxbackxtoxMainscreen__pfTTT()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Go back to Mainscreen") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Go back to Mainscreen" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Go back to Mainscreen", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxBack__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Back") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Back" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Menu Back", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxDown__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Down") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Down" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Menu Down", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxSelect__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Select") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Select" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Menu Select", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxUp__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UServerList_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Up") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerList_C__pf1232574660, "Menu Up", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerList_C__pf1232574660_NoRegister()
	{
		return UServerList_C__pf1232574660::StaticClass();
	}
	UClass* Z_Construct_UClass_UServerList_C__pf1232574660()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ServerList"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ServerList_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMenuBase_C__pf3166771619,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ClearxServerList__pfT, "Clear ServerList" }, // 676040256
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__Construct__pf, "Construct" }, // 3792350998
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ExecuteUbergraph_ServerList__pf_1, "ExecuteUbergraph_ServerList_1" }, // 2170356074
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__ExecuteUbergraph_ServerList__pf_2, "ExecuteUbergraph_ServerList_2" }, // 2139304817
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxRefreshxButtonxEnabled__pfTTT, "Get Refresh Button Enabled" }, // 2756125725
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxStatusxMessagexText__pfTTT, "Get Status Message Text" }, // 1150111965
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GetxStatusxMessagexVisibility__pfTTT, "Get Status Message Visibility" }, // 4274109117
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__GoxbackxtoxMainscreen__pfTTT, "Go back to Mainscreen" }, // 1207843743
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxBack__pfT, "Menu Back" }, // 2314139105
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxDown__pfT, "Menu Down" }, // 996072410
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxSelect__pfT, "Menu Select" }, // 3199618225
				{ &Z_Construct_UFunction_UServerList_C__pf1232574660_bpf__MenuxUp__pfT, "Menu Up" }, // 2117324308
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ServerList__pf1232574660.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ServerList_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/ServerList.ServerList_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess8" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess8__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess8", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsServer_Row5__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsServer_Row5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsServer_Row5__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsServer_Row5", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsServer_Row5__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsServer_Row5__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsServer_Row5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess7" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess7__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess7", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsServer_Row4__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsServer_Row4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsServer_Row4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsServer_Row4", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsServer_Row4__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsServer_Row4__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsServer_Row4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum4_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum4_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum4_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor3" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor3__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Array_Get_Item1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Array_Get_Item1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_Array_Get_Item1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_Array_Get_Item1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__CallFunc_Array_Get_Item1__pf), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(NewProp_b1l__CallFunc_Array_Get_Item1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Array_Get_Item1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_int_Array_Index_Variable1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Temp_int_Array_Index_Variable1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__Temp_int_Array_Index_Variable1__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Array_Index_Variable1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__Temp_int_Array_Index_Variable1__pf), METADATA_PARAMS(NewProp_b1l__Temp_int_Array_Index_Variable1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__Temp_int_Array_Index_Variable1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor2__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess6" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess6__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsServer_Row3__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsServer_Row3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsServer_Row3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsServer_Row3", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsServer_Row3__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsServer_Row3__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsServer_Row3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess5" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess5__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsServer_Row2__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsServer_Row2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsServer_Row2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsServer_Row2", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsServer_Row2__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsServer_Row2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsServer_Row2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum3_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum3_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum3_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum2_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum2_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum2_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Create_ReturnValue1__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Create_ReturnValue1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_Create_ReturnValue1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "CallFunc_Create_ReturnValue1", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__CallFunc_Create_ReturnValue1__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__CallFunc_Create_ReturnValue1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Create_ReturnValue1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor1__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum1_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum1_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum1_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess4" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess4__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsServer_Row1__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsServer_Row1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsServer_Row1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsServer_Row1", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsServer_Row1__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsServer_Row1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsServer_Row1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Manager2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Manager2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsDebug_Manager2__pf), Z_Construct_UClass_UDebugManager_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_int_Variable1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Temp_int_Variable1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__Temp_int_Variable1__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__Temp_int_Variable1__pf), METADATA_PARAMS(NewProp_b1l__Temp_int_Variable1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__Temp_int_Variable1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_Array_Get_Item__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_Array_Get_Item", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__CallFunc_Array_Get_Item__pf), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__Temp_int_Array_Index_Variable__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Array_Index_Variable", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(NewProp_b1l__Temp_int_Array_Index_Variable__pf_MetaData, ARRAY_COUNT(NewProp_b1l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_int_Loop_Counter_Variable1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__Temp_int_Loop_Counter_Variable1__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Loop_Counter_Variable1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__Temp_int_Loop_Counter_Variable1__pf), METADATA_PARAMS(NewProp_b1l__Temp_int_Loop_Counter_Variable1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__Temp_int_Loop_Counter_Variable1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsServer_Row__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsServer_Row" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsServer_Row__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsServer_Row", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsServer_Row__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsServer_Row__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsServer_Row__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_int_Variable__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Temp_int_Variable" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__Temp_int_Variable__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__Temp_int_Variable__pf), METADATA_PARAMS(NewProp_b1l__Temp_int_Variable__pf_MetaData, ARRAY_COUNT(NewProp_b1l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Manager1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Manager1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsDebug_Manager1__pf), Z_Construct_UClass_UDebugManager_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__Temp_int_Loop_Counter_Variable__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Loop_Counter_Variable", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(NewProp_b1l__Temp_int_Loop_Counter_Variable__pf_MetaData, ARRAY_COUNT(NewProp_b1l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Create_ReturnValue__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Create_ReturnValue" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_Create_ReturnValue__pf = { UE4CodeGen_Private::EPropertyClass::Object, "CallFunc_Create_ReturnValue", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__CallFunc_Create_ReturnValue__pf), Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b1l__CallFunc_Create_ReturnValue__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Create_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Manager" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Manager", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, b1l__K2Node_DynamicCast_AsDebug_Manager__pf), Z_Construct_UClass_UDebugManager_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ServerRowSel__pf_MetaData[] = {
				{ "Category", "States" },
				{ "DisplayName", "Server Row Sel" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ServerRowSel" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ServerRowSel__pf = { UE4CodeGen_Private::EPropertyClass::Int, "ServerRowSel", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__ServerRowSel__pf), METADATA_PARAMS(NewProp_bpv__ServerRowSel__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ServerRowSel__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ServerSel__pf_MetaData[] = {
				{ "Category", "States" },
				{ "DisplayName", "Server Sel" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ServerSel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__ServerSel__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "ServerSel", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__ServerSel__pf), Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf, METADATA_PARAMS(NewProp_bpv__ServerSel__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ServerSel__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__ServerSel__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FoundSessionWidgets__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Found Session Widgets" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "FoundSessionWidgets" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__FoundSessionWidgets__pf = { UE4CodeGen_Private::EPropertyClass::Array, "FoundSessionWidgets", RF_Public|RF_Transient, 0x001000800001000d, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__FoundSessionWidgets__pf), METADATA_PARAMS(NewProp_bpv__FoundSessionWidgets__pf_MetaData, ARRAY_COUNT(NewProp_bpv__FoundSessionWidgets__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FoundSessionWidgets__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "bpv__FoundSessionWidgets__pf", RF_Public|RF_Transient, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StatusText__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Status Text" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "StatusText" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__StatusText__pf = { UE4CodeGen_Private::EPropertyClass::Str, "StatusText", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__StatusText__pf), METADATA_PARAMS(NewProp_bpv__StatusText__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StatusText__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StatusTextVisibility__pf_MetaData[] = {
				{ "Category", "States" },
				{ "DisplayName", "Status Text Visibility" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "StatusTextVisibility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__StatusTextVisibility__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "StatusTextVisibility", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__StatusTextVisibility__pf), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(NewProp_bpv__StatusTextVisibility__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StatusTextVisibility__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__StatusTextVisibility__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RefreshButtonEnabled__pf_MetaData[] = {
				{ "Category", "States" },
				{ "DisplayName", "Refresh Button Enabled" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "RefreshButtonEnabled" },
			};
#endif
			auto NewProp_bpv__RefreshButtonEnabled__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->bpv__RefreshButtonEnabled__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RefreshButtonEnabled__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "RefreshButtonEnabled", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__RefreshButtonEnabled__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__RefreshButtonEnabled__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RefreshButtonEnabled__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InsideServerList__pf_MetaData[] = {
				{ "Category", "States" },
				{ "DisplayName", "Inside Server List" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "InsideServerList" },
			};
#endif
			auto NewProp_bpv__InsideServerList__pf_SetBit = [](void* Obj){ ((UServerList_C__pf1232574660*)Obj)->bpv__InsideServerList__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__InsideServerList__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "InsideServerList", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerList_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__InsideServerList__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__InsideServerList__pf_MetaData, ARRAY_COUNT(NewProp_bpv__InsideServerList__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxRefresh__pfG_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "Text - Refresh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Text-Refresh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxRefresh__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Refresh", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__TextxRefresh__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxRefresh__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxRefresh__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxBack__pfG_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "Text- Back" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "Text-Back" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxBack__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Back", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__TextxBack__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxBack__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxBack__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StatusMessage__pf_MetaData[] = {
				{ "DisplayName", "StatusMessage" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "StatusMessage" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StatusMessage__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StatusMessage", RF_Public|RF_Transient, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__StatusMessage__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__StatusMessage__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StatusMessage__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollingServers__pf_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "ScrollingServers" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ScrollingServers" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScrollingServers__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ScrollingServers", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__ScrollingServers__pf), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(NewProp_bpv__ScrollingServers__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ScrollingServers__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ResultsContainer__pf_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "ResultsContainer" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ResultsContainer" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ResultsContainer__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ResultsContainer", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__ResultsContainer__pf), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__ResultsContainer__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ResultsContainer__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RefreshButton__pf_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "RefreshButton" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "RefreshButton" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RefreshButton__pf = { UE4CodeGen_Private::EPropertyClass::Object, "RefreshButton", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__RefreshButton__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__RefreshButton__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RefreshButton__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ColumnNames__pf_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "ColumnNames" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "ColumnNames" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ColumnNames__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ColumnNames", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__ColumnNames__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__ColumnNames__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ColumnNames__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BackButton__pf_MetaData[] = {
				{ "Category", "ServerList" },
				{ "DisplayName", "BackButton" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerList__pf1232574660.h" },
				{ "OverrideNativeName", "BackButton" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BackButton__pf = { UE4CodeGen_Private::EPropertyClass::Object, "BackButton", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerList_C__pf1232574660, bpv__BackButton__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__BackButton__pf_MetaData, ARRAY_COUNT(NewProp_bpv__BackButton__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess8__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsServer_Row5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsServer_Row4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Array_Get_Item1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__Temp_int_Array_Index_Variable1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsServer_Row3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsServer_Row2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Create_ReturnValue1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsServer_Row1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__Temp_int_Variable1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Array_Get_Item__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__Temp_int_Array_Index_Variable__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__Temp_int_Loop_Counter_Variable1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsServer_Row__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__Temp_int_Variable__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__Temp_int_Loop_Counter_Variable__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Create_ReturnValue__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsDebug_Manager__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ServerRowSel__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ServerSel__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ServerSel__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__FoundSessionWidgets__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__FoundSessionWidgets__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StatusText__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StatusTextVisibility__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StatusTextVisibility__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RefreshButtonEnabled__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__InsideServerList__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxRefresh__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxBack__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StatusMessage__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ScrollingServers__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ResultsContainer__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RefreshButton__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ColumnNames__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__BackButton__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UServerList_C__pf1232574660>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UServerList_C__pf1232574660::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UServerList_C__pf1232574660, TEXT("ServerList_C"), 3514364824);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerList_C__pf1232574660(Z_Construct_UClass_UServerList_C__pf1232574660, &UServerList_C__pf1232574660::StaticClass, TEXT("/Game/UserInterface/MainScreen/ServerList"), TEXT("ServerList_C"), true, TEXT("/Game/UserInterface/MainScreen/ServerList"), TEXT("/Game/UserInterface/MainScreen/ServerList.ServerList_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerList_C__pf1232574660);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
