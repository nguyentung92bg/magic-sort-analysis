/* IL2CPP: magicsort.schemas.v1.team.GetTeamLeaderboardResponse$$CreateGetTeamLeaderboardResponse
Google_FlatBuffers_Offset_GetTeamLeaderboardResponse__o magicsort_schemas_v1_team_GetTeamLeaderboardResponse__CreateGetTeamLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_VectorOffset_o countryTeamLeaderboardOffset, Google_FlatBuffers_VectorOffset_o globalTeamLeaderboardOffset, Google_FlatBuffers_StringOffset_o countryCodeOffset, Google_FlatBuffers_Offset_BaseResponse__o baseResponseOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.team.GetTeamLeaderboardResponse$$CreateGetTeamLeaderboardResponse
   Google_FlatBuffers_Offset_GetTeamLeaderboardResponse__o
   magicsort_schemas_v1_team_GetTeamLeaderboardResponse__CreateGetTeamLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_VectorOffset_o
   countryTeamLeaderboardOffset, Google_FlatBuffers_VectorOffset_o globalTeamLeaderboardOffset,
   Google_FlatBuffers_StringOffset_o countryCodeOffset, Google_FlatBuffers_Offset_BaseResponse__o
   baseResponseOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_team_GetTeamLeaderboardResponse__CreateGetTeamLeaderboardResponse_1438494
          (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,4,0);
    magicsort_schemas_v1_team_GetTeamLeaderboardResponse__AddBaseResponse_1438514(param_1,param_5);
    magicsort_schemas_v1_team_GetTeamLeaderboardResponse__AddCountryCode_1438534(param_1,param_4);
    magicsort_schemas_v1_team_GetTeamLeaderboardResponse__AddGlobalTeamLeaderboard_1438554
              (param_1,param_3);
    magicsort_schemas_v1_team_GetTeamLeaderboardResponse__AddCountryTeamLeaderboard_1438574
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_team_GetTeamLeaderboardResponse__EndGetTeamLeaderboardResponse_1438594
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

