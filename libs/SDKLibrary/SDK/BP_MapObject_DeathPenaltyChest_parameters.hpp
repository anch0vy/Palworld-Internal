#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapObject_DeathPenaltyChest

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.ExecuteUbergraph_BP_MapObject_DeathPenaltyChest
// 0x0038 (0x0038 - 0x0000)
struct BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectDeathPenaltyStorageModel*  K2Node_CustomEvent_Model;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathPenaltyStorageModel*  K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalMapObjectDeathPenaltyStorageModel* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest) == 0x000008, "Wrong alignment on BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest");
static_assert(sizeof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest) == 0x000038, "Wrong size on BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest, EntryPoint) == 0x000000, "Member 'BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest, K2Node_CustomEvent_Model) == 0x000008, "Member 'BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest::K2Node_CustomEvent_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest, K2Node_Event_ConcreteModel) == 0x000010, "Member 'BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest, K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model) == 0x000018, "Member 'BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest::K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.OnNotifiedGuildUpdateInClient
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient final
{
public:
	class UPalMapObjectDeathPenaltyStorageModel*  Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient) == 0x000008, "Wrong alignment on BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient");
static_assert(sizeof(BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient) == 0x000008, "Wrong size on BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient, Model) == 0x000000, "Member 'BP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient::Model' has a wrong offset!");

// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.SetActiveFXInLocal
// 0x0018 (0x0018 - 0x0000)
struct BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathPenaltyStorageModel*  K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameGuildInLocalPlayer_ReturnValue;     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal) == 0x000008, "Wrong alignment on BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal");
static_assert(sizeof(BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal) == 0x000018, "Wrong size on BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal, ConcreteModel) == 0x000000, "Member 'BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal::ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal, K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model) == 0x000008, "Member 'BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal::K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal, CallFunc_IsSameGuildInLocalPlayer_ReturnValue) == 0x000011, "Member 'BP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal::CallFunc_IsSameGuildInLocalPlayer_ReturnValue' has a wrong offset!");

}
