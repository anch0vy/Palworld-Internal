#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapObject_DeathPenaltyChest

#include "Basic.hpp"

#include "BP_MapObject_DeathPenaltyChest_classes.hpp"
#include "BP_MapObject_DeathPenaltyChest_parameters.hpp"


namespace SDK
{

// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "BP_OnSetConcreteModel");

	Params::BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.ExecuteUbergraph_BP_MapObject_DeathPenaltyChest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::ExecuteUbergraph_BP_MapObject_DeathPenaltyChest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "ExecuteUbergraph_BP_MapObject_DeathPenaltyChest");

	Params::BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.OnNotifiedGuildUpdateInClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectDeathPenaltyStorageModel*Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathPenaltyStorageModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "OnNotifiedGuildUpdateInClient");

	Params::BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.SetActiveFXInLocal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "SetActiveFXInLocal");

	Params::BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}

}
