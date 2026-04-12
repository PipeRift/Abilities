// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Buff.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBuff() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
ABILITIES_API UClass* Z_Construct_UClass_UBuff();
ABILITIES_API UClass* Z_Construct_UClass_UBuff_NoRegister();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FBuffCount();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBuffCount ********************************************************
struct Z_Construct_UScriptStruct_FBuffCount_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBuffCount); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuffCount); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buff_MetaData[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuffCount constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuffCount constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffCount>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBuffCount_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuffCount;
class UScriptStruct* FBuffCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBuffCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBuffCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffCount, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("BuffCount"));
	}
	return Z_Registration_Info_UScriptStruct_FBuffCount.OuterSingleton;
	}

// ********** Begin ScriptStruct FBuffCount Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuffCount_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffCount, Buff), Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buff_MetaData), NewProp_Buff_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuffCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffCount, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuffCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffCount_Statics::NewProp_Buff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffCount_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffCount_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBuffCount Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffCount_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"BuffCount",
	Z_Construct_UScriptStruct_FBuffCount_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffCount_Statics::PropPointers),
	sizeof(FBuffCount),
	alignof(FBuffCount),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffCount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuffCount_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuffCount()
{
	if (!Z_Registration_Info_UScriptStruct_FBuffCount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuffCount.InnerSingleton, Z_Construct_UScriptStruct_FBuffCount_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuffCount.InnerSingleton);
}
// ********** End ScriptStruct FBuffCount **********************************************************

// ********** Begin Class UBuff Function EventApplyEffects *****************************************
struct Buff_eventEventApplyEffects_Parms
{
	UAbilitiesComponent* Component;
	int32 Count;
};
static FName NAME_UBuff_EventApplyEffects = FName(TEXT("EventApplyEffects"));
void UBuff::EventApplyEffects(UAbilitiesComponent* Component, int32 Count) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBuff_EventApplyEffects);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Buff_eventEventApplyEffects_Parms Parms;
		Parms.Component=Component;
		Parms.Count=Count;
		const_cast<UBuff*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UBuff*>(this)->EventApplyEffects_Implementation(Component, Count);
	}
}
struct Z_Construct_UFunction_UBuff_EventApplyEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "Comment", "/**\n\x09 * Called when a buff is applied.\n\x09 * @param Component that has the buff\n\x09 * @param Count of buffs to apply (if stackable)\n\x09 */" },
		{ "DisplayName", "Apply Effects" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "Called when a buff is applied.\n@param Component that has the buff\n@param Count of buffs to apply (if stackable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventApplyEffects constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventApplyEffects constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventApplyEffects Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Buff_eventEventApplyEffects_Parms, Component), Z_Construct_UClass_UAbilitiesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Buff_eventEventApplyEffects_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::PropPointers) < 2048);
// ********** End Function EventApplyEffects Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuff, nullptr, "EventApplyEffects", 	Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::PropPointers), 
sizeof(Buff_eventEventApplyEffects_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Buff_eventEventApplyEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuff_EventApplyEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuff_EventApplyEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuff::execEventApplyEffects)
{
	P_GET_OBJECT(UAbilitiesComponent,Z_Param_Component);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventApplyEffects_Implementation(Z_Param_Component,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UBuff Function EventApplyEffects *******************************************

// ********** Begin Class UBuff Function EventRevertEffects ****************************************
struct Buff_eventEventRevertEffects_Parms
{
	UAbilitiesComponent* Component;
	int32 Count;
};
static FName NAME_UBuff_EventRevertEffects = FName(TEXT("EventRevertEffects"));
void UBuff::EventRevertEffects(UAbilitiesComponent* Component, int32 Count) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBuff_EventRevertEffects);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Buff_eventEventRevertEffects_Parms Parms;
		Parms.Component=Component;
		Parms.Count=Count;
		const_cast<UBuff*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UBuff*>(this)->EventRevertEffects_Implementation(Component, Count);
	}
}
struct Z_Construct_UFunction_UBuff_EventRevertEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "Comment", "/**\n\x09 * Called when a buff is reverted.\n\x09 * @param Component that has the buff\n\x09 * @param Count of buffs to revert (if stackable)\n\x09 */" },
		{ "DisplayName", "Revert Effects" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "Called when a buff is reverted.\n@param Component that has the buff\n@param Count of buffs to revert (if stackable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventRevertEffects constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventRevertEffects constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventRevertEffects Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Buff_eventEventRevertEffects_Parms, Component), Z_Construct_UClass_UAbilitiesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Buff_eventEventRevertEffects_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::PropPointers) < 2048);
// ********** End Function EventRevertEffects Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuff, nullptr, "EventRevertEffects", 	Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::PropPointers), 
sizeof(Buff_eventEventRevertEffects_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Buff_eventEventRevertEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuff_EventRevertEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuff_EventRevertEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuff::execEventRevertEffects)
{
	P_GET_OBJECT(UAbilitiesComponent,Z_Param_Component);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventRevertEffects_Implementation(Z_Param_Component,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UBuff Function EventRevertEffects ******************************************

// ********** Begin Class UBuff Function GetDisplayName ********************************************
struct Z_Construct_UFunction_UBuff_GetDisplayName_Statics
{
	struct Buff_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDisplayName constinit property declarations ************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDisplayName constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDisplayName Property Definitions ***********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBuff_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Buff_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuff_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuff_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_GetDisplayName_Statics::PropPointers) < 2048);
// ********** End Function GetDisplayName Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuff_GetDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuff, nullptr, "GetDisplayName", 	Z_Construct_UFunction_UBuff_GetDisplayName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_GetDisplayName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBuff_GetDisplayName_Statics::Buff_eventGetDisplayName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuff_GetDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBuff_GetDisplayName_Statics::Buff_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuff_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuff_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuff::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// ********** End Class UBuff Function GetDisplayName **********************************************

// ********** Begin Class UBuff Function GetLifetimeDuration ***************************************
struct Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics
{
	struct Buff_eventGetLifetimeDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLifetimeDuration constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLifetimeDuration constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLifetimeDuration Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Buff_eventGetLifetimeDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::PropPointers) < 2048);
// ********** End Function GetLifetimeDuration Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuff, nullptr, "GetLifetimeDuration", 	Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::Buff_eventGetLifetimeDuration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::Buff_eventGetLifetimeDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuff_GetLifetimeDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuff_GetLifetimeDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuff::execGetLifetimeDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLifetimeDuration();
	P_NATIVE_END;
}
// ********** End Class UBuff Function GetLifetimeDuration *****************************************

