/* IL2CPP: magicsort.schemas.v1.liveops.daily_reward.GetDailyRewardEventResponseVerify$$Verify
bool magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponseVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.daily_reward.GetDailyRewardEventResponseVerify$$Verify
   bool magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponseVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_daily_reward_GetDailyRewardEventResponseVerify__Verify_17408c0
          (long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar2 = param_2 & 0xffffffff;
  auVar3 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
  uVar1 = auVar3._8_8_;
  if (((((auVar3._0_8_ & 1) != 0) &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,4,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
      (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,6,8,8,0,0),
      uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
     (((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,8,8,8,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,10,8,8,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
      (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,0xc,0,0),
      uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return auVar3 << 0x40;
}

