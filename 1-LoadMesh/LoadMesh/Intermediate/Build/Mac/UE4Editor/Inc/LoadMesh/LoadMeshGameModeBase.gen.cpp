// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadMesh/LoadMeshGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadMeshGameModeBase() {}
// Cross Module References
	LOADMESH_API UClass* Z_Construct_UClass_ALoadMeshGameModeBase_NoRegister();
	LOADMESH_API UClass* Z_Construct_UClass_ALoadMeshGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LoadMesh();
// End Cross Module References
	void ALoadMeshGameModeBase::StaticRegisterNativesALoadMeshGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALoadMeshGameModeBase_NoRegister()
	{
		return ALoadMeshGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALoadMeshGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALoadMeshGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LoadMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadMeshGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LoadMeshGameModeBase.h" },
		{ "ModuleRelativePath", "LoadMeshGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALoadMeshGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALoadMeshGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALoadMeshGameModeBase_Statics::ClassParams = {
		&ALoadMeshGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALoadMeshGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALoadMeshGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALoadMeshGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALoadMeshGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALoadMeshGameModeBase, 3684306166);
	template<> LOADMESH_API UClass* StaticClass<ALoadMeshGameModeBase>()
	{
		return ALoadMeshGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALoadMeshGameModeBase(Z_Construct_UClass_ALoadMeshGameModeBase, &ALoadMeshGameModeBase::StaticClass, TEXT("/Script/LoadMesh"), TEXT("ALoadMeshGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALoadMeshGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
