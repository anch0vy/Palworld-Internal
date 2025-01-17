#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameConstruction_Num

#include "Basic.hpp"

#include "WBP_IngameConstruction_Num_classes.hpp"
#include "WBP_IngameConstruction_Num_parameters.hpp"


namespace SDK
{

// Function WBP_IngameConstruction_Num.WBP_IngameConstruction_Num_C.SetNums
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RequiredNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_Num_C::SetNums(int32 RequiredNum, int32 MaxNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_Num_C", "SetNums");

	Params::WBP_IngameConstruction_Num_C_SetNums Parms{};

	Parms.RequiredNum = RequiredNum;
	Parms.MaxNum = MaxNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameConstruction_Num.WBP_IngameConstruction_Num_C.SetNumInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalTextBlock_C*               TargetText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   InNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_Num_C::SetNumInternal(class UBP_PalTextBlock_C* TargetText, int32 InNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameConstruction_Num_C", "SetNumInternal");

	Params::WBP_IngameConstruction_Num_C_SetNumInternal Parms{};

	Parms.TargetText = TargetText;
	Parms.InNum = InNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

