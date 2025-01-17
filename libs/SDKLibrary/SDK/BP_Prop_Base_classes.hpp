#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Prop_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Prop_Base.BP_Prop_Base_C
// 0x0048 (0x02D8 - 0x0290)
class ABP_Prop_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HandleLocation;                                    // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HandleRotation;                                    // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Prop_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Prop_Base_C">();
	}
	static class ABP_Prop_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Prop_Base_C>();
	}
};
static_assert(alignof(ABP_Prop_Base_C) == 0x000008, "Wrong alignment on ABP_Prop_Base_C");
static_assert(sizeof(ABP_Prop_Base_C) == 0x0002D8, "Wrong size on ABP_Prop_Base_C");
static_assert(offsetof(ABP_Prop_Base_C, UberGraphFrame) == 0x000290, "Member 'ABP_Prop_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Base_C, Mesh) == 0x000298, "Member 'ABP_Prop_Base_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Base_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Prop_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Base_C, HandleLocation) == 0x0002A8, "Member 'ABP_Prop_Base_C::HandleLocation' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Base_C, HandleRotation) == 0x0002C0, "Member 'ABP_Prop_Base_C::HandleRotation' has a wrong offset!");

}

