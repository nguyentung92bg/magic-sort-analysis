/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreateGetStreakLeaderboardResponse
Google_FlatBuffers_Offset_GetStreakLeaderboardResponse__o magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreateGetStreakLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournamentIDOffset, Google_FlatBuffers_VectorOffset_o playersOffset, int64_t startTime, int64_t finishTime, bool isClaimed, bool isFinished, int64_t tournamentType, int64_t userScore, int64_t maxReachableScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreateGetStreakLeaderboardResponse
   Google_FlatBuffers_Offset_GetStreakLeaderboardResponse__o
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreateGetStreakLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournamentIDOffset, Google_FlatBuffers_VectorOffset_o playersOffset, int64_t startTime, int64_t
   finishTime, bool isClaimed, bool isFinished, int64_t tournamentType, int64_t userScore, int64_t
   maxReachableScore, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreateGetStreakLeaderboardResponse_1735dd8
          (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,uint param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,9,0);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddMaxReachableScore_1735ebc
              (param_1,param_10);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddUserScore_1735edc
              (param_1,param_9);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddTournamentType_1735efc
              (param_1,param_8);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddFinishTime_1735f1c
              (param_1,param_5);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddStartTime_1735f3c
              (param_1,param_4);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddPlayers_1735f5c
              (param_1,param_3);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddTournamentID_1735f7c
              (param_1,param_2);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddIsFinished_1735f9c
              (param_1,param_7 & 1);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__AddIsClaimed_1735fbc
              (param_1,param_6 & 1);
    uVar1 = magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__EndGetStreakLeaderboardResponse_1735fdc
                      (param_1);
                    /* try { // try from 01835ea8 to 01935ecf has its CatchHandler @ 01836300 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

