#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropWeaponPart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DropWeaponPart.BP_DropWeaponPart_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_DropWeaponPart_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Ammo;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar;                                            // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DropWeaponPart(int32 EntryPoint);
	void CustomBegin(class UStaticMesh* Mesh, const struct FVector& Velocity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DropWeaponPart_C">();
	}
	static class ABP_DropWeaponPart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DropWeaponPart_C>();
	}
};
static_assert(alignof(ABP_DropWeaponPart_C) == 0x000008, "Wrong alignment on ABP_DropWeaponPart_C");
static_assert(sizeof(ABP_DropWeaponPart_C) == 0x0002C0, "Wrong size on ABP_DropWeaponPart_C");
static_assert(offsetof(ABP_DropWeaponPart_C, UberGraphFrame) == 0x000290, "Member 'ABP_DropWeaponPart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DropWeaponPart_C, Ammo) == 0x000298, "Member 'ABP_DropWeaponPart_C::Ammo' has a wrong offset!");
static_assert(offsetof(ABP_DropWeaponPart_C, Scene) == 0x0002A0, "Member 'ABP_DropWeaponPart_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_DropWeaponPart_C, NewVar) == 0x0002A8, "Member 'ABP_DropWeaponPart_C::NewVar' has a wrong offset!");

}

