#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_StandardHumanDataSet

#include "Basic.hpp"

#include "BP_NPC_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_StandardHumanDataSet.BP_NPC_StandardHumanDataSet_C
// 0x0010 (0x09A0 - 0x0990)
class ABP_NPC_StandardHumanDataSet_C : public ABP_NPC_Base_C
{
public:
	class UBP_HumanCryComponent_C*                BP_HumanCryComponent;                              // 0x0988(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0990(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_StandardHumanDataSet_C">();
	}
	static class ABP_NPC_StandardHumanDataSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_StandardHumanDataSet_C>();
	}
};
static_assert(alignof(ABP_NPC_StandardHumanDataSet_C) == 0x000010, "Wrong alignment on ABP_NPC_StandardHumanDataSet_C");
static_assert(sizeof(ABP_NPC_StandardHumanDataSet_C) == 0x0009A0, "Wrong size on ABP_NPC_StandardHumanDataSet_C");
static_assert(offsetof(ABP_NPC_StandardHumanDataSet_C, BP_HumanCryComponent) == 0x000988, "Member 'ABP_NPC_StandardHumanDataSet_C::BP_HumanCryComponent' has a wrong offset!");
static_assert(offsetof(ABP_NPC_StandardHumanDataSet_C, PalBodyPartsSphere) == 0x000990, "Member 'ABP_NPC_StandardHumanDataSet_C::PalBodyPartsSphere' has a wrong offset!");

}

