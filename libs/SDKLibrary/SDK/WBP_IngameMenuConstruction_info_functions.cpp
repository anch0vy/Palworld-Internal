#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenuConstruction_info

#include "Basic.hpp"

#include "WBP_IngameMenuConstruction_info_classes.hpp"
#include "WBP_IngameMenuConstruction_info_parameters.hpp"


namespace SDK
{

// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.Set Build Object Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData              BuildObjectData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameMenuConstruction_info_C::Set_Build_Object_Data(const struct FPalBuildObjectData& BuildObjectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_info_C", "Set Build Object Data");

	Params::WBP_IngameMenuConstruction_info_C_Set_Build_Object_Data Parms{};

	Parms.BuildObjectData = std::move(BuildObjectData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.SetMaterialInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenuConstruction_InfoItem_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NeedNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_info_C::SetMaterialInfo(class UWBP_IngameMenuConstruction_InfoItem_C* Widget, class FName ID, int32 NeedNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_info_C", "SetMaterialInfo");

	Params::WBP_IngameMenuConstruction_info_C_SetMaterialInfo Parms{};

	Parms.Widget = Widget;
	Parms.ID = ID;
	Parms.NeedNum = NeedNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.Get Useable Material Item Num
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_info_C::Get_Useable_Material_Item_Num(class FName ItemId, int32* Num) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_info_C", "Get Useable Material Item Num");

	Params::WBP_IngameMenuConstruction_info_C_Get_Useable_Material_Item_Num Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}

}
