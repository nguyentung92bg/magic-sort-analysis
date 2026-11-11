/* IL2CPP: magicsort.schemas.v1.liveops.weekly_leaderboard.GetWeeklyLeaderboardResponseVerify$$Verify
bool magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponseVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.weekly_leaderboard.GetWeeklyLeaderboardResponseVerify$$Verify
   bool magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponseVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponseVerify__Verify_14448c4
          (long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000005c23716 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758d20);
    FUN_012d0dc8(PTR_DAT_057e8f38);
    bRam0000000005c23716 = 1;
  }
  if (param_1 != 0) {
    auVar3 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar2 = auVar3._8_8_;
    if (((auVar3._0_8_ & 1) != 0) &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,4,0,0),
       uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) {
      lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      if (lVar1 == 0) goto LAB_01544a3c;
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar1,0,*(undefined8 *)PTR_DAT_057e8f38,0)
      ;
      auVar3 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                         (param_1,param_2,6,lVar1,0,0);
      uVar2 = auVar3._8_8_;
      if (((((auVar3._0_8_ & 1) != 0) &&
           (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,8,8,8,0,0),
           uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
          (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,10,8,8,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
         ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0xc,1,1,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
          (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0xe,1,1,0,0),
          uVar2 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        auVar4._8_8_ = param_2;
        auVar4._0_8_ = 1;
        return auVar4;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    return auVar3 << 0x40;
  }
LAB_01544a3c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

