#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Pal_StatusElement

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_StatusElement.WBP_MainMenu_Pal_StatusElement_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_MainMenu_Pal_StatusElement_C final : public UUserWidget
{
public:
	class UImage*                                 Image_Element;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_ElementTypeName;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalElementType, TSoftObjectPtr<class UTexture2D>> TextureMap;                                        // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Setup(EPalElementType ElementType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Pal_StatusElement_C">();
	}
	static class UWBP_MainMenu_Pal_StatusElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Pal_StatusElement_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Pal_StatusElement_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Pal_StatusElement_C");
static_assert(sizeof(UWBP_MainMenu_Pal_StatusElement_C) == 0x0002D8, "Wrong size on UWBP_MainMenu_Pal_StatusElement_C");
static_assert(offsetof(UWBP_MainMenu_Pal_StatusElement_C, Image_Element) == 0x000278, "Member 'UWBP_MainMenu_Pal_StatusElement_C::Image_Element' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_StatusElement_C, Text_ElementTypeName) == 0x000280, "Member 'UWBP_MainMenu_Pal_StatusElement_C::Text_ElementTypeName' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_StatusElement_C, TextureMap) == 0x000288, "Member 'UWBP_MainMenu_Pal_StatusElement_C::TextureMap' has a wrong offset!");

}

