#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkyCreatorLightingVolume

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SkyCreatorLightingVolume.BP_SkyCreatorLightingVolume_C.ExecuteUbergraph_BP_SkyCreatorLightingVolume
// 0x0018 (0x0018 - 0x0000)
struct BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4275[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume) == 0x000008, "Wrong alignment on BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume");
static_assert(sizeof(BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume) == 0x000018, "Wrong size on BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume");
static_assert(offsetof(BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume, EntryPoint) == 0x000000, "Member 'BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume, K2Node_Event_OtherActor_1) == 0x000010, "Member 'BP_SkyCreatorLightingVolume_C_ExecuteUbergraph_BP_SkyCreatorLightingVolume::K2Node_Event_OtherActor_1' has a wrong offset!");

// Function BP_SkyCreatorLightingVolume.BP_SkyCreatorLightingVolume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SkyCreatorLightingVolume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SkyCreatorLightingVolume.BP_SkyCreatorLightingVolume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_SkyCreatorLightingVolume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

}
