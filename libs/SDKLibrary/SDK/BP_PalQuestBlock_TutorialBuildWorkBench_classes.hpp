#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalQuestBlock_TutorialBuildWorkBench

#include "Basic.hpp"

#include "BP_PalQuestBlock_CountBuildBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalQuestBlock_TutorialBuildWorkBench.BP_PalQuestBlock_TutorialBuildWorkBench_C
// 0x0000 (0x0080 - 0x0080)
class UBP_PalQuestBlock_TutorialBuildWorkBench_C final : public UBP_PalQuestBlock_CountBuildBase_C
{
public:
	void GetDescriptionText(class FText* OutText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalQuestBlock_TutorialBuildWorkBench_C">();
	}
	static class UBP_PalQuestBlock_TutorialBuildWorkBench_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalQuestBlock_TutorialBuildWorkBench_C>();
	}
};
static_assert(alignof(UBP_PalQuestBlock_TutorialBuildWorkBench_C) == 0x000008, "Wrong alignment on UBP_PalQuestBlock_TutorialBuildWorkBench_C");
static_assert(sizeof(UBP_PalQuestBlock_TutorialBuildWorkBench_C) == 0x000080, "Wrong size on UBP_PalQuestBlock_TutorialBuildWorkBench_C");

}
