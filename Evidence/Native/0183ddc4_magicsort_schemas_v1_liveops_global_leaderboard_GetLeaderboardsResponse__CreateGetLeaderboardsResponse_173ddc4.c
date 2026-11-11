/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateGetLeaderboardsResponse
Google_FlatBuffers_Offset_GetLeaderboardsResponse__o magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGetLeaderboardsResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_VectorOffset_o globalPlayersOffset, Google_FlatBuffers_VectorOffset_o countryPlayersOffset, Google_FlatBuffers_StringOffset_o countryOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateGetLeaderboardsResponse
   Google_FlatBuffers_Offset_GetLeaderboardsResponse__o
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGetLeaderboardsResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_VectorOffset_o
   globalPlayersOffset, Google_FlatBuffers_VectorOffset_o countryPlayersOffset,
   Google_FlatBuffers_StringOffset_o countryOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGetLeaderboardsResponse_173ddc4
          (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,3,0);
    magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__AddCountry_173de34
              (param_1,param_4);
    magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__AddCountryPlayers_173de54
              (param_1,param_3);
    magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__AddGlobalPlayers_173de74
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__EndGetLeaderboardsResponse_173de94
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

