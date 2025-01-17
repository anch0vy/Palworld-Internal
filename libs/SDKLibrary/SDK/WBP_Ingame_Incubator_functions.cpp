#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ingame_Incubator

#include "Basic.hpp"

#include "WBP_Ingame_Incubator_classes.hpp"
#include "WBP_Ingame_Incubator_parameters.hpp"


namespace SDK
{

// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Incubator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Incubator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.DisplayCheck
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Incubator_C::DisplayCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "DisplayCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.ExecuteUbergraph_WBP_Ingame_Incubator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::ExecuteUbergraph_WBP_Ingame_Incubator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "ExecuteUbergraph_WBP_Ingame_Incubator");

	Params::WBP_Ingame_Incubator_C_ExecuteUbergraph_WBP_Ingame_Incubator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.On Update Work Amount
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkProgress*                 WorkProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::On_Update_Work_Amount(class UPalWorkProgress* WorkProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "On Update Work Amount");

	Params::WBP_Ingame_Incubator_C_On_Update_Work_Amount Parms{};

	Parms.WorkProgress = WorkProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Incubator_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.OnUpdateHatchedCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectHatchingEggModel*    Param_Model                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Param_Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "OnUpdateHatchedCharacter");

	Params::WBP_Ingame_Incubator_C_OnUpdateHatchedCharacter Parms{};

	Parms.Param_Model = Param_Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.OnUpdateHatchTemperature
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TempDiff                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::OnUpdateHatchTemperature(int32 TempDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "OnUpdateHatchTemperature");

	Params::WBP_Ingame_Incubator_C_OnUpdateHatchTemperature Parms{};

	Parms.TempDiff = TempDiff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.OnUpdateItemContainer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::OnUpdateItemContainer(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "OnUpdateItemContainer");

	Params::WBP_Ingame_Incubator_C_OnUpdateItemContainer Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.RatioToPersentOffsetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Persent                                                (Parm, OutParm)

void UWBP_Ingame_Incubator_C::RatioToPersentOffsetText(double Ratio, class FText* Persent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "RatioToPersentOffsetText");

	Params::WBP_Ingame_Incubator_C_RatioToPersentOffsetText Parms{};

	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);

	if (Persent != nullptr)
		*Persent = std::move(Parms.Persent);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.Set Second
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RemainingSecond                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::Set_Second(int32 RemainingSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "Set Second");

	Params::WBP_Ingame_Incubator_C_Set_Second Parms{};

	Parms.RemainingSecond = RemainingSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.UpdateEggDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Incubator_C::UpdateEggDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "UpdateEggDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Incubator.WBP_Ingame_Incubator_C.UpdatePowerSuffcient
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectEnergyModule*        Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Incubator_C::UpdatePowerSuffcient(class UPalMapObjectEnergyModule* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Incubator_C", "UpdatePowerSuffcient");

	Params::WBP_Ingame_Incubator_C_UpdatePowerSuffcient Parms{};

	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}

}

