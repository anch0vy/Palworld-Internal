#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ingame_Chat

#include "Basic.hpp"

#include "WBP_Ingame_Chat_classes.hpp"
#include "WBP_Ingame_Chat_parameters.hpp"


namespace SDK
{

// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.BndEvt__WBP_Ingame_Chat_EditableText_ChatInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::BndEvt__WBP_Ingame_Chat_EditableText_ChatInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "BndEvt__WBP_Ingame_Chat_EditableText_ChatInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	Params::WBP_Ingame_Chat_C_BndEvt__WBP_Ingame_Chat_EditableText_ChatInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.CanChat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::CanChat(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "CanChat");

	Params::WBP_Ingame_Chat_C_CanChat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.ChangeCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::ChangeCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "ChangeCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Chat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Chat_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.ExecuteUbergraph_WBP_Ingame_Chat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Chat_C::ExecuteUbergraph_WBP_Ingame_Chat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "ExecuteUbergraph_WBP_Ingame_Chat");

	Params::WBP_Ingame_Chat_C_ExecuteUbergraph_WBP_Ingame_Chat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.Hide Chat Log UI
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::Hide_Chat_Log_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "Hide Chat Log UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.HideChatInputUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::HideChatInputUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "HideChatInputUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OnCompleteInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::OnCompleteInput__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OnCompleteInput__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OnRecivedChat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalChatMessage                  Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Ingame_Chat_C::OnRecivedChat(const struct FPalChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OnRecivedChat");

	Params::WBP_Ingame_Chat_C_OnRecivedChat Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.OpenChatUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::OpenChatUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "OpenChatUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Chat.WBP_Ingame_Chat_C.ShowChatInputUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Chat_C::ShowChatInputUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Chat_C", "ShowChatInputUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

