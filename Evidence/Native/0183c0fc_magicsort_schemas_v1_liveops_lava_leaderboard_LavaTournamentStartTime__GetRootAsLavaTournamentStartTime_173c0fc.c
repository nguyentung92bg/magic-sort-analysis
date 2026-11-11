/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentStartTime$$GetRootAsLavaTournamentStartTime
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime_o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__GetRootAsLavaTournamentStartTime (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentStartTime$$GetRootAsLavaTournamentStartTime
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime_o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__GetRootAsLavaTournamentStartTime
   (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method); */

void magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__GetRootAsLavaTournamentStartTime_173c0fc
               (long param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
                    /* try { // try from 0183c0fc to 0193c16b has its CatchHandler @ 0183c5b8 */
  uStack_20 = 0;
  uStack_18 = 0;
  if (param_1 != 0) {
    iVar1 = Google_FlatBuffers_ByteBuffer__GetInt_3135834(param_1,*(undefined4 *)(param_1 + 0x18),0)
    ;
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime____assign_173c14c
              (&uStack_20,*(int *)(param_1 + 0x18) + iVar1,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

