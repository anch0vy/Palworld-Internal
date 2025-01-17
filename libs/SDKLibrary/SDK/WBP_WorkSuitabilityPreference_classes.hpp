#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorkSuitabilityPreference

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WorkSuitabilityPreference.WBP_WorkSuitabilityPreference_C
// 0x0028 (0x0460 - 0x0438)
class UWBP_WorkSuitabilityPreference_C final : public UPalUIWorkSuitabilitySelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_WorkSuitabilityPreferenceMenu_C*   WBP_WorkSuitabilityPreferenceMenu;                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ToggleWorkerDetailInputAction;                     // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplayDetail;                                   // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
	void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
	void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature(bool CanBattle, class UPalIndividualCharacterSlot* Param_Slot);
	void Destruct();
	void ExecuteUbergraph_WBP_WorkSuitabilityPreference(int32 EntryPoint);
	void OnSetup();
	void OnTrigger_ToggleDetail();
	void Setup();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorkSuitabilityPreference_C">();
	}
	static class UWBP_WorkSuitabilityPreference_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorkSuitabilityPreference_C>();
	}
};
static_assert(alignof(UWBP_WorkSuitabilityPreference_C) == 0x000008, "Wrong alignment on UWBP_WorkSuitabilityPreference_C");
static_assert(sizeof(UWBP_WorkSuitabilityPreference_C) == 0x000460, "Wrong size on UWBP_WorkSuitabilityPreference_C");
static_assert(offsetof(UWBP_WorkSuitabilityPreference_C, UberGraphFrame) == 0x000438, "Member 'UWBP_WorkSuitabilityPreference_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreference_C, Default_In) == 0x000440, "Member 'UWBP_WorkSuitabilityPreference_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreference_C, WBP_WorkSuitabilityPreferenceMenu) == 0x000448, "Member 'UWBP_WorkSuitabilityPreference_C::WBP_WorkSuitabilityPreferenceMenu' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreference_C, ToggleWorkerDetailInputAction) == 0x000450, "Member 'UWBP_WorkSuitabilityPreference_C::ToggleWorkerDetailInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_WorkSuitabilityPreference_C, IsDisplayDetail) == 0x000458, "Member 'UWBP_WorkSuitabilityPreference_C::IsDisplayDetail' has a wrong offset!");

}

