/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreateUserDetailsByStepsVector
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateUserDetailsByStepsVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_SkyJumpStepDetail__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreateUserDetailsByStepsVector
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateUserDetailsByStepsVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_SkyJumpStepDetail__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateUserDetailsByStepsVector_17389f4
          (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
                    /* try { // try from 018389f4 to 019389f7 has its CatchHandler @ 01838a8c */
  if ((param_2 == 0) || (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01838630 with catch @ 01838a98 */
    FUN_012d0ef0();
  }
                    /* try { // try from 01838a0c to 01938a1f has its CatchHandler @ 01838aa4 */
  Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
            (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
  iVar3 = (int)*(ulong *)(param_2 + 0x18);
                    /* try { // try from 01838a2c to 01938a33 has its CatchHandler @ 01838a94 */
  iVar1 = iVar3 + -1;
  if (-1 < iVar1) {
    if ((ulong)(long)iVar1 < (*(ulong *)(param_2 + 0x18) & 0xffffffff)) {
      uVar4 = (ulong)iVar1;
      iVar3 = iVar3 + -2;
      do {
                    /* try { // try from 01838a54 to 01938a57 has its CatchHandler @ 01838a84 */
                    /* try { // try from 01838a58 to 01938a5b has its CatchHandler @ 01838a80 */
        Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4
                  (param_1,*(undefined4 *)(param_2 + 0x20 + uVar4 * 4),0);
                    /* try { // try from 01838a5c to 01938a5f has its CatchHandler @ 01838a7c */
        if (iVar3 < 0) goto LAB_01838a78;
                    /* try { // try from 01838a60 to 01938a63 has its CatchHandler @ 01838a78 */
                    /* try { // try from 01838a64 to 01938a67 has its CatchHandler @ 01838a74 */
        uVar4 = uVar4 - 1;
                    /* try { // try from 01838a68 to 01938a6b has its CatchHandler @ 01838aa0 */
        iVar3 = iVar3 + -1;
                    /* try { // try from 01838a6c to 01938a6f has its CatchHandler @ 01838a70 */
                    /* catch() { ... } // from try @ 01838a6c with catch @ 01838a70
                       try { // try from 01838a70 to 01938acf has its CatchHandler @ 0183854c */
      } while (uVar4 < *(uint *)(param_2 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01838a64 with catch @ 01838a74 */
    FUN_012d0ef8();
  }
LAB_01838a78:
                    /* catch() { ... } // from try @ 01838a60 with catch @ 01838a78 */
                    /* catch() { ... } // from try @ 01838a5c with catch @ 01838a7c */
                    /* catch() { ... } // from try @ 01838a58 with catch @ 01838a80 */
  uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* catch() { ... } // from try @ 01838a54 with catch @ 01838a84 */
                    /* catch() { ... } // from try @ 018387dc with catch @ 01838a88 */
                    /* catch() { ... } // from try @ 018389f4 with catch @ 01838a8c */
                    /* catch() { ... } // from try @ 01838878 with catch @ 01838a90 */
                    /* catch() { ... } // from try @ 01838a2c with catch @ 01838a94 */
  return uVar2;
}

