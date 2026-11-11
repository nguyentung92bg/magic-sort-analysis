/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GlobalLeaderboardPlayer$$CreateGlobalLeaderboardPlayer
Google_FlatBuffers_Offset_GlobalLeaderboardPlayer__o magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__CreateGlobalLeaderboardPlayer (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o userPublicIDOffset, Google_FlatBuffers_StringOffset_o nickNameOffset, int64_t score, int64_t rank, bool isMe, Google_FlatBuffers_StringOffset_o imageUrlOffset, Google_FlatBuffers_StringOffset_o imageIDOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.global_leaderboard.GlobalLeaderboardPlayer$$CreateGlobalLeaderboardPlayer
   Google_FlatBuffers_Offset_GlobalLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__CreateGlobalLeaderboardPlayer
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   userPublicIDOffset, Google_FlatBuffers_StringOffset_o nickNameOffset, int64_t score, int64_t
   rank, bool isMe, Google_FlatBuffers_StringOffset_o imageUrlOffset,
   Google_FlatBuffers_StringOffset_o imageIDOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__CreateGlobalLeaderboardPlayer_173ea20
          (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
                    /* try { // try from 0183ea30 to 0193ea57 has its CatchHandler @ 0183ecdc */
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,7,0);
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddRank_173eae0
              (param_1,param_5);
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddScore_173eb00
              (param_1,param_4);
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddImageID_173eb20
              (param_1,param_8);
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddImageUrl_173eb40
              (param_1,param_7);
                    /* try { // try from 0183ea98 to 0193eabf has its CatchHandler @ 0183ecd0 */
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddNickName_173eb60
              (param_1,param_3);
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddUserPublicID_173eb80
              (param_1,param_2);
    magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__AddIsMe_173eba0
              (param_1,param_6 & 1);
    uVar1 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__EndGlobalLeaderboardPlayer_173ebc0
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

