#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonSelectNum

#include "Basic.hpp"

#include "WBP_CommonSelectNum_classes.hpp"
#include "WBP_CommonSelectNum_parameters.hpp"


namespace SDK
{

// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_CommonSelectNum_C_BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_CommonSelectNum_C_BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Check Numeric
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CheckString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::Check_Numeric(const class FString& CheckString, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Check Numeric");

	Params::WBP_CommonSelectNum_C_Check_Numeric Parms{};

	Parms.CheckString = std::move(CheckString);

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.CheckMaxCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::CheckMaxCount(const class FString& InString, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "CheckMaxCount");

	Params::WBP_CommonSelectNum_C_CheckMaxCount Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Decrement
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::Decrement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Decrement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.ExecuteUbergraph_WBP_CommonSelectNum
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::ExecuteUbergraph_WBP_CommonSelectNum(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "ExecuteUbergraph_WBP_CommonSelectNum");

	Params::WBP_CommonSelectNum_C_ExecuteUbergraph_WBP_CommonSelectNum Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.GetNowCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::GetNowCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "GetNowCount");

	Params::WBP_CommonSelectNum_C_GetNowCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Increment
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::Increment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Increment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnClickedL
// (BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::OnClickedL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnClickedL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnClickedR
// (BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::OnClickedR()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnClickedR");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnEscape
// (BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::OnEscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnEscape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnLeftButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::OnLeftButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnLeftButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnRightButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::OnRightButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnRightButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnTextChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::OnTextChanged(const class FString& NewString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnTextChanged");

	Params::WBP_CommonSelectNum_C_OnTextChanged Parms{};

	Parms.NewString = std::move(NewString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnTextCommited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::OnTextCommited__DelegateSignature(const class FString& NewString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnTextCommited__DelegateSignature");

	Params::WBP_CommonSelectNum_C_OnTextCommited__DelegateSignature Parms{};

	Parms.NewString = std::move(NewString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InMaxCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DefaultCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::Setup(int32 InMaxCount, int32 DefaultCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Setup");

	Params::WBP_CommonSelectNum_C_Setup Parms{};

	Parms.InMaxCount = InMaxCount;
	Parms.DefaultCount = DefaultCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CommonSelectNum_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

}
