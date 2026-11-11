/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponseVerify$$Verify
bool magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponseVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponseVerify$$Verify
   bool 
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponseVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponseVerify__Verify_1738f6c
          (long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000005c24ce5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3e30);
    FUN_012d0dc8(PTR_DAT_05804ac0);
    FUN_012d0dc8(PTR_DAT_05758d20);
    bRam0000000005c24ce5 = 1;
  }
  if (param_1 != 0) {
                    /* try { // try from 01838fc4 to 01938fcb has its CatchHandler @ 018392ac */
    auVar4 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar3 = auVar4._8_8_;
                    /* try { // try from 01838ff8 to 0193903b has its CatchHandler @ 018392b8 */
    if ((((auVar4._0_8_ & 1) != 0) &&
        (auVar4 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,4,0,0),
        uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) &&
       (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,6,8,8,0,0),
       puVar1 = PTR_DAT_05758d20, uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) {
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      if (lVar2 == 0) goto LAB_018391d4;
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar2,0,*(undefined8 *)PTR_DAT_057a3e30,0)
      ;
      auVar4 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                         (param_1,param_2,8,lVar2,0,0);
      uVar3 = auVar4._8_8_;
                    /* try { // try from 0183905c to 0193909f has its CatchHandler @ 018392b0 */
      if ((auVar4._0_8_ & 1) != 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar2 == 0) goto LAB_018391d4;
        Google_FlatBuffers_VerifyTableAction___ctor_3137e80
                  (lVar2,0,*(undefined8 *)PTR_DAT_05804ac0,0);
        auVar4 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                           (param_1,param_2,10,lVar2,0,0);
        uVar3 = auVar4._8_8_;
                    /* try { // try from 018390b4 to 019390cb has its CatchHandler @ 018392b8 */
                    /* try { // try from 01839110 to 01939137 has its CatchHandler @ 018392c0 */
                    /* try { // try from 01839160 to 019391bf has its CatchHandler @ 018392c4 */
        if ((((((auVar4._0_8_ & 1) != 0) &&
              (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4
                                  (param_1,param_2,0xc,8,8,0,0), uVar3 = auVar4._8_8_,
              (auVar4._0_8_ & 1) != 0)) &&
             ((auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4
                                  (param_1,param_2,0xe,8,8,0,0), uVar3 = auVar4._8_8_,
              (auVar4._0_8_ & 1) != 0 &&
              ((auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4
                                   (param_1,param_2,0x10,1,1,0,0), uVar3 = auVar4._8_8_,
               (auVar4._0_8_ & 1) != 0 &&
               (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4
                                   (param_1,param_2,0x12,1,1,0,0), uVar3 = auVar4._8_8_,
               (auVar4._0_8_ & 1) != 0)))))) &&
            (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0x14,8,8,0,0)
            , uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) &&
           ((auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0x16,8,8,0,0)
            , uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0 &&
            (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0x18,8,8,0,0)
            , uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)))) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          auVar5._8_8_ = param_2;
          auVar5._0_8_ = 1;
          return auVar5;
        }
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar3;
    return auVar4 << 0x40;
  }
LAB_018391d4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

