/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentStartTime$$CreateLavaTournamentStartTime
Google_FlatBuffers_Offset_LavaTournamentStartTime__o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__CreateLavaTournamentStartTime (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t tournament_type, int64_t tournament_start_time, int64_t tournament_end_time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentStartTime$$CreateLavaTournamentStartTime
   Google_FlatBuffers_Offset_LavaTournamentStartTime__o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__CreateLavaTournamentStartTime
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t tournament_type, int64_t
   tournament_start_time, int64_t tournament_end_time, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__CreateLavaTournamentStartTime_173c2a0
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,3,0);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__AddTournamentEndTime_173c310
              (param_1,param_4);
                    /* try { // try from 0183c2dc to 0193c31f has its CatchHandler @ 0183c5ac */
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__AddTournamentStartTime_173c330
              (param_1,param_3);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__AddTournamentType_173c350
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentStartTime__EndLavaTournamentStartTime_173c370
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

