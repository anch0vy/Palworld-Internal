#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameConstruction_Num

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_IngameConstruction_Num.WBP_IngameConstruction_Num_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_IngameConstruction_Num_C final : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_1;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_Num4;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_Num5;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColor                                 ErrorColor;                                        // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetNums(int32 RequiredNum, int32 MaxNum);
	void SetNumInternal(class UBP_PalTextBlock_C* TargetText, int32 InNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameConstruction_Num_C">();
	}
	static class UWBP_IngameConstruction_Num_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameConstruction_Num_C>();
	}
};
static_assert(alignof(UWBP_IngameConstruction_Num_C) == 0x000008, "Wrong alignment on UWBP_IngameConstruction_Num_C");
static_assert(sizeof(UWBP_IngameConstruction_Num_C) == 0x000298, "Wrong size on UWBP_IngameConstruction_Num_C");
static_assert(offsetof(UWBP_IngameConstruction_Num_C, BP_PalTextBlock_C_1) == 0x000278, "Member 'UWBP_IngameConstruction_Num_C::BP_PalTextBlock_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameConstruction_Num_C, BPPalTextBlock_Num4) == 0x000280, "Member 'UWBP_IngameConstruction_Num_C::BPPalTextBlock_Num4' has a wrong offset!");
static_assert(offsetof(UWBP_IngameConstruction_Num_C, BPPalTextBlock_Num5) == 0x000288, "Member 'UWBP_IngameConstruction_Num_C::BPPalTextBlock_Num5' has a wrong offset!");
static_assert(offsetof(UWBP_IngameConstruction_Num_C, ErrorColor) == 0x000290, "Member 'UWBP_IngameConstruction_Num_C::ErrorColor' has a wrong offset!");

}

