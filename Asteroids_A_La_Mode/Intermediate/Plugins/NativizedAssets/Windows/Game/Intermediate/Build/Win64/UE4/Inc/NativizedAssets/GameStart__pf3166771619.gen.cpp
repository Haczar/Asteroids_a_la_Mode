// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/GameStart__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStart__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameStart_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameStart_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UGameStart_C__pf3166771619_bpf__ShowPlayer2isReady__pf();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULeaderBoard_C__pf3166771619_NoRegister();
// End Cross Module References
	void UGameStart_C__pf3166771619::StaticRegisterNativesUGameStart_C__pf3166771619()
	{
		UClass* Class = UGameStart_C__pf3166771619::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowPlayer2isReady", &UGameStart_C__pf3166771619::execbpf__ShowPlayer2isReady__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameStart_C__pf3166771619_bpf__ShowPlayer2isReady__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGameStart_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ShowPlayer2isReady") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/GameStart__pf3166771619.h" },
				{ "OverrideNativeName", "ShowPlayer2isReady" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameStart_C__pf3166771619, "ShowPlayer2isReady", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameStart_C__pf3166771619_NoRegister()
	{
		return UGameStart_C__pf3166771619::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameStart_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/GameStart"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GameStart_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameStart_C__pf3166771619_bpf__ShowPlayer2isReady__pf, "ShowPlayer2isReady" }, // 538984718
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameStart__pf3166771619.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/GameStart__pf3166771619.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "GameStart_C" },
				{ "ReplaceConverted", "/Game/UserInterface/GameStart.GameStart_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/GameStart__pf3166771619.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateColor__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UGameStart_C__pf3166771619, b0l__K2Node_MakeStruct_SlateColor__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPlayer2isReady__pfG_MetaData[] = {
				{ "Category", "GameStart" },
				{ "DisplayName", "Text - Player2is Ready" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameStart__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Player2isReady" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPlayer2isReady__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Player2isReady", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGameStart_C__pf3166771619, bpv__TextxPlayer2isReady__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPlayer2isReady__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPlayer2isReady__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeaderBoard__pf_MetaData[] = {
				{ "Category", "GameStart" },
				{ "DisplayName", "LeaderBoard" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameStart__pf3166771619.h" },
				{ "OverrideNativeName", "LeaderBoard" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeaderBoard__pf = { UE4CodeGen_Private::EPropertyClass::Object, "LeaderBoard", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGameStart_C__pf3166771619, bpv__LeaderBoard__pf), Z_Construct_UClass_ULeaderBoard_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_bpv__LeaderBoard__pf_MetaData, ARRAY_COUNT(NewProp_bpv__LeaderBoard__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_MakeStruct_SlateColor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPlayer2isReady__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__LeaderBoard__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameStart_C__pf3166771619>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameStart_C__pf3166771619::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(UGameStart_C__pf3166771619, TEXT("GameStart_C"), 977649648);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameStart_C__pf3166771619(Z_Construct_UClass_UGameStart_C__pf3166771619, &UGameStart_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/GameStart"), TEXT("GameStart_C"), true, TEXT("/Game/UserInterface/GameStart"), TEXT("/Game/UserInterface/GameStart.GameStart_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStart_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
