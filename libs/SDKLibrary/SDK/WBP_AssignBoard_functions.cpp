#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AssignBoard

#include "Basic.hpp"

#include "WBP_AssignBoard_classes.hpp"
#include "WBP_AssignBoard_parameters.hpp"


namespace SDK
{

// Function WBP_AssignBoard.WBP_AssignBoard_C.AnmEvent_SelectWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  SelectWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::AnmEvent_SelectWork(class UWBP_AssignBoard_WorkListBase_C* SelectWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "AnmEvent_SelectWork");

	Params::WBP_AssignBoard_C_AnmEvent_SelectWork Parms{};

	Parms.SelectWidget = SelectWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.AnmEvent_UnselectWork
// (BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::AnmEvent_UnselectWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "AnmEvent_UnselectWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_Menu_btn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_Menu_btn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_Menu_btn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature");

	Params::WBP_AssignBoard_C_BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature Parms{};

	Parms.CreatedSlot = CreatedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature");

	Params::WBP_AssignBoard_C_BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature");

	Params::WBP_AssignBoard_C_BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_3_OnUnhoveredSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_3_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_3_OnUnhoveredSlot__DelegateSignature");

	Params::WBP_AssignBoard_C_BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_3_OnUnhoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature");

	Params::WBP_AssignBoard_C_BndEvt__WBP_AssignBoard_WBP_PalCharacterScrollList_Worker_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.BndEvt__WBP_AssignBoard_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::BndEvt__WBP_AssignBoard_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "BndEvt__WBP_AssignBoard_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_AssignBoard_C_BndEvt__WBP_AssignBoard_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.CreateWorkListWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalUIBaseCampWorkFixedAssignInfoAssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWBP_AssignBoard_WorkListBase_C*  CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::CreateWorkListWidget(const struct FPalUIBaseCampWorkFixedAssignInfo& AssignInfo, class UWBP_AssignBoard_WorkListBase_C** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "CreateWorkListWidget");

	Params::WBP_AssignBoard_C_CreateWorkListWidget Parms{};

	Parms.AssignInfo = std::move(AssignInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AssignBoard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.EndSelectWorker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::EndSelectWorker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "EndSelectWorker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.ExecuteUbergraph_WBP_AssignBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::ExecuteUbergraph_WBP_AssignBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "ExecuteUbergraph_WBP_AssignBoard");

	Params::WBP_AssignBoard_C_ExecuteUbergraph_WBP_AssignBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.GetWorkerTopButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::GetWorkerTopButton(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "GetWorkerTopButton");

	Params::WBP_AssignBoard_C_GetWorkerTopButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.GetWorkListTopButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::GetWorkListTopButton(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "GetWorkListTopButton");

	Params::WBP_AssignBoard_C_GetWorkListTopButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.IsExistWorkListWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::IsExistWorkListWidget(class UWBP_AssignBoard_WorkListBase_C* Widget, bool* IsExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "IsExistWorkListWidget");

	Params::WBP_AssignBoard_C_IsExistWorkListWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.IsSelectiongWorkerMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsSelecting                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::IsSelectiongWorkerMode(bool* IsSelecting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "IsSelectiongWorkerMode");

	Params::WBP_AssignBoard_C_IsSelectiongWorkerMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelecting != nullptr)
		*IsSelecting = Parms.IsSelecting;
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnClickedCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnClickedCloseButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnClickedSortButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::OnClickedSortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnClickedSortButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnClickedWork__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnClickedWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnClickedWork__DelegateSignature");

	Params::WBP_AssignBoard_C_OnClickedWork__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnClickedWorkerButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnClickedWorkerButton_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnClickedWorkerButton_Internal");

	Params::WBP_AssignBoard_C_OnClickedWorkerButton_Internal Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnClickedWorkerSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*SlotButtonBase                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnClickedWorkerSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButtonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnClickedWorkerSlot__DelegateSignature");

	Params::WBP_AssignBoard_C_OnClickedWorkerSlot__DelegateSignature Parms{};

	Parms.SlotButtonBase = SlotButtonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnHoveredWork__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnHoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnHoveredWork__DelegateSignature");

