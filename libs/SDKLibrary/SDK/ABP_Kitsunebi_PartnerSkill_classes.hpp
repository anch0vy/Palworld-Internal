#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Kitsunebi_PartnerSkill

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Kitsunebi_PartnerSkill.ABP_Kitsunebi_PartnerSkill_C
// 0x00D0 (0x0420 - 0x0350)
class UABP_Kitsunebi_PartnerSkill_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3F0F[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0388(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03D0(0x0048)()

public:
	void ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Kitsunebi_PartnerSkill_C">();
	}
	static class UABP_Kitsunebi_PartnerSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Kitsunebi_PartnerSkill_C>();
	}
};
static_assert(alignof(UABP_Kitsunebi_PartnerSkill_C) == 0x000010, "Wrong alignment on UABP_Kitsunebi_PartnerSkill_C");
static_assert(sizeof(UABP_Kitsunebi_PartnerSkill_C) == 0x000420, "Wrong size on UABP_Kitsunebi_PartnerSkill_C");
static_assert(offsetof(UABP_Kitsunebi_PartnerSkill_C, UberGraphFrame) == 0x000350, "Member 'UABP_Kitsunebi_PartnerSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Kitsunebi_PartnerSkill_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_Kitsunebi_PartnerSkill_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Kitsunebi_PartnerSkill_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_Kitsunebi_PartnerSkill_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Kitsunebi_PartnerSkill_C, AnimGraphNode_Root) == 0x000368, "Member 'UABP_Kitsunebi_PartnerSkill_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Kitsunebi_PartnerSkill_C, AnimGraphNode_SequencePlayer) == 0x000388, "Member 'UABP_Kitsunebi_PartnerSkill_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Kitsunebi_PartnerSkill_C, AnimGraphNode_Slot) == 0x0003D0, "Member 'UABP_Kitsunebi_PartnerSkill_C::AnimGraphNode_Slot' has a wrong offset!");

}

