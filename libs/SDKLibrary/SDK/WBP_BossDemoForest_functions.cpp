#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossDemoForest

#include "Basic.hpp"

#include "WBP_BossDemoForest_classes.hpp"
#include "WBP_BossDemoForest_parameters.hpp"


namespace SDK
{

// Function WBP_BossDemoForest.WBP_BossDemoForest_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossDemoForest_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoForest_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossDemoForest.WBP_BossDemoForest_C.ExecuteUbergraph_WBP_BossDemoForest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossDemoForest_C::ExecuteUbergraph_WBP_BossDemoForest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoForest_C", "ExecuteUbergraph_WBP_BossDemoForest");

	Params::WBP_BossDemoForest_C_ExecuteUbergraph_WBP_BossDemoForest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossDemoForest.WBP_BossDemoForest_C.Finished_5237A44149AAD13ADBE5C9A87856B8C4
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossDemoForest_C::Finished_5237A44149AAD13ADBE5C9A87856B8C4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoForest_C", "Finished_5237A44149AAD13ADBE5C9A87856B8C4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossDemoForest.WBP_BossDemoForest_C.OnStartEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BossDemoForest_C::OnStartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoForest_C", "OnStartEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossDemoForest.WBP_BossDemoForest_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BossDemoForest_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossDemoForest_C", "SetupText");

	UObject::ProcessEvent(Func, nullptr);
}

}
