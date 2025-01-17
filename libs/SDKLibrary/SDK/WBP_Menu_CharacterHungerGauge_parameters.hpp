#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_CharacterHungerGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.ExecuteUbergraph_WBP_Menu_CharacterHungerGauge
// 0x0014 (0x0014 - 0x0000)
struct WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowHunger, double NowMaxHunger)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge) == 0x000004, "Wrong alignment on WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge");
static_assert(sizeof(WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge) == 0x000014, "Wrong size on WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge, EntryPoint) == 0x000000, "Member 'WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.UpdateHunger
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Menu_CharacterHungerGauge_C_UpdateHunger final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger) == 0x000008, "Wrong alignment on WBP_Menu_CharacterHungerGauge_C_UpdateHunger");
static_assert(sizeof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger) == 0x0000D0, "Wrong size on WBP_Menu_CharacterHungerGauge_C_UpdateHunger");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, NowHunger) == 0x000000, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, NowMaxHunger) == 0x000008, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::NowMaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_Round_ReturnValue) == 0x000018, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_Round_ReturnValue_1) == 0x00001C, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000038, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_CharacterHungerGauge_C_UpdateHunger, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000C8, "Member 'WBP_Menu_CharacterHungerGauge_C_UpdateHunger::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

