/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateUserDetailsByStepsVector
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_LavaDummyStepDetail__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateUserDetailsByStepsVector
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_LavaDummyStepDetail__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVector_173b92c
          (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((param_2 == 0) || (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0183b6c8 with catch @ 0183b9d0 */
    FUN_012d0ef0();
  }
                    /* try { // try from 0183b944 to 0193b963 has its CatchHandler @ 0183b9c0 */
  Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
            (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
  iVar3 = (int)*(ulong *)(param_2 + 0x18);
  iVar1 = iVar3 + -1;
  if (-1 < iVar1) {
                    /* try { // try from 0183b974 to 0193b977 has its CatchHandler @ 0183b9bc */
    if ((ulong)(long)iVar1 < (*(ulong *)(param_2 + 0x18) & 0xffffffff)) {
                    /* try { // try from 0183b978 to 0193b97b has its CatchHandler @ 0183b9b8 */
      uVar4 = (ulong)iVar1;
                    /* try { // try from 0183b97c to 0193b97f has its CatchHandler @ 0183b9b4 */
      iVar3 = iVar3 + -2;
                    /* try { // try from 0183b980 to 0193b983 has its CatchHandler @ 0183b9b0 */
      do {
                    /* try { // try from 0183b984 to 0193b987 has its CatchHandler @ 0183b9ac */
                    /* try { // try from 0183b988 to 0193b98b has its CatchHandler @ 0183b9a8 */
                    /* try { // try from 0183b98c to 0193b98f has its CatchHandler @ 0183b9a4 */
                    /* try { // try from 0183b990 to 0193b993 has its CatchHandler @ 0183b9a0 */
        Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4
                  (param_1,*(undefined4 *)(param_2 + 0x20 + uVar4 * 4),0);
                    /* try { // try from 0183b994 to 0193b997 has its CatchHandler @ 0183b99c */
        if (iVar3 < 0) goto LAB_0183b9b0;
                    /* try { // try from 0183b998 to 0193b99b has its CatchHandler @ 0183b9c4 */
                    /* catch() { ... } // from try @ 0183b994 with catch @ 0183b99c
                       try { // try from 0183b99c to 0193b9fb has its CatchHandler @ 0183b384 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 0183b990 with catch @ 0183b9a0 */
        iVar3 = iVar3 + -1;
                    /* catch() { ... } // from try @ 0183b98c with catch @ 0183b9a4 */
                    /* catch() { ... } // from try @ 0183b988 with catch @ 0183b9a8 */
      } while (uVar4 < *(uint *)(param_2 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0183b984 with catch @ 0183b9ac */
    FUN_012d0ef8();
  }
LAB_0183b9b0:
                    /* catch() { ... } // from try @ 0183b980 with catch @ 0183b9b0 */
                    /* catch() { ... } // from try @ 0183b97c with catch @ 0183b9b4 */
                    /* catch() { ... } // from try @ 0183b978 with catch @ 0183b9b8 */
  uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* catch() { ... } // from try @ 0183b974 with catch @ 0183b9bc */
                    /* catch() { ... } // from try @ 0183b944 with catch @ 0183b9c0 */
                    /* catch() { ... } // from try @ 0183b8c8 with catch @ 0183b9c4
                       catch() { ... } // from try @ 0183b998 with catch @ 0183b9c4 */
                    /* catch() { ... } // from try @ 0183b840 with catch @ 0183b9c8 */
                    /* catch() { ... } // from try @ 0183b71c with catch @ 0183b9cc
                       catch() { ... } // from try @ 0183b810 with catch @ 0183b9cc */
  return uVar2;
}

