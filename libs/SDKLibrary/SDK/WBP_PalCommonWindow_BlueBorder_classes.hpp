#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonWindow_BlueBorder

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonWindow_BlueBorder.WBP_PalCommonWindow_BlueBorder_C
// 0x0008 (0x0410 - 0x0408)
class UWBP_PalCommonWindow_BlueBorder_C final : public UPalUserWidget
{
public:
	class UNamedSlot*                             NamedSlot_26;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonWindow_BlueBorder_C">();
	}
	static class UWBP_PalCommonWindow_BlueBorder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonWindow_BlueBorder_C>();
	}
};
static_assert(alignof(UWBP_PalCommonWindow_BlueBorder_C) == 0x000008, "Wrong alignment on UWBP_PalCommonWindow_BlueBorder_C");
static_assert(sizeof(UWBP_PalCommonWindow_BlueBorder_C) == 0x000410, "Wrong size on UWBP_PalCommonWindow_BlueBorder_C");
static_assert(offsetof(UWBP_PalCommonWindow_BlueBorder_C, NamedSlot_26) == 0x000408, "Member 'UWBP_PalCommonWindow_BlueBorder_C::NamedSlot_26' has a wrong offset!");

}

