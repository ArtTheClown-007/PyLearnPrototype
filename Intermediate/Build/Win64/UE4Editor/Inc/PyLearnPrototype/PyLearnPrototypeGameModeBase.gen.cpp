// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PyLearnPrototype/PyLearnPrototypeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyLearnPrototypeGameModeBase() {}
// Cross Module References
	PYLEARNPROTOTYPE_API UClass* Z_Construct_UClass_APyLearnPrototypeGameModeBase_NoRegister();
	PYLEARNPROTOTYPE_API UClass* Z_Construct_UClass_APyLearnPrototypeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PyLearnPrototype();
// End Cross Module References
	void APyLearnPrototypeGameModeBase::StaticRegisterNativesAPyLearnPrototypeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APyLearnPrototypeGameModeBase_NoRegister()
	{
		return APyLearnPrototypeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PyLearnPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PyLearnPrototypeGameModeBase.h" },
		{ "ModuleRelativePath", "PyLearnPrototypeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyLearnPrototypeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::ClassParams = {
		&APyLearnPrototypeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyLearnPrototypeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyLearnPrototypeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyLearnPrototypeGameModeBase, 60272425);
	template<> PYLEARNPROTOTYPE_API UClass* StaticClass<APyLearnPrototypeGameModeBase>()
	{
		return APyLearnPrototypeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyLearnPrototypeGameModeBase(Z_Construct_UClass_APyLearnPrototypeGameModeBase, &APyLearnPrototypeGameModeBase::StaticClass, TEXT("/Script/PyLearnPrototype"), TEXT("APyLearnPrototypeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyLearnPrototypeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
