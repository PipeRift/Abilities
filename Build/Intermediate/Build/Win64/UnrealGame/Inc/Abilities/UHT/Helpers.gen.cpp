// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Helpers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHelpers() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAllAny();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAllAny *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAllAny;
static UEnum* EAllAny_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAllAny.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAllAny.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EAllAny, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EAllAny"));
	}
	return Z_Registration_Info_UEnum_EAllAny.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAllAny>()
{
	return EAllAny_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EAllAny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EAllAny::All" },
		{ "Any.Name", "EAllAny::Any" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Helpers.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAllAny::All", (int64)EAllAny::All },
		{ "EAllAny::Any", (int64)EAllAny::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EAllAny_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EAllAny_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EAllAny",
	"EAllAny",
	Z_Construct_UEnum_Abilities_EAllAny_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAllAny_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAllAny_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EAllAny_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EAllAny()
{
	if (!Z_Registration_Info_UEnum_EAllAny.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAllAny.InnerSingleton, Z_Construct_UEnum_Abilities_EAllAny_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAllAny.InnerSingleton;
}
// ********** End Enum EAllAny *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_Helpers_h__Script_Abilities_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAllAny_StaticEnum, TEXT("EAllAny"), &Z_Registration_Info_UEnum_EAllAny, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 679592783U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_Helpers_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_Helpers_h__Script_Abilities_4069527601{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_Helpers_h__Script_Abilities_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_Helpers_h__Script_Abilities_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
