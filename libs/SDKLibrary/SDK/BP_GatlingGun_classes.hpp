#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GatlingGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AssaultRifleBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GatlingGun.BP_GatlingGun_C
// 0x0010 (0x05C0 - 0x05B0)
class ABP_GatlingGun_C : public ABP_AssaultRifleBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GatlingGun_C;                    // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void StopFireLoopSound();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void PlayReloadAnimation();
	void PlayFireLoopSound();
	void OnReleaseTrigger();
	void OnPullTrigger();
	void Is_UseEjectionPort(bool* IsUse);
	void GeyEjectionPortTransform(struct FTransform* Transform);
	void GetTargetPosition(struct FVector* Param_TargetPosition);
	void GetShootInterval(double* Time);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleEffect(class UNiagaraSystem** NewParam);
	void GetBulletClass(class UClass** NewParam);
	void GetAmmoClass(class UClass** AmmoClass);
	void ExecuteUbergraph_BP_GatlingGun(int32 EntryPoint);
	void BP_GatlingGun_AutoGenFunc(bool IsPlaying);

	bool IsUseLeftHandAttach() const;
	struct FTransform GetLeftHandTransform() const;
	float GetDefaultBlurAngle() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GatlingGun_C">();
	}
	static class ABP_GatlingGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GatlingGun_C>();
	}
};
static_assert(alignof(ABP_GatlingGun_C) == 0x000008, "Wrong alignment on ABP_GatlingGun_C");
static_assert(sizeof(ABP_GatlingGun_C) == 0x0005C0, "Wrong size on ABP_GatlingGun_C");
static_assert(offsetof(ABP_GatlingGun_C, UberGraphFrame_BP_GatlingGun_C) == 0x0005B0, "Member 'ABP_GatlingGun_C::UberGraphFrame_BP_GatlingGun_C' has a wrong offset!");
static_assert(offsetof(ABP_GatlingGun_C, SkeletalMesh) == 0x0005B8, "Member 'ABP_GatlingGun_C::SkeletalMesh' has a wrong offset!");

}
