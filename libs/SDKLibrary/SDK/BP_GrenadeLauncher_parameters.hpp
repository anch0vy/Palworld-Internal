#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrenadeLauncher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_GrenadeLauncher_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_GrenadeLauncher_C_ReceiveTick");
static_assert(sizeof(BP_GrenadeLauncher_C_ReceiveTick) == 0x000004, "Wrong size on BP_GrenadeLauncher_C_ReceiveTick");
static_assert(offsetof(BP_GrenadeLauncher_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_GrenadeLauncher_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.PlayFireSound
// 0x000C (0x000C - 0x0000)
struct BP_GrenadeLauncher_C_PlayFireSound final
{
public:
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0000(0x0004)(NoDestructor)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_PlayFireSound) == 0x000004, "Wrong alignment on BP_GrenadeLauncher_C_PlayFireSound");
static_assert(sizeof(BP_GrenadeLauncher_C_PlayFireSound) == 0x00000C, "Wrong size on BP_GrenadeLauncher_C_PlayFireSound");
static_assert(offsetof(BP_GrenadeLauncher_C_PlayFireSound, K2Node_MakeStruct_PalSoundOptions) == 0x000000, "Member 'BP_GrenadeLauncher_C_PlayFireSound::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_PlayFireSound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000004, "Member 'BP_GrenadeLauncher_C_PlayFireSound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnReload
// 0x0004 (0x0004 - 0x0000)
struct BP_GrenadeLauncher_C_OnReload final
{
public:
	int32                                         bulletsNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_OnReload) == 0x000004, "Wrong alignment on BP_GrenadeLauncher_C_OnReload");
static_assert(sizeof(BP_GrenadeLauncher_C_OnReload) == 0x000004, "Wrong size on BP_GrenadeLauncher_C_OnReload");
static_assert(offsetof(BP_GrenadeLauncher_C_OnReload, bulletsNum) == 0x000000, "Member 'BP_GrenadeLauncher_C_OnReload::bulletsNum' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnEndShootAnimation
// 0x0010 (0x0010 - 0x0000)
struct BP_GrenadeLauncher_C_OnEndShootAnimation final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_OnEndShootAnimation) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_OnEndShootAnimation");
static_assert(sizeof(BP_GrenadeLauncher_C_OnEndShootAnimation) == 0x000010, "Wrong size on BP_GrenadeLauncher_C_OnEndShootAnimation");
static_assert(offsetof(BP_GrenadeLauncher_C_OnEndShootAnimation, Montage) == 0x000000, "Member 'BP_GrenadeLauncher_C_OnEndShootAnimation::Montage' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_OnEndShootAnimation, CallFunc_IsEmptyMagazine_ReturnValue) == 0x000008, "Member 'BP_GrenadeLauncher_C_OnEndShootAnimation::CallFunc_IsEmptyMagazine_ReturnValue' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnDetachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_OnDetachWeapon final
{
public:
	class AActor*                                 DetachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_OnDetachWeapon) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_OnDetachWeapon");
static_assert(sizeof(BP_GrenadeLauncher_C_OnDetachWeapon) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_OnDetachWeapon");
static_assert(offsetof(BP_GrenadeLauncher_C_OnDetachWeapon, DetachActor) == 0x000000, "Member 'BP_GrenadeLauncher_C_OnDetachWeapon::DetachActor' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnAttachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_OnAttachWeapon final
{
public:
	class AActor*                                 AttachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_OnAttachWeapon) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_OnAttachWeapon");
static_assert(sizeof(BP_GrenadeLauncher_C_OnAttachWeapon) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_OnAttachWeapon");
static_assert(offsetof(BP_GrenadeLauncher_C_OnAttachWeapon, AttachActor) == 0x000000, "Member 'BP_GrenadeLauncher_C_OnAttachWeapon::AttachActor' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.isUseRightHandAttach
// 0x0001 (0x0001 - 0x0000)
struct BP_GrenadeLauncher_C_IsUseRightHandAttach final
{
public:
	bool                                          IsUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_IsUseRightHandAttach) == 0x000001, "Wrong alignment on BP_GrenadeLauncher_C_IsUseRightHandAttach");
static_assert(sizeof(BP_GrenadeLauncher_C_IsUseRightHandAttach) == 0x000001, "Wrong size on BP_GrenadeLauncher_C_IsUseRightHandAttach");
static_assert(offsetof(BP_GrenadeLauncher_C_IsUseRightHandAttach, IsUse) == 0x000000, "Member 'BP_GrenadeLauncher_C_IsUseRightHandAttach::IsUse' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetShootInterval
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_GetShootInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetShootInterval) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetShootInterval");
static_assert(sizeof(BP_GrenadeLauncher_C_GetShootInterval) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_GetShootInterval");
static_assert(offsetof(BP_GrenadeLauncher_C_GetShootInterval, Time) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetShootInterval::Time' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetMuzzleRotator
// 0x0030 (0x0030 - 0x0000)
struct BP_GrenadeLauncher_C_GetMuzzleRotator final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetMuzzleRotator) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetMuzzleRotator");
static_assert(sizeof(BP_GrenadeLauncher_C_GetMuzzleRotator) == 0x000030, "Wrong size on BP_GrenadeLauncher_C_GetMuzzleRotator");
static_assert(offsetof(BP_GrenadeLauncher_C_GetMuzzleRotator, Rotator) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetMuzzleRotator::Rotator' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_GetMuzzleRotator, CallFunc_GetSocketRotation_ReturnValue) == 0x000018, "Member 'BP_GrenadeLauncher_C_GetMuzzleRotator::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetMuzzleLocation
// 0x0030 (0x0030 - 0x0000)
struct BP_GrenadeLauncher_C_GetMuzzleLocation final
{
public:
	struct FVector                                MuzzleLocation;                                    // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetMuzzleLocation) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetMuzzleLocation");
static_assert(sizeof(BP_GrenadeLauncher_C_GetMuzzleLocation) == 0x000030, "Wrong size on BP_GrenadeLauncher_C_GetMuzzleLocation");
static_assert(offsetof(BP_GrenadeLauncher_C_GetMuzzleLocation, MuzzleLocation) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetMuzzleLocation::MuzzleLocation' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_GetMuzzleLocation, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'BP_GrenadeLauncher_C_GetMuzzleLocation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetMuzzleEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_GetMuzzleEffect final
{
public:
	class UNiagaraSystem*                         NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetMuzzleEffect) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetMuzzleEffect");
static_assert(sizeof(BP_GrenadeLauncher_C_GetMuzzleEffect) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_GetMuzzleEffect");
static_assert(offsetof(BP_GrenadeLauncher_C_GetMuzzleEffect, NewParam) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetMuzzleEffect::NewParam' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetInitializeInterval
// 0x0018 (0x0018 - 0x0000)
struct BP_GrenadeLauncher_C_GetInitializeInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetShootInterval_Time;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetInitializeInterval) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetInitializeInterval");
static_assert(sizeof(BP_GrenadeLauncher_C_GetInitializeInterval) == 0x000018, "Wrong size on BP_GrenadeLauncher_C_GetInitializeInterval");
static_assert(offsetof(BP_GrenadeLauncher_C_GetInitializeInterval, Time) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetInitializeInterval::Time' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_GetInitializeInterval, CallFunc_GetShootInterval_Time) == 0x000008, "Member 'BP_GrenadeLauncher_C_GetInitializeInterval::CallFunc_GetShootInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_GetInitializeInterval, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_GrenadeLauncher_C_GetInitializeInterval::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetBulletClass
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_GetBulletClass final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetBulletClass) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetBulletClass");
static_assert(sizeof(BP_GrenadeLauncher_C_GetBulletClass) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_GetBulletClass");
static_assert(offsetof(BP_GrenadeLauncher_C_GetBulletClass, NewParam) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetBulletClass::NewParam' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_GetBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetBlurAngle) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetBlurAngle");
static_assert(sizeof(BP_GrenadeLauncher_C_GetBlurAngle) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_GetBlurAngle");
static_assert(offsetof(BP_GrenadeLauncher_C_GetBlurAngle, Angle) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetBlurAngle::Angle' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetAimingBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeLauncher_C_GetAimingBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetAimingBlurAngle) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_GetAimingBlurAngle");
static_assert(sizeof(BP_GrenadeLauncher_C_GetAimingBlurAngle) == 0x000008, "Wrong size on BP_GrenadeLauncher_C_GetAimingBlurAngle");
static_assert(offsetof(BP_GrenadeLauncher_C_GetAimingBlurAngle, Angle) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetAimingBlurAngle::Angle' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.Get Right Hand Location
// 0x0030 (0x0030 - 0x0000)
struct BP_GrenadeLauncher_C_Get_Right_Hand_Location final
{
public:
	struct FVector                                RightHandLocation;                                 // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_Get_Right_Hand_Location) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_Get_Right_Hand_Location");
static_assert(sizeof(BP_GrenadeLauncher_C_Get_Right_Hand_Location) == 0x000030, "Wrong size on BP_GrenadeLauncher_C_Get_Right_Hand_Location");
static_assert(offsetof(BP_GrenadeLauncher_C_Get_Right_Hand_Location, RightHandLocation) == 0x000000, "Member 'BP_GrenadeLauncher_C_Get_Right_Hand_Location::RightHandLocation' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_Get_Right_Hand_Location, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'BP_GrenadeLauncher_C_Get_Right_Hand_Location::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher
// 0x0048 (0x0048 - 0x0000)
struct BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 bulletsNum)>             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5906[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_bulletsNum;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_detachActor;                          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_attachActor;                          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher) == 0x000008, "Wrong alignment on BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher");
static_assert(sizeof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher) == 0x000048, "Wrong size on BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, EntryPoint) == 0x000000, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, K2Node_CustomEvent_bulletsNum) == 0x000034, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::K2Node_CustomEvent_bulletsNum' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, K2Node_Event_detachActor) == 0x000038, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::K2Node_Event_detachActor' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher, K2Node_Event_attachActor) == 0x000040, "Member 'BP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher::K2Node_Event_attachActor' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.IsUseLeftHandAttach
// 0x0001 (0x0001 - 0x0000)
struct BP_GrenadeLauncher_C_IsUseLeftHandAttach final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_IsUseLeftHandAttach) == 0x000001, "Wrong alignment on BP_GrenadeLauncher_C_IsUseLeftHandAttach");
static_assert(sizeof(BP_GrenadeLauncher_C_IsUseLeftHandAttach) == 0x000001, "Wrong size on BP_GrenadeLauncher_C_IsUseLeftHandAttach");
static_assert(offsetof(BP_GrenadeLauncher_C_IsUseLeftHandAttach, ReturnValue) == 0x000000, "Member 'BP_GrenadeLauncher_C_IsUseLeftHandAttach::ReturnValue' has a wrong offset!");

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.GetLeftHandTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_GrenadeLauncher_C_GetLeftHandTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeLauncher_C_GetLeftHandTransform) == 0x000010, "Wrong alignment on BP_GrenadeLauncher_C_GetLeftHandTransform");
static_assert(sizeof(BP_GrenadeLauncher_C_GetLeftHandTransform) == 0x0000C0, "Wrong size on BP_GrenadeLauncher_C_GetLeftHandTransform");
static_assert(offsetof(BP_GrenadeLauncher_C_GetLeftHandTransform, ReturnValue) == 0x000000, "Member 'BP_GrenadeLauncher_C_GetLeftHandTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeLauncher_C_GetLeftHandTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000060, "Member 'BP_GrenadeLauncher_C_GetLeftHandTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");

}
