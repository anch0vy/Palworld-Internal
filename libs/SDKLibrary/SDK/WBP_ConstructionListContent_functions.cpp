#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ConstructionListContent

#include "Basic.hpp"

#include "WBP_ConstructionListContent_classes.hpp"
#include "WBP_ConstructionListContent_parameters.hpp"


namespace SDK
{

// Function WBP_ConstructionListContent.WBP_ConstructionListContent_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidgett                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConstructionListContent_C::AddWidget(class UUserWidget* InWidgett)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ConstructionListContent_C", "AddWidget");

	Params::WBP_ConstructionListContent_C_AddWidget Parms{};

	Parms.InWidgett = InWidgett;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ConstructionListContent.WBP_ConstructionListContent_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CategoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ConstructionListContent_C::SetCategoryName(const class FText& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ConstructionListContent_C", "SetCategoryName");

	Params::WBP_ConstructionListContent_C_SetCategoryName Parms{};

	Parms.CategoryName = std::move(CategoryName);

	UObject::ProcessEvent(Func, &Parms);
}

}

