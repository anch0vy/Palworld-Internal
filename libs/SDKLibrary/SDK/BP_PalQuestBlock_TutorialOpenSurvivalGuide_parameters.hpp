#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalQuestBlock_TutorialOpenSurvivalGuide

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide
// 0x0058 (0x0058 - 0x0000)
struct BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF7[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF8[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide) == 0x000008, "Wrong alignment on BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide");
static_assert(sizeof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide) == 0x000058, "Wrong size on BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, EntryPoint) == 0x000000, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000040, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1) == 0x000048, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.GetDescriptionText
// 0x0080 (0x0080 - 0x0000)
struct BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText final
{
public:
	class FText                                   OutText;                                           // 0x0000(0x0018)(Parm, OutParm)
	struct FDataTableRowHandle                    NewLocalVar_0;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                    NewLocalVar;                                       // 0x0028(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0038(0x0018)()
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF9[0x5];                                     // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0068(0x0018)()
};
static_assert(alignof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText) == 0x000008, "Wrong alignment on BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText");
static_assert(sizeof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText) == 0x000080, "Wrong size on BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, OutText) == 0x000000, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::OutText' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, NewLocalVar_0) == 0x000018, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, NewLocalVar) == 0x000028, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000038, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000050, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000058, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, CallFunc_GetCurrentInputType_ReturnValue) == 0x000061, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, K2Node_SwitchEnum_CmpSuccess) == 0x000062, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000068, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");

// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged");
static_assert(sizeof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged) == 0x000001, "Wrong size on BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged");
static_assert(offsetof(BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'BP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

}
