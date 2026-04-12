// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/StructContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStructContainer() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStructContainer();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStructContainerItem();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct_NoRegister();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStructContainerItem **********************************************
struct Z_Construct_UScriptStruct_FStructContainerItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStructContainerItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStructContainerItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/StructContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/StructContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/StructContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStructContainerItem constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStructContainerItem constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructContainerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStructContainerItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStructContainerItem;
class UScriptStruct* FStructContainerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStructContainerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStructContainerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructContainerItem, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("StructContainerItem"));
	}
	return Z_Registration_Info_UScriptStruct_FStructContainerItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FStructContainerItem Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructContainerItem_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructContainerItem, StructType), Z_Construct_UClass_UScriptStruct_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructType_MetaData), NewProp_StructType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructContainerItem_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructContainerItem, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructContainerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContainerItem_Statics::NewProp_StructType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContainerItem_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContainerItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStructContainerItem Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructContainerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"StructContainerItem",
	Z_Construct_UScriptStruct_FStructContainerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContainerItem_Statics::PropPointers),
	sizeof(FStructContainerItem),
	alignof(FStructContainerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContainerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructContainerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructContainerItem()
{
	if (!Z_Registration_Info_UScriptStruct_FStructContainerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStructContainerItem.InnerSingleton, Z_Construct_UScriptStruct_FStructContainerItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStructContainerItem.InnerSingleton);
}
// ********** End ScriptStruct FStructContainerItem ************************************************

// ********** Begin ScriptStruct FStructContainer **************************************************
struct Z_Construct_UScriptStruct_FStructContainer_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStructContainer); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStructContainer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/StructContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Structs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/StructContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/StructContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStructContainer constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Structs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Structs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStructContainer constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStructContainer_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStructContainer;
class UScriptStruct* FStructContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStructContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStructContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructContainer, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("StructContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FStructContainer.OuterSingleton;
	}

// ********** Begin ScriptStruct FStructContainer Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Structs_Inner = { "Structs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStructContainerItem, METADATA_PARAMS(0, nullptr) }; // 299471256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Structs = { "Structs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructContainer, Structs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Structs_MetaData), NewProp_Structs_MetaData) }; // 299471256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructContainer, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Structs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Structs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContainer_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContainer_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStructContainer Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"StructContainer",
	Z_Construct_UScriptStruct_FStructContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContainer_Statics::PropPointers),
	sizeof(FStructContainer),
	alignof(FStructContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FStructContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStructContainer.InnerSingleton, Z_Construct_UScriptStruct_FStructContainer_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStructContainer.InnerSingleton);
}
// ********** End ScriptStruct FStructContainer ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainer_h__Script_Abilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStructContainerItem::StaticStruct, Z_Construct_UScriptStruct_FStructContainerItem_Statics::NewStructOps, TEXT("StructContainerItem"),&Z_Registration_Info_UScriptStruct_FStructContainerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructContainerItem), 299471256U) },
		{ FStructContainer::StaticStruct, Z_Construct_UScriptStruct_FStructContainer_Statics::NewStructOps, TEXT("StructContainer"),&Z_Registration_Info_UScriptStruct_FStructContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructContainer), 2073357063U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainer_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainer_h__Script_Abilities_1582320620{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainer_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainer_h__Script_Abilities_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
