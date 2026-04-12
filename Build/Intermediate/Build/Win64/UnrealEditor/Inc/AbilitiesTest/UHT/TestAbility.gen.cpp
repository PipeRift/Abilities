// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Helpers/TestAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTestAbility() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbility();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestAbility();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestAbility2();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestAbility2_NoRegister();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestAbility3();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestAbility3_NoRegister();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_AbilitiesTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTestAbility *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestAbility;
UClass* UTestAbility::GetPrivateStaticClass()
{
	using TClass = UTestAbility;
	if (!Z_Registration_Info_UClass_UTestAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestAbility"),
			Z_Registration_Info_UClass_UTestAbility.InnerSingleton,
			StaticRegisterNativesUTestAbility,
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
	return Z_Registration_Info_UClass_UTestAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestAbility_NoRegister()
{
	return UTestAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestAbility.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestAbility.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableActivation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestAbility constinit property declarations *****************************
	static void NewProp_bEnableActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableActivation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTestAbility constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestAbility_Statics

// ********** Begin Class UTestAbility Property Definitions ****************************************
void Z_Construct_UClass_UTestAbility_Statics::NewProp_bEnableActivation_SetBit(void* Obj)
{
	((UTestAbility*)Obj)->bEnableActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestAbility_Statics::NewProp_bEnableActivation = { "bEnableActivation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestAbility), &Z_Construct_UClass_UTestAbility_Statics::NewProp_bEnableActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableActivation_MetaData), NewProp_bEnableActivation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAbility_Statics::NewProp_bEnableActivation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility_Statics::PropPointers) < 2048);
// ********** End Class UTestAbility Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UTestAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestAbility_Statics::ClassParams = {
	&UTestAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestAbility_Statics::Class_MetaDataParams)
};
void UTestAbility::StaticRegisterNativesUTestAbility()
{
}
UClass* Z_Construct_UClass_UTestAbility()
{
	if (!Z_Registration_Info_UClass_UTestAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestAbility.OuterSingleton, Z_Construct_UClass_UTestAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestAbility);
UTestAbility::~UTestAbility() {}
// ********** End Class UTestAbility ***************************************************************

// ********** Begin Class UTestAbility2 ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestAbility2;
UClass* UTestAbility2::GetPrivateStaticClass()
{
	using TClass = UTestAbility2;
	if (!Z_Registration_Info_UClass_UTestAbility2.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestAbility2"),
			Z_Registration_Info_UClass_UTestAbility2.InnerSingleton,
			StaticRegisterNativesUTestAbility2,
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
	return Z_Registration_Info_UClass_UTestAbility2.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestAbility2_NoRegister()
{
	return UTestAbility2::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestAbility2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestAbility.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestAbility.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestAbility2 constinit property declarations ****************************
// ********** End Class UTestAbility2 constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAbility2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestAbility2_Statics
UObject* (*const Z_Construct_UClass_UTestAbility2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestAbility2_Statics::ClassParams = {
	&UTestAbility2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility2_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestAbility2_Statics::Class_MetaDataParams)
};
void UTestAbility2::StaticRegisterNativesUTestAbility2()
{
}
UClass* Z_Construct_UClass_UTestAbility2()
{
	if (!Z_Registration_Info_UClass_UTestAbility2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestAbility2.OuterSingleton, Z_Construct_UClass_UTestAbility2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestAbility2.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestAbility2);
UTestAbility2::~UTestAbility2() {}
// ********** End Class UTestAbility2 **************************************************************

// ********** Begin Class UTestAbility3 ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestAbility3;
UClass* UTestAbility3::GetPrivateStaticClass()
{
	using TClass = UTestAbility3;
	if (!Z_Registration_Info_UClass_UTestAbility3.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestAbility3"),
			Z_Registration_Info_UClass_UTestAbility3.InnerSingleton,
			StaticRegisterNativesUTestAbility3,
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
	return Z_Registration_Info_UClass_UTestAbility3.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestAbility3_NoRegister()
{
	return UTestAbility3::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestAbility3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestAbility.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestAbility.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestAbility3 constinit property declarations ****************************
// ********** End Class UTestAbility3 constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAbility3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestAbility3_Statics
UObject* (*const Z_Construct_UClass_UTestAbility3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestAbility3_Statics::ClassParams = {
	&UTestAbility3::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAbility3_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestAbility3_Statics::Class_MetaDataParams)
};
void UTestAbility3::StaticRegisterNativesUTestAbility3()
{
}
UClass* Z_Construct_UClass_UTestAbility3()
{
	if (!Z_Registration_Info_UClass_UTestAbility3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestAbility3.OuterSingleton, Z_Construct_UClass_UTestAbility3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestAbility3.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestAbility3);
UTestAbility3::~UTestAbility3() {}
// ********** End Class UTestAbility3 **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestAbility_h__Script_AbilitiesTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestAbility, UTestAbility::StaticClass, TEXT("UTestAbility"), &Z_Registration_Info_UClass_UTestAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestAbility), 1318385232U) },
		{ Z_Construct_UClass_UTestAbility2, UTestAbility2::StaticClass, TEXT("UTestAbility2"), &Z_Registration_Info_UClass_UTestAbility2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestAbility2), 2402663108U) },
		{ Z_Construct_UClass_UTestAbility3, UTestAbility3::StaticClass, TEXT("UTestAbility3"), &Z_Registration_Info_UClass_UTestAbility3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestAbility3), 633302954U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestAbility_h__Script_AbilitiesTest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestAbility_h__Script_AbilitiesTest_2911796290{
	TEXT("/Script/AbilitiesTest"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestAbility_h__Script_AbilitiesTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestAbility_h__Script_AbilitiesTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
