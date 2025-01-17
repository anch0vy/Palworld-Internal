#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameConstruction_Dismantling

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetWarningText
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_SetWarningText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_SetWarningText) == 0x000008, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_SetWarningText");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_SetWarningText) == 0x000020, "Wrong size on WBP_IngameConstruction_Dismantling_C_SetWarningText");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetWarningText, InText) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_SetWarningText::InText' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetWarningText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_IngameConstruction_Dismantling_C_SetWarningText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetupKeyGuide
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_SetupKeyGuide final
{
public:
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array_2;                          // 0x0038(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0048(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0060(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_2;           // 0x0078(0x0018)()
	TArray<class UWBP_IngameConstruction_Num_C*>  K2Node_MakeArray_Array_3;                          // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide) == 0x000008, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_SetupKeyGuide");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide) == 0x0000A0, "Wrong size on WBP_IngameConstruction_Dismantling_C_SetupKeyGuide");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, CallFunc_Conv_StringToName_ReturnValue) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000008, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, K2Node_MakeArray_Array_1) == 0x000020, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, CallFunc_Conv_StringToName_ReturnValue_2) == 0x000030, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, K2Node_MakeArray_Array_2) == 0x000038, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, CallFunc_GetLocalizedText_ReturnValue) == 0x000048, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000060, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, CallFunc_GetLocalizedText_ReturnValue_2) == 0x000078, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::CallFunc_GetLocalizedText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetupKeyGuide, K2Node_MakeArray_Array_3) == 0x000090, "Member 'WBP_IngameConstruction_Dismantling_C_SetupKeyGuide::K2Node_MakeArray_Array_3' has a wrong offset!");

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.Setup
// 0x0098 (0x0098 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_Setup final
{
public:
	struct FPalBuildObjectData                    InBuildObjectData;                                 // 0x0000(0x0080)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_GetMapObjectName_outName;                 // 0x0080(0x0018)()
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_Setup");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_Setup) == 0x000098, "Wrong size on WBP_IngameConstruction_Dismantling_C_Setup");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_Setup, InBuildObjectData) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_Setup::InBuildObjectData' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_Setup, CallFunc_GetMapObjectName_outName) == 0x000080, "Member 'WBP_IngameConstruction_Dismantling_C_Setup::CallFunc_GetMapObjectName_outName' has a wrong offset!");

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetMaterial
// 0x0080 (0x0080 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_SetMaterial final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StaticItemId;                                      // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemCount;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*               TargetIcon;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*          TargetNum;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*          CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	TArray<struct FPalStaticItemIdAndNum>         CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos; // 0x0048(0x0010)(ReferenceParm)
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 CallFunc_Array_Get_Item_2;                         // 0x0060(0x000C)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FF4[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_SetMaterial) == 0x000008, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_SetMaterial");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_SetMaterial) == 0x000080, "Wrong size on WBP_IngameConstruction_Dismantling_C_SetMaterial");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, Param_Index) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, StaticItemId) == 0x000004, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::StaticItemId' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, ItemCount) == 0x00000C, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::ItemCount' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, TargetIcon) == 0x000010, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::TargetIcon' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, TargetNum) == 0x000018, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::TargetNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_GetPalmi_ReturnValue) == 0x000020, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, K2Node_MakeArray_Array) == 0x000038, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos) == 0x000048, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_GetItemIDManager_ReturnValue) == 0x000058, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_Array_Get_Item_2) == 0x000060, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_IsValid_ReturnValue) == 0x00006C, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_GetStaticItemData_ReturnValue) == 0x000070, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetMaterial, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'WBP_IngameConstruction_Dismantling_C_SetMaterial::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetEnableWarning
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_SetEnableWarning final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_SetEnableWarning) == 0x000001, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_SetEnableWarning");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_SetEnableWarning) == 0x000001, "Wrong size on WBP_IngameConstruction_Dismantling_C_SetEnableWarning");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetEnableWarning, IsEnable) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_SetEnableWarning::IsEnable' has a wrong offset!");

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetDismantleObjectName
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName) == 0x000008, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName) == 0x000018, "Wrong size on WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName, InName) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_SetDismantleObjectName::InName' has a wrong offset!");

// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.ExecuteUbergraph_WBP_IngameConstruction_Dismantling
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FF5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalCommonItemIcon_C*>       K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling) == 0x000008, "Wrong alignment on WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling");
static_assert(sizeof(WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling) == 0x000020, "Wrong size on WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling, EntryPoint) == 0x000000, "Member 'WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling::K2Node_MakeArray_Array' has a wrong offset!");

}

