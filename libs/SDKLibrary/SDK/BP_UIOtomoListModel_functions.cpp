#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIOtomoListModel

#include "Basic.hpp"

#include "BP_UIOtomoListModel_classes.hpp"
#include "BP_UIOtomoListModel_parameters.hpp"


namespace SDK
{

// Function BP_UIOtomoListModel.BP_UIOtomoListModel_C.GetSlotCountInPage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIOtomoListModel_C::GetSlotCountInPage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIOtomoListModel_C", "GetSlotCountInPage");

	Params::BP_UIOtomoListModel_C_GetSlotCountInPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIOtomoListModel.BP_UIOtomoListModel_C.GetCurrentPageSlots
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>OutSlots                                               (Parm, OutParm)

void UBP_UIOtomoListModel_C::GetCurrentPageSlots(TArray<class UPalIndividualCharacterSlot*>* OutSlots) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIOtomoListModel_C", "GetCurrentPageSlots");

	Params::BP_UIOtomoListModel_C_GetCurrentPageSlots Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlots != nullptr)
		*OutSlots = std::move(Parms.OutSlots);
}

}
