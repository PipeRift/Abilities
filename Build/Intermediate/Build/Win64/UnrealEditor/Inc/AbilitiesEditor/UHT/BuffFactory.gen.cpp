// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assets/BuffFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBuffFactory() {}

// ********** Begin Cross Module References ********************************************************
ABILITIESEDITOR_API UClass* Z_Construct_UClass_UBuffFactory();
ABILITIESEDITOR_API UClass* Z_Construct_UClass_UBuffFactory_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AbilitiesEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBuffFactory *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBuffFactory;
UClass* UBuffFactory::GetPrivateStaticClass()
{
	using TClass = UBuffFactory;
	if (!Z_Registration_Info_UClass_UBuffFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BuffFactory"),
			Z_Registration_Info_UClass_UBuffFactory.InnerSingleton,
			StaticRegisterNativesUBuffFactory,
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
	return Z_Registration_Info_UClass_UBuffFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuffFactory_NoRegister()
{
	return UBuffFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuffFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Assets/BuffFactory.h" },
		{ "ModuleRelativePath", "Private/Assets/BuffFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Assets/BuffFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuffFactory constinit property declarations *****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuffClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuffFactory constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBuffFactory_Statics

// ********** Begin Class UBuffFactory Property Definitions ****************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBuffFactory_Statics::NewProp_BuffClass = { "BuffClass", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuffFactory, BuffClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffClass_MetaData), NewProp_BuffClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffFactory_Statics::NewProp_BuffClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffFactory_Statics::PropPointers) < 2048);
// ********** End Class UBuffFactory Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UBuffFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffFactory_Statics::ClassParams = {
	&UBuffFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBuffFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuffFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuffFactory_Statics::Class_MetaDataParams)
};
void UBuffFactory::StaticRegisterNativesUBuffFactory()
{
}
UClass* Z_Construct_UClass_UBuffFactory()
{
	if (!Z_Registration_Info_UClass_UBuffFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffFactory.OuterSingleton, Z_Construct_UClass_UBuffFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuffFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuffFactory);
UBuffFactory::~UBuffFactory() {}
// ********** End Class UBuffFactory ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffFactory_h__Script_AbilitiesEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuffFactory, UBuffFactory::StaticClass, TEXT("UBuffFactory"), &Z_Registration_Info_UClass_UBuffFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffFactory), 1615468236U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffFactory_h__Script_AbilitiesEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffFactory_h__Script_AbilitiesEditor_3999535603{
	TEXT("/Script/AbilitiesEditor"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffFactory_h__Script_AbilitiesEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Editor_Private_Assets_BuffFactory_h__Script_AbilitiesEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
