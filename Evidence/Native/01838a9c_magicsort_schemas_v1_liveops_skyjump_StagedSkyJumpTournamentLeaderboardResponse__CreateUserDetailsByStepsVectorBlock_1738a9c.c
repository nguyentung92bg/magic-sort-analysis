/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreateUserDetailsByStepsVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateUserDetailsByStepsVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_SkyJumpStepDetail__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreateUserDetailsByStepsVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateUserDetailsByStepsVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_SkyJumpStepDetail__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateUserDetailsByStepsVectorBlock_1738a9c
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 0183882c with catch @ 01838a9c
                       catch() { ... } // from try @ 018388a0 with catch @ 01838a9c */
                    /* catch() { ... } // from try @ 018385cc with catch @ 01838aa0
                       catch() { ... } // from try @ 01838a68 with catch @ 01838aa0 */
                    /* catch() { ... } // from try @ 018387f4 with catch @ 01838aa4
                       catch() { ... } // from try @ 01838a0c with catch @ 01838aa4 */
                    /* catch() { ... } // from try @ 018387c0 with catch @ 01838aa8 */
                    /* catch() { ... } // from try @ 018389d8 with catch @ 01838aac */
                    /* catch() { ... } // from try @ 018386ec with catch @ 01838ab0 */
                    /* catch() { ... } // from try @ 01838904 with catch @ 01838ab4 */
  if ((bRam0000000005c24cde & 1) == 0) {
                    /* catch() { ... } // from try @ 0183873c with catch @ 01838ab8 */
                    /* catch() { ... } // from try @ 01838954 with catch @ 01838abc */
    FUN_012d0dc8(PTR_DAT_0579c1a0);
    bRam0000000005c24cde = 1;
  }
  puVar1 = PTR_DAT_0579c1a0;
                    /* try { // try from 01838ad0 to 01938ad3 has its CatchHandler @ 01838aec */
  if ((param_2 != 0) && (param_1 != 0)) {
                    /* try { // try from 01838ad4 to 01938b07 has its CatchHandler @ 0183854c */
                    /* catch() { ... } // from try @ 01838ad0 with catch @ 01838aec */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_SkyJumpStepDetail___2387dbc
              (param_1,param_2,*(undefined8 *)puVar1);
                    /* try { // try from 01838b08 to 01938b13 has its CatchHandler @ 01838b14 */
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* catch() { ... } // from try @ 01838b08 with catch @ 01838b14 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

