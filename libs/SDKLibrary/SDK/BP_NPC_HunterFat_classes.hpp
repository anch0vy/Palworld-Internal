#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_HunterFat

#include "Basic.hpp"

#include "BP_NPC_FatHumanDataSet_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_HunterFat.BP_NPC_HunterFat_C
// 0x0000 (0x09A0 - 0x09A0)
class ABP_NPC_HunterFat_C final : public ABP_NPC_FatHumanDataSet_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_HunterFat_C">();
	}
	static class ABP_NPC_HunterFat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_HunterFat_C>();
	}
};
static_assert(alignof(ABP_NPC_HunterFat_C) == 0x000010, "Wrong alignment on ABP_NPC_HunterFat_C");
static_assert(sizeof(ABP_NPC_HunterFat_C) == 0x0009A0, "Wrong size on ABP_NPC_HunterFat_C");

}

