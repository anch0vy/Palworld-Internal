#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_Fire_Oilrig

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AINPC_CombatGunState_Fire_Oilrig.BP_AINPC_CombatGunState_Fire_Oilrig_C.AddShootTimer
// 0x0008 (0x0008 - 0x0000)
struct BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer final
{
public:
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer) == 0x000008, "Wrong alignment on BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer");
static_assert(sizeof(BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer) == 0x000008, "Wrong size on BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_AddShootTimer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_AINPC_CombatGunState_Fire_Oilrig.BP_AINPC_CombatGunState_Fire_Oilrig_C.ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig
// 0x0078 (0x0078 - 0x0000)
struct BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C5[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetShootInterval_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C6[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle_1;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxShootCount_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMagazineEmpty_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShootAbleSlefForwardDot_ShootAble;        // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_2;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C7[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle_2;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_StateTick_DeltaTime_ImplicitCast;         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_temp_DeltaTime_ImplicitCast;    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Interval_ImplicitCast;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig) == 0x000008, "Wrong alignment on BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig");
static_assert(sizeof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig) == 0x000078, "Wrong size on BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, EntryPoint) == 0x000000, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, Temp_int_Variable) == 0x000004, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, K2Node_Event_DeltaTime) == 0x000008, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetControllerRef_NPCAICon) == 0x000010, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000018, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetShootInterval_ReturnValue) == 0x000020, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetShootInterval_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetControllerRef_NPCAICon_1) == 0x000030, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetControllerRef_NPCAICon_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetWeaponHandle_WeaponHandle_1) == 0x000038, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetWeaponHandle_WeaponHandle_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetMaxShootCount_ReturnValue) == 0x000040, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetMaxShootCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_IsMagazineEmpty_ReturnValue) == 0x000044, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_IsMagazineEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_Less_IntInt_ReturnValue) == 0x000045, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_ShootAbleSlefForwardDot_ShootAble) == 0x000046, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_ShootAbleSlefForwardDot_ShootAble' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000047, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetControllerRef_NPCAICon_2) == 0x000048, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetControllerRef_NPCAICon_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_GetWeaponHandle_WeaponHandle_2) == 0x000058, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_GetWeaponHandle_WeaponHandle_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, CallFunc_StateTick_DeltaTime_ImplicitCast) == 0x000064, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::CallFunc_StateTick_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, K2Node_VariableSet_temp_DeltaTime_ImplicitCast) == 0x000068, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::K2Node_VariableSet_temp_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig, K2Node_VariableSet_Interval_ImplicitCast) == 0x000070, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Fire_Oilrig::K2Node_VariableSet_Interval_ImplicitCast' has a wrong offset!");

// Function BP_AINPC_CombatGunState_Fire_Oilrig.BP_AINPC_CombatGunState_Fire_Oilrig_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick");
static_assert(sizeof(BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick");
static_assert(offsetof(BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_CombatGunState_Fire_Oilrig_C_StateTick::DeltaTime' has a wrong offset!");

}
