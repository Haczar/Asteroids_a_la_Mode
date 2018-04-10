// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/MenuBase__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuBase__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxBack__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxDown__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxDownxReleased__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxSelect__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxUp__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxUpxReleased__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__SetxAlphaxxMenuxItemx__pfTTLTK();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__SetxObjxxColorxandxOpacity__pfT3TTT();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UMenuBase_C__pf3166771619::StaticRegisterNativesUMenuBase_C__pf3166771619()
	{
		UClass* Class = UMenuBase_C__pf3166771619::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Menu Back", &UMenuBase_C__pf3166771619::execbpf__MenuxBack__pfT },
			{ "Menu Down", &UMenuBase_C__pf3166771619::execbpf__MenuxDown__pfT },
			{ "Menu Down Released", &UMenuBase_C__pf3166771619::execbpf__MenuxDownxReleased__pfTT },
			{ "Menu Select", &UMenuBase_C__pf3166771619::execbpf__MenuxSelect__pfT },
			{ "Menu Up", &UMenuBase_C__pf3166771619::execbpf__MenuxUp__pfT },
			{ "Menu Up Released", &UMenuBase_C__pf3166771619::execbpf__MenuxUpxReleased__pfTT },
			{ "Revert Alpha (Menu Item)", &UMenuBase_C__pf3166771619::execbpf__RevertxAlphaxxMenuxItemx__pfTTLTK },
			{ "Set Alpha (Menu Item)", &UMenuBase_C__pf3166771619::execbpf__SetxAlphaxxMenuxItemx__pfTTLTK },
			{ "Set Obj: Color and Opacity", &UMenuBase_C__pf3166771619::execbpf__SetxObjxxColorxandxOpacity__pfT3TTT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxBack__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Back") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Menu Back" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Menu Back", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxDown__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Down") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Menu Down" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Menu Down", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxDownxReleased__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Down Released") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Menu Down Released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Menu Down Released", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxSelect__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Select") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Menu Select" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Menu Select", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxUp__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Up") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Menu Up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Menu Up", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxUpxReleased__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Up Released") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Menu Up Released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Menu Up Released", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Revert Alpha (Menu Item)") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Revert Alpha (Menu Item)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Revert Alpha (Menu Item)", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__SetxAlphaxxMenuxItemx__pfTTLTK()
	{
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Alpha (Menu Item)") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Set Alpha (Menu Item)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Set Alpha (Menu Item)", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__SetxObjxxColorxandxOpacity__pfT3TTT()
	{
		struct MenuBase_C__pf3166771619_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms
		{
			UTextBlock* bpp__TextxObj__pfT;
			FSlateColor bpp__ColorxandxOpactiy__pfTT;
		};
		UObject* Outer = Z_Construct_UClass_UMenuBase_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Obj: Color and Opacity") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__ColorxandxOpactiy__pfTT = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__ColorxandxOpactiy__pfTT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuBase_C__pf3166771619_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms, bpp__ColorxandxOpactiy__pfTT), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__TextxObj__pfT_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__TextxObj__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__TextxObj__pfT", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MenuBase_C__pf3166771619_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms, bpp__TextxObj__pfT), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpp__TextxObj__pfT_MetaData, ARRAY_COUNT(NewProp_bpp__TextxObj__pfT_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ColorxandxOpactiy__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__TextxObj__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "OverrideNativeName", "Set Obj: Color and Opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase_C__pf3166771619, "Set Obj: Color and Opacity", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(MenuBase_C__pf3166771619_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister()
	{
		return UMenuBase_C__pf3166771619::StaticClass();
	}
	UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MenuBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MenuBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxBack__pfT, "Menu Back" }, // 1926201467
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxDown__pfT, "Menu Down" }, // 1780188320
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxDownxReleased__pfTT, "Menu Down Released" }, // 140152251
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxSelect__pfT, "Menu Select" }, // 928767785
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxUp__pfT, "Menu Up" }, // 2631954103
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__MenuxUpxReleased__pfTT, "Menu Up Released" }, // 1129226965
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK, "Revert Alpha (Menu Item)" }, // 2370269699
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__SetxAlphaxxMenuxItemx__pfTTLTK, "Set Alpha (Menu Item)" }, // 641434465
				{ &Z_Construct_UFunction_UMenuBase_C__pf3166771619_bpf__SetxObjxxColorxandxOpacity__pfT3TTT, "Set Obj: Color and Opacity" }, // 1700342278
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MenuBase__pf3166771619.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MenuBase__pf3166771619.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "MenuBase_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MenuBase.MenuBase_C" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMenuBase_C__pf3166771619>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMenuBase_C__pf3166771619::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UMenuBase_C__pf3166771619, TEXT("MenuBase_C"), 2566509790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuBase_C__pf3166771619(Z_Construct_UClass_UMenuBase_C__pf3166771619, &UMenuBase_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/MenuBase"), TEXT("MenuBase_C"), true, TEXT("/Game/UserInterface/MenuBase"), TEXT("/Game/UserInterface/MenuBase.MenuBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuBase_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
