/* IL2CPP: magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$CreatePlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreatePlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_ChampionsLeagueLeaderboardPlayer__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$CreatePlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreatePlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_ChampionsLeagueLeaderboardPlayer__array* data, const MethodInfo*
   method); */

undefined4
magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreatePlayersVectorBlock_1743958
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c24d79 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e3b8);
    bRam0000000005c24d79 = 1;
  }
  puVar1 = PTR_DAT_0577e3b8;
  if ((param_2 != 0) && (param_1 != 0)) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_ChampionsLeagueLeaderboardPlayer___23867f0
              (param_1,param_2,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

