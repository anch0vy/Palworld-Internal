#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PanelWidgetChildrenSelectorBase

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C
// 0x0058 (0x0460 - 0x0408)
class UWBP_PanelWidgetChildrenSelectorBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NowFocusChildIndex;                                // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_560F[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangedFocusIndex;                               // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNext;                                            // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPrev;                                            // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPanelWidget*                           MyPanelWidget;                                     // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeEnableChild;                               // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase(int32 EntryPoint);
	void GetChildrenNum(int32* ChildrenNum);
	void GetIndexByWidget(class UWidget* Widget, int32* FindedIndex);
	void GetPanelChildren(bool* IsValidPanel, TArray<class UWidget*>* Children);
	void IsEnabeChild(int32 Param_Index, bool* IsEnable);
	void IsValidIndex(int32 Param_Index, bool* IsValid);
	void OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
	void OnChangeEnableChild__DelegateSignature(int32 Param_Index, class UWidget* ChildWidget, bool IsEnable);
	void OnInitialized();
	void OnNext__DelegateSignature(int32 OldIndex, int32 NewIndex);
	void OnPrev__DelegateSignature(int32 OldIndex, int32 NewIndex);
	void RegisterPanelWidget(class UPanelWidget** PanelWidget);
	void SelectByIndex(int32 FocusIndex);
	void SelectNext();
	void SelectPrev();
	void SetEnableAllChildren(bool IsEnable);
	void SetEnableChild(bool IsEnable, int32 TargetIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PanelWidgetChildrenSelectorBase_C">();
	}
	static class UWBP_PanelWidgetChildrenSelectorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PanelWidgetChildrenSelectorBase_C>();
	}
};
static_assert(alignof(UWBP_PanelWidgetChildrenSelectorBase_C) == 0x000008, "Wrong alignment on UWBP_PanelWidgetChildrenSelectorBase_C");
static_assert(sizeof(UWBP_PanelWidgetChildrenSelectorBase_C) == 0x000460, "Wrong size on UWBP_PanelWidgetChildrenSelectorBase_C");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, NowFocusChildIndex) == 0x000410, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::NowFocusChildIndex' has a wrong offset!");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, OnChangedFocusIndex) == 0x000418, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::OnChangedFocusIndex' has a wrong offset!");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, OnNext) == 0x000428, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::OnNext' has a wrong offset!");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, OnPrev) == 0x000438, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::OnPrev' has a wrong offset!");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, MyPanelWidget) == 0x000448, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::MyPanelWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PanelWidgetChildrenSelectorBase_C, OnChangeEnableChild) == 0x000450, "Member 'UWBP_PanelWidgetChildrenSelectorBase_C::OnChangeEnableChild' has a wrong offset!");

}
