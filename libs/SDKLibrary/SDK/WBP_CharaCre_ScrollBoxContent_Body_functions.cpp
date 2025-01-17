#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Body

#include "Basic.hpp"

#include "WBP_CharaCre_ScrollBoxContent_Body_classes.hpp"
#include "WBP_CharaCre_ScrollBoxContent_Body_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfo  MakeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CharaCre_ScrollBoxContent_Body_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "ApplyMakeInfo");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_ApplyMakeInfo Parms{};

	Parms.MakeInfo = std::move(MakeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_ScrollBoxContent_Body_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.CustomNavi_ToSkinColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Param_Navigation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ScrollBoxContent_Body_C::CustomNavi_ToSkinColor(EUINavigation Param_Navigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "CustomNavi_ToSkinColor");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_CustomNavi_ToSkinColor Parms{};

	Parms.Param_Navigation = Param_Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.CustomNavi_ToTorsoSlider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Param_Navigation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ScrollBoxContent_Body_C::CustomNavi_ToTorsoSlider(EUINavigation Param_Navigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "CustomNavi_ToTorsoSlider");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_CustomNavi_ToTorsoSlider Parms{};

	Parms.Param_Navigation = Param_Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::GetRestoreFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "GetRestoreFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_GetRestoreFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnChangedSelectColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnChangedSelectColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnChangedSelectColor");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_OnChangedSelectColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnClickedBodyType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PresetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnClickedBodyType__DelegateSignature(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnClickedBodyType__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_OnClickedBodyType__DelegateSignature Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnClickedBodyTypeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_BodyTypeButton_C*   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnClickedBodyTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnClickedBodyTypeButton");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_OnClickedBodyTypeButton Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnClosedCOlorSelectWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*     Param_Param                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnClosedCOlorSelectWindow(class UPalHUDDispatchParameterBase* Param_Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnClosedCOlorSelectWindow");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_OnClosedCOlorSelectWindow Parms{};

	Parms.Param_Param = Param_Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnSelectedSkinColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnSelectedSkinColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnSelectedSkinColor__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_OnSelectedSkinColor__DelegateSignature Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.SetDefaultBodyTypePresetName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PresetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::SetDefaultBodyTypePresetName(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "SetDefaultBodyTypePresetName");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_SetDefaultBodyTypePresetName Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "GetTopFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Body_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

