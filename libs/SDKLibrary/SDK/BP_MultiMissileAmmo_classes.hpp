#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MultiMissileAmmo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MultiMissileAmmo.BP_MultiMissileAmmo_C
// 0x0020 (0x0610 - 0x05F0)
class UBP_MultiMissileAmmo_C final : public UStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalWeaponBase*                         ParentWeapon;                                      // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         MagazineSlot;                                      // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetAmmoHidden();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MultiMissileAmmo(int32 EntryPoint);
	void Delegate_Reload(int32 bulletsNum);
	void Delegate_OnShoot();
	void Delegate_OnAttach();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MultiMissileAmmo_C">();
	}
	static class UBP_MultiMissileAmmo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MultiMissileAmmo_C>();
	}
};
static_assert(alignof(UBP_MultiMissileAmmo_C) == 0x000010, "Wrong alignment on UBP_MultiMissileAmmo_C");
static_assert(sizeof(UBP_MultiMissileAmmo_C) == 0x000610, "Wrong size on UBP_MultiMissileAmmo_C");
static_assert(offsetof(UBP_MultiMissileAmmo_C, UberGraphFrame) == 0x0005F0, "Member 'UBP_MultiMissileAmmo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MultiMissileAmmo_C, ParentWeapon) == 0x0005F8, "Member 'UBP_MultiMissileAmmo_C::ParentWeapon' has a wrong offset!");
static_assert(offsetof(UBP_MultiMissileAmmo_C, MagazineSlot) == 0x000600, "Member 'UBP_MultiMissileAmmo_C::MagazineSlot' has a wrong offset!");

}
