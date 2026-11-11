/* IL2CPP: magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$get_State
int8_t magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__get_State (magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$get_State
   int8_t 
   magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__get_State
   (magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse_o __this,
   const MethodInfo* method); */

ulong magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__get_State_1743594
                (int *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0x18,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar1 = *param_1 + (int)uVar2;
    Google_FlatBuffers_ByteBuffer__AssertOffsetAndLength_3135300(lVar3,uVar1,1);
    if ((*(long *)(lVar3 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar3 != 0)) {
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        return (ulong)*(byte *)(lVar3 + (int)uVar1 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

