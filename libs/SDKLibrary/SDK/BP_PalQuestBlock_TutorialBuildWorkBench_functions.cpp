#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalQuestBlock_TutorialBuildWorkBench

#include "Basic.hpp"

#include "BP_PalQuestBlock_TutorialBuildWorkBench_classes.hpp"
#include "BP_PalQuestBlock_TutorialBuildWorkBench_parameters.hpp"


namespace SDK
{

// Function BP_PalQuestBlock_TutorialBuildWorkBench.BP_PalQuestBlock_TutorialBuildWorkBench_C.GetDescriptionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             OutText                                                (Parm, OutParm)

void UBP_PalQuestBlock_TutorialBuildWorkBench_C::GetDescriptionText(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialBuildWorkBench_C", "GetDescriptionText");

	Params::BP_PalQuestBlock_TutorialBuildWorkBench_C_GetDescriptionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}

}

