// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEnvironment/HoudiniEnvironmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEnvironmentGameModeBase() {}
// Cross Module References
	HOUDINIENVIRONMENT_API UClass* Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_NoRegister();
	HOUDINIENVIRONMENT_API UClass* Z_Construct_UClass_AHoudiniEnvironmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HoudiniEnvironment();
// End Cross Module References
	void AHoudiniEnvironmentGameModeBase::StaticRegisterNativesAHoudiniEnvironmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_NoRegister()
	{
		return AHoudiniEnvironmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEnvironment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HoudiniEnvironmentGameModeBase.h" },
		{ "ModuleRelativePath", "HoudiniEnvironmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniEnvironmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::ClassParams = {
		&AHoudiniEnvironmentGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoudiniEnvironmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoudiniEnvironmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoudiniEnvironmentGameModeBase, 3321756397);
	template<> HOUDINIENVIRONMENT_API UClass* StaticClass<AHoudiniEnvironmentGameModeBase>()
	{
		return AHoudiniEnvironmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoudiniEnvironmentGameModeBase(Z_Construct_UClass_AHoudiniEnvironmentGameModeBase, &AHoudiniEnvironmentGameModeBase::StaticClass, TEXT("/Script/HoudiniEnvironment"), TEXT("AHoudiniEnvironmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniEnvironmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
