#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GuidedMissileLauncher

#include "Basic.hpp"

#include "BP_GuidedMissileLauncher_classes.hpp"
#include "BP_GuidedMissileLauncher_parameters.hpp"


namespace SDK
{

// Function BP_GuidedMissileLauncher.BP_GuidedMissileLauncher_C.OnShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GuidedMissileLauncher_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GuidedMissileLauncher_C", "OnShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GuidedMissileLauncher.BP_GuidedMissileLauncher_C.OnReloadStart
// (Event, Public, BlueprintEvent)

void ABP_GuidedMissileLauncher_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GuidedMissileLauncher_C", "OnReloadStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GuidedMissileLauncher.BP_GuidedMissileLauncher_C.GetMuzzleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*                   NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GuidedMissileLauncher_C::GetMuzzleEffect(class UNiagaraSystem** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GuidedMissileLauncher_C", "GetMuzzleEffect");

	Params::BP_GuidedMissileLauncher_C_GetMuzzleEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_GuidedMissileLauncher.BP_GuidedMissileLauncher_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GuidedMissileLauncher_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GuidedMissileLauncher_C", "GetBulletClass");

	Params::BP_GuidedMissileLauncher_C_GetBulletClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_GuidedMissileLauncher.BP_GuidedMissileLauncher_C.ExecuteUbergraph_BP_GuidedMissileLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GuidedMissileLauncher_C::ExecuteUbergraph_BP_GuidedMissileLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GuidedMissileLauncher_C", "ExecuteUbergraph_BP_GuidedMissileLauncher");

	Params::BP_GuidedMissileLauncher_C_ExecuteUbergraph_BP_GuidedMissileLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
