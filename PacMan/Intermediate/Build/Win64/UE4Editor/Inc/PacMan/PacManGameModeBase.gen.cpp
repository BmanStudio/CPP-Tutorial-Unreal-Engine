// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/PacManGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacManGameModeBase() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacManGameModeBase_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacManGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PacMan();
// End Cross Module References
	void APacManGameModeBase::StaticRegisterNativesAPacManGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APacManGameModeBase_NoRegister()
	{
		return APacManGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APacManGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacManGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacManGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PacManGameModeBase.h" },
		{ "ModuleRelativePath", "PacManGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacManGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacManGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacManGameModeBase_Statics::ClassParams = {
		&APacManGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APacManGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacManGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacManGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacManGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacManGameModeBase, 3723726757);
	template<> PACMAN_API UClass* StaticClass<APacManGameModeBase>()
	{
		return APacManGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacManGameModeBase(Z_Construct_UClass_APacManGameModeBase, &APacManGameModeBase::StaticClass, TEXT("/Script/PacMan"), TEXT("APacManGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacManGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
