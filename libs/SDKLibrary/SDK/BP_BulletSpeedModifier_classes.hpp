#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletSpeedModifier

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BulletSpeedModifier.BP_BulletSpeedModifier_C
// 0x0008 (0x00A8 - 0x00A0)
class UBP_BulletSpeedModifier_C final : public UPalBulletModifierComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_BulletSpeedModifier(int32 EntryPoint);
	void Initialize(const class APalBullet* Bullet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BulletSpeedModifier_C">();
	}
	static class UBP_BulletSpeedModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BulletSpeedModifier_C>();
	}
};
static_assert(alignof(UBP_BulletSpeedModifier_C) == 0x000008, "Wrong alignment on UBP_BulletSpeedModifier_C");
static_assert(sizeof(UBP_BulletSpeedModifier_C) == 0x0000A8, "Wrong size on UBP_BulletSpeedModifier_C");
static_assert(offsetof(UBP_BulletSpeedModifier_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_BulletSpeedModifier_C::UberGraphFrame' has a wrong offset!");

}

