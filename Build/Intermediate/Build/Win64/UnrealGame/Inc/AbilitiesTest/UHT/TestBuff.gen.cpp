// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Helpers/TestBuff.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTestBuff() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UBuff();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_NoRegister();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_Stackable();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_Stackable_NoRegister();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_Unique();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_Unique_NoRegister();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_UniqueReplace();
ABILITIESTEST_API UClass* Z_Construct_UClass_UTestBuff_UniqueReplace_NoRegister();
UPackage* Z_Construct_UPackage__Script_AbilitiesTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTestBuff ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestBuff;
UClass* UTestBuff::GetPrivateStaticClass()
{
	using TClass = UTestBuff;
	if (!Z_Registration_Info_UClass_UTestBuff.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestBuff"),
			Z_Registration_Info_UClass_UTestBuff.InnerSingleton,
			StaticRegisterNativesUTestBuff,
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
	return Z_Registration_Info_UClass_UTestBuff.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestBuff_NoRegister()
{
	return UTestBuff::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestBuff.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestBuff.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestBuff constinit property declarations ********************************
// ********** End Class UTestBuff constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBuff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestBuff_Statics
UObject* (*const Z_Construct_UClass_UTestBuff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBuff,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBuff_Statics::ClassParams = {
	&UTestBuff::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBuff_Statics::Class_MetaDataParams)
};
void UTestBuff::StaticRegisterNativesUTestBuff()
{
}
UClass* Z_Construct_UClass_UTestBuff()
{
	if (!Z_Registration_Info_UClass_UTestBuff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBuff.OuterSingleton, Z_Construct_UClass_UTestBuff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBuff.OuterSingleton;
}
UTestBuff::UTestBuff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestBuff);
UTestBuff::~UTestBuff() {}
// ********** End Class UTestBuff ******************************************************************

// ********** Begin Class UTestBuff_Unique *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestBuff_Unique;
UClass* UTestBuff_Unique::GetPrivateStaticClass()
{
	using TClass = UTestBuff_Unique;
	if (!Z_Registration_Info_UClass_UTestBuff_Unique.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestBuff_Unique"),
			Z_Registration_Info_UClass_UTestBuff_Unique.InnerSingleton,
			StaticRegisterNativesUTestBuff_Unique,
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
	return Z_Registration_Info_UClass_UTestBuff_Unique.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestBuff_Unique_NoRegister()
{
	return UTestBuff_Unique::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestBuff_Unique_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestBuff.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestBuff.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestBuff_Unique constinit property declarations *************************
// ********** End Class UTestBuff_Unique constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBuff_Unique>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestBuff_Unique_Statics
UObject* (*const Z_Construct_UClass_UTestBuff_Unique_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBuff,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_Unique_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBuff_Unique_Statics::ClassParams = {
	&UTestBuff_Unique::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_Unique_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBuff_Unique_Statics::Class_MetaDataParams)
};
void UTestBuff_Unique::StaticRegisterNativesUTestBuff_Unique()
{
}
UClass* Z_Construct_UClass_UTestBuff_Unique()
{
	if (!Z_Registration_Info_UClass_UTestBuff_Unique.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBuff_Unique.OuterSingleton, Z_Construct_UClass_UTestBuff_Unique_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBuff_Unique.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestBuff_Unique);
UTestBuff_Unique::~UTestBuff_Unique() {}
// ********** End Class UTestBuff_Unique ***********************************************************

// ********** Begin Class UTestBuff_UniqueReplace **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestBuff_UniqueReplace;
UClass* UTestBuff_UniqueReplace::GetPrivateStaticClass()
{
	using TClass = UTestBuff_UniqueReplace;
	if (!Z_Registration_Info_UClass_UTestBuff_UniqueReplace.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestBuff_UniqueReplace"),
			Z_Registration_Info_UClass_UTestBuff_UniqueReplace.InnerSingleton,
			StaticRegisterNativesUTestBuff_UniqueReplace,
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
	return Z_Registration_Info_UClass_UTestBuff_UniqueReplace.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestBuff_UniqueReplace_NoRegister()
{
	return UTestBuff_UniqueReplace::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestBuff_UniqueReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestBuff.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestBuff.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestBuff_UniqueReplace constinit property declarations ******************
// ********** End Class UTestBuff_UniqueReplace constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBuff_UniqueReplace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestBuff_UniqueReplace_Statics
UObject* (*const Z_Construct_UClass_UTestBuff_UniqueReplace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBuff,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_UniqueReplace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBuff_UniqueReplace_Statics::ClassParams = {
	&UTestBuff_UniqueReplace::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_UniqueReplace_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBuff_UniqueReplace_Statics::Class_MetaDataParams)
};
void UTestBuff_UniqueReplace::StaticRegisterNativesUTestBuff_UniqueReplace()
{
}
UClass* Z_Construct_UClass_UTestBuff_UniqueReplace()
{
	if (!Z_Registration_Info_UClass_UTestBuff_UniqueReplace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBuff_UniqueReplace.OuterSingleton, Z_Construct_UClass_UTestBuff_UniqueReplace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBuff_UniqueReplace.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestBuff_UniqueReplace);
UTestBuff_UniqueReplace::~UTestBuff_UniqueReplace() {}
// ********** End Class UTestBuff_UniqueReplace ****************************************************

// ********** Begin Class UTestBuff_Stackable ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTestBuff_Stackable;
UClass* UTestBuff_Stackable::GetPrivateStaticClass()
{
	using TClass = UTestBuff_Stackable;
	if (!Z_Registration_Info_UClass_UTestBuff_Stackable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestBuff_Stackable"),
			Z_Registration_Info_UClass_UTestBuff_Stackable.InnerSingleton,
			StaticRegisterNativesUTestBuff_Stackable,
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
	return Z_Registration_Info_UClass_UTestBuff_Stackable.InnerSingleton;
}
UClass* Z_Construct_UClass_UTestBuff_Stackable_NoRegister()
{
	return UTestBuff_Stackable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTestBuff_Stackable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestBuff.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Helpers/TestBuff.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTestBuff_Stackable constinit property declarations **********************
// ********** End Class UTestBuff_Stackable constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBuff_Stackable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTestBuff_Stackable_Statics
UObject* (*const Z_Construct_UClass_UTestBuff_Stackable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTestBuff,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_Stackable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBuff_Stackable_Statics::ClassParams = {
	&UTestBuff_Stackable::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuff_Stackable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBuff_Stackable_Statics::Class_MetaDataParams)
};
void UTestBuff_Stackable::StaticRegisterNativesUTestBuff_Stackable()
{
}
UClass* Z_Construct_UClass_UTestBuff_Stackable()
{
	if (!Z_Registration_Info_UClass_UTestBuff_Stackable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBuff_Stackable.OuterSingleton, Z_Construct_UClass_UTestBuff_Stackable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBuff_Stackable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTestBuff_Stackable);
UTestBuff_Stackable::~UTestBuff_Stackable() {}
// ********** End Class UTestBuff_Stackable ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestBuff_h__Script_AbilitiesTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBuff, UTestBuff::StaticClass, TEXT("UTestBuff"), &Z_Registration_Info_UClass_UTestBuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBuff), 2549311937U) },
		{ Z_Construct_UClass_UTestBuff_Unique, UTestBuff_Unique::StaticClass, TEXT("UTestBuff_Unique"), &Z_Registration_Info_UClass_UTestBuff_Unique, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBuff_Unique), 1392538019U) },
		{ Z_Construct_UClass_UTestBuff_UniqueReplace, UTestBuff_UniqueReplace::StaticClass, TEXT("UTestBuff_UniqueReplace"), &Z_Registration_Info_UClass_UTestBuff_UniqueReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBuff_UniqueReplace), 936690086U) },
		{ Z_Construct_UClass_UTestBuff_Stackable, UTestBuff_Stackable::StaticClass, TEXT("UTestBuff_Stackable"), &Z_Registration_Info_UClass_UTestBuff_Stackable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBuff_Stackable), 763965711U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestBuff_h__Script_AbilitiesTest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestBuff_h__Script_AbilitiesTest_3595833312{
	TEXT("/Script/AbilitiesTest"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestBuff_h__Script_AbilitiesTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestBuff_h__Script_AbilitiesTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
