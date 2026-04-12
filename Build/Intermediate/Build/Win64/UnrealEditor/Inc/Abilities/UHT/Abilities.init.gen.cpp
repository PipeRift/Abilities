// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilities_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	ABILITIES_API UFunction* Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature();
	ABILITIES_API UFunction* Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature();
	ABILITIES_API UFunction* Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Abilities;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Abilities()
	{
		if (!Z_Registration_Info_UPackage__Script_Abilities.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Abilities",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x81BD6C9D,
			0x9C37516C,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Abilities.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Abilities.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Abilities(Z_Construct_UPackage__Script_Abilities, TEXT("/Script/Abilities"), Z_Registration_Info_UPackage__Script_Abilities, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x81BD6C9D, 0x9C37516C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
