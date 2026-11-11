/* IL2CPP: magicsort.schemas.v1.liveops.champions_league.GetPreJoinLeagueLeaderboardResponse$$CreateGetPreJoinLeagueLeaderboardResponse
Google_FlatBuffers_Offset_GetPreJoinLeagueLeaderboardResponse__o magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__CreateGetPreJoinLeagueLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournament_idOffset, int64_t start_time, int64_t finish_time, int64_t join_window_end_epoch, int64_t pre_join_score, int8_t state, int64_t elo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.champions_league.GetPreJoinLeagueLeaderboardResponse$$CreateGetPreJoinLeagueLeaderboardResponse
   Google_FlatBuffers_Offset_GetPreJoinLeagueLeaderboardResponse__o
   magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__CreateGetPreJoinLeagueLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournament_idOffset, int64_t start_time, int64_t finish_time, int64_t join_window_end_epoch,
   int64_t pre_join_score, int8_t state, int64_t elo, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__CreateGetPreJoinLeagueLeaderboardResponse_1744698
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,7,0);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddElo_1744758
              (param_1,param_8);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddPreJoinScore_1744778
              (param_1,param_6);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddJoinWindowEndEpoch_1744798
              (param_1,param_5);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddFinishTime_17447b8
              (param_1,param_4);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddStartTime_17447d8
              (param_1,param_3);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddTournamentId_17447f8
              (param_1,param_2);
    magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__AddState_1744818
              (param_1,param_7);
    uVar1 = magicsort_schemas_v1_liveops_champions_league_GetPreJoinLeagueLeaderboardResponse__EndGetPreJoinLeagueLeaderboardResponse_1744838
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

