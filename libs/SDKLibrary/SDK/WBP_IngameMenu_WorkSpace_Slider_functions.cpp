#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_WorkSpace_Slider

#include "Basic.hpp"

#include "WBP_IngameMenu_WorkSpace_Slider_classes.hpp"
#include "WBP_IngameMenu_WorkSpace_Slider_parameters.hpp"


namespace SDK
{

// Function WBP_IngameMenu_WorkSpace_Slider.WBP_IngameMenu_WorkSpace_Slider_C.BndEvt__WBP_IngameMenu_WorkSpace_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_Slider_C::BndEvt__WBP_IngameMenu_WorkSpace_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_Slider_C", "BndEvt__WBP_IngameMenu_WorkSpace_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::WBP_IngameMenu_WorkSpace_Slider_C_BndEvt__WBP_IngameMenu_WorkSpace_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_WorkSpace_Slider.WBP_IngameMenu_WorkSpace_Slider_C.ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_Slider_C::ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Slider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_Slider_C", "ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Slider");

	Params::WBP_IngameMenu_WorkSpace_Slider_C_ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Slider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_WorkSpace_Slider.WBP_IngameMenu_WorkSpace_Slider_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_IngameMenu_WorkSpace_Slider_C::GetPercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_Slider_C", "GetPercent");

	Params::WBP_IngameMenu_WorkSpace_Slider_C_GetPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_IngameMenu_WorkSpace_Slider.WBP_IngameMenu_WorkSpace_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_Slider_C::OnValueChanged__DelegateSignature(int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_Slider_C", "OnValueChanged__DelegateSignature");

	Params::WBP_IngameMenu_WorkSpace_Slider_C_OnValueChanged__DelegateSignature Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_WorkSpace_Slider.WBP_IngameMenu_WorkSpace_Slider_C.SetCurrentValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Current                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_Slider_C::SetCurrentValue(int32 Param_Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_Slider_C", "SetCurrentValue");

	Params::WBP_IngameMenu_WorkSpace_Slider_C_SetCurrentValue Parms{};

	Parms.Param_Current = Param_Current;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_WorkSpace_Slider.WBP_IngameMenu_WorkSpace_Slider_C.SetupRange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_Slider_C::SetupRange(int32 Min, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_Slider_C", "SetupRange");

	Params::WBP_IngameMenu_WorkSpace_Slider_C_SetupRange Parms{};

	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}

}
