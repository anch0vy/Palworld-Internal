#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SheepBall

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_SheepBall.ABP_SheepBall_C
// 0x0000 (0x2430 - 0x2430)
class UABP_SheepBall_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_SheepBall_C">();
	}
	static class UABP_SheepBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_SheepBall_C>();
	}
};
static_assert(alignof(UABP_SheepBall_C) == 0x000010, "Wrong alignment on UABP_SheepBall_C");
static_assert(sizeof(UABP_SheepBall_C) == 0x002430, "Wrong size on UABP_SheepBall_C");

}
