#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Arena_PalDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Arena_PalDetail.WBP_Arena_PalDetail_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_Arena_PalDetail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_IngameMenu_PalBox_PalDetail_C*     WBP_IngameMenu_PalBox_PalDetail;                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Arena_PalDetail(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Arena_PalDetail_C">();
	}
	static class UWBP_Arena_PalDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Arena_PalDetail_C>();
	}
};
static_assert(alignof(UWBP_Arena_PalDetail_C) == 0x000008, "Wrong alignment on UWBP_Arena_PalDetail_C");
static_assert(sizeof(UWBP_Arena_PalDetail_C) == 0x000290, "Wrong size on UWBP_Arena_PalDetail_C");
static_assert(offsetof(UWBP_Arena_PalDetail_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Arena_PalDetail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Arena_PalDetail_C, WBP_IngameMenu_PalBox_PalDetail) == 0x000280, "Member 'UWBP_Arena_PalDetail_C::WBP_IngameMenu_PalBox_PalDetail' has a wrong offset!");
static_assert(offsetof(UWBP_Arena_PalDetail_C, WBP_PalKeyGuideIcon) == 0x000288, "Member 'UWBP_Arena_PalDetail_C::WBP_PalKeyGuideIcon' has a wrong offset!");

}
