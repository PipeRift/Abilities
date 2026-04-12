// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityBase.h"
#include "AbilityTypes.h"
#include "Misc/StructContainer.h"
#include "UObject/CoreNet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbilityBase() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
ABILITIES_API UClass* Z_Construct_UClass_UAbilityBase();
ABILITIES_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityState();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityTransitionFlag();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityStateTransition();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStructContainer();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAbilityBase Function ClientRejectState **********************************
struct AbilityBase_eventClientRejectState_Parms
{
	FAbilityStateTransition Transition;
	uint32 RequestedStateId;
};
static FName NAME_UAbilityBase_ClientRejectState = FName(TEXT("ClientRejectState"));
void UAbilityBase::ClientRejectState(FAbilityStateTransition Transition, uint32 RequestedStateId)
{
	AbilityBase_eventClientRejectState_Parms Parms;
	Parms.Transition=Transition;
	Parms.RequestedStateId=RequestedStateId;
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_ClientRejectState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClientRejectState constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestedStateId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClientRejectState constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClientRejectState Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventClientRejectState_Parms, Transition), Z_Construct_UScriptStruct_FAbilityStateTransition, METADATA_PARAMS(0, nullptr) }; // 2353912302
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::NewProp_RequestedStateId = { "RequestedStateId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventClientRejectState_Parms, RequestedStateId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::NewProp_RequestedStateId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::PropPointers) < 2048);
// ********** End Function ClientRejectState Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "ClientRejectState", 	Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::PropPointers), 
sizeof(AbilityBase_eventClientRejectState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilityBase_eventClientRejectState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_ClientRejectState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_ClientRejectState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execClientRejectState)
{
	P_GET_STRUCT(FAbilityStateTransition,Z_Param_Transition);
	P_GET_PROPERTY(FUInt32Property,Z_Param_RequestedStateId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRejectState_Implementation(Z_Param_Transition,Z_Param_RequestedStateId);
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function ClientRejectState ************************************

// ********** Begin Class UAbilityBase Function EventBeginPlay *************************************
static FName NAME_UAbilityBase_EventBeginPlay = FName(TEXT("EventBeginPlay"));
void UAbilityBase::EventBeginPlay()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_EventBeginPlay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EventBeginPlay_Implementation();
	}
}
struct Z_Construct_UFunction_UAbilityBase_EventBeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventBeginPlay constinit property declarations ************************
// ********** End Function EventBeginPlay constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_EventBeginPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "EventBeginPlay", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_EventBeginPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilityBase_EventBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_EventBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execEventBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventBeginPlay_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function EventBeginPlay ***************************************

// ********** Begin Class UAbilityBase Function EventEndPlay ***************************************
static FName NAME_UAbilityBase_EventEndPlay = FName(TEXT("EventEndPlay"));
void UAbilityBase::EventEndPlay()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_EventEndPlay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EventEndPlay_Implementation();
	}
}
struct Z_Construct_UFunction_UAbilityBase_EventEndPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "End Play" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventEndPlay constinit property declarations **************************
// ********** End Function EventEndPlay constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_EventEndPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "EventEndPlay", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_EventEndPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilityBase_EventEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_EventEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execEventEndPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventEndPlay_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function EventEndPlay *****************************************

// ********** Begin Class UAbilityBase Function EventPreStateChange ********************************
struct AbilityBase_eventEventPreStateChange_Parms
{
	FAbilityStateTransition Transition;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AbilityBase_eventEventPreStateChange_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAbilityBase_EventPreStateChange = FName(TEXT("EventPreStateChange"));
bool UAbilityBase::EventPreStateChange(FAbilityStateTransition Transition)
{
	AbilityBase_eventEventPreStateChange_Parms Parms;
	Parms.Transition=Transition;
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_EventPreStateChange);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Called before an state is set to fill the container with structs\n// @return true if modified\n" },
		{ "DisplayName", "Pre-State Change" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
		{ "ToolTip", "Called before an state is set to fill the container with structs\n@return true if modified" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventPreStateChange constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventPreStateChange constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventPreStateChange Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventEventPreStateChange_Parms, Transition), Z_Construct_UScriptStruct_FAbilityStateTransition, METADATA_PARAMS(0, nullptr) }; // 2353912302
void Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityBase_eventEventPreStateChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityBase_eventEventPreStateChange_Parms), &Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::PropPointers) < 2048);
// ********** End Function EventPreStateChange Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "EventPreStateChange", 	Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::PropPointers), 
sizeof(AbilityBase_eventEventPreStateChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilityBase_eventEventPreStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_EventPreStateChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_EventPreStateChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbilityBase Function EventPreStateChange **********************************

// ********** Begin Class UAbilityBase Function EventTick ******************************************
struct AbilityBase_eventEventTick_Parms
{
	float DeltaTime;
};
static FName NAME_UAbilityBase_EventTick = FName(TEXT("EventTick"));
void UAbilityBase::EventTick(float DeltaTime)
{
	AbilityBase_eventEventTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_EventTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilityBase_EventTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventTick constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventTick constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventTick Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityBase_EventTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventEventTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_EventTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_EventTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventTick_Statics::PropPointers) < 2048);
