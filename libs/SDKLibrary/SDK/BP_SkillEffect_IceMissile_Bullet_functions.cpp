#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillEffect_IceMissile_Bullet

#include "Basic.hpp"

#include "BP_SkillEffect_IceMissile_Bullet_classes.hpp"
#include "BP_SkillEffect_IceMissile_Bullet_parameters.hpp"


namespace SDK
{

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.TurnAround
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::TurnAround(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "TurnAround");

	Params::BP_SkillEffect_IceMissile_Bullet_C_TurnAround Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.StartTurnAround
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceMissile_Bullet_C::StartTurnAround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "StartTurnAround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "ReceiveTick");

	Params::BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_IceMissile_Bullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "ReceiveActorBeginOverlap");

	Params::BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.OnHitDelegate_����_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyHitComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherHitActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherHitComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           FoliageIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::OnHitDelegate______0(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "OnHitDelegate_����_0");

	Params::BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______0 Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = std::move(FoliageIndex);
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.OnBreakAction
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceMissile_Bullet_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.GetCurrentTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_SkillEffect_IceMissile_Bullet_C::GetCurrentTargetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "GetCurrentTargetLocation");

	Params::BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "FadeOutEffect");

	Params::BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet");

	Params::BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_IceMissile_Bullet_C::BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_Bullet_C::BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_Bullet_C", "BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");

	Params::BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}
