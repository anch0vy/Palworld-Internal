#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OilrigNPCSpawnerBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.Despawn
// 0x0048 (0x0048 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_Despawn final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4986[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_Despawn) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_Despawn");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_Despawn) == 0x000048, "Wrong size on BP_OilrigNPCSpawnerBase_C_Despawn");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, Handle) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::Handle' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue) == 0x000020, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, CallFunc_GetCharacterManager_ReturnValue) == 0x000028, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn, CallFunc_GetCharacterManager_ReturnValue_1) == 0x000040, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn::CallFunc_GetCharacterManager_ReturnValue_1' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.Despawn Delegate
// 0x0030 (0x0030 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_Despawn_Delegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_Despawn_Delegate) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_Despawn_Delegate");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_Despawn_Delegate) == 0x000030, "Wrong size on BP_OilrigNPCSpawnerBase_C_Despawn_Delegate");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Despawn_Delegate, ID) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_Despawn_Delegate::ID' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.ExecuteUbergraph_BP_OilrigNPCSpawnerBase
// 0x0008 (0x0008 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase) == 0x000004, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase) == 0x000008, "Wrong size on BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase, EntryPoint) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase, K2Node_Event_EndPlayReason) == 0x000005, "Member 'BP_OilrigNPCSpawnerBase_C_ExecuteUbergraph_BP_OilrigNPCSpawnerBase::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.ExistSpawnableCollision
// 0x0150 (0x0150 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision final
{
public:
	bool                                          Exist;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4987[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0060(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision) == 0x000150, "Wrong size on BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, Exist) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::Exist' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, Temp_object_Variable) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, CallFunc_Add_VectorVector_ReturnValue) == 0x000030, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000048, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, CallFunc_LineTraceSingle_OutHit) == 0x000060, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision, CallFunc_LineTraceSingle_ReturnValue) == 0x000148, "Member 'BP_OilrigNPCSpawnerBase_C_ExistSpawnableCollision::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.InitializeSpawnedCharacter
// 0x0068 (0x0068 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_Oilrig_C*           AICon;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          Character;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AController* HolderController, class APalCharacter* OtomoPal)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_Oilrig_C*           K2Node_DynamicCast_AsBP_NPCAIController_Oilrig;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter) == 0x000068, "Wrong size on BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, Handle) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::Handle' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, AICon) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::AICon' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, Character) == 0x000010, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::Character' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, CallFunc_GetController_ReturnValue) == 0x000050, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, K2Node_DynamicCast_AsBP_NPCAIController_Oilrig) == 0x000058, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::K2Node_DynamicCast_AsBP_NPCAIController_Oilrig' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_OilrigNPCSpawnerBase_C_InitializeSpawnedCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.IsNearAnyPlayer
// 0x0040 (0x0040 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNear;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4988[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4989[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_498A[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsNearTwoActor_distance_ImplicitCast;     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer) == 0x000040, "Wrong size on BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, Distance) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::Distance' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, IsNear) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::IsNear' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000018, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_IsNearTwoActor_ReturnValue) == 0x000039, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer, CallFunc_IsNearTwoActor_distance_ImplicitCast) == 0x00003C, "Member 'BP_OilrigNPCSpawnerBase_C_IsNearAnyPlayer::CallFunc_IsNearTwoActor_distance_ImplicitCast' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.On Spawn Otomo
// 0x0010 (0x0010 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo final
{
public:
	class AController*                            HolderController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OtomoPal;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo) == 0x000010, "Wrong size on BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo, HolderController) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo::HolderController' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo, OtomoPal) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_On_Spawn_Otomo::OtomoPal' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.RequestSpawn
// 0x0020 (0x0020 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_RequestSpawn final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExistSpawnableCollision_Exist;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_RequestSpawn) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_RequestSpawn");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_RequestSpawn) == 0x000020, "Wrong size on BP_OilrigNPCSpawnerBase_C_RequestSpawn");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_RequestSpawn, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_RequestSpawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_RequestSpawn, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'BP_OilrigNPCSpawnerBase_C_RequestSpawn::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_RequestSpawn, CallFunc_ExistSpawnableCollision_Exist) == 0x000018, "Member 'BP_OilrigNPCSpawnerBase_C_RequestSpawn::CallFunc_ExistSpawnableCollision_Exist' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.Spawn
// 0x03B8 (0x03B8 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_Spawn final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Level;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_498B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_MakeStruct_Guid;                            // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNetworkActorSpawnParameters           K2Node_MakeStruct_NetworkActorSpawnParameters;     // 0x0078(0x0070)(NoDestructor)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_outParameter; // 0x00E8(0x02C0)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_ReturnValue; // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_498C[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_SpawnNewCharacter_ReturnValue;            // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_Spawn) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_Spawn");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_Spawn) == 0x0003B8, "Wrong size on BP_OilrigNPCSpawnerBase_C_Spawn");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, CharacterID) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::CharacterID' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, Param_Level) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::Param_Level' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, Location) == 0x000010, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::Location' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, Rotation) == 0x000028, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::Rotation' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, Handle) == 0x000040, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::Handle' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, CallFunc_GetCharacterManager_ReturnValue) == 0x000058, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000060, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, K2Node_MakeStruct_Guid) == 0x000068, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::K2Node_MakeStruct_Guid' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, K2Node_MakeStruct_NetworkActorSpawnParameters) == 0x000078, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::K2Node_MakeStruct_NetworkActorSpawnParameters' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, CallFunc_GetInitializedCharacterSaveParemter_outParameter) == 0x0000E8, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::CallFunc_GetInitializedCharacterSaveParemter_outParameter' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, CallFunc_GetInitializedCharacterSaveParemter_ReturnValue) == 0x0003A8, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::CallFunc_GetInitializedCharacterSaveParemter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn, CallFunc_SpawnNewCharacter_ReturnValue) == 0x0003B0, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn::CallFunc_SpawnNewCharacter_ReturnValue' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.Spawn Delegate
// 0x0040 (0x0040 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_Spawn_Delegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_Spawn_Delegate) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_Spawn_Delegate");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_Spawn_Delegate) == 0x000040, "Wrong size on BP_OilrigNPCSpawnerBase_C_Spawn_Delegate");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn_Delegate, ID) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn_Delegate::ID' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn_Delegate, CallFunc_GetCharacterManager_ReturnValue) == 0x000030, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn_Delegate::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_Spawn_Delegate, CallFunc_GetIndividualHandle_ReturnValue) == 0x000038, "Member 'BP_OilrigNPCSpawnerBase_C_Spawn_Delegate::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");

// Function BP_OilrigNPCSpawnerBase.BP_OilrigNPCSpawnerBase_C.SpawnOneNPC
// 0x0060 (0x0060 - 0x0000)
struct BP_OilrigNPCSpawnerBase_C_SpawnOneNPC final
{
public:
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWipedOut_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_498D[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_Spawn_Handle;                             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC) == 0x000008, "Wrong alignment on BP_OilrigNPCSpawnerBase_C_SpawnOneNPC");
static_assert(sizeof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC) == 0x000060, "Wrong size on BP_OilrigNPCSpawnerBase_C_SpawnOneNPC");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000000, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_IsWipedOut_ReturnValue) == 0x000009, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_IsWipedOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000010, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigNPCSpawnerBase_C_SpawnOneNPC, CallFunc_Spawn_Handle) == 0x000058, "Member 'BP_OilrigNPCSpawnerBase_C_SpawnOneNPC::CallFunc_Spawn_Handle' has a wrong offset!");

}

