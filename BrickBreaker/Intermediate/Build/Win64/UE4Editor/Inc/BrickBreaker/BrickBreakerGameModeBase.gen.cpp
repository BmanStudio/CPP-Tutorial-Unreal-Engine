// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrickBreaker/BrickBreakerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrickBreakerGameModeBase() {}
// Cross Module References
	BRICKBREAKER_API UClass* Z_Construct_UClass_ABrickBreakerGameModeBase_NoRegister();
	BRICKBREAKER_API UClass* Z_Construct_UClass_ABrickBreakerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BrickBreaker();
// End Cross Module References
	void ABrickBreakerGameModeBase::StaticRegisterNativesABrickBreakerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABrickBreakerGameModeBase_NoRegister()
	{
		return ABrickBreakerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABrickBreakerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BrickBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BrickBreakerGameModeBase.h" },
		{ "ModuleRelativePath", "BrickBreakerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrickBreakerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::ClassParams = {
		&ABrickBreakerGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrickBreakerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrickBreakerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickBreakerGameModeBase, 1094917886);
	template<> BRICKBREAKER_API UClass* StaticClass<ABrickBreakerGameModeBase>()
	{
		return ABrickBreakerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickBreakerGameModeBase(Z_Construct_UClass_ABrickBreakerGameModeBase, &ABrickBreakerGameModeBase::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABrickBreakerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBreakerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
