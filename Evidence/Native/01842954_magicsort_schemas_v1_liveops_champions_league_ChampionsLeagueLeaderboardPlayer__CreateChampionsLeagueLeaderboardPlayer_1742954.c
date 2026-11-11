/* IL2CPP: magicsort.schemas.v1.liveops.champions_league.ChampionsLeagueLeaderboardPlayer$$CreateChampionsLeagueLeaderboardPlayer
Google_FlatBuffers_Offset_ChampionsLeagueLeaderboardPlayer__o magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__CreateChampionsLeagueLeaderboardPlayer (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o user_public_idOffset, Google_FlatBuffers_StringOffset_o user_public_id_clientOffset, Google_FlatBuffers_StringOffset_o nicknameOffset, int64_t score, int64_t rank, bool is_bot, bool is_me, bool is_in_demote, bool is_in_promote, Google_FlatBuffers_StringOffset_o image_urlOffset, Google_FlatBuffers_StringOffset_o image_idOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.champions_league.ChampionsLeagueLeaderboardPlayer$$CreateChampionsLeagueLeaderboardPlayer
   Google_FlatBuffers_Offset_ChampionsLeagueLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__CreateChampionsLeagueLeaderboardPlayer
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   user_public_idOffset, Google_FlatBuffers_StringOffset_o user_public_id_clientOffset,
   Google_FlatBuffers_StringOffset_o nicknameOffset, int64_t score, int64_t rank, bool is_bot, bool
   is_me, bool is_in_demote, bool is_in_promote, Google_FlatBuffers_StringOffset_o image_urlOffset,
   Google_FlatBuffers_StringOffset_o image_idOffset, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__CreateChampionsLeagueLeaderboardPlayer_1742954
          (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,uint param_8,byte param_9,byte param_10,
          undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,0xb,0);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddRank_1742a64
              (param_1,param_6);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddScore_1742a84
              (param_1,param_5);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddImageId_1742aa4
              (param_1,param_12);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddImageUrl_1742ac4
              (param_1,param_11);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddNickname_1742ae4
              (param_1,param_4);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddUserPublicIdClient_1742b04
              (param_1,param_3);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddUserPublicId_1742b24
              (param_1,param_2);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddIsInPromote_1742b44
              (param_1,param_10 & 1);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddIsInDemote_1742b64
              (param_1,param_9 & 1);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddIsMe_1742b84
              (param_1,param_8 & 1);
    magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__AddIsBot_1742ba4
              (param_1,param_7 & 1);
    uVar1 = magicsort_schemas_v1_liveops_champions_league_ChampionsLeagueLeaderboardPlayer__EndChampionsLeagueLeaderboardPlayer_1742bc4
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

