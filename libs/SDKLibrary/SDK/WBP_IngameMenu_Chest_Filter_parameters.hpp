#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_Chest_Filter

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_IngameMenu_Chest_Filter.WBP_IngameMenu_Chest_Filter_C.AddContentItem
// 0x0030 (0x0030 - 0x0000)
struct WBP_IngameMenu_Chest_Filter_C_AddContentItem final
{
public:
	class FName                                   FilterId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FilterTextId;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Chest_FilterContent_C*  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Chest_FilterContent_C*  CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Chest_Filter_C_AddContentItem) == 0x000008, "Wrong alignment on WBP_IngameMenu_Chest_Filter_C_AddContentItem");
static_assert(sizeof(WBP_IngameMenu_Chest_Filter_C_AddContentItem) == 0x000030, "Wrong size on WBP_IngameMenu_Chest_Filter_C_AddContentItem");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_AddContentItem, FilterId) == 0x000000, "Member 'WBP_IngameMenu_Chest_Filter_C_AddContentItem::FilterId' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_AddContentItem, FilterTextId) == 0x000008, "Member 'WBP_IngameMenu_Chest_Filter_C_AddContentItem::FilterTextId' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_AddContentItem, ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Chest_Filter_C_AddContentItem::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_AddContentItem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_Chest_Filter_C_AddContentItem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_AddContentItem, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_Chest_Filter_C_AddContentItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_AddContentItem, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_Chest_Filter_C_AddContentItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Chest_Filter.WBP_IngameMenu_Chest_Filter_C.ExecuteUbergraph_WBP_IngameMenu_Chest_Filter
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter) == 0x000004, "Wrong alignment on WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter");
static_assert(sizeof(WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter) == 0x000004, "Wrong size on WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_Chest_Filter_C_ExecuteUbergraph_WBP_IngameMenu_Chest_Filter::EntryPoint' has a wrong offset!");

// Function WBP_IngameMenu_Chest_Filter.WBP_IngameMenu_Chest_Filter_C.GetDesiredFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget final
{
public:
	class UWidget*                                NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Chest_FilterContent_C*  K2Node_DynamicCast_AsWBP_Ingame_Menu_Chest_Filter_Content; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget");
static_assert(sizeof(WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget) == 0x000020, "Wrong size on WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget, NewParam) == 0x000000, "Member 'WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget, K2Node_DynamicCast_AsWBP_Ingame_Menu_Chest_Filter_Content) == 0x000010, "Member 'WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget::K2Node_DynamicCast_AsWBP_Ingame_Menu_Chest_Filter_Content' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_IngameMenu_Chest_Filter_C_GetDesiredFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
