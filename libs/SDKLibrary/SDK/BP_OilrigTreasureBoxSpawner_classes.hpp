#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilrigTreasureBoxSpawner

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OilrigTreasureBoxSpawner.BP_OilrigTreasureBoxSpawner_C
// 0x0010 (0x0310 - 0x0300)
class ABP_OilrigTreasureBoxSpawner_C : public APalOilrigTreasureBoxSpawner
{
public:
	class UStaticMeshComponent*                   DebugMesh;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OilrigTreasureBoxSpawner_C">();
	}
	static class ABP_OilrigTreasureBoxSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OilrigTreasureBoxSpawner_C>();
	}
};
static_assert(alignof(ABP_OilrigTreasureBoxSpawner_C) == 0x000008, "Wrong alignment on ABP_OilrigTreasureBoxSpawner_C");
static_assert(sizeof(ABP_OilrigTreasureBoxSpawner_C) == 0x000310, "Wrong size on ABP_OilrigTreasureBoxSpawner_C");
static_assert(offsetof(ABP_OilrigTreasureBoxSpawner_C, DebugMesh) == 0x000300, "Member 'ABP_OilrigTreasureBoxSpawner_C::DebugMesh' has a wrong offset!");
static_assert(offsetof(ABP_OilrigTreasureBoxSpawner_C, DefaultSceneRoot) == 0x000308, "Member 'ABP_OilrigTreasureBoxSpawner_C::DefaultSceneRoot' has a wrong offset!");

}
