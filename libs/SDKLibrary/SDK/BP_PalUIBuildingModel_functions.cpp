#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalUIBuildingModel

#include "Basic.hpp"

#include "BP_PalUIBuildingModel_classes.hpp"
#include "BP_PalUIBuildingModel_parameters.hpp"


namespace SDK
{

// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.OnUpdateInventoryDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PalUIBuildingModel_C::OnUpdateInventoryDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalUIBuildingModel_C", "OnUpdateInventoryDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.OnUpdateInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildingModel_C::OnUpdateInventory(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalUIBuildingModel_C", "OnUpdateInventory");

	Params::BP_PalUIBuildingModel_C_OnUpdateInventory Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.ExecuteUbergraph_BP_PalUIBuildingModel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildingModel_C::ExecuteUbergraph_BP_PalUIBuildingModel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalUIBuildingModel_C", "ExecuteUbergraph_BP_PalUIBuildingModel");

	Params::BP_PalUIBuildingModel_C_ExecuteUbergraph_BP_PalUIBuildingModel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

