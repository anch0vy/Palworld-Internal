#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGameMenuInventoryModel

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InGameMenuInventoryModel.BP_InGameMenuInventoryModel_C
// 0x0010 (0x0038 - 0x0028)
class UBP_InGameMenuInventoryModel_C final : public UPalUIInGameMainMenuInventoryModel
{
public:
	class UBP_PalInventoryModel_C*                InventoryModel;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_PalLoadOutModel_C*                  LoadoutModel;                                      // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Dispose();
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InGameMenuInventoryModel_C">();
	}
	static class UBP_InGameMenuInventoryModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InGameMenuInventoryModel_C>();
	}
};
static_assert(alignof(UBP_InGameMenuInventoryModel_C) == 0x000008, "Wrong alignment on UBP_InGameMenuInventoryModel_C");
static_assert(sizeof(UBP_InGameMenuInventoryModel_C) == 0x000038, "Wrong size on UBP_InGameMenuInventoryModel_C");
static_assert(offsetof(UBP_InGameMenuInventoryModel_C, InventoryModel) == 0x000028, "Member 'UBP_InGameMenuInventoryModel_C::InventoryModel' has a wrong offset!");
static_assert(offsetof(UBP_InGameMenuInventoryModel_C, LoadoutModel) == 0x000030, "Member 'UBP_InGameMenuInventoryModel_C::LoadoutModel' has a wrong offset!");

}

