#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalBuildObjectThumbnailButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C
// 0x0170 (0x0578 - 0x0408)
class UWBP_PalBuildObjectThumbnailButton_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_121;                                   // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_130;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     NameText;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              CanvasSize;                                        // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              DefaultCanvasSize;                                 // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalBuildObjectData                    BuildObjectData;                                   // 0x0480(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateFontInfo                         DefaultFontInfo;                                   // 0x0510(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton(int32 EntryPoint);
	void GetBuildObjectData(struct FPalBuildObjectData* Param_BuildObjectData);
	void OnClicked__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void OnClickedButton_Internal();
	void OnHovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void OnHoveredButton_Internal();
	void OnInitialized();
	void OnUnhovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelftWidget);
	void OnUnhoveredButton_Internal();
	void PreConstruct(bool IsDesignTime);
	void SetBaseImageVisibility(ESlateVisibility InVisibility);
	void SetButtonFocus();
	void SetScale(double NewScale);
	void Setup(const struct FPalBuildObjectData& Param_BuildObjectData);

	struct FVector2D GetScaledCanvasSize() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalBuildObjectThumbnailButton_C">();
	}
	static class UWBP_PalBuildObjectThumbnailButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalBuildObjectThumbnailButton_C>();
	}
};
static_assert(alignof(UWBP_PalBuildObjectThumbnailButton_C) == 0x000008, "Wrong alignment on UWBP_PalBuildObjectThumbnailButton_C");
static_assert(sizeof(UWBP_PalBuildObjectThumbnailButton_C) == 0x000578, "Wrong size on UWBP_PalBuildObjectThumbnailButton_C");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalBuildObjectThumbnailButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, Default_In) == 0x000410, "Member 'UWBP_PalBuildObjectThumbnailButton_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, CanvasPanel_121) == 0x000418, "Member 'UWBP_PalBuildObjectThumbnailButton_C::CanvasPanel_121' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, Image) == 0x000420, "Member 'UWBP_PalBuildObjectThumbnailButton_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, Image_130) == 0x000428, "Member 'UWBP_PalBuildObjectThumbnailButton_C::Image_130' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, NameText) == 0x000430, "Member 'UWBP_PalBuildObjectThumbnailButton_C::NameText' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, WBP_PalCommonButton) == 0x000438, "Member 'UWBP_PalBuildObjectThumbnailButton_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, CanvasSize) == 0x000440, "Member 'UWBP_PalBuildObjectThumbnailButton_C::CanvasSize' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, OnClicked) == 0x000450, "Member 'UWBP_PalBuildObjectThumbnailButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, OnHovered) == 0x000460, "Member 'UWBP_PalBuildObjectThumbnailButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, DefaultCanvasSize) == 0x000470, "Member 'UWBP_PalBuildObjectThumbnailButton_C::DefaultCanvasSize' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, BuildObjectData) == 0x000480, "Member 'UWBP_PalBuildObjectThumbnailButton_C::BuildObjectData' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, OnUnhovered) == 0x000500, "Member 'UWBP_PalBuildObjectThumbnailButton_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, DefaultFontInfo) == 0x000510, "Member 'UWBP_PalBuildObjectThumbnailButton_C::DefaultFontInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PalBuildObjectThumbnailButton_C, Scale) == 0x000570, "Member 'UWBP_PalBuildObjectThumbnailButton_C::Scale' has a wrong offset!");

}
