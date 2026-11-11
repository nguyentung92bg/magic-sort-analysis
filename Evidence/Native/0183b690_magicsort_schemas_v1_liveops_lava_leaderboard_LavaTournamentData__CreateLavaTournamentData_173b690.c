/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateLavaTournamentData
Google_FlatBuffers_Offset_LavaTournamentData__o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateLavaTournamentData (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournament_idOffset, int64_t tournament_type, Google_FlatBuffers_VectorOffset_o user_details_by_stepsOffset, Google_FlatBuffers_VectorOffset_o players_imagesOffset, int64_t start_time, int64_t finish_time, bool is_claimed, bool is_finished, int64_t user_score, int64_t user_max_step_reached, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateLavaTournamentData
   Google_FlatBuffers_Offset_LavaTournamentData__o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateLavaTournamentData
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournament_idOffset, int64_t tournament_type, Google_FlatBuffers_VectorOffset_o
   user_details_by_stepsOffset, Google_FlatBuffers_VectorOffset_o players_imagesOffset, int64_t
   start_time, int64_t finish_time, bool is_claimed, bool is_finished, int64_t user_score, int64_t
   user_max_step_reached, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateLavaTournamentData_173b690
          (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7,uint param_8,byte param_9,undefined8 param_10,
          undefined8 param_11)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* try { // try from 0183b6c8 to 0193b6ef has its CatchHandler @ 0183b9d0 */
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,10,0);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddUserMaxStepReached_173b784
              (param_1,param_11);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddUserScore_173b7a4
              (param_1,param_10);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddFinishTime_173b7c4
              (param_1,param_7);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddStartTime_173b7e4
              (param_1,param_6);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddTournamentType_173b804
              (param_1,param_3);
                    /* try { // try from 0183b71c to 0193b75f has its CatchHandler @ 0183b9cc */
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddPlayersImages_173b824
              (param_1,param_5);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddUserDetailsBySteps_173b844
              (param_1,param_4);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddTournamentId_173b864
              (param_1,param_2);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddIsFinished_173b884
              (param_1,param_9 & 1);
    magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__AddIsClaimed_173b8a4
              (param_1,param_8 & 1);
    uVar1 = magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__EndLavaTournamentData_173b8c4
                      (param_1);
                    /* try { // try from 0183b77c to 0193b7e7 has its CatchHandler @ 0183b9e8 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

