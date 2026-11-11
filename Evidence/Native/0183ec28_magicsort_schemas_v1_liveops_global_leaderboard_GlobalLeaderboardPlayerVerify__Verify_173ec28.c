/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GlobalLeaderboardPlayerVerify$$Verify
bool magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayerVerify__Verify (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GlobalLeaderboardPlayerVerify$$Verify
   bool magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayerVerify__Verify
   (Google_FlatBuffers_Verifier_o* verifier, uint32_t tablePos, const MethodInfo* method); */

undefined1  [16]
magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayerVerify__Verify_173ec28
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
                    /* try { // try from 0183ec5c to 0193ec6f has its CatchHandler @ 0183ecc4 */
                    /* try { // try from 0183ec90 to 0193ec93 has its CatchHandler @ 0183ecc0 */
                    /* try { // try from 0183ec94 to 0193ec97 has its CatchHandler @ 0183ecbc */
                    /* try { // try from 0183ec98 to 0193ec9b has its CatchHandler @ 0183ecb8 */
                    /* try { // try from 0183ec9c to 0193ec9f has its CatchHandler @ 0183ecb4 */
                    /* try { // try from 0183eca0 to 0193eca3 has its CatchHandler @ 0183ecb0 */
                    /* try { // try from 0183eca4 to 0193eca7 has its CatchHandler @ 0183ecac */
                    /* try { // try from 0183eca8 to 0193ecab has its CatchHandler @ 0183ecc8 */
                    /* catch() { ... } // from try @ 0183eca4 with catch @ 0183ecac
                       try { // try from 0183ecac to 0193ecf3 has its CatchHandler @ 0183e858 */
                    /* catch() { ... } // from try @ 0183eca0 with catch @ 0183ecb0 */
                    /* catch() { ... } // from try @ 0183ec9c with catch @ 0183ecb4 */
                    /* catch() { ... } // from try @ 0183ec98 with catch @ 0183ecb8 */
                    /* catch() { ... } // from try @ 0183ec94 with catch @ 0183ecbc */
                    /* catch() { ... } // from try @ 0183ec90 with catch @ 0183ecc0 */
                    /* catch() { ... } // from try @ 0183ec5c with catch @ 0183ecc4 */
                    /* catch() { ... } // from try @ 0183ebe0 with catch @ 0183ecc8
                       catch() { ... } // from try @ 0183eca8 with catch @ 0183ecc8 */
                    /* catch() { ... } // from try @ 0183eaec with catch @ 0183eccc
                       catch() { ... } // from try @ 0183ebac with catch @ 0183eccc */
                    /* catch() { ... } // from try @ 0183ea98 with catch @ 0183ecd0 */
                    /* catch() { ... } // from try @ 0183e974 with catch @ 0183ecd4 */
                    /* catch() { ... } // from try @ 0183e8d8 with catch @ 0183ecd8 */
                    /* catch() { ... } // from try @ 0183ea30 with catch @ 0183ecdc */
                    /* catch() { ... } // from try @ 0183eb48 with catch @ 0183ece0 */
                    /* try { // try from 0183ecf4 to 0193ecf7 has its CatchHandler @ 0183ed10 */
                    /* try { // try from 0183ecf8 to 0193ed2b has its CatchHandler @ 0183e858 */
                    /* catch() { ... } // from try @ 0183ecf4 with catch @ 0183ed10 */
  if ((((((auVar3._0_8_ & 1) != 0) &&
        (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,4,0,0),
        uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,6,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)) &&
      ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,8,8,8,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,10,8,8,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))) &&
     ((auVar3 = Google_FlatBuffers_Verifier__VerifyField_3138fe4(param_1,uVar2,0xc,1,1,0,0),
      uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
      ((auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,0xe,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0 &&
       (auVar3 = Google_FlatBuffers_Verifier__VerifyString_3139068(param_1,uVar2,0x10,0,0),
       uVar1 = auVar3._8_8_, (auVar3._0_8_ & 1) != 0)))))) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return auVar3 << 0x40;
}

