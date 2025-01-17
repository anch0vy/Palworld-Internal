#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalHungerHud

#include "Basic.hpp"

#include "WBP_PalHungerHud_classes.hpp"
#include "WBP_PalHungerHud_parameters.hpp"


namespace SDK
{

// Function WBP_PalHungerHud.WBP_PalHungerHud_C.CheckGroup
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalHungerHud_C::CheckGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "CheckGroup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalHungerHud_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.ExecuteUbergraph_WBP_PalHungerHud
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHungerHud_C::ExecuteUbergraph_WBP_PalHungerHud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "ExecuteUbergraph_WBP_PalHungerHud");

	Params::WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.GetLocalPlayerGroupID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                            GroupId                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHungerHud_C::GetLocalPlayerGroupID(struct FGuid* GroupId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "GetLocalPlayerGroupID");

	Params::WBP_PalHungerHud_C_GetLocalPlayerGroupID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GroupId != nullptr)
		*GroupId = std::move(Parms.GroupId);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalHungerHud_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.OnRequestRemove
// (Event, Protected, BlueprintEvent)

void UWBP_PalHungerHud_C::OnRequestRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "OnRequestRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PalHungerHud_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.RemoveSelf_In
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalHungerHud_C::RemoveSelf_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "RemoveSelf_In");

	UObject::ProcessEvent(Func, nullptr);
}

}

