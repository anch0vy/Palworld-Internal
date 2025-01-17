#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilrigExplosiveObjectBase

#include "Basic.hpp"

#include "BP_OilrigExplosiveObjectBase_classes.hpp"
#include "BP_OilrigExplosiveObjectBase_parameters.hpp"


namespace SDK
{

// Function BP_OilrigExplosiveObjectBase.BP_OilrigExplosiveObjectBase_C.ChangeDefaultVisual_BP
// (Event, Protected, BlueprintEvent)

void ABP_OilrigExplosiveObjectBase_C::ChangeDefaultVisual_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigExplosiveObjectBase_C", "ChangeDefaultVisual_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigExplosiveObjectBase.BP_OilrigExplosiveObjectBase_C.ChangeDestroyedVisual_BP
// (Event, Protected, BlueprintEvent)

void ABP_OilrigExplosiveObjectBase_C::ChangeDestroyedVisual_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigExplosiveObjectBase_C", "ChangeDestroyedVisual_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigExplosiveObjectBase.BP_OilrigExplosiveObjectBase_C.ExecuteUbergraph_BP_OilrigExplosiveObjectBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OilrigExplosiveObjectBase_C::ExecuteUbergraph_BP_OilrigExplosiveObjectBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigExplosiveObjectBase_C", "ExecuteUbergraph_BP_OilrigExplosiveObjectBase");

	Params::BP_OilrigExplosiveObjectBase_C_ExecuteUbergraph_BP_OilrigExplosiveObjectBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OilrigExplosiveObjectBase.BP_OilrigExplosiveObjectBase_C.PlayDestroyEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_OilrigExplosiveObjectBase_C::PlayDestroyEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigExplosiveObjectBase_C", "PlayDestroyEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OilrigExplosiveObjectBase.BP_OilrigExplosiveObjectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OilrigExplosiveObjectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OilrigExplosiveObjectBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