// ********** Begin Class UBuff ********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBuff;
UClass* UBuff::GetPrivateStaticClass()
{
	using TClass = UBuff;
	if (!Z_Registration_Info_UClass_UBuff.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Buff"),
			Z_Registration_Info_UClass_UBuff.InnerSingleton,
			StaticRegisterNativesUBuff,
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
	return Z_Registration_Info_UClass_UBuff.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuff_NoRegister()
{
	return UBuff::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Buff.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignerNotes_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "MultiLine", "TRUE" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToApply_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Tags added when applied, removed when reverted\n" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "Tags added when applied, removed when reverted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTagsOnApply_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveTagsOnApply_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTagsOnRevert_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveTagsOnRevert_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/Buff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStackable_MetaData[] = {
		{ "Category", "Buff" },
		{ "Comment", "/** If true, more than one of the same buff can be applied\n\x09 * When a second stackable buff is applied, the previous amount is reverted, then the new count (previous + 1) is applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "If true, more than one of the same buff can be applied\nWhen a second stackable buff is applied, the previous amount is reverted, then the new count (previous + 1) is applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnique_MetaData[] = {
		{ "Category", "Buff" },
		{ "Comment", "// If true, only one buff of this type will be applied at the same time\n" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "If true, only one buff of this type will be applied at the same time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplacePreviousUnique_MetaData[] = {
		{ "Category", "Buff" },
		{ "Comment", "// If true, when unique, this buff will have priority and replace any other buff of the same type.\n" },
		{ "EditCondition", "bUnique" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "If true, when unique, this buff will have priority and replace any other buff of the same type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLifetime_MetaData[] = {
		{ "Category", "Buff" },
		{ "Comment", "// If true, the buff will be removed after \"LifetimeDuration\" seconds.\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "If true, the buff will be removed after \"LifetimeDuration\" seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifetimeDuration_MetaData[] = {
		{ "Category", "Buff" },
		{ "ClampMin", "0" },
		{ "Comment", "// Seconds until the buff is removed. Only if enabled and more than 0.\n" },
		{ "EditCondition", "bHasLifetime" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "Seconds until the buff is removed. Only if enabled and more than 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Buff" },
		{ "Comment", "// Tags used to identify this buff. They wont be applied or reverted.\n" },
		{ "ModuleRelativePath", "Public/Buff.h" },
		{ "ToolTip", "Tags used to identify this buff. They wont be applied or reverted." },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuff constinit property declarations ************************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DesignerNotes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyTagsOnApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveTagsOnApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyTagsOnRevert;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveTagsOnRevert;
	static void NewProp_bStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStackable;
	static void NewProp_bUnique_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnique;
	static void NewProp_bReplacePreviousUnique_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplacePreviousUnique;
	static void NewProp_bHasLifetime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifetimeDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuff constinit property declarations **************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EventApplyEffects"), .Pointer = &UBuff::execEventApplyEffects },
		{ .NameUTF8 = UTF8TEXT("EventRevertEffects"), .Pointer = &UBuff::execEventRevertEffects },
		{ .NameUTF8 = UTF8TEXT("GetDisplayName"), .Pointer = &UBuff::execGetDisplayName },
		{ .NameUTF8 = UTF8TEXT("GetLifetimeDuration"), .Pointer = &UBuff::execGetLifetimeDuration },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuff_EventApplyEffects, "EventApplyEffects" }, // 425516481
		{ &Z_Construct_UFunction_UBuff_EventRevertEffects, "EventRevertEffects" }, // 3608971065
		{ &Z_Construct_UFunction_UBuff_GetDisplayName, "GetDisplayName" }, // 130716084
		{ &Z_Construct_UFunction_UBuff_GetLifetimeDuration, "GetLifetimeDuration" }, // 1380794343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBuff_Statics

// ********** Begin Class UBuff Property Definitions ***********************************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_DesignerNotes = { "DesignerNotes", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, DesignerNotes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignerNotes_MetaData), NewProp_DesignerNotes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_TagsToApply = { "TagsToApply", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, TagsToApply), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToApply_MetaData), NewProp_TagsToApply_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_ApplyTagsOnApply = { "ApplyTagsOnApply", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, ApplyTagsOnApply), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyTagsOnApply_MetaData), NewProp_ApplyTagsOnApply_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_RemoveTagsOnApply = { "RemoveTagsOnApply", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, RemoveTagsOnApply), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveTagsOnApply_MetaData), NewProp_RemoveTagsOnApply_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_ApplyTagsOnRevert = { "ApplyTagsOnRevert", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, ApplyTagsOnRevert), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyTagsOnRevert_MetaData), NewProp_ApplyTagsOnRevert_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_RemoveTagsOnRevert = { "RemoveTagsOnRevert", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, RemoveTagsOnRevert), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveTagsOnRevert_MetaData), NewProp_RemoveTagsOnRevert_MetaData) }; // 3438578166
void Z_Construct_UClass_UBuff_Statics::NewProp_bStackable_SetBit(void* Obj)
{
	((UBuff*)Obj)->bStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_bStackable = { "bStackable", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuff), &Z_Construct_UClass_UBuff_Statics::NewProp_bStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStackable_MetaData), NewProp_bStackable_MetaData) };
void Z_Construct_UClass_UBuff_Statics::NewProp_bUnique_SetBit(void* Obj)
{
	((UBuff*)Obj)->bUnique = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_bUnique = { "bUnique", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuff), &Z_Construct_UClass_UBuff_Statics::NewProp_bUnique_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnique_MetaData), NewProp_bUnique_MetaData) };
void Z_Construct_UClass_UBuff_Statics::NewProp_bReplacePreviousUnique_SetBit(void* Obj)
{
	((UBuff*)Obj)->bReplacePreviousUnique = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_bReplacePreviousUnique = { "bReplacePreviousUnique", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuff), &Z_Construct_UClass_UBuff_Statics::NewProp_bReplacePreviousUnique_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplacePreviousUnique_MetaData), NewProp_bReplacePreviousUnique_MetaData) };
void Z_Construct_UClass_UBuff_Statics::NewProp_bHasLifetime_SetBit(void* Obj)
{
	((UBuff*)Obj)->bHasLifetime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_bHasLifetime = { "bHasLifetime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuff), &Z_Construct_UClass_UBuff_Statics::NewProp_bHasLifetime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLifetime_MetaData), NewProp_bHasLifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_LifetimeDuration = { "LifetimeDuration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, LifetimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifetimeDuration_MetaData), NewProp_LifetimeDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuff_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuff, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_Icon,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_DesignerNotes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_TagsToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_ApplyTagsOnApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_RemoveTagsOnApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_ApplyTagsOnRevert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_RemoveTagsOnRevert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_bStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_bUnique,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_bReplacePreviousUnique,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_bHasLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_LifetimeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuff_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuff_Statics::PropPointers) < 2048);
// ********** End Class UBuff Property Definitions *************************************************
UObject* (*const Z_Construct_UClass_UBuff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuff_Statics::ClassParams = {
	&UBuff::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBuff_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuff_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuff_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuff_Statics::Class_MetaDataParams)
};
void UBuff::StaticRegisterNativesUBuff()
{
	UClass* Class = UBuff::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBuff_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBuff()
{
	if (!Z_Registration_Info_UClass_UBuff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuff.OuterSingleton, Z_Construct_UClass_UBuff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuff.OuterSingleton;
}
UBuff::UBuff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuff);
UBuff::~UBuff() {}
// ********** End Class UBuff **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuffCount::StaticStruct, Z_Construct_UScriptStruct_FBuffCount_Statics::NewStructOps, TEXT("BuffCount"),&Z_Registration_Info_UScriptStruct_FBuffCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffCount), 3926446658U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuff, UBuff::StaticClass, TEXT("UBuff"), &Z_Registration_Info_UClass_UBuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuff), 327331003U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_2712219130{
	TEXT("/Script/Abilities"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h__Script_Abilities_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
