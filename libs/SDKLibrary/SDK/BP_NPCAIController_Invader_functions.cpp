#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController_Invader

#include "Basic.hpp"

#include "BP_NPCAIController_Invader_classes.hpp"
#include "BP_NPCAIController_Invader_parameters.hpp"


namespace SDK
{

// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.BindOnInvaderArrivedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::BindOnInvaderArrivedDelegate(TDelegate<void()> Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "BindOnInvaderArrivedDelegate");

	Params::BP_NPCAIController_Invader_C_BindOnInvaderArrivedDelegate Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ExecuteUbergraph_BP_NPCAIController_Invader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::ExecuteUbergraph_BP_NPCAIController_Invader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ExecuteUbergraph_BP_NPCAIController_Invader");

	Params::BP_NPCAIController_Invader_C_ExecuteUbergraph_BP_NPCAIController_Invader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.OnInvaderArrived
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_Invader_C::OnInvaderArrived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "OnInvaderArrived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.OnInvaderArrivedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_Invader_C::OnInvaderArrivedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "OnInvaderArrivedDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ReturnSpawnedPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ReturnPos                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::ReturnSpawnedPoint(const struct FVector& ReturnPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ReturnSpawnedPoint");

	Params::BP_NPCAIController_Invader_C_ReturnSpawnedPoint Parms{};

	Parms.ReturnPos = std::move(ReturnPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.StartMarch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GoalPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::StartMarch(const struct FVector& GoalPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "StartMarch");

	Params::BP_NPCAIController_Invader_C_StartMarch Parms{};

	Parms.GoalPos = std::move(GoalPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ForceBattleStartForOutside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           StartActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::ForceBattleStartForOutside(class AActor* StartActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ForceBattleStartForOutside");

	Params::BP_NPCAIController_Invader_C_ForceBattleStartForOutside Parms{};

	Parms.StartActor = StartActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPCAIController_Invader_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.SetAutoDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_Invader_C::SetAutoDefaultAIAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "SetAutoDefaultAIAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.StartDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCAIController_Invader_C::StartDefaultAIAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "StartDefaultAIAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

