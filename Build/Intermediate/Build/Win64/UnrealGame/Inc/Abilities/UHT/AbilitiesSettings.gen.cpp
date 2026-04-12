// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitiesSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbilitiesSettings() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesSettings();
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAbilitiesSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAbilitiesSettings;
UClass* UAbilitiesSettings::GetPrivateStaticClass()
{
	using TClass = UAbilitiesSettings;
	if (!Z_Registration_Info_UClass_UAbilitiesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AbilitiesSettings"),
			Z_Registration_Info_UClass_UAbilitiesSettings.InnerSingleton,
			StaticRegisterNativesUAbilitiesSettings,
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
	return Z_Registration_Info_UClass_UAbilitiesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAbilitiesSettings_NoRegister()
{
	return UAbilitiesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAbilitiesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Abilities" },
		{ "IncludePath", "AbilitiesSettings.h" },
		{ "ModuleRelativePath", "Public/AbilitiesSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAbilitiesSettings constinit property declarations ***********************
// ********** End Class UAbilitiesSettings constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitiesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAbilitiesSettings_Statics
UObject* (*const Z_Construct_UClass_UAbilitiesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitiesSettings_Statics::ClassParams = {
	&UAbilitiesSettings::StaticClass,
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
	0x001000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitiesSettings_Statics::Class_MetaDataParams)
};
void UAbilitiesSettings::StaticRegisterNativesUAbilitiesSettings()
{
}
UClass* Z_Construct_UClass_UAbilitiesSettings()
{
	if (!Z_Registration_Info_UClass_UAbilitiesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitiesSettings.OuterSingleton, Z_Construct_UClass_UAbilitiesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitiesSettings.OuterSingleton;
}
UAbilitiesSettings::UAbilitiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAbilitiesSettings);
UAbilitiesSettings::~UAbilitiesSettings() {}
// ********** End Class UAbilitiesSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesSettings_h__Script_Abilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitiesSettings, UAbilitiesSettings::StaticClass, TEXT("UAbilitiesSettings"), &Z_Registration_Info_UClass_UAbilitiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitiesSettings), 686595905U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesSettings_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesSettings_h__Script_Abilities_2236429280{
	TEXT("/Script/Abilities"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesSettings_h__Script_Abilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesSettings_h__Script_Abilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
