/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreateGetMagicStreakLeaderboardResponse
Google_FlatBuffers_Offset_GetMagicStreakLeaderboardResponse__o magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreateGetMagicStreakLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournamentIDOffset, int64_t tournamentType, int64_t streakCupWins, Google_FlatBuffers_VectorOffset_o playersOffset, int64_t startTime, int64_t finishTime, bool isClaimed, bool isFinished, int64_t userScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreateGetMagicStreakLeaderboardResponse
   Google_FlatBuffers_Offset_GetMagicStreakLeaderboardResponse__o
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreateGetMagicStreakLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournamentIDOffset, int64_t tournamentType, int64_t streakCupWins,
   Google_FlatBuffers_VectorOffset_o playersOffset, int64_t startTime, int64_t finishTime, bool
   isClaimed, bool isFinished, int64_t userScore, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreateGetMagicStreakLeaderboardResponse_1739ee4
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7,uint param_8,byte param_9,undefined8 param_10)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* try { // try from 01839f0c to 01939f5f has its CatchHandler @ 0183a27c */
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,9,0);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddUserScore_1739fcc
              (param_1,param_10);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddFinishTime_1739fec
              (param_1,param_7);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddStartTime_173a00c
              (param_1,param_6);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddStreakCupWins_173a02c
              (param_1,param_4);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddTournamentType_173a04c
              (param_1,param_3);
                    /* try { // try from 01839f74 to 01939fb3 has its CatchHandler @ 0183a278 */
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddPlayers_173a06c
              (param_1,param_5);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddTournamentID_173a08c
              (param_1,param_2);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddIsFinished_173a0ac
              (param_1,param_9 & 1);
    magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__AddIsClaimed_173a0cc
              (param_1,param_8 & 1);
    uVar1 = magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__EndGetMagicStreakLeaderboardResponse_173a0ec
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01839fc8 to 01939fcb has its CatchHandler @ 0183a268 */
  FUN_012d0ef0();
}

