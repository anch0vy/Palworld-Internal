#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryEquipment_UseItem

#include "Basic.hpp"

#include "WBP_InventoryEquipment_UseItem_classes.hpp"
#include "WBP_InventoryEquipment_UseItem_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.CanUsePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*    PlayerHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_InventoryEquipment_UseItem_C::CanUsePlayer(class UPalIndividualCharacterHandle* PlayerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "CanUsePlayer");

	Params::WBP_InventoryEquipment_UseItem_C_CanUsePlayer Parms{};

	Parms.PlayerHandle = PlayerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.EndUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::EndUseItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "EndUseItem__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ExecuteUbergraph_WBP_InventoryEquipment_UseItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::ExecuteUbergraph_WBP_InventoryEquipment_UseItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "ExecuteUbergraph_WBP_InventoryEquipment_UseItem");

	Params::WBP_InventoryEquipment_UseItem_C_ExecuteUbergraph_WBP_InventoryEquipment_UseItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.HidePalDetail
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::HidePalDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "HidePalDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnClose
// (Event, Protected, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnMedineUsed
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::OnMedineUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnMedineUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnPalExpChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::OnPalExpChange(int32 AddExp, int32 NowExp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnPalExpChange");

	Params::WBP_InventoryEquipment_UseItem_C_OnPalExpChange Parms{};

	Parms.AddExp = AddExp;
	Parms.NowExp = NowExp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnPalRankChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::OnPalRankChanged(int32 NowRank, int32 OldRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnPalRankChanged");

	Params::WBP_InventoryEquipment_UseItem_C_OnPalRankChanged Parms{};

	Parms.NowRank = NowRank;
	Parms.OldRank = OldRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnPalTalentChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::OnPalTalentChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnPalTalentChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnUseupItem
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryEquipment_UseItem_C::OnUseupItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnUseupItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnWazaMachineUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParameter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalWazaID                              WazaID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::OnWazaMachineUsed(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnWazaMachineUsed");

	Params::WBP_InventoryEquipment_UseItem_C_OnWazaMachineUsed Parms{};

	Parms.IndividualParameter = IndividualParameter;
	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsConfirm                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::Refresh(bool IsConfirm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Refresh");

	Params::WBP_InventoryEquipment_UseItem_C_Refresh Parms{};

	Parms.IsConfirm = IsConfirm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ResetCacheUseAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::ResetCacheUseAmount(class UPalItemSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "ResetCacheUseAmount");

	Params::WBP_InventoryEquipment_UseItem_C_ResetCacheUseAmount Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     SelectedItemSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::Setup(class UPalItemSlot* SelectedItemSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Setup");

	Params::WBP_InventoryEquipment_UseItem_C_Setup Parms{};

	Parms.SelectedItemSlot = SelectedItemSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.SetupCllickSE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*              MenuPalList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::SetupCllickSE(class UPalIndividualCharacterHandle* IndividualHandle, class UWBP_Menu_PalList_C* MenuPalList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "SetupCllickSE");

	Params::WBP_InventoryEquipment_UseItem_C_SetupCllickSE Parms{};

	Parms.IndividualHandle = IndividualHandle;
	Parms.MenuPalList = MenuPalList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.SetupPalInteractable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*              MenuPalList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::SetupPalInteractable(class UPalIndividualCharacterHandle* IndividualHandle, class UWBP_Menu_PalList_C* MenuPalList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "SetupPalInteractable");

	Params::WBP_InventoryEquipment_UseItem_C_SetupPalInteractable Parms{};

	Parms.IndividualHandle = IndividualHandle;
	Parms.MenuPalList = MenuPalList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ShowPalDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Individual                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::ShowPalDetail(class UPalIndividualCharacterHandle* Individual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "ShowPalDetail");

	Params::WBP_InventoryEquipment_UseItem_C_ShowPalDetail Parms{};

	Parms.Individual = Individual;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Try Use Item Sound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StaticItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter* TargetCharacterParameter                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::Try_Use_Item_Sound(class FName StaticItemId, class UPalIndividualCharacterParameter* TargetCharacterParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Try Use Item Sound");

	Params::WBP_InventoryEquipment_UseItem_C_Try_Use_Item_Sound Parms{};

	Parms.StaticItemId = StaticItemId;
	Parms.TargetCharacterParameter = TargetCharacterParameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.UseItemTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Individual                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::UseItemTo(class UPalIndividualCharacterHandle* Individual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "UseItemTo");

	Params::WBP_InventoryEquipment_UseItem_C_UseItemTo Parms{};

	Parms.Individual = Individual;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.WBP_InventoryEquipment_UseItem_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::WBP_InventoryEquipment_UseItem_AutoGenFunc(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "WBP_InventoryEquipment_UseItem_AutoGenFunc");

	Params::WBP_InventoryEquipment_UseItem_C_WBP_InventoryEquipment_UseItem_AutoGenFunc Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryEquipment_UseItem_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "BP_GetDesiredFocusTarget");

	Params::WBP_InventoryEquipment_UseItem_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
