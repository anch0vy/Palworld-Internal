#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_BackupSelect_ListContent

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C
// 0x0210 (0x0488 - 0x0278)
class UWBP_Title_BackupSelect_ListContent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Select;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BackupName;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 BindedSaveDirectoryName;                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPalUIServerDisplayData                CachedServerDisplayData;                           // 0x02C8(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 World_Name;                                        // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPalUIBackupSaveDisplayData            CachedDisplayData;                                 // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnmEvent_Unselect();
	void BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Title_BackupSelect_ListContent(int32 EntryPoint);
	void GetDisplayData(struct FPalUIBackupSaveDisplayData* DisplayData);
	void OnClicked__DelegateSignature(class UWBP_Title_BackupSelect_ListContent_C* Widget);
	void Setup(const struct FPalUIBackupSaveDisplayData& DisplayData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_BackupSelect_ListContent_C">();
	}
	static class UWBP_Title_BackupSelect_ListContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_BackupSelect_ListContent_C>();
	}
};
static_assert(alignof(UWBP_Title_BackupSelect_ListContent_C) == 0x000008, "Wrong alignment on UWBP_Title_BackupSelect_ListContent_C");
static_assert(sizeof(UWBP_Title_BackupSelect_ListContent_C) == 0x000488, "Wrong size on UWBP_Title_BackupSelect_ListContent_C");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Title_BackupSelect_ListContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, Anm_Select) == 0x000280, "Member 'UWBP_Title_BackupSelect_ListContent_C::Anm_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, Anm_NormalToFocus) == 0x000288, "Member 'UWBP_Title_BackupSelect_ListContent_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, CanvasPanel_1) == 0x000290, "Member 'UWBP_Title_BackupSelect_ListContent_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, Text_BackupName) == 0x000298, "Member 'UWBP_Title_BackupSelect_ListContent_C::Text_BackupName' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, WBP_PalInvisibleButton) == 0x0002A0, "Member 'UWBP_Title_BackupSelect_ListContent_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, OnClicked) == 0x0002A8, "Member 'UWBP_Title_BackupSelect_ListContent_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, BindedSaveDirectoryName) == 0x0002B8, "Member 'UWBP_Title_BackupSelect_ListContent_C::BindedSaveDirectoryName' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, CachedServerDisplayData) == 0x0002C8, "Member 'UWBP_Title_BackupSelect_ListContent_C::CachedServerDisplayData' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, World_Name) == 0x000468, "Member 'UWBP_Title_BackupSelect_ListContent_C::World_Name' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_ListContent_C, CachedDisplayData) == 0x000478, "Member 'UWBP_Title_BackupSelect_ListContent_C::CachedDisplayData' has a wrong offset!");

}
