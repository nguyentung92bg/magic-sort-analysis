/* IL2CPP: magicsort.schemas.v1.liveops.weekly_leaderboard.GetWeeklyLeaderboardResponse$$CreateGetWeeklyLeaderboardResponse
Google_FlatBuffers_Offset_GetWeeklyLeaderboardResponse__o magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__CreateGetWeeklyLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournamentIDOffset, Google_FlatBuffers_VectorOffset_o playersOffset, int64_t startTime, int64_t finishTime, bool isClaimed, bool isFinished, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.weekly_leaderboard.GetWeeklyLeaderboardResponse$$CreateGetWeeklyLeaderboardResponse
   Google_FlatBuffers_Offset_GetWeeklyLeaderboardResponse__o
   magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__CreateGetWeeklyLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournamentIDOffset, Google_FlatBuffers_VectorOffset_o playersOffset, int64_t startTime, int64_t
   finishTime, bool isClaimed, bool isFinished, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__CreateGetWeeklyLeaderboardResponse_1444424
          (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,uint param_7)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,6,0);
    magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__AddFinishTime_14444cc
              (param_1,param_5);
    magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__AddStartTime_14444ec
              (param_1,param_4);
    magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__AddPlayers_144450c
              (param_1,param_3);
    magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__AddTournamentID_144452c
              (param_1,param_2);
    magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__AddIsFinished_144454c
              (param_1,param_7 & 1);
    magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__AddIsClaimed_144456c
              (param_1,param_6 & 1);
    uVar1 = magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__EndGetWeeklyLeaderboardResponse_144458c
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

