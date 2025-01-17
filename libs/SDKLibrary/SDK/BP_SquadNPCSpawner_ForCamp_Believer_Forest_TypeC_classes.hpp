#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC

#include "Basic.hpp"

#include "BP_SquadNPCSpawner_ForCampBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC.BP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C
// 0x0018 (0x0498 - 0x0480)
class ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C final : public ABP_SquadNPCSpawner_ForCampBase_C
{
public:
	class UBP_NPCSpawnPointComponent_C*           BP_NPCSpawnPointComponent2;                        // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCSpawnPointComponent_C*           BP_NPCSpawnPointComponent1;                        // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCSpawnPointComponent_C*           BP_NPCSpawnPointComponent;                         // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C">();
	}
	static class ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C>();
	}
};
static_assert(alignof(ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C) == 0x000008, "Wrong alignment on ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C");
static_assert(sizeof(ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C) == 0x000498, "Wrong size on ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C");
static_assert(offsetof(ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C, BP_NPCSpawnPointComponent2) == 0x000480, "Member 'ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C::BP_NPCSpawnPointComponent2' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C, BP_NPCSpawnPointComponent1) == 0x000488, "Member 'ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C::BP_NPCSpawnPointComponent1' has a wrong offset!");
static_assert(offsetof(ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C, BP_NPCSpawnPointComponent) == 0x000490, "Member 'ABP_SquadNPCSpawner_ForCamp_Believer_Forest_TypeC_C::BP_NPCSpawnPointComponent' has a wrong offset!");

}

