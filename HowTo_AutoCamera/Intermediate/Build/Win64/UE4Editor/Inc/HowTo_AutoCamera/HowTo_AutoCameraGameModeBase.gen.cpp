// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_AutoCameraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_AutoCameraGameModeBase() {}
// Cross Module References
	HOWTO_AUTOCAMERA_API UClass* Z_Construct_UClass_AHowTo_AutoCameraGameModeBase_NoRegister();
	HOWTO_AUTOCAMERA_API UClass* Z_Construct_UClass_AHowTo_AutoCameraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_AutoCamera();
// End Cross Module References
	void AHowTo_AutoCameraGameModeBase::StaticRegisterNativesAHowTo_AutoCameraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_AutoCameraGameModeBase_NoRegister()
	{
		return AHowTo_AutoCameraGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_AutoCameraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_AutoCamera,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_AutoCameraGameModeBase.h" },
				{ "ModuleRelativePath", "HowTo_AutoCameraGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_AutoCameraGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_AutoCameraGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowTo_AutoCameraGameModeBase, 190701734);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_AutoCameraGameModeBase(Z_Construct_UClass_AHowTo_AutoCameraGameModeBase, &AHowTo_AutoCameraGameModeBase::StaticClass, TEXT("/Script/HowTo_AutoCamera"), TEXT("AHowTo_AutoCameraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_AutoCameraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
