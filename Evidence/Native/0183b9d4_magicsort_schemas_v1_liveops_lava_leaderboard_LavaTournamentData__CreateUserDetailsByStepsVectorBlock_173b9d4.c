/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateUserDetailsByStepsVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_LavaDummyStepDetail__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateUserDetailsByStepsVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_LavaDummyStepDetail__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVectorBlock_173b9d4
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 0183b660 with catch @ 0183b9d4 */
                    /* catch() { ... } // from try @ 0183b53c with catch @ 0183b9d8 */
                    /* catch() { ... } // from try @ 0183b4a0 with catch @ 0183b9dc */
                    /* catch() { ... } // from try @ 0183b404 with catch @ 0183b9e0 */
                    /* catch() { ... } // from try @ 0183b5f8 with catch @ 0183b9e4 */
                    /* catch() { ... } // from try @ 0183b77c with catch @ 0183b9e8 */
  if ((bRam0000000005c24d07 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575ba70);
                    /* try { // try from 0183b9fc to 0193b9ff has its CatchHandler @ 0183ba18 */
                    /* try { // try from 0183ba00 to 0193ba37 has its CatchHandler @ 0183b384 */
    bRam0000000005c24d07 = 1;
  }
  puVar1 = PTR_DAT_0575ba70;
  if ((param_2 != 0) && (param_1 != 0)) {
                    /* catch() { ... } // from try @ 0183b9fc with catch @ 0183ba18 */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
                    /* try { // try from 0183ba38 to 0193ba43 has its CatchHandler @ 0183ba44 */
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_LavaDummyStepDetail___2387678
              (param_1,param_2,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0183ba38 with catch @ 0183ba44 */
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

