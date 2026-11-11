/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentDataVerify$$Verify
bool magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentDataVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentDataVerify$$Verify
   bool magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentDataVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentDataVerify__Verify_173bea4
          (long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
                    /* try { // try from 0183beb4 to 0193becb has its CatchHandler @ 0183bf38 */
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000005c24d0e & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0183be94 with catch @ 0183becc
                       try { // try from 0183becc to 0193bef7 has its CatchHandler @ 0183bdbc */
    FUN_012d0dc8(PTR_DAT_057e06f0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0183be28 with catch @ 0183bed8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0183be6c with catch @ 0183bed8
                        */
    FUN_012d0dc8(PTR_DAT_05804ac0);
    FUN_012d0dc8(PTR_DAT_05758d20);
    bRam0000000005c24d0e = 1;
  }
  if (param_1 != 0) {
                    /* try { // try from 0183bef8 to 0193befb has its CatchHandler @ 0183bf08 */
    auVar4 = Google_FlatBuffers_Verifier__VerifyTableStart_3138e38(param_1,param_2,0);
    uVar3 = auVar4._8_8_;
                    /* catch() { ... } // from try @ 0183bef8 with catch @ 0183bf08 */
                    /* try { // try from 0183bf1c to 0193bf23 has its CatchHandler @ 0183bf38 */
                    /* try { // try from 0183bf24 to 0193bf2f has its CatchHandler @ 0183bdbc */
                    /* try { // try from 0183bf30 to 0193bf37 has its CatchHandler @ 0183bf38 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0183beb4 with catch @ 0183bf38
                       catch(type#2 @ 00000000) { ... } // from try @ 0183bf1c with catch @ 0183bf38
                       catch(type#2 @ 00000000) { ... } // from try @ 0183bf30 with catch @ 0183bf38
                        */
                    /* try { // try from 0183bf3c to 0193bfc3 has its CatchHandler @ 0183bf3c
                       catch() { ... } // from try @ 0183bf3c with catch @ 0183bf3c
                       catch() { ... } // from try @ 0183c57c with catch @ 0183bf3c
                       catch() { ... } // from try @ 0183c5e0 with catch @ 0183bf3c */
    if ((((auVar4._0_8_ & 1) != 0) &&
        (auVar4 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,param_2,4,0,0),
        uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) &&
       (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,6,8,8,0,0),
       puVar1 = PTR_DAT_05758d20, uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) {
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05758d20);
      if (lVar2 == 0) goto LAB_0183c0e8;
      Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar2,0,*(undefined8 *)PTR_DAT_057e06f0,0)
      ;
      auVar4 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                         (param_1,param_2,8,lVar2,0,0);
      uVar3 = auVar4._8_8_;
      if ((auVar4._0_8_ & 1) != 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar2 == 0) goto LAB_0183c0e8;
        Google_FlatBuffers_VerifyTableAction___ctor_3137e80
                  (lVar2,0,*(undefined8 *)PTR_DAT_05804ac0,0);
                    /* try { // try from 0183bfc4 to 0193c033 has its CatchHandler @ 0183c5c0 */
        auVar4 = Google_FlatBuffers_Verifier__VerifyVectorOfTables_313923c
                           (param_1,param_2,10,lVar2,0,0);
        uVar3 = auVar4._8_8_;
                    /* try { // try from 0183c060 to 0193c0cf has its CatchHandler @ 0183c5bc */
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
           (auVar4 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,param_2,0x16,8,8,0,0),
           uVar3 = auVar4._8_8_, (auVar4._0_8_ & 1) != 0)) {
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
LAB_0183c0e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

