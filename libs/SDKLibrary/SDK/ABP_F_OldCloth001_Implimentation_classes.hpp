#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_F_OldCloth001_Implimentation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C
// 0x1820 (0x1B70 - 0x0350)
class UABP_F_OldCloth001_Implimentation_C final : public UAnimInstance
{
public:
	uint8                                         Pad_502E[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	uint8                                         Pad_502F[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x0370(0x0790)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x0B00(0x0790)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x1290(0x0790)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x1A20(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1A40(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1A60(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1A80(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1B48(0x0020)()

public:
	void ExecuteUbergraph_ABP_F_OldCloth001_Implimentation(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_DB22254C408B73DD7E9BC4A62D018730();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_A8F9A51E4CAB94A2E9F5F58E6AE9E9C8();
	void ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_ClothLayer);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_F_OldCloth001_Implimentation_C">();
	}
	static class UABP_F_OldCloth001_Implimentation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_F_OldCloth001_Implimentation_C>();
	}
};
static_assert(alignof(UABP_F_OldCloth001_Implimentation_C) == 0x000010, "Wrong alignment on UABP_F_OldCloth001_Implimentation_C");
static_assert(sizeof(UABP_F_OldCloth001_Implimentation_C) == 0x001B70, "Wrong size on UABP_F_OldCloth001_Implimentation_C");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, UberGraphFrame) == 0x000350, "Member 'UABP_F_OldCloth001_Implimentation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_KawaiiPhysics_2) == 0x000370, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_KawaiiPhysics_1) == 0x000B00, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_KawaiiPhysics) == 0x001290, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_Root_1) == 0x001A20, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_ComponentToLocalSpace) == 0x001A40, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_LocalToComponentSpace) == 0x001A60, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_LinkedInputPose) == 0x001A80, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_F_OldCloth001_Implimentation_C, AnimGraphNode_Root) == 0x001B48, "Member 'UABP_F_OldCloth001_Implimentation_C::AnimGraphNode_Root' has a wrong offset!");

}