// ********** End Function EventTick Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_EventTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "EventTick", 	Z_Construct_UFunction_UAbilityBase_EventTick_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventTick_Statics::PropPointers), 
sizeof(AbilityBase_eventEventTick_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_EventTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_EventTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilityBase_eventEventTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_EventTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_EventTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbilityBase Function EventTick ********************************************

// ********** Begin Class UAbilityBase Function GetAbilitiesComponent ******************************
struct Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics
{
	struct AbilityBase_eventGetAbilitiesComponent_Parms
	{
		UAbilitiesComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilitiesComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilitiesComponent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilitiesComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventGetAbilitiesComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitiesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::PropPointers) < 2048);
// ********** End Function GetAbilitiesComponent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "GetAbilitiesComponent", 	Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::AbilityBase_eventGetAbilitiesComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::AbilityBase_eventGetAbilitiesComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execGetAbilitiesComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitiesComponent**)Z_Param__Result=P_THIS->GetAbilitiesComponent();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function GetAbilitiesComponent ********************************

// ********** Begin Class UAbilityBase Function GetOwner *******************************************
struct Z_Construct_UFunction_UAbilityBase_GetOwner_Statics
{
	struct AbilityBase_eventGetOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwner constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwner constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwner Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::PropPointers) < 2048);
// ********** End Function GetOwner Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "GetOwner", 	Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::AbilityBase_eventGetOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::AbilityBase_eventGetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_GetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_GetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execGetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwner();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function GetOwner *********************************************

// ********** Begin Class UAbilityBase Function GetState *******************************************
struct Z_Construct_UFunction_UAbilityBase_GetState_Statics
{
	struct AbilityBase_eventGetState_Parms
	{
		EAbilityState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetState constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetState constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetState Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityBase_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityBase_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Abilities_EAbilityState, METADATA_PARAMS(0, nullptr) }; // 4185111732
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_GetState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetState_Statics::PropPointers) < 2048);
// ********** End Function GetState Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_GetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "GetState", 	Z_Construct_UFunction_UAbilityBase_GetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_GetState_Statics::AbilityBase_eventGetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_GetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_GetState_Statics::AbilityBase_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAbilityState*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function GetState *********************************************

// ********** Begin Class UAbilityBase Function HasAuthority ***************************************
struct Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics
{
	struct AbilityBase_eventHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAuthority constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAuthority constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAuthority Property Definitions *************************************
void Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityBase_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityBase_eventHasAuthority_Parms), &Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::PropPointers) < 2048);
// ********** End Function HasAuthority Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "HasAuthority", 	Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::AbilityBase_eventHasAuthority_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::AbilityBase_eventHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_HasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_HasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAuthority();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function HasAuthority *****************************************

// ********** Begin Class UAbilityBase Function HasBegunPlay ***************************************
struct Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics
{
	struct AbilityBase_eventHasBegunPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasBegunPlay constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasBegunPlay constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasBegunPlay Property Definitions *************************************
void Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityBase_eventHasBegunPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityBase_eventHasBegunPlay_Parms), &Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::PropPointers) < 2048);
// ********** End Function HasBegunPlay Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "HasBegunPlay", 	Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::AbilityBase_eventHasBegunPlay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::AbilityBase_eventHasBegunPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_HasBegunPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_HasBegunPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execHasBegunPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBegunPlay();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function HasBegunPlay *****************************************

