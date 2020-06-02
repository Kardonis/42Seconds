// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sci_fi_42_seconds/BonusChip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusChip() {}
// Cross Module References
	SCI_FI_42_SECONDS_API UClass* Z_Construct_UClass_ABonusChip_NoRegister();
	SCI_FI_42_SECONDS_API UClass* Z_Construct_UClass_ABonusChip();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sci_fi_42_seconds();
	SCI_FI_42_SECONDS_API UFunction* Z_Construct_UFunction_ABonusChip_OnCollect();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ABonusChip::StaticRegisterNativesABonusChip()
	{
		UClass* Class = ABonusChip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollect", &ABonusChip::execOnCollect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonusChip_OnCollect_Statics
	{
		struct BonusChip_eventOnCollect_Parms
		{
			APawn* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonusChip_OnCollect_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BonusChip_eventOnCollect_Parms, player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonusChip_OnCollect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonusChip_OnCollect_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonusChip_OnCollect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "BonusChip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonusChip_OnCollect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonusChip, "OnCollect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BonusChip_eventOnCollect_Parms), Z_Construct_UFunction_ABonusChip_OnCollect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABonusChip_OnCollect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonusChip_OnCollect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABonusChip_OnCollect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonusChip_OnCollect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABonusChip_OnCollect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABonusChip_NoRegister()
	{
		return ABonusChip::StaticClass();
	}
	struct Z_Construct_UClass_ABonusChip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonusChip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sci_fi_42_seconds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonusChip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonusChip_OnCollect, "OnCollect" }, // 356810845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusChip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BonusChip.h" },
		{ "ModuleRelativePath", "BonusChip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonusChip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonusChip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABonusChip_Statics::ClassParams = {
		&ABonusChip::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABonusChip_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABonusChip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonusChip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABonusChip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABonusChip, 3473702606);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABonusChip(Z_Construct_UClass_ABonusChip, &ABonusChip::StaticClass, TEXT("/Script/Sci_fi_42_seconds"), TEXT("ABonusChip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonusChip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
