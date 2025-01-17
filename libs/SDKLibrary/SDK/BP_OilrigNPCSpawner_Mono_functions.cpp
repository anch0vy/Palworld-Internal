#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilrigNPCSpawner_Mono

#include "Basic.hpp"

#include "BP_OilrigNPCSpawner_Mono_classes.hpp"
#include "BP_OilrigNPCSpawner_Mono_parameters.hpp"


namespace SDK
{

// Function BP_OilrigNPCSpawner_Mono.BP_OilrigNPCSpawner_Mono_C.ExecuteUbergraph_BP_OilrigNPCSpawner_Mono
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilrigNPCSpawner_Mono_C::ExecuteUbergraph_BP_OilrigNPCSpawner_Mono(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigNPCSpawner_Mono_C", "ExecuteUbergraph_BP_OilrigNPCSpawner_Mono");

	Params::BP_OilrigNPCSpawner_Mono_C_ExecuteUbergraph_BP_OilrigNPCSpawner_Mono Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigNPCSpawner_Mono.BP_OilrigNPCSpawner_Mono_C.InitializeSpawnedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_OilrigNPCSpawner_Mono_C::InitializeSpawnedCharacter(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigNPCSpawner_Mono_C", "InitializeSpawnedCharacter");

	Params::BP_OilrigNPCSpawner_Mono_C_InitializeSpawnedCharacter Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigNPCSpawner_Mono.BP_OilrigNPCSpawner_Mono_C.On Captured
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    SelfCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_OilrigNPCSpawner_Mono_C::On_Captured(class APalCharacter* SelfCharacter, class APalCharacter* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigNPCSpawner_Mono_C", "On Captured");

	Params::BP_OilrigNPCSpawner_Mono_C_On_Captured Parms{};

	Parms.SelfCharacter = SelfCharacter;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigNPCSpawner_Mono.BP_OilrigNPCSpawner_Mono_C.On Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_OilrigNPCSpawner_Mono_C::On_Dead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigNPCSpawner_Mono_C", "On Dead");

	Params::BP_OilrigNPCSpawner_Mono_C_On_Dead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigNPCSpawner_Mono.BP_OilrigNPCSpawner_Mono_C.OnResetOilrig_BP
// (Event, Protected, BlueprintEvent)

void ABP_OilrigNPCSpawner_Mono_C::OnResetOilrig_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigNPCSpawner_Mono_C", "OnResetOilrig_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigNPCSpawner_Mono.BP_OilrigNPCSpawner_Mono_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OilrigNPCSpawner_Mono_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigNPCSpawner_Mono_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

