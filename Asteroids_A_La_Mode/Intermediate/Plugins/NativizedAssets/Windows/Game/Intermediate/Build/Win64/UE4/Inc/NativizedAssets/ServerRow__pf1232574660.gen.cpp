// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ServerRow__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRow__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UServerRow_C__pf1232574660();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetPlayerCountText__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetxPing__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetxServerxName__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__SetSearchResult__pf();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebugManager_C__pf4162722864_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UServerRow_C__pf1232574660::StaticRegisterNativesUServerRow_C__pf1232574660()
	{
		UClass* Class = UServerRow_C__pf1232574660::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature", &UServerRow_C__pf1232574660::execbpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf },
			{ "GetPlayerCountText", &UServerRow_C__pf1232574660::execbpf__GetPlayerCountText__pf },
			{ "Get Ping", &UServerRow_C__pf1232574660::execbpf__GetxPing__pfT },
			{ "Get Server Name", &UServerRow_C__pf1232574660::execbpf__GetxServerxName__pfTT },
			{ "SetSearchResult", &UServerRow_C__pf1232574660::execbpf__SetSearchResult__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UServerRow_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow_C__pf1232574660, "BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetPlayerCountText__pf()
	{
		struct ServerRow_C__pf1232574660_eventbpf__GetPlayerCountText__pf_Parms
		{
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UServerRow_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetPlayerCountText") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ServerRow_C__pf1232574660_eventbpf__GetPlayerCountText__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "GetPlayerCountText" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow_C__pf1232574660, "GetPlayerCountText", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14020400, sizeof(ServerRow_C__pf1232574660_eventbpf__GetPlayerCountText__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetxPing__pfT()
	{
		struct ServerRow_C__pf1232574660_eventbpf__GetxPing__pfT_Parms
		{
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UServerRow_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Ping") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ServerRow_C__pf1232574660_eventbpf__GetxPing__pfT_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "Get Ping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow_C__pf1232574660, "Get Ping", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14020400, sizeof(ServerRow_C__pf1232574660_eventbpf__GetxPing__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetxServerxName__pfTT()
	{
		struct ServerRow_C__pf1232574660_eventbpf__GetxServerxName__pfTT_Parms
		{
			FText ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UServerRow_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Server Name") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ServerRow_C__pf1232574660_eventbpf__GetxServerxName__pfTT_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "Get Server Name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow_C__pf1232574660, "Get Server Name", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14020400, sizeof(ServerRow_C__pf1232574660_eventbpf__GetxServerxName__pfTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__SetSearchResult__pf()
	{
		struct ServerRow_C__pf1232574660_eventbpf__SetSearchResult__pf_Parms
		{
			FBlueprintSessionResult bpp__FoundxSession__pfT;
		};
		UObject* Outer = Z_Construct_UClass_UServerRow_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SetSearchResult") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__FoundxSession__pfT = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__FoundxSession__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ServerRow_C__pf1232574660_eventbpf__SetSearchResult__pf_Parms, bpp__FoundxSession__pfT), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__FoundxSession__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "SetSearchResult" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow_C__pf1232574660, "SetSearchResult", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(ServerRow_C__pf1232574660_eventbpf__SetSearchResult__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerRow_C__pf1232574660_NoRegister()
	{
		return UServerRow_C__pf1232574660::StaticClass();
	}
	UClass* Z_Construct_UClass_UServerRow_C__pf1232574660()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ServerRow"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ServerRow_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature__pf, "BndEvt__ServerRow_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature" }, // 3023714514
				{ &Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetPlayerCountText__pf, "GetPlayerCountText" }, // 3795103042
				{ &Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetxPing__pfT, "Get Ping" }, // 2561555030
				{ &Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__GetxServerxName__pfTT, "Get Server Name" }, // 3659656806
				{ &Z_Construct_UFunction_UServerRow_C__pf1232574660_bpf__SetSearchResult__pf, "SetSearchResult" }, // 2048455305
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ServerRow__pf1232574660.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ServerRow_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/ServerRow.ServerRow_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((UServerRow_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UServerRow_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Manager__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Manager" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Manager__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Manager", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, b0l__K2Node_DynamicCast_AsDebug_Manager__pf), Z_Construct_UClass_UDebugManager_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Manager__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Manager__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SearchResult__pf_MetaData[] = {
				{ "BlueprintPrivate", "true" },
				{ "Category", "Default" },
				{ "DisplayName", "Search Result" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "SearchResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SearchResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchResult", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, bpv__SearchResult__pf), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(NewProp_bpv__SearchResult__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SearchResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCounts__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player Counts" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "PlayerCounts" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__PlayerCounts__pf = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerCounts", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, bpv__PlayerCounts__pf), METADATA_PARAMS(NewProp_bpv__PlayerCounts__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerCounts__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_2__pf_MetaData[] = {
				{ "DisplayName", "TextBlock_2" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "TextBlock_2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TextBlock_2", RF_Public|RF_Transient, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, bpv__TextBlock_2__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextBlock_2__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TextBlock_2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_1__pf_MetaData[] = {
				{ "DisplayName", "TextBlock_1" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "TextBlock_1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TextBlock_1", RF_Public|RF_Transient, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, bpv__TextBlock_1__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextBlock_1__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TextBlock_1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_0__pf_MetaData[] = {
				{ "DisplayName", "TextBlock_0" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "TextBlock_0" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_0__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TextBlock_0", RF_Public|RF_Transient, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, bpv__TextBlock_0__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextBlock_0__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TextBlock_0__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ServerRow__pf_MetaData[] = {
				{ "Category", "ServerRow" },
				{ "DisplayName", "ServerRow" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ServerRow__pf1232574660.h" },
				{ "OverrideNativeName", "ServerRow" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ServerRow__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ServerRow", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UServerRow_C__pf1232574660, bpv__ServerRow__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__ServerRow__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ServerRow__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Manager__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SearchResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerCounts__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextBlock_2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextBlock_1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextBlock_0__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ServerRow__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UServerRow_C__pf1232574660>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UServerRow_C__pf1232574660::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(UServerRow_C__pf1232574660, TEXT("ServerRow_C"), 3275699259);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerRow_C__pf1232574660(Z_Construct_UClass_UServerRow_C__pf1232574660, &UServerRow_C__pf1232574660::StaticClass, TEXT("/Game/UserInterface/MainScreen/ServerRow"), TEXT("ServerRow_C"), true, TEXT("/Game/UserInterface/MainScreen/ServerRow"), TEXT("/Game/UserInterface/MainScreen/ServerRow.ServerRow_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerRow_C__pf1232574660);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
