#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_Hair001_Implementation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK::Params
{

// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.HairLayer
// 0x0020 (0x0020 - 0x0000)
struct ABP_Player_Hair001_Implementation_C_HairLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_HairLayer;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Player_Hair001_Implementation_C_HairLayer) == 0x000008, "Wrong alignment on ABP_Player_Hair001_Implementation_C_HairLayer");
static_assert(sizeof(ABP_Player_Hair001_Implementation_C_HairLayer) == 0x000020, "Wrong size on ABP_Player_Hair001_Implementation_C_HairLayer");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_HairLayer, InPose) == 0x000000, "Member 'ABP_Player_Hair001_Implementation_C_HairLayer::InPose' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_HairLayer, Param_HairLayer) == 0x000010, "Member 'ABP_Player_Hair001_Implementation_C_HairLayer::Param_HairLayer' has a wrong offset!");

// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.ExecuteUbergraph_ABP_Player_Hair001_Implementation
// 0x004C (0x004C - 0x0000)
struct ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 K2Node_MakeStruct_KawaiiPhysicsSettings;           // 0x0004(0x0018)(NoDestructor)
	struct FKawaiiPhysicsSettings                 K2Node_MakeStruct_KawaiiPhysicsSettings_1;         // 0x001C(0x0018)(NoDestructor)
	struct FKawaiiPhysicsSettings                 K2Node_MakeStruct_KawaiiPhysicsSettings_2;         // 0x0034(0x0018)(NoDestructor)
};
static_assert(alignof(ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation) == 0x000004, "Wrong alignment on ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation");
static_assert(sizeof(ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation) == 0x00004C, "Wrong size on ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation, EntryPoint) == 0x000000, "Member 'ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation, K2Node_MakeStruct_KawaiiPhysicsSettings) == 0x000004, "Member 'ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation::K2Node_MakeStruct_KawaiiPhysicsSettings' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation, K2Node_MakeStruct_KawaiiPhysicsSettings_1) == 0x00001C, "Member 'ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation::K2Node_MakeStruct_KawaiiPhysicsSettings_1' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation, K2Node_MakeStruct_KawaiiPhysicsSettings_2) == 0x000034, "Member 'ABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation::K2Node_MakeStruct_KawaiiPhysicsSettings_2' has a wrong offset!");

// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Player_Hair001_Implementation_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Player_Hair001_Implementation_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Player_Hair001_Implementation_C_AnimGraph");
static_assert(sizeof(ABP_Player_Hair001_Implementation_C_AnimGraph) == 0x000010, "Wrong size on ABP_Player_Hair001_Implementation_C_AnimGraph");
static_assert(offsetof(ABP_Player_Hair001_Implementation_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Player_Hair001_Implementation_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}
