#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_ReturnTerritory_WildPal

#include "Basic.hpp"

#include "BP_AIAction_ReturnTerritory_WildPal_classes.hpp"
#include "BP_AIAction_ReturnTerritory_WildPal_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionFinished");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionPause");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionResume");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionStart");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionTick");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.GetBlackboard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     AsBP_Pal_AIBlackboard_Common                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::GetBlackboard(class UBP_PalAIBlackboard_Common_C** AsBP_Pal_AIBlackboard_Common)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "GetBlackboard");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Pal_AIBlackboard_Common != nullptr)
		*AsBP_Pal_AIBlackboard_Common = Parms.AsBP_Pal_AIBlackboard_Common;
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.GetControllerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAIController*                 PalAIController                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::GetControllerRef(class APalAIController** PalAIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "GetControllerRef");

	Params::BP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalAIController != nullptr)
		*PalAIController = Parms.PalAIController;
}

}

