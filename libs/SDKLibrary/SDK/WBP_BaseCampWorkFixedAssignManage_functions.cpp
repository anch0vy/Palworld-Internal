#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BaseCampWorkFixedAssignManage

#include "Basic.hpp"

#include "WBP_BaseCampWorkFixedAssignManage_classes.hpp"
#include "WBP_BaseCampWorkFixedAssignManage_parameters.hpp"


namespace SDK
{

// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.AlreadyFixedAssign
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAlreadyFixedAssign                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::AlreadyFixedAssign(const struct FPalUIBaseCampWorkFixedAssignInfo& AssignInfo, class UPalIndividualCharacterSlot* TargetSlot, bool* IsAlreadyFixedAssign)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "AlreadyFixedAssign");

	Params::WBP_BaseCampWorkFixedAssignManage_C_AlreadyFixedAssign Parms{};

	Parms.AssignInfo = std::move(AssignInfo);
	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlreadyFixedAssign != nullptr)
		*IsAlreadyFixedAssign = Parms.IsAlreadyFixedAssign;
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_0_OnClickedWorkerSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*SlotButtonBase                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_0_OnClickedWorkerSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButtonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_0_OnClickedWorkerSlot__DelegateSignature");

	Params::WBP_BaseCampWorkFixedAssignManage_C_BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_0_OnClickedWorkerSlot__DelegateSignature Parms{};

	Parms.SlotButtonBase = SlotButtonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_1_OnClickedWork__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_1_OnClickedWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_1_OnClickedWork__DelegateSignature");

	Params::WBP_BaseCampWorkFixedAssignManage_C_BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_1_OnClickedWork__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_2_OnTriggerRemoveAssignShortcut__DelegateSignature
// (BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_2_OnTriggerRemoveAssignShortcut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_2_OnTriggerRemoveAssignShortcut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_3_OnHoveredWork__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_3_OnHoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_3_OnHoveredWork__DelegateSignature");

	Params::WBP_BaseCampWorkFixedAssignManage_C_BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_3_OnHoveredWork__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_4_OnUnhoveredWork__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_4_OnUnhoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_4_OnUnhoveredWork__DelegateSignature");

	Params::WBP_BaseCampWorkFixedAssignManage_C_BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_4_OnUnhoveredWork__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_5_OnClickedCloseButton__DelegateSignature
// (BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_5_OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_5_OnClickedCloseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_6_OnClickedSortButton__DelegateSignature
// (BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_6_OnClickedSortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_6_OnClickedSortButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.CanAssign
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_CanAssign                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::CanAssign(const struct FPalUIBaseCampWorkFixedAssignInfo& AssignInfo, class UPalIndividualCharacterSlot* TargetSlot, bool* Param_CanAssign)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "CanAssign");

	Params::WBP_BaseCampWorkFixedAssignManage_C_CanAssign Parms{};

	Parms.AssignInfo = std::move(AssignInfo);
	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CanAssign != nullptr)
		*Param_CanAssign = Parms.Param_CanAssign;
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.ExecuteUbergraph_WBP_BaseCampWorkFixedAssignManage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::ExecuteUbergraph_WBP_BaseCampWorkFixedAssignManage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "ExecuteUbergraph_WBP_BaseCampWorkFixedAssignManage");

	Params::WBP_BaseCampWorkFixedAssignManage_C_ExecuteUbergraph_WBP_BaseCampWorkFixedAssignManage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.GetModel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalUIBaseCampWorkFixedAssignManageModel*Model                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::GetModel(class UPalUIBaseCampWorkFixedAssignManageModel** Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "GetModel");

	Params::WBP_BaseCampWorkFixedAssignManage_C_GetModel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Model != nullptr)
		*Model = Parms.Model;
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.OnCancelAction
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "OnCancelAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.OnClose
// (Event, Protected, BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "OnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.OnTriggerSort
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BaseCampWorkFixedAssignManage_C::OnTriggerSort()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "OnTriggerSort");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.OnUpdateAssignInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIBaseCampWorkFixedAssignManageModel*Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::OnUpdateAssignInfo(class UPalUIBaseCampWorkFixedAssignManageModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "OnUpdateAssignInfo");

	Params::WBP_BaseCampWorkFixedAssignManage_C_OnUpdateAssignInfo Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.ProccessAssign
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalIndividualCharacterSlot*      Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::ProccessAssign(const struct FPalUIBaseCampWorkFixedAssignInfo& AssignInfo, class UPalIndividualCharacterSlot* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "ProccessAssign");

	Params::WBP_BaseCampWorkFixedAssignManage_C_ProccessAssign Parms{};

	Parms.AssignInfo = std::move(AssignInfo);
	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.RemoveAssign
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_BaseCampWorkFixedAssignManage_C::RemoveAssign(const struct FPalUIBaseCampWorkFixedAssignInfo& AssignInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "RemoveAssign");

	Params::WBP_BaseCampWorkFixedAssignManage_C_RemoveAssign Parms{};

	Parms.AssignInfo = std::move(AssignInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.UpdateWidgetList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForceReferesh                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::UpdateWidgetList(bool ForceReferesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "UpdateWidgetList");

	Params::WBP_BaseCampWorkFixedAssignManage_C_UpdateWidgetList Parms{};

	Parms.ForceReferesh = ForceReferesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_BaseCampWorkFixedAssignManage_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "BP_GetDesiredFocusTarget");

	Params::WBP_BaseCampWorkFixedAssignManage_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_BaseCampWorkFixedAssignManage.WBP_BaseCampWorkFixedAssignManage_C.GetRestoreFocusTarget_WorkList
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          TargetWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BaseCampWorkFixedAssignManage_C::GetRestoreFocusTarget_WorkList(class UWidget** TargetWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BaseCampWorkFixedAssignManage_C", "GetRestoreFocusTarget_WorkList");

	Params::WBP_BaseCampWorkFixedAssignManage_C_GetRestoreFocusTarget_WorkList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;
}

}
