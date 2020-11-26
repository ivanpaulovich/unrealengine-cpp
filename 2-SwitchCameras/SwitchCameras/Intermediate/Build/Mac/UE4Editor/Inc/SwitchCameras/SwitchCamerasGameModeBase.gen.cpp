// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchCameras/SwitchCamerasGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchCamerasGameModeBase() {}
// Cross Module References
	SWITCHCAMERAS_API UClass* Z_Construct_UClass_ASwitchCamerasGameModeBase_NoRegister();
	SWITCHCAMERAS_API UClass* Z_Construct_UClass_ASwitchCamerasGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SwitchCameras();
// End Cross Module References
	void ASwitchCamerasGameModeBase::StaticRegisterNativesASwitchCamerasGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASwitchCamerasGameModeBase_NoRegister()
	{
		return ASwitchCamerasGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SwitchCamerasGameModeBase.h" },
		{ "ModuleRelativePath", "SwitchCamerasGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchCamerasGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::ClassParams = {
		&ASwitchCamerasGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwitchCamerasGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwitchCamerasGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwitchCamerasGameModeBase, 3955898722);
	template<> SWITCHCAMERAS_API UClass* StaticClass<ASwitchCamerasGameModeBase>()
	{
		return ASwitchCamerasGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwitchCamerasGameModeBase(Z_Construct_UClass_ASwitchCamerasGameModeBase, &ASwitchCamerasGameModeBase::StaticClass, TEXT("/Script/SwitchCameras"), TEXT("ASwitchCamerasGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchCamerasGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
