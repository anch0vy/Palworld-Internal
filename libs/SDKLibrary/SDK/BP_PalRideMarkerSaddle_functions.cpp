#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRideMarkerSaddle

#include "Basic.hpp"

#include "BP_PalRideMarkerSaddle_classes.hpp"
#include "BP_PalRideMarkerSaddle_parameters.hpp"


namespace SDK
{

// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.ExecuteUbergraph_BP_PalRideMarkerSaddle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSaddle_C::ExecuteUbergraph_BP_PalRideMarkerSaddle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSaddle_C", "ExecuteUbergraph_BP_PalRideMarkerSaddle");

	Params::BP_PalRideMarkerSaddle_C_ExecuteUbergraph_BP_PalRideMarkerSaddle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.OnChangeRiding_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSaddle_C::OnChangeRiding______0(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSaddle_C", "OnChangeRiding_����_0");

	Params::BP_PalRideMarkerSaddle_C_OnChangeRiding______0 Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalRideMarkerSaddle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSaddle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRideMarkerSaddle.BP_PalRideMarkerSaddle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSaddle_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSaddle_C", "ReceiveTick");

	Params::BP_PalRideMarkerSaddle_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
