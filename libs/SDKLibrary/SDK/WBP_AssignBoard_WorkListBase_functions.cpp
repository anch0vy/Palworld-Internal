#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AssignBoard_WorkListBase

#include "Basic.hpp"

#include "WBP_AssignBoard_WorkListBase_classes.hpp"
#include "WBP_AssignBoard_WorkListBase_parameters.hpp"


namespace SDK
{

// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.AnmEvent_DIsable
// (BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::AnmEvent_DIsable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "AnmEvent_DIsable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.AnmEvent_Enable
// (BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::AnmEvent_Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "AnmEvent_Enable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.AnmEvent_Select
// (BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::AnmEvent_Select()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "AnmEvent_Select");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.AnmEvent_Unselect
// (BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::AnmEvent_Unselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "AnmEvent_Unselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.ExecuteUbergraph_WBP_AssignBoard_WorkListBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_WorkListBase_C::ExecuteUbergraph_WBP_AssignBoard_WorkListBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "ExecuteUbergraph_WBP_AssignBoard_WorkListBase");

	Params::WBP_AssignBoard_WorkListBase_C_ExecuteUbergraph_WBP_AssignBoard_WorkListBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.GetAssignInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (Parm, OutParm, NoDestructor)

void UWBP_AssignBoard_WorkListBase_C::GetAssignInfo(struct FPalUIBaseCampWorkFixedAssignInfo* AssignInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "GetAssignInfo");

	Params::WBP_AssignBoard_WorkListBase_C_GetAssignInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AssignInfo != nullptr)
		*AssignInfo = std::move(Parms.AssignInfo);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          TargetWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_WorkListBase_C::GetFocusTarget(class UWidget** TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "GetFocusTarget");

	Params::WBP_AssignBoard_WorkListBase_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.NotifySelect
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::NotifySelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "NotifySelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_WorkListBase_C::OnHovered__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "OnHovered__DelegateSignature");

	Params::WBP_AssignBoard_WorkListBase_C_OnHovered__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_WorkListBase_C::OnSelected__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "OnSelected__DelegateSignature");

	Params::WBP_AssignBoard_WorkListBase_C_OnSelected__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_WorkListBase_C::OnUnhovered__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "OnUnhovered__DelegateSignature");

	Params::WBP_AssignBoard_WorkListBase_C_OnUnhovered__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.SetAssignInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_AssignBoard_WorkListBase_C::SetAssignInfo(const struct FPalUIBaseCampWorkFixedAssignInfo& AssignInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "SetAssignInfo");

	Params::WBP_AssignBoard_WorkListBase_C_SetAssignInfo Parms{};

	Parms.AssignInfo = std::move(AssignInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard_WorkListBase.WBP_AssignBoard_WorkListBase_C.Unbind
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_WorkListBase_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_WorkListBase_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}

}
