#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGameMenuBuildModel

#include "Basic.hpp"

#include "BP_InGameMenuBuildModel_classes.hpp"
#include "BP_InGameMenuBuildModel_parameters.hpp"


namespace SDK
{

// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.ExecuteUbergraph_BP_InGameMenuBuildModel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::ExecuteUbergraph_BP_InGameMenuBuildModel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "ExecuteUbergraph_BP_InGameMenuBuildModel");

	Params::BP_InGameMenuBuildModel_C_ExecuteUbergraph_BP_InGameMenuBuildModel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.OnUpdateInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::OnUpdateInventory(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "OnUpdateInventory");

	Params::BP_InGameMenuBuildModel_C_OnUpdateInventory Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.OnUpdateInventoryDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_InGameMenuBuildModel_C::OnUpdateInventoryDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "OnUpdateInventoryDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.SetInitialTypeA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBuildObjectTypeA                    TypeA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::SetInitialTypeA(EPalBuildObjectTypeA TypeA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "SetInitialTypeA");

	Params::BP_InGameMenuBuildModel_C_SetInitialTypeA Parms{};

	Parms.TypeA = TypeA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.Setup
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_InGameMenuBuildModel_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}

}
