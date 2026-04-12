// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Helpers/TestStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTestStructs() {}

// ********** Begin Cross Module References ********************************************************
ABILITIESTEST_API UScriptStruct* Z_Construct_UScriptStruct_FOtherStructTest();
ABILITIESTEST_API UScriptStruct* Z_Construct_UScriptStruct_FStructTest();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AbilitiesTest();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStructTest *******************************************************
struct Z_Construct_UScriptStruct_FStructTest_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStructTest); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStructTest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStructTest constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStructTest constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructTest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStructTest_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStructTest;
class UScriptStruct* FStructTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStructTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStructTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructTest, (UObject*)Z_Construct_UPackage__Script_AbilitiesTest(), TEXT("StructTest"));
	}
	return Z_Registration_Info_UScriptStruct_FStructTest.OuterSingleton;
	}

// ********** Begin ScriptStruct FStructTest Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructTest, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStructTest Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructTest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
	nullptr,
	&NewStructOps,
	"StructTest",
	Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers),
	sizeof(FStructTest),
	alignof(FStructTest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructTest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructTest()
{
	if (!Z_Registration_Info_UScriptStruct_FStructTest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStructTest.InnerSingleton, Z_Construct_UScriptStruct_FStructTest_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStructTest.InnerSingleton);
}
// ********** End ScriptStruct FStructTest *********************************************************

// ********** Begin ScriptStruct FOtherStructTest **************************************************
struct Z_Construct_UScriptStruct_FOtherStructTest_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOtherStructTest); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOtherStructTest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOtherStructTest constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOtherStructTest constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOtherStructTest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOtherStructTest_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOtherStructTest;
class UScriptStruct* FOtherStructTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOtherStructTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOtherStructTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOtherStructTest, (UObject*)Z_Construct_UPackage__Script_AbilitiesTest(), TEXT("OtherStructTest"));
	}
	return Z_Registration_Info_UScriptStruct_FOtherStructTest.OuterSingleton;
	}

// ********** Begin ScriptStruct FOtherStructTest Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOtherStructTest_Statics::NewProp_OtherLocation = { "OtherLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOtherStructTest, OtherLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherLocation_MetaData), NewProp_OtherLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOtherStructTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOtherStructTest_Statics::NewProp_OtherLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherStructTest_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOtherStructTest Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOtherStructTest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AbilitiesTest,
	nullptr,
	&NewStructOps,
	"OtherStructTest",
	Z_Construct_UScriptStruct_FOtherStructTest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherStructTest_Statics::PropPointers),
	sizeof(FOtherStructTest),
	alignof(FOtherStructTest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherStructTest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOtherStructTest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOtherStructTest()
{
	if (!Z_Registration_Info_UScriptStruct_FOtherStructTest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOtherStructTest.InnerSingleton, Z_Construct_UScriptStruct_FOtherStructTest_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOtherStructTest.InnerSingleton);
}
// ********** End ScriptStruct FOtherStructTest ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestStructs_h__Script_AbilitiesTest_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStructTest::StaticStruct, Z_Construct_UScriptStruct_FStructTest_Statics::NewStructOps, TEXT("StructTest"),&Z_Registration_Info_UScriptStruct_FStructTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructTest), 3537892855U) },
		{ FOtherStructTest::StaticStruct, Z_Construct_UScriptStruct_FOtherStructTest_Statics::NewStructOps, TEXT("OtherStructTest"),&Z_Registration_Info_UScriptStruct_FOtherStructTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOtherStructTest), 2800589659U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestStructs_h__Script_AbilitiesTest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestStructs_h__Script_AbilitiesTest_3003772024{
	TEXT("/Script/AbilitiesTest"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestStructs_h__Script_AbilitiesTest_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Test_Private_Helpers_TestStructs_h__Script_AbilitiesTest_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
