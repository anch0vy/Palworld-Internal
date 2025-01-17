#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilrigExplosiveObjectBase

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OilrigExplosiveObjectBase.BP_OilrigExplosiveObjectBase_C
// 0x0020 (0x02D8 - 0x02B8)
class ABP_OilrigExplosiveObjectBase_C : public APalOilrigExplosiveObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalDamageExplodeComponent_C*        BP_PalDamageExplodeComponent;                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeDefaultVisual_BP();
	void ChangeDestroyedVisual_BP();
	void ExecuteUbergraph_BP_OilrigExplosiveObjectBase(int32 EntryPoint);
	void PlayDestroyEffect();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OilrigExplosiveObjectBase_C">();
	}
	static class ABP_OilrigExplosiveObjectBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OilrigExplosiveObjectBase_C>();
	}
};
static_assert(alignof(ABP_OilrigExplosiveObjectBase_C) == 0x000008, "Wrong alignment on ABP_OilrigExplosiveObjectBase_C");
static_assert(sizeof(ABP_OilrigExplosiveObjectBase_C) == 0x0002D8, "Wrong size on ABP_OilrigExplosiveObjectBase_C");
static_assert(offsetof(ABP_OilrigExplosiveObjectBase_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_OilrigExplosiveObjectBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_OilrigExplosiveObjectBase_C, StaticMesh) == 0x0002C0, "Member 'ABP_OilrigExplosiveObjectBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_OilrigExplosiveObjectBase_C, BP_PalDamageExplodeComponent) == 0x0002C8, "Member 'ABP_OilrigExplosiveObjectBase_C::BP_PalDamageExplodeComponent' has a wrong offset!");
static_assert(offsetof(ABP_OilrigExplosiveObjectBase_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_OilrigExplosiveObjectBase_C::DefaultSceneRoot' has a wrong offset!");

}

