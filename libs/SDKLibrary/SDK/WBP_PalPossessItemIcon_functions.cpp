#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalPossessItemIcon

#include "Basic.hpp"

#include "WBP_PalPossessItemIcon_classes.hpp"
#include "WBP_PalPossessItemIcon_parameters.hpp"


namespace SDK
{

// Function WBP_PalPossessItemIcon.WBP_PalPossessItemIcon_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalPossessItemIcon_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPossessItemIcon_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPossessItemIcon.WBP_PalPossessItemIcon_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalPossessItemIcon_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPossessItemIcon_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPossessItemIcon.WBP_PalPossessItemIcon_C.ExecuteUbergraph_WBP_PalPossessItemIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPossessItemIcon_C::ExecuteUbergraph_WBP_PalPossessItemIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPossessItemIcon_C", "ExecuteUbergraph_WBP_PalPossessItemIcon");

	Params::WBP_PalPossessItemIcon_C_ExecuteUbergraph_WBP_PalPossessItemIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPossessItemIcon.WBP_PalPossessItemIcon_C.Finished_8EA3005E48EF792C3516879160C3F958
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalPossessItemIcon_C::Finished_8EA3005E48EF792C3516879160C3F958()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPossessItemIcon_C", "Finished_8EA3005E48EF792C3516879160C3F958");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPossessItemIcon.WBP_PalPossessItemIcon_C.Finished_D25F024E49DE41380A3843A691EA22D3
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalPossessItemIcon_C::Finished_D25F024E49DE41380A3843A691EA22D3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPossessItemIcon_C", "Finished_D25F024E49DE41380A3843A691EA22D3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPossessItemIcon.WBP_PalPossessItemIcon_C.OnFinishedClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalPossessItemIcon_C::OnFinishedClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPossessItemIcon_C", "OnFinishedClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