	Params::WBP_AssignBoard_C_OnHoveredWork__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnHoveredWork_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnHoveredWork_Internal(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnHoveredWork_Internal");

	Params::WBP_AssignBoard_C_OnHoveredWork_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnHoveredWorkerButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnHoveredWorkerButton_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnHoveredWorkerButton_Internal");

	Params::WBP_AssignBoard_C_OnHoveredWorkerButton_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnSelectedWork_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnSelectedWork_Internal(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnSelectedWork_Internal");

	Params::WBP_AssignBoard_C_OnSelectedWork_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnTriggerRemoveAssignShortcut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::OnTriggerRemoveAssignShortcut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnTriggerRemoveAssignShortcut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnTriggerRemoveAssignShortcut_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::OnTriggerRemoveAssignShortcut_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnTriggerRemoveAssignShortcut_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnUnhoveredWork__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnUnhoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnUnhoveredWork__DelegateSignature");

	Params::WBP_AssignBoard_C_OnUnhoveredWork__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnUnhoveredWork_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnUnhoveredWork_Internal(class UWBP_AssignBoard_WorkListBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnUnhoveredWork_Internal");

	Params::WBP_AssignBoard_C_OnUnhoveredWork_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnUnhoveredWorkerButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnUnhoveredWorkerButton_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnUnhoveredWorkerButton_Internal");

	Params::WBP_AssignBoard_C_OnUnhoveredWorkerButton_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnUpdateAssignInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIBaseCampWorkFixedAssignManageModel*Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnUpdateAssignInfo(class UPalUIBaseCampWorkFixedAssignManageModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnUpdateAssignInfo");

	Params::WBP_AssignBoard_C_OnUpdateAssignInfo Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.OnUpdateWorkerSlots_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterContainer* Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::OnUpdateWorkerSlots_Internal(class UPalIndividualCharacterContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "OnUpdateWorkerSlots_Internal");

	Params::WBP_AssignBoard_C_OnUpdateWorkerSlots_Internal Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.RegisterAction_RemoveAssignShortcut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::RegisterAction_RemoveAssignShortcut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "RegisterAction_RemoveAssignShortcut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.ResetWorkerContainerEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::ResetWorkerContainerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "ResetWorkerContainerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.Set Sort Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SortNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_AssignBoard_C::Set_Sort_Name(const class FText& SortNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "Set Sort Name");

	Params::WBP_AssignBoard_C_Set_Sort_Name Parms{};

	Parms.SortNameText = std::move(SortNameText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.SetAssignInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalUIBaseCampWorkFixedAssignInfo>AssignInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ForceRefresh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::SetAssignInfo(TArray<struct FPalUIBaseCampWorkFixedAssignInfo>& AssignInfo, bool ForceRefresh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "SetAssignInfo");

	Params::WBP_AssignBoard_C_SetAssignInfo Parms{};

	Parms.AssignInfo = std::move(AssignInfo);
	Parms.ForceRefresh = ForceRefresh;

	UObject::ProcessEvent(Func, &Parms);

	AssignInfo = std::move(Parms.AssignInfo);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AssignBoard_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.SetupWorkerContainerEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterContainer* Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::SetupWorkerContainerEvent(class UPalIndividualCharacterContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "SetupWorkerContainerEvent");

	Params::WBP_AssignBoard_C_SetupWorkerContainerEvent Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.SetWorkerCharacterContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterContainer* Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::SetWorkerCharacterContainer(class UPalIndividualCharacterContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "SetWorkerCharacterContainer");

	Params::WBP_AssignBoard_C_SetWorkerCharacterContainer Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AssignBoard.WBP_AssignBoard_C.StartSelectWorker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AssignBoard_WorkListBase_C*  TargetWorkWIdget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AssignBoard_C::StartSelectWorker(class UWBP_AssignBoard_WorkListBase_C* TargetWorkWIdget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AssignBoard_C", "StartSelectWorker");

	Params::WBP_AssignBoard_C_StartSelectWorker Parms{};

	Parms.TargetWorkWIdget = TargetWorkWIdget;

	UObject::ProcessEvent(Func, &Parms);
}

}
