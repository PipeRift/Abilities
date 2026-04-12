// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Helpers/AbilityTestActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbilityTestActor() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
ABILITIESTEST_API UClass* Z_Construct_UClass_AAbilityTestActor();
ABILITIESTEST_API UClass* Z_Construct_UClass_AAbilityTestActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AbilitiesTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAbilityTestActor ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAbilityTestActor;
UClass* AAbilityTestActor::GetPrivateStaticClass()
{
	using TClass = AAbilityTestActor;
	if (!Z_Registration_Info_UClass_AAbilityTestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AbilityTestActor"),
			Z_Registration_Info_UClass_AAbilityTestActor.InnerSingleton,
			StaticRegisterNativesAAbilityTestActor,
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
	return Z_Registration_Info_UClass_AAbilityTestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAbilityTestActor_NoRegister()
{
	return AAbilityTestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAbilityTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/AbilityTestActor.h" },
		{ "ModuleRelativePath", "Private/Helpers/AbilityTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Helpers/AbilityTestActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAbilityTestActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAbilityTestActor constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilityTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAbilityTestActor_Statics

// ********** Begin Class AAbilityTestActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbilityTestActor_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAbilityTestActor, Abilities), Z_Construct_UClass_UAbilitiesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbilityTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilityTestActor_Statics::NewProp_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityTestActor_Statics::PropPointers) < 2048);
// ********** End Class AAbilityTestActor Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AAbilityTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbilityTestActor_Statics::ClassParams = {
	&AAbilityTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAbilityTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityTestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAbilityTestActor_Statics::Class_MetaDataParams)
};
void AAbilityTestActor::StaticRegisterNativesAAbilityTestActor()
{
}
UClass* Z_Construct_UClass_AAbilityTestActor()
{
	if (!Z_Registration_Info_UClass_AAbilityTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbilityTestActor.OuterSingleton, Z_Construct_UClass_AAbilityTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAbilityTestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAbilityTestActor);
AAbilityTestActor::~AAbilityTestActor() {}
// ********** End Class AAbilityTestActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_AbilityTestActor_h__Script_AbilitiesTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAbilityTestActor, AAbilityTestActor::StaticClass, TEXT("AAbilityTestActor"), &Z_Registration_Info_UClass_AAbilityTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbilityTestActor), 1051589948U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_AbilityTestActor_h__Script_AbilitiesTest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_AbilityTestActor_h__Script_AbilitiesTest_84128880{
	TEXT("/Script/AbilitiesTest"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_AbilityTestActor_h__Script_AbilitiesTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_AbilityTestActor_h__Script_AbilitiesTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
