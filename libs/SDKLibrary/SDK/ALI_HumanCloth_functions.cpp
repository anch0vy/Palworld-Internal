#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_HumanCloth

#include "Basic.hpp"

#include "ALI_HumanCloth_classes.hpp"
#include "ALI_HumanCloth_parameters.hpp"


namespace SDK
{

// Function ALI_HumanCloth.ALI_HumanCloth_C.ClothLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ClothLayer                                       (Parm, OutParm, NoDestructor)

void IALI_HumanCloth_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_ClothLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_HumanCloth_C", "ClothLayer");

	Params::ALI_HumanCloth_C_ClothLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ClothLayer != nullptr)
		*Param_ClothLayer = std::move(Parms.Param_ClothLayer);
}

}

