#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalHud_PossessItem

#include "Basic.hpp"

#include "WBP_PalHud_PossessItem_classes.hpp"
#include "WBP_PalHud_PossessItem_parameters.hpp"


namespace SDK
{

// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.ExecuteUbergraph_WBP_PalHud_PossessItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHud_PossessItem_C::ExecuteUbergraph_WBP_PalHud_PossessItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "ExecuteUbergraph_WBP_PalHud_PossessItem");

	Params::WBP_PalHud_PossessItem_C_ExecuteUbergraph_WBP_PalHud_PossessItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalHud_PossessItem_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.OnRequestRemove
// (Event, Protected, BlueprintEvent)

void UWBP_PalHud_PossessItem_C::OnRequestRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "OnRequestRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PalHud_PossessItem_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.RemoveSelf_In
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalHud_PossessItem_C::RemoveSelf_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "RemoveSelf_In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.SetupUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalHud_PossessItem_C::SetupUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "SetupUI");

	UObject::ProcessEvent(Func, nullptr);
}

}
