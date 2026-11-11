/* IL2CPP: magicsort.schemas.v1.team.TeamLeaderboardSummary$$CreateTeamLeaderboardSummary
Google_FlatBuffers_Offset_TeamLeaderboardSummary__o magicsort_schemas_v1_team_TeamLeaderboardSummary__CreateTeamLeaderboardSummary (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o nameOffset, int64_t badge, Google_FlatBuffers_StringOffset_o descriptionOffset, int64_t levelRequirement, int64_t totalScore, Google_FlatBuffers_StringOffset_o countryCodeOffset, bool hasPendingRequestExist, Google_FlatBuffers_StringOffset_o teamIDOffset, int64_t memberCount, int64_t activityType, bool isOpenTeam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.team.TeamLeaderboardSummary$$CreateTeamLeaderboardSummary
   Google_FlatBuffers_Offset_TeamLeaderboardSummary__o
   magicsort_schemas_v1_team_TeamLeaderboardSummary__CreateTeamLeaderboardSummary
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o nameOffset,
   int64_t badge, Google_FlatBuffers_StringOffset_o descriptionOffset, int64_t levelRequirement,
   int64_t totalScore, Google_FlatBuffers_StringOffset_o countryCodeOffset, bool
   hasPendingRequestExist, Google_FlatBuffers_StringOffset_o teamIDOffset, int64_t memberCount,
   int64_t activityType, bool isOpenTeam, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_team_TeamLeaderboardSummary__CreateTeamLeaderboardSummary_143c53c
          (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7,uint param_8,undefined4 param_9,undefined8 param_10,
          undefined8 param_11,byte param_12)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,0xb,0);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddActivityType_143c64c(param_1,param_11);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddMemberCount_143c66c(param_1,param_10);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddTotalScore_143c68c(param_1,param_6);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddLevelRequirement_143c6ac(param_1,param_5);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddBadge_143c6cc(param_1,param_3);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddTeamID_143c6ec(param_1,param_9);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddCountryCode_143c70c(param_1,param_7);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddDescription_143c72c(param_1,param_4);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddName_143c74c(param_1,param_2);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddIsOpenTeam_143c76c(param_1,param_12 & 1);
    magicsort_schemas_v1_team_TeamLeaderboardSummary__AddHasPendingRequestExist_143c78c
              (param_1,param_8 & 1);
    uVar1 = magicsort_schemas_v1_team_TeamLeaderboardSummary__EndTeamLeaderboardSummary_143c7ac
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

