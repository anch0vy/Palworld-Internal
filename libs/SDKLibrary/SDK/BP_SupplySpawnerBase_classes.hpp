#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SupplySpawnerBase

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SupplySpawnerBase.BP_SupplySpawnerBase_C
// 0x0010 (0x0308 - 0x02F8)
class ABP_SupplySpawnerBase_C : public APalSupplySpawner
{
public:
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SupplySpawnerBase_C">();
	}
	static class ABP_SupplySpawnerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SupplySpawnerBase_C>();
	}
};
static_assert(alignof(ABP_SupplySpawnerBase_C) == 0x000008, "Wrong alignment on ABP_SupplySpawnerBase_C");
static_assert(sizeof(ABP_SupplySpawnerBase_C) == 0x000308, "Wrong size on ABP_SupplySpawnerBase_C");
static_assert(offsetof(ABP_SupplySpawnerBase_C, Cylinder) == 0x0002F8, "Member 'ABP_SupplySpawnerBase_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_SupplySpawnerBase_C, DefaultSceneRoot) == 0x000300, "Member 'ABP_SupplySpawnerBase_C::DefaultSceneRoot' has a wrong offset!");

}
