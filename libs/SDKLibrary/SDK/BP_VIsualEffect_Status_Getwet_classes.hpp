#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VIsualEffect_Status_Getwet

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C
// 0x0030 (0x00A0 - 0x0070)
class UBP_VIsualEffect_Status_Getwet_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Effect;                                            // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTime;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTimer;                                      // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Currentfade;                                       // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fadeoutmax;                                        // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VIsualEffect_Status_Getwet(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnDeleteInstance();
	void OnEndVisualEffect();
	void Set_Wet(double Value);
	void TerminatingTickVisualEffect(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VIsualEffect_Status_Getwet_C">();
	}
	static class UBP_VIsualEffect_Status_Getwet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VIsualEffect_Status_Getwet_C>();
	}
};
static_assert(alignof(UBP_VIsualEffect_Status_Getwet_C) == 0x000008, "Wrong alignment on UBP_VIsualEffect_Status_Getwet_C");
static_assert(sizeof(UBP_VIsualEffect_Status_Getwet_C) == 0x0000A0, "Wrong size on UBP_VIsualEffect_Status_Getwet_C");
static_assert(offsetof(UBP_VIsualEffect_Status_Getwet_C, UberGraphFrame) == 0x000070, "Member 'UBP_VIsualEffect_Status_Getwet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VIsualEffect_Status_Getwet_C, Effect) == 0x000078, "Member 'UBP_VIsualEffect_Status_Getwet_C::Effect' has a wrong offset!");
static_assert(offsetof(UBP_VIsualEffect_Status_Getwet_C, FadeOutTime) == 0x000080, "Member 'UBP_VIsualEffect_Status_Getwet_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UBP_VIsualEffect_Status_Getwet_C, FadeOutTimer) == 0x000088, "Member 'UBP_VIsualEffect_Status_Getwet_C::FadeOutTimer' has a wrong offset!");
static_assert(offsetof(UBP_VIsualEffect_Status_Getwet_C, Currentfade) == 0x000090, "Member 'UBP_VIsualEffect_Status_Getwet_C::Currentfade' has a wrong offset!");
static_assert(offsetof(UBP_VIsualEffect_Status_Getwet_C, Fadeoutmax) == 0x000098, "Member 'UBP_VIsualEffect_Status_Getwet_C::Fadeoutmax' has a wrong offset!");

}

