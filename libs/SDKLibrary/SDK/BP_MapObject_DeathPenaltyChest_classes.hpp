#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapObject_DeathPenaltyChest

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C
// 0x0038 (0x0420 - 0x03E8)
class ABP_MapObject_DeathPenaltyChest_C final : public APalMapObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_MapObject_DroppedCharacter;                     // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;                    // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ExecuteUbergraph_BP_MapObject_DeathPenaltyChest(int32 EntryPoint);
	void OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathPenaltyStorageModel* Model);
	void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_DeathPenaltyChest_C">();
	}
	static class ABP_MapObject_DeathPenaltyChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_DeathPenaltyChest_C>();
	}
};
static_assert(alignof(ABP_MapObject_DeathPenaltyChest_C) == 0x000008, "Wrong alignment on ABP_MapObject_DeathPenaltyChest_C");
static_assert(sizeof(ABP_MapObject_DeathPenaltyChest_C) == 0x000420, "Wrong size on ABP_MapObject_DeathPenaltyChest_C");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, UberGraphFrame) == 0x0003E8, "Member 'ABP_MapObject_DeathPenaltyChest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, NS_MapObject_DroppedCharacter) == 0x0003F0, "Member 'ABP_MapObject_DeathPenaltyChest_C::NS_MapObject_DroppedCharacter' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, PalMapObjectItemChestParameter) == 0x0003F8, "Member 'ABP_MapObject_DeathPenaltyChest_C::PalMapObjectItemChestParameter' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, CheckOverlapCollision) == 0x000400, "Member 'ABP_MapObject_DeathPenaltyChest_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, BP_InteractableBox) == 0x000408, "Member 'ABP_MapObject_DeathPenaltyChest_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, Mesh) == 0x000410, "Member 'ABP_MapObject_DeathPenaltyChest_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DeathPenaltyChest_C, Root) == 0x000418, "Member 'ABP_MapObject_DeathPenaltyChest_C::Root' has a wrong offset!");

}
