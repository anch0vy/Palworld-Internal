#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCutsceneOverlay

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Display
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCutsceneOverlay_C_Display final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0028(0x0004)(NoDestructor)
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_Display) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_Display");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_Display) == 0x000030, "Wrong size on WBP_PalCutsceneOverlay_C_Display");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Display, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_Display::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Display, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_PalCutsceneOverlay_C_Display::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Display, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalCutsceneOverlay_C_Display::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Display, CallFunc_RegisterActionBinding_ReturnValue) == 0x000028, "Member 'WBP_PalCutsceneOverlay_C_Display::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.ExecuteUbergraph_WBP_PalCutsceneOverlay
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A7[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay) == 0x000060, "Wrong size on WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay, EntryPoint) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000050, "Member 'WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay, CallFunc_IsInputKeyDown_ReturnValue) == 0x000058, "Member 'WBP_PalCutsceneOverlay_C_ExecuteUbergraph_WBP_PalCutsceneOverlay::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.OnAnalogValueChanged
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_PalCutsceneOverlay_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0040(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0088(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0140(0x00B8)()
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_OnAnalogValueChanged");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_OnAnalogValueChanged) == 0x0001F8, "Wrong size on WBP_PalCutsceneOverlay_C_OnAnalogValueChanged");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000040, "Member 'WBP_PalCutsceneOverlay_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnAnalogValueChanged, ReturnValue) == 0x000088, "Member 'WBP_PalCutsceneOverlay_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x000140, "Member 'WBP_PalCutsceneOverlay_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.OnPreviewKeyDown
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_PalCutsceneOverlay_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0080(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0138(0x00B8)()
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_OnPreviewKeyDown");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_OnPreviewKeyDown) == 0x0001F0, "Wrong size on WBP_PalCutsceneOverlay_C_OnPreviewKeyDown");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewKeyDown, InKeyEvent) == 0x000040, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewKeyDown, ReturnValue) == 0x000080, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000138, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.OnPreviewMouseButtonDown
// 0x0248 (0x0248 - 0x0000)
struct WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0190(0x00B8)()
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown) == 0x000248, "Wrong size on WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'WBP_PalCutsceneOverlay_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Skip
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCutsceneOverlay_C_Skip final
{
public:
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_CutsceneOverlay* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Cutscene_Overlay; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_Skip) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_Skip");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_Skip) == 0x000020, "Wrong size on WBP_PalCutsceneOverlay_C_Skip");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Skip, CallFunc_GetParam_ReturnValue) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_Skip::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Skip, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCutsceneOverlay_C_Skip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Skip, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Cutscene_Overlay) == 0x000010, "Member 'WBP_PalCutsceneOverlay_C_Skip::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Cutscene_Overlay' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Skip, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalCutsceneOverlay_C_Skip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Skip, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_PalCutsceneOverlay_C_Skip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalCutsceneOverlay_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_Tick) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_Tick");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_Tick) == 0x000048, "Wrong size on WBP_PalCutsceneOverlay_C_Tick");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalCutsceneOverlay_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PalCutsceneOverlay.WBP_PalCutsceneOverlay_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_PalCutsceneOverlay_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}
