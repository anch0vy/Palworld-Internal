#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillEffect_Thunderbolt

#include "Basic.hpp"

#include "BP_SkillEffect_Thunderbolt_classes.hpp"
#include "BP_SkillEffect_Thunderbolt_parameters.hpp"


namespace SDK
{

// Function BP_SkillEffect_Thunderbolt.BP_SkillEffect_Thunderbolt_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Thunderbolt_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Thunderbolt_C", "EnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Thunderbolt.BP_SkillEffect_Thunderbolt_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Thunderbolt_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Thunderbolt_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Thunderbolt.BP_SkillEffect_Thunderbolt_C.ExecuteUbergraph_BP_SkillEffect_Thunderbolt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Thunderbolt_C::ExecuteUbergraph_BP_SkillEffect_Thunderbolt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Thunderbolt_C", "ExecuteUbergraph_BP_SkillEffect_Thunderbolt");

	Params::BP_SkillEffect_Thunderbolt_C_ExecuteUbergraph_BP_SkillEffect_Thunderbolt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Thunderbolt.BP_SkillEffect_Thunderbolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_Thunderbolt_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Thunderbolt_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
