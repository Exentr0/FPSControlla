// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomStateMachine/Public/StateManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CUSTOMSTATEMACHINE_API UClass* Z_Construct_UClass_UBaseState_NoRegister();
	CUSTOMSTATEMACHINE_API UClass* Z_Construct_UClass_UStateManagerComponent();
	CUSTOMSTATEMACHINE_API UClass* Z_Construct_UClass_UStateManagerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CustomStateMachine();
// End Cross Module References
	DEFINE_FUNCTION(UStateManagerComponent::execInitStateManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitStateManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateManagerComponent::execSwitchState)
	{
		P_GET_OBJECT(UBaseState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchState(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateManagerComponent::execSwitchStateByKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchStateByKey(Z_Param_StateKey);
		P_NATIVE_END;
	}
	void UStateManagerComponent::StaticRegisterNativesUStateManagerComponent()
	{
		UClass* Class = UStateManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitStateManager", &UStateManagerComponent::execInitStateManager },
			{ "SwitchState", &UStateManagerComponent::execSwitchState },
			{ "SwitchStateByKey", &UStateManagerComponent::execSwitchStateByKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateManagerComponent_InitStateManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateManagerComponent_InitStateManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateManagerComponent_InitStateManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateManagerComponent, nullptr, "InitStateManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateManagerComponent_InitStateManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_InitStateManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateManagerComponent_InitStateManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateManagerComponent_InitStateManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics
	{
		struct StateManagerComponent_eventSwitchState_Parms
		{
			const UBaseState* NewState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateManagerComponent_eventSwitchState_Parms, NewState), Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::NewProp_NewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateManagerComponent, nullptr, "SwitchState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::StateManagerComponent_eventSwitchState_Parms), Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateManagerComponent_SwitchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateManagerComponent_SwitchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics
	{
		struct StateManagerComponent_eventSwitchStateByKey_Parms
		{
			FString StateKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::NewProp_StateKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::NewProp_StateKey = { "StateKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateManagerComponent_eventSwitchStateByKey_Parms, StateKey), METADATA_PARAMS(Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::NewProp_StateKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::NewProp_StateKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::NewProp_StateKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateManagerComponent, nullptr, "SwitchStateByKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::StateManagerComponent_eventSwitchStateByKey_Parms), Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateManagerComponent);
	UClass* Z_Construct_UClass_UStateManagerComponent_NoRegister()
	{
		return UStateManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialState;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvailableStates_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableStates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableStates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AvailableStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateHistory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateHistory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateHistory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateHistoryLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateHistoryLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StateMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomStateMachine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateManagerComponent_InitStateManager, "InitStateManager" }, // 2805806654
		{ &Z_Construct_UFunction_UStateManagerComponent_SwitchState, "SwitchState" }, // 2600984164
		{ &Z_Construct_UFunction_UStateManagerComponent_SwitchStateByKey, "SwitchStateByKey" }, // 2692087348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StateManagerComponent.h" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_InitialState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateManagerComponent, InitialState), METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_InitialState_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_ValueProp = { "AvailableStates", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_Key_KeyProp = { "AvailableStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates = { "AvailableStates", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateManagerComponent, AvailableStates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "State Machine Debug" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UStateManagerComponent*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStateManagerComponent), &Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory_Inner = { "StateHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory_MetaData[] = {
		{ "Category", "StateManagerComponent" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory = { "StateHistory", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateManagerComponent, StateHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistoryLength_MetaData[] = {
		{ "Category", "StateManagerComponent" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistoryLength = { "StateHistoryLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateManagerComponent, StateHistoryLength), METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistoryLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistoryLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "StateManagerComponent" },
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateManagerComponent, CurrentState), Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_ValueProp = { "StateMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_Key_KeyProp = { "StateMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap = { "StateMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateManagerComponent, StateMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_AvailableStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateHistoryLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_StateMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateManagerComponent_Statics::ClassParams = {
		&UStateManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UStateManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateManagerComponent.OuterSingleton, Z_Construct_UClass_UStateManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateManagerComponent.OuterSingleton;
	}
	template<> CUSTOMSTATEMACHINE_API UClass* StaticClass<UStateManagerComponent>()
	{
		return UStateManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateManagerComponent);
	UStateManagerComponent::~UStateManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Home_4_Desktop_tutorials_FPSControlla_Plugins_CustomStateMachine_HostProject_Plugins_CustomStateMachine_Source_CustomStateMachine_Public_StateManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Home_4_Desktop_tutorials_FPSControlla_Plugins_CustomStateMachine_HostProject_Plugins_CustomStateMachine_Source_CustomStateMachine_Public_StateManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateManagerComponent, UStateManagerComponent::StaticClass, TEXT("UStateManagerComponent"), &Z_Registration_Info_UClass_UStateManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateManagerComponent), 3300889098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Home_4_Desktop_tutorials_FPSControlla_Plugins_CustomStateMachine_HostProject_Plugins_CustomStateMachine_Source_CustomStateMachine_Public_StateManagerComponent_h_1934653783(TEXT("/Script/CustomStateMachine"),
		Z_CompiledInDeferFile_FID_Users_Home_4_Desktop_tutorials_FPSControlla_Plugins_CustomStateMachine_HostProject_Plugins_CustomStateMachine_Source_CustomStateMachine_Public_StateManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Home_4_Desktop_tutorials_FPSControlla_Plugins_CustomStateMachine_HostProject_Plugins_CustomStateMachine_Source_CustomStateMachine_Public_StateManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
