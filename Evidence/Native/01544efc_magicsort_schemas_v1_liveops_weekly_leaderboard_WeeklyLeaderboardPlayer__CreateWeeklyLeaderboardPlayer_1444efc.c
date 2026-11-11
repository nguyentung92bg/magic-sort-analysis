/* IL2CPP: magicsort.schemas.v1.liveops.weekly_leaderboard.WeeklyLeaderboardPlayer$$CreateWeeklyLeaderboardPlayer
Google_FlatBuffers_Offset_WeeklyLeaderboardPlayer__o magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__CreateWeeklyLeaderboardPlayer (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o PublicIDOffset, Google_FlatBuffers_StringOffset_o NicknameOffset, int64_t Score, int64_t Rank, bool IsBot, bool IsMe, Google_FlatBuffers_StringOffset_o ImageUrlOffset, Google_FlatBuffers_StringOffset_o ImageIDOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.weekly_leaderboard.WeeklyLeaderboardPlayer$$CreateWeeklyLeaderboardPlayer
   Google_FlatBuffers_Offset_WeeklyLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__CreateWeeklyLeaderboardPlayer
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   PublicIDOffset, Google_FlatBuffers_StringOffset_o NicknameOffset, int64_t Score, int64_t Rank,
   bool IsBot, bool IsMe, Google_FlatBuffers_StringOffset_o ImageUrlOffset,
   Google_FlatBuffers_StringOffset_o ImageIDOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__CreateWeeklyLeaderboardPlayer_1444efc
          (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,8,0);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddRank_1444fcc
              (param_1,param_5);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddScore_1444fec
              (param_1,param_4);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddImageID_144500c
              (param_1,param_9);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddImageUrl_144502c
              (param_1,param_8);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddNickname_144504c
              (param_1,param_3);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddPublicID_144506c
              (param_1,param_2);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddIsMe_144508c
              (param_1,param_7 & 1);
    magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__AddIsBot_14450ac
              (param_1,param_6 & 1);
    uVar1 = magicsort_schemas_v1_liveops_weekly_leaderboard_WeeklyLeaderboardPlayer__EndWeeklyLeaderboardPlayer_14450cc
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

