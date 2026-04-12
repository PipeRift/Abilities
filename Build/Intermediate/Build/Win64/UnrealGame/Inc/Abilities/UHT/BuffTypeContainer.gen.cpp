// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuffTypeContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBuffTypeContainer() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UBuff_NoRegister();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FBuffTypeContainer();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBuffTypeContainer ************************************************
struct Z_Construct_UScriptStruct_FBuffTypeContainer_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBuffTypeContainer); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuffTypeContainer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuffTypeContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuffTypeContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuffTypeContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuffTypeContainer constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuffTypeContainer constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffTypeContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBuffTypeContainer_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuffTypeContainer;
class UScriptStruct* FBuffTypeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBuffTypeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBuffTypeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffTypeContainer, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("BuffTypeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FBuffTypeContainer.OuterSingleton;
	}

// ********** Begin ScriptStruct FBuffTypeContainer Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffTypeContainer, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewProp_Buffs_ElementProp = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffTypeContainer, Buffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewProp_Buffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewProp_Buffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBuffTypeContainer Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"BuffTypeContainer",
	Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::PropPointers),
	sizeof(FBuffTypeContainer),
	alignof(FBuffTypeContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuffTypeContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FBuffTypeContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuffTypeContainer.InnerSingleton, Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuffTypeContainer.InnerSingleton);
}
// ********** End ScriptStruct FBuffTypeContainer **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffTypeContainer_h__Script_Abilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuffTypeContainer::StaticStruct, Z_Construct_UScriptStruct_FBuffTypeContainer_Statics::NewStructOps, TEXT("BuffTypeContainer"),&Z_Registration_Info_UScriptStruct_FBuffTypeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffTypeContainer), 1686094618U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffTypeContainer_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffTypeContainer_h__Script_Abilities_2632345915{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffTypeContainer_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffTypeContainer_h__Script_Abilities_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
