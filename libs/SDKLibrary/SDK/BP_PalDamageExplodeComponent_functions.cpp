#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalDamageExplodeComponent

#include "Basic.hpp"

#include "BP_PalDamageExplodeComponent_classes.hpp"
#include "BP_PalDamageExplodeComponent_parameters.hpp"


namespace SDK
{

// Function BP_PalDamageExplodeComponent.BP_PalDamageExplodeComponent_C.ExecuteUbergraph_BP_PalDamageExplodeComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalDamageExplodeComponent_C::ExecuteUbergraph_BP_PalDamageExplodeComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalDamageExplodeComponent_C", "ExecuteUbergraph_BP_PalDamageExplodeComponent");

	Params::BP_PalDamageExplodeComponent_C_ExecuteUbergraph_BP_PalDamageExplodeComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalDamageExplodeComponent.BP_PalDamageExplodeComponent_C.OnSpawnEx__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PalDamageExplodeComponent_C::OnSpawnEx__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalDamageExplodeComponent_C", "OnSpawnEx__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalDamageExplodeComponent.BP_PalDamageExplodeComponent_C.SpawnEx_ToAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalDamageExplodeComponent_C::SpawnEx_ToAll(class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalDamageExplodeComponent_C", "SpawnEx_ToAll");

	Params::BP_PalDamageExplodeComponent_C_SpawnEx_ToAll Parms{};

	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalDamageExplodeComponent.BP_PalDamageExplodeComponent_C.SpawnExplosionActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalDamageExplodeComponent_C::SpawnExplosionActor(class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalDamageExplodeComponent_C", "SpawnExplosionActor");

	Params::BP_PalDamageExplodeComponent_C_SpawnExplosionActor Parms{};

	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalDamageExplodeComponent.BP_PalDamageExplodeComponent_C.SpawnExplosionActor_Delay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalDamageExplodeComponent_C::SpawnExplosionActor_Delay(class AActor* Attacker, float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalDamageExplodeComponent_C", "SpawnExplosionActor_Delay");

	Params::BP_PalDamageExplodeComponent_C_SpawnExplosionActor_Delay Parms{};

	Parms.Attacker = Attacker;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

