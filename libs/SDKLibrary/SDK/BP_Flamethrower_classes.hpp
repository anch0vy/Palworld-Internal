#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Flamethrower

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "BP_Kitsunebi_Flamethrower_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Flamethrower.BP_Flamethrower_C
// 0x0010 (0x0640 - 0x0630)
class ABP_Flamethrower_C : public ABP_Kitsunebi_Flamethrower_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Flamethrower_C;                  // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        UseBulletTimer;                                    // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void TickShootingFire(double DeltaTime);
	void PlayShootMotion();
	void PlayIdleMotion(bool StopAllMontages);
	void OnReloadStart();
	void OnPullTrigger();
	void GetAttackType(EPalAttackType* AttackType);
	void ExecuteUbergraph_BP_Flamethrower(int32 EntryPoint);

	bool IsUseLeftHandAttach() const;
	int32 GetWeaponDamage() const;
	struct FTransform GetLeftHandTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Flamethrower_C">();
	}
	static class ABP_Flamethrower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Flamethrower_C>();
	}
};
static_assert(alignof(ABP_Flamethrower_C) == 0x000008, "Wrong alignment on ABP_Flamethrower_C");
static_assert(sizeof(ABP_Flamethrower_C) == 0x000640, "Wrong size on ABP_Flamethrower_C");
static_assert(offsetof(ABP_Flamethrower_C, UberGraphFrame_BP_Flamethrower_C) == 0x000630, "Member 'ABP_Flamethrower_C::UberGraphFrame_BP_Flamethrower_C' has a wrong offset!");
static_assert(offsetof(ABP_Flamethrower_C, UseBulletTimer) == 0x000638, "Member 'ABP_Flamethrower_C::UseBulletTimer' has a wrong offset!");

}
