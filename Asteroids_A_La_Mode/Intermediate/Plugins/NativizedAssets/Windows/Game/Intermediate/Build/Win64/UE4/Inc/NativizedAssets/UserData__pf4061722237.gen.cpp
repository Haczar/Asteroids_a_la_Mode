// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/UserData__pf4061722237.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserData__pf4061722237() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AUserData_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AUserData_C__pf4061722237();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AUserData_C__pf4061722237_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AUserData_C__pf4061722237_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__PState__pf();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AUserData_C__pf4061722237_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AUserData_C__pf4061722237::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUserData_C__pf4061722237_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AUserData_C__pf4061722237_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AUserData_C__pf4061722237::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUserData_C__pf4061722237_bpf__UserConstructionScript__pf),NULL);
	}
	void AUserData_C__pf4061722237::StaticRegisterNativesAUserData_C__pf4061722237()
	{
		UClass* Class = AUserData_C__pf4061722237::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AUserData_C__pf4061722237::execbpf__ReceiveBeginPlay__pf },
			{ "UserConstructionScript", &AUserData_C__pf4061722237::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AUserData_C__pf4061722237_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AUserData_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUserData_C__pf4061722237, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUserData_C__pf4061722237_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AUserData_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUserData_C__pf4061722237, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUserData_C__pf4061722237_NoRegister()
	{
		return AUserData_C__pf4061722237::StaticClass();
	}
	UClass* Z_Construct_UClass_AUserData_C__pf4061722237()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player/UserData"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("UserData_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerState,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AUserData_C__pf4061722237_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 147176443
				{ &Z_Construct_UFunction_AUserData_C__pf4061722237_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2263517916
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "UserData__pf4061722237.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "UserData_C" },
				{ "ReplaceConverted", "/Game/Player/UserData.UserData_C" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlyrxName__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Plyr Name" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "OverrideNativeName", "Plyr Name" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__PlyrxName__pfT = { UE4CodeGen_Private::EPropertyClass::Name, "Plyr Name", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUserData_C__pf4061722237, bpv__PlyrxName__pfT), METADATA_PARAMS(NewProp_bpv__PlyrxName__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__PlyrxName__pfT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EPlayerxState__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "EPlayer State" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "OverrideNativeName", "EPlayer State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__EPlayerxState__pfT = { UE4CodeGen_Private::EPropertyClass::Enum, "EPlayer State", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUserData_C__pf4061722237, bpv__EPlayerxState__pfT), Z_Construct_UEnum_NativizedAssets_E__PState__pf, METADATA_PARAMS(NewProp_bpv__EPlayerxState__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__EPlayerxState__pfT_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__EPlayerxState__pfT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PingxVar__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Ping Var" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "OverrideNativeName", "Ping Var" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__PingxVar__pfT = { UE4CodeGen_Private::EPropertyClass::Float, "Ping Var", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUserData_C__pf4061722237, bpv__PingxVar__pfT), METADATA_PARAMS(NewProp_bpv__PingxVar__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__PingxVar__pfT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/UserData__pf4061722237.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AUserData_C__pf4061722237, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlyrxName__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__EPlayerxState__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__EPlayerxState__pfT_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PingxVar__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AUserData_C__pf4061722237>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AUserData_C__pf4061722237::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800280u,
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
	IMPLEMENT_DYNAMIC_CLASS(AUserData_C__pf4061722237, TEXT("UserData_C"), 2487842099);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUserData_C__pf4061722237(Z_Construct_UClass_AUserData_C__pf4061722237, &AUserData_C__pf4061722237::StaticClass, TEXT("/Game/Player/UserData"), TEXT("UserData_C"), true, TEXT("/Game/Player/UserData"), TEXT("/Game/Player/UserData.UserData_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUserData_C__pf4061722237);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
