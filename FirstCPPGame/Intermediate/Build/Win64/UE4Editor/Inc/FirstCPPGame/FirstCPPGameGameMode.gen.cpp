// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCPPGame/FirstCPPGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCPPGameGameMode() {}
// Cross Module References
	FIRSTCPPGAME_API UClass* Z_Construct_UClass_AFirstCPPGameGameMode_NoRegister();
	FIRSTCPPGAME_API UClass* Z_Construct_UClass_AFirstCPPGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstCPPGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void AFirstCPPGameGameMode::StaticRegisterNativesAFirstCPPGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstCPPGameGameMode_NoRegister()
	{
		return AFirstCPPGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstCPPGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Time_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Time_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Time_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Time_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRechargePickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerRechargePickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstCPPGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCPPGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstCPPGameGameMode.h" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Max_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Max = { "Spawn_Time_Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, Spawn_Time_Max), METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Min_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Min = { "Spawn_Time_Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, Spawn_Time_Min), METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Max_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Max = { "Spawn_Y_Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, Spawn_Y_Max), METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Min_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Min = { "Spawn_Y_Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, Spawn_Y_Min), METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Max_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Max = { "Spawn_X_Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, Spawn_X_Max), METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Min_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Min = { "Spawn_X_Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, Spawn_X_Min), METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_PlayerRechargePickup_MetaData[] = {
		{ "Category", "Player Recharge Pickup" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_PlayerRechargePickup = { "PlayerRechargePickup", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCPPGameGameMode, PlayerRechargePickup), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_PlayerRechargePickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_PlayerRechargePickup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstCPPGameGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Time_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_Y_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_Spawn_X_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCPPGameGameMode_Statics::NewProp_PlayerRechargePickup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstCPPGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstCPPGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::ClassParams = {
		&AFirstCPPGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstCPPGameGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstCPPGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstCPPGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstCPPGameGameMode, 999256591);
	template<> FIRSTCPPGAME_API UClass* StaticClass<AFirstCPPGameGameMode>()
	{
		return AFirstCPPGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstCPPGameGameMode(Z_Construct_UClass_AFirstCPPGameGameMode, &AFirstCPPGameGameMode::StaticClass, TEXT("/Script/FirstCPPGame"), TEXT("AFirstCPPGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstCPPGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
