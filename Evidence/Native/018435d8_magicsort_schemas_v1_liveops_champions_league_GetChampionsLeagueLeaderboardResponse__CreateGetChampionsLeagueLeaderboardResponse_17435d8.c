/* IL2CPP: magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$CreateGetChampionsLeagueLeaderboardResponse
Google_FlatBuffers_Offset_GetChampionsLeagueLeaderboardResponse__o magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreateGetChampionsLeagueLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournament_idOffset, Google_FlatBuffers_StringOffset_o leaderboard_idOffset, Google_FlatBuffers_VectorOffset_o playersOffset, int64_t start_time, int64_t finish_time, int64_t join_window_end_epoch, Google_FlatBuffers_VectorOffset_o elo_promoted_user_count_mapOffset, Google_FlatBuffers_VectorOffset_o elo_demoted_user_count_mapOffset, int64_t capacity, int64_t elo, int8_t state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$CreateGetChampionsLeagueLeaderboardResponse
   Google_FlatBuffers_Offset_GetChampionsLeagueLeaderboardResponse__o
   magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreateGetChampionsLeagueLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournament_idOffset, Google_FlatBuffers_StringOffset_o leaderboard_idOffset,
   Google_FlatBuffers_VectorOffset_o playersOffset, int64_t start_time, int64_t finish_time, int64_t
   join_window_end_epoch, Google_FlatBuffers_VectorOffset_o elo_promoted_user_count_mapOffset,
   Google_FlatBuffers_VectorOffset_o elo_demoted_user_count_mapOffset, int64_t capacity, int64_t
   elo, int8_t state, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreateGetChampionsLeagueLeaderboardResponse_17435d8
          (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
          undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,0xb,0);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddElo_17436e8
              (param_1,param_11);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddCapacity_1743708
              (param_1,param_10);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddJoinWindowEndEpoch_1743728
              (param_1,param_7);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddFinishTime_1743748
              (param_1,param_6);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddStartTime_1743768
              (param_1,param_5);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddEloDemotedUserCountMap_1743788
              (param_1,param_9);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddEloPromotedUserCountMap_17437a8
              (param_1,param_8);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddPlayers_17437c8
              (param_1,param_4);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddLeaderboardId_17437e8
              (param_1,param_3);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddTournamentId_1743808
              (param_1,param_2);
    magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__AddState_1743828
              (param_1,param_12);
    uVar1 = magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__EndGetChampionsLeagueLeaderboardResponse_1743848
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

