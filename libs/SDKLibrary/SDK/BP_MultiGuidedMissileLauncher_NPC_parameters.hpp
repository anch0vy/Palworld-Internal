#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MultiGuidedMissileLauncher_NPC

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MultiGuidedMissileLauncher_NPC.BP_MultiGuidedMissileLauncher_NPC_C.GetBulletClass
// 0x0008 (0x0008 - 0x0000)
struct BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass) == 0x000008, "Wrong alignment on BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass");
static_assert(sizeof(BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass) == 0x000008, "Wrong size on BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass");
static_assert(offsetof(BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass, NewParam) == 0x000000, "Member 'BP_MultiGuidedMissileLauncher_NPC_C_GetBulletClass::NewParam' has a wrong offset!");

// Function BP_MultiGuidedMissileLauncher_NPC.BP_MultiGuidedMissileLauncher_NPC_C.GetWeaponDamage
// 0x0008 (0x0008 - 0x0000)
struct BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNPCWeaponDamage_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage) == 0x000004, "Wrong alignment on BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage");
static_assert(sizeof(BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage) == 0x000008, "Wrong size on BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage");
static_assert(offsetof(BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage, ReturnValue) == 0x000000, "Member 'BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage, CallFunc_GetNPCWeaponDamage_ReturnValue) == 0x000004, "Member 'BP_MultiGuidedMissileLauncher_NPC_C_GetWeaponDamage::CallFunc_GetNPCWeaponDamage_ReturnValue' has a wrong offset!");

// Function BP_MultiGuidedMissileLauncher_NPC.BP_MultiGuidedMissileLauncher_NPC_C.GetNPCWeaponDamage
// 0x0004 (0x0004 - 0x0000)
struct BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage) == 0x000004, "Wrong alignment on BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage");
static_assert(sizeof(BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage) == 0x000004, "Wrong size on BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage");
static_assert(offsetof(BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage, ReturnValue) == 0x000000, "Member 'BP_MultiGuidedMissileLauncher_NPC_C_GetNPCWeaponDamage::ReturnValue' has a wrong offset!");

}
