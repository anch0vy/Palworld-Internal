#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponEjectNotify

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WeaponEjectNotify.BP_WeaponEjectNotify_C.Received_Notify
// 0x00E0 (0x00E0 - 0x0000)
struct BP_WeaponEjectNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CD[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CE[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CF[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponEjectNotify_C_Received_Notify) == 0x000010, "Wrong alignment on BP_WeaponEjectNotify_C_Received_Notify");
static_assert(sizeof(BP_WeaponEjectNotify_C_Received_Notify) == 0x0000E0, "Wrong size on BP_WeaponEjectNotify_C_Received_Notify");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_WeaponEjectNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, Animation) == 0x000008, "Member 'BP_WeaponEjectNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_WeaponEjectNotify_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, ReturnValue) == 0x000038, "Member 'BP_WeaponEjectNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, CallFunc_GetSocketTransform_ReturnValue) == 0x000040, "Member 'BP_WeaponEjectNotify_C_Received_Notify::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, CallFunc_IsValidClass_ReturnValue) == 0x0000A0, "Member 'BP_WeaponEjectNotify_C_Received_Notify::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A8, "Member 'BP_WeaponEjectNotify_C_Received_Notify::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B0, "Member 'BP_WeaponEjectNotify_C_Received_Notify::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x0000B8, "Member 'BP_WeaponEjectNotify_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x0000C0, "Member 'BP_WeaponEjectNotify_C_Received_Notify::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_WeaponEjectNotify_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WeaponEjectNotify_C_Received_Notify, CallFunc_K2_SetTimer_ReturnValue) == 0x0000D0, "Member 'BP_WeaponEjectNotify_C_Received_Notify::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

}