// ********** Begin Class UAbilityBase Function IsLocallyOwned *************************************
struct Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics
{
	struct AbilityBase_eventIsLocallyOwned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLocallyOwned constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLocallyOwned constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLocallyOwned Property Definitions ***********************************
void Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityBase_eventIsLocallyOwned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityBase_eventIsLocallyOwned_Parms), &Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::PropPointers) < 2048);
// ********** End Function IsLocallyOwned Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "IsLocallyOwned", 	Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::AbilityBase_eventIsLocallyOwned_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::AbilityBase_eventIsLocallyOwned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_IsLocallyOwned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_IsLocallyOwned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execIsLocallyOwned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocallyOwned();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function IsLocallyOwned ***************************************

// ********** Begin Class UAbilityBase Function MCSetState *****************************************
struct AbilityBase_eventMCSetState_Parms
{
	FAbilityStateTransition Transition;
	FStructContainer Container;
	uint32 ServerStateId;
};
static FName NAME_UAbilityBase_MCSetState = FName(TEXT("MCSetState"));
void UAbilityBase::MCSetState(FAbilityStateTransition Transition, FStructContainer const& Container, uint32 ServerStateId)
{
	AbilityBase_eventMCSetState_Parms Parms;
	Parms.Transition=Transition;
	Parms.Container=Container;
	Parms.ServerStateId=ServerStateId;
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_MCSetState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilityBase_MCSetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MCSetState constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ServerStateId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MCSetState constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MCSetState Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventMCSetState_Parms, Transition), Z_Construct_UScriptStruct_FAbilityStateTransition, METADATA_PARAMS(0, nullptr) }; // 2353912302
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventMCSetState_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::NewProp_ServerStateId = { "ServerStateId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventMCSetState_Parms, ServerStateId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::NewProp_ServerStateId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::PropPointers) < 2048);
// ********** End Function MCSetState Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "MCSetState", 	Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::PropPointers), 
sizeof(AbilityBase_eventMCSetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilityBase_eventMCSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_MCSetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_MCSetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execMCSetState)
{
	P_GET_STRUCT(FAbilityStateTransition,Z_Param_Transition);
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_GET_PROPERTY(FUInt32Property,Z_Param_ServerStateId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MCSetState_Implementation(Z_Param_Transition,Z_Param_Container,Z_Param_ServerStateId);
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function MCSetState *******************************************

// ********** Begin Class UAbilityBase Function OnRep_Owner ****************************************
struct Z_Construct_UFunction_UAbilityBase_OnRep_Owner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Owner constinit property declarations ***************************
// ********** End Function OnRep_Owner constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_OnRep_Owner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "OnRep_Owner", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_OnRep_Owner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_OnRep_Owner_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilityBase_OnRep_Owner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_OnRep_Owner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execOnRep_Owner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Owner();
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function OnRep_Owner ******************************************

// ********** Begin Class UAbilityBase Function ServerSetState *************************************
struct AbilityBase_eventServerSetState_Parms
{
	FAbilityStateTransition Transition;
	FStructContainer Container;
	uint32 RequestedStateId;
};
static FName NAME_UAbilityBase_ServerSetState = FName(TEXT("ServerSetState"));
void UAbilityBase::ServerSetState(FAbilityStateTransition Transition, FStructContainer const& Container, uint32 RequestedStateId)
{
	AbilityBase_eventServerSetState_Parms Parms;
	Parms.Transition=Transition;
	Parms.Container=Container;
	Parms.RequestedStateId=RequestedStateId;
	UFunction* Func = FindFunctionChecked(NAME_UAbilityBase_ServerSetState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetState constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestedStateId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetState constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetState Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventServerSetState_Parms, Transition), Z_Construct_UScriptStruct_FAbilityStateTransition, METADATA_PARAMS(0, nullptr) }; // 2353912302
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventServerSetState_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::NewProp_RequestedStateId = { "RequestedStateId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventServerSetState_Parms, RequestedStateId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::NewProp_Transition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::NewProp_RequestedStateId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::PropPointers) < 2048);
// ********** End Function ServerSetState Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "ServerSetState", 	Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::PropPointers), 
sizeof(AbilityBase_eventServerSetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilityBase_eventServerSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_ServerSetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_ServerSetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execServerSetState)
{
	P_GET_STRUCT(FAbilityStateTransition,Z_Param_Transition);
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_GET_PROPERTY(FUInt32Property,Z_Param_RequestedStateId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetState_Validate(Z_Param_Transition,Z_Param_Container,Z_Param_RequestedStateId))
	{
		RPC_ValidateFailed(TEXT("ServerSetState_Validate"));
		return;
	}
	P_THIS->ServerSetState_Implementation(Z_Param_Transition,Z_Param_Container,Z_Param_RequestedStateId);
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function ServerSetState ***************************************

// ********** Begin Class UAbilityBase Function SetState *******************************************
struct Z_Construct_UFunction_UAbilityBase_SetState_Statics
{
	struct AbilityBase_eventSetState_Parms
	{
		EAbilityState NewState;
		FStructContainer Container;
		EAbilityTransitionFlag Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Tries to set a new state to the ability\n// @network: Owning Client or Server\n" },
		{ "CPP_Default_Flags", "None" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
		{ "ToolTip", "Tries to set a new state to the ability\n@network: Owning Client or Server" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetState constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetState constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetState Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventSetState_Parms, NewState), Z_Construct_UEnum_Abilities_EAbilityState, METADATA_PARAMS(0, nullptr) }; // 4185111732
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventSetState_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityBase_eventSetState_Parms, Flags), Z_Construct_UEnum_Abilities_EAbilityTransitionFlag, METADATA_PARAMS(0, nullptr) }; // 4116226907
void Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityBase_eventSetState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityBase_eventSetState_Parms), &Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityBase_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityBase_SetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_SetState_Statics::PropPointers) < 2048);
// ********** End Function SetState Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityBase_SetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilityBase, nullptr, "SetState", 	Z_Construct_UFunction_UAbilityBase_SetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_SetState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilityBase_SetState_Statics::AbilityBase_eventSetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityBase_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityBase_SetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilityBase_SetState_Statics::AbilityBase_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityBase_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityBase_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityBase::execSetState)
{
	P_GET_ENUM(EAbilityState,Z_Param_NewState);
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_GET_ENUM(EAbilityTransitionFlag,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetState(EAbilityState(Z_Param_NewState),Z_Param_Container,EAbilityTransitionFlag(Z_Param_Flags));
	P_NATIVE_END;
}
// ********** End Class UAbilityBase Function SetState *********************************************

// ********** Begin Class UAbilityBase *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAbilityBase;
UClass* UAbilityBase::GetPrivateStaticClass()
{
	using TClass = UAbilityBase;
	if (!Z_Registration_Info_UClass_UAbilityBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AbilityBase"),
			Z_Registration_Info_UClass_UAbilityBase.InnerSingleton,
			StaticRegisterNativesUAbilityBase,
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
	return Z_Registration_Info_UClass_UAbilityBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAbilityBase_NoRegister()
{
	return UAbilityBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Parent Ability class containing replication & helper features.\n * Use UAbility\n */" },
		{ "IncludePath", "AbilityBase.h" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
		{ "ToolTip", "Parent Ability class containing replication & helper features.\nUse UAbility" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForbiddenStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRequestedStateId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContainer_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Runtime Properties */" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
		{ "NoSetter", "" },
		{ "ToolTip", "Runtime Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAbilityBase constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForbiddenStates_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForbiddenStates_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ForbiddenStates;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CurrentStateId;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastRequestedStateId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentContainer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAbilityBase constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClientRejectState"), .Pointer = &UAbilityBase::execClientRejectState },
		{ .NameUTF8 = UTF8TEXT("EventBeginPlay"), .Pointer = &UAbilityBase::execEventBeginPlay },
		{ .NameUTF8 = UTF8TEXT("EventEndPlay"), .Pointer = &UAbilityBase::execEventEndPlay },
		{ .NameUTF8 = UTF8TEXT("GetAbilitiesComponent"), .Pointer = &UAbilityBase::execGetAbilitiesComponent },
		{ .NameUTF8 = UTF8TEXT("GetOwner"), .Pointer = &UAbilityBase::execGetOwner },
		{ .NameUTF8 = UTF8TEXT("GetState"), .Pointer = &UAbilityBase::execGetState },
		{ .NameUTF8 = UTF8TEXT("HasAuthority"), .Pointer = &UAbilityBase::execHasAuthority },
		{ .NameUTF8 = UTF8TEXT("HasBegunPlay"), .Pointer = &UAbilityBase::execHasBegunPlay },
		{ .NameUTF8 = UTF8TEXT("IsLocallyOwned"), .Pointer = &UAbilityBase::execIsLocallyOwned },
		{ .NameUTF8 = UTF8TEXT("MCSetState"), .Pointer = &UAbilityBase::execMCSetState },
		{ .NameUTF8 = UTF8TEXT("OnRep_Owner"), .Pointer = &UAbilityBase::execOnRep_Owner },
		{ .NameUTF8 = UTF8TEXT("ServerSetState"), .Pointer = &UAbilityBase::execServerSetState },
		{ .NameUTF8 = UTF8TEXT("SetState"), .Pointer = &UAbilityBase::execSetState },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityBase_ClientRejectState, "ClientRejectState" }, // 1823250086
		{ &Z_Construct_UFunction_UAbilityBase_EventBeginPlay, "EventBeginPlay" }, // 2207225256
		{ &Z_Construct_UFunction_UAbilityBase_EventEndPlay, "EventEndPlay" }, // 692807921
		{ &Z_Construct_UFunction_UAbilityBase_EventPreStateChange, "EventPreStateChange" }, // 277422470
		{ &Z_Construct_UFunction_UAbilityBase_EventTick, "EventTick" }, // 1663924873
		{ &Z_Construct_UFunction_UAbilityBase_GetAbilitiesComponent, "GetAbilitiesComponent" }, // 3621593820
		{ &Z_Construct_UFunction_UAbilityBase_GetOwner, "GetOwner" }, // 4057545536
		{ &Z_Construct_UFunction_UAbilityBase_GetState, "GetState" }, // 3129883214
		{ &Z_Construct_UFunction_UAbilityBase_HasAuthority, "HasAuthority" }, // 1138045900
		{ &Z_Construct_UFunction_UAbilityBase_HasBegunPlay, "HasBegunPlay" }, // 3506499996
		{ &Z_Construct_UFunction_UAbilityBase_IsLocallyOwned, "IsLocallyOwned" }, // 4245475340
		{ &Z_Construct_UFunction_UAbilityBase_MCSetState, "MCSetState" }, // 1170561359
		{ &Z_Construct_UFunction_UAbilityBase_OnRep_Owner, "OnRep_Owner" }, // 369766312
		{ &Z_Construct_UFunction_UAbilityBase_ServerSetState, "ServerSetState" }, // 3181251928
		{ &Z_Construct_UFunction_UAbilityBase_SetState, "SetState" }, // 3720116118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAbilityBase_Statics

// ********** Begin Class UAbilityBase Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_ForbiddenStates_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_ForbiddenStates_ElementProp = { "ForbiddenStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Abilities_EAbilityState, METADATA_PARAMS(0, nullptr) }; // 4185111732
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_ForbiddenStates = { "ForbiddenStates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, ForbiddenStates), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForbiddenStates_MetaData), NewProp_ForbiddenStates_MetaData) }; // 4185111732
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_CurrentStateId = { "CurrentStateId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, CurrentStateId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStateId_MetaData), NewProp_CurrentStateId_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_LastRequestedStateId = { "LastRequestedStateId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, LastRequestedStateId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRequestedStateId_MetaData), NewProp_LastRequestedStateId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_CurrentContainer = { "CurrentContainer", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, CurrentContainer), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentContainer_MetaData), NewProp_CurrentContainer_MetaData) }; // 2073357063
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, State), Z_Construct_UEnum_Abilities_EAbilityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 4185111732
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityBase_Statics::NewProp_Owner = { "Owner", "OnRep_Owner", (EPropertyFlags)0x0040000100080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityBase, Owner), Z_Construct_UClass_UAbilitiesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_ForbiddenStates_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_ForbiddenStates_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_ForbiddenStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_CurrentStateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_LastRequestedStateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_CurrentContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityBase_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::PropPointers) < 2048);
// ********** End Class UAbilityBase Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityBase_Statics::ClassParams = {
	&UAbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityBase_Statics::Class_MetaDataParams)
};
void UAbilityBase::StaticRegisterNativesUAbilityBase()
{
	UClass* Class = UAbilityBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAbilityBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAbilityBase()
{
	if (!Z_Registration_Info_UClass_UAbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityBase.OuterSingleton, Z_Construct_UClass_UAbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityBase.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UAbilityBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Owner(TEXT("Owner"));
	const bool bIsValid = true
		&& Name_Owner == ClassReps[(int32)ENetFields_Private::Owner].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityBase"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAbilityBase);
UAbilityBase::~UAbilityBase() {}
// ********** End Class UAbilityBase ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h__Script_Abilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityBase, UAbilityBase::StaticClass, TEXT("UAbilityBase"), &Z_Registration_Info_UClass_UAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityBase), 1169242821U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h__Script_Abilities_3376670{
	TEXT("/Script/Abilities"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h__Script_Abilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h__Script_Abilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
