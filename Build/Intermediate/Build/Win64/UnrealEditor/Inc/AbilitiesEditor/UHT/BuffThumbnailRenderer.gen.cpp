// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assets/BuffThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBuffThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
ABILITIESEDITOR_API UClass* Z_Construct_UClass_UBuffThumbnailRenderer();
ABILITIESEDITOR_API UClass* Z_Construct_UClass_UBuffThumbnailRenderer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_AbilitiesEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBuffThumbnailRenderer ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBuffThumbnailRenderer;
UClass* UBuffThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UBuffThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UBuffThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BuffThumbnailRenderer"),
			Z_Registration_Info_UClass_UBuffThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUBuffThumbnailRenderer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBuffThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuffThumbnailRenderer_NoRegister()
{
	return UBuffThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuffThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Assets/BuffThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Assets/BuffThumbnailRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Private/Assets/BuffThumbnailRenderer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuffThumbnailRenderer constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuffThumbnailRenderer constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBuffThumbnailRenderer_Statics

// ********** Begin Class UBuffThumbnailRenderer Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffThumbnailRenderer_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuffThumbnailRenderer, Default), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffThumbnailRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffThumbnailRenderer_Statics::NewProp_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffThumbnailRenderer_Statics::PropPointers) < 2048);
// ********** End Class UBuffThumbnailRenderer Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UBuffThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffThumbnailRenderer_Statics::ClassParams = {
	&UBuffThumbnailRenderer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBuffThumbnailRenderer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuffThumbnailRenderer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuffThumbnailRenderer_Statics::Class_MetaDataParams)
};
void UBuffThumbnailRenderer::StaticRegisterNativesUBuffThumbnailRenderer()
{
}
UClass* Z_Construct_UClass_UBuffThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UBuffThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UBuffThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuffThumbnailRenderer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuffThumbnailRenderer);
UBuffThumbnailRenderer::~UBuffThumbnailRenderer() {}
// ********** End Class UBuffThumbnailRenderer *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffThumbnailRenderer_h__Script_AbilitiesEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuffThumbnailRenderer, UBuffThumbnailRenderer::StaticClass, TEXT("UBuffThumbnailRenderer"), &Z_Registration_Info_UClass_UBuffThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffThumbnailRenderer), 1328331519U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffThumbnailRenderer_h__Script_AbilitiesEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffThumbnailRenderer_h__Script_AbilitiesEditor_3598914264{
	TEXT("/Script/AbilitiesEditor"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffThumbnailRenderer_h__Script_AbilitiesEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffThumbnailRenderer_h__Script_AbilitiesEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
