#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CombatHeliRpidWeaponComponent_WingMiso

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_CombatHeliRpidWeaponComponent_WingMiso.BP_CombatHeliRpidWeaponComponent_WingMiso_C.GetMuzzleTransform
// 0x0140 (0x0140 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform final
{
public:
	struct FTransform                             MzlTF;                                             // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4482[0xC];                                     // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4483[0xF];                                     // 0x00D1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;         // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform) == 0x000010, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform) == 0x000140, "Wrong size on BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform, MzlTF) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform::MzlTF' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform, CallFunc_Percent_IntInt_ReturnValue) == 0x000060, "Member 'BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000070, "Member 'BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform, CallFunc_GetSocketTransform_ReturnValue_1) == 0x0000E0, "Member 'BP_CombatHeliRpidWeaponComponent_WingMiso_C_GetMuzzleTransform::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");

}

