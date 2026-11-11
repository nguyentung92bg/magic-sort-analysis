/* IL2CPP: magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$CreateEloDemotedUserCountMapVector
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreateEloDemotedUserCountMapVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_Int64KeyValuePair__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.champions_league.GetChampionsLeagueLeaderboardResponse$$CreateEloDemotedUserCountMapVector
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreateEloDemotedUserCountMapVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_Int64KeyValuePair__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_champions_league_GetChampionsLeagueLeaderboardResponse__CreateEloDemotedUserCountMapVector_1743e00
          (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((param_2 == 0) || (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
            (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
  iVar3 = (int)*(ulong *)(param_2 + 0x18);
  iVar1 = iVar3 + -1;
  if (-1 < iVar1) {
    if ((ulong)(long)iVar1 < (*(ulong *)(param_2 + 0x18) & 0xffffffff)) {
      uVar4 = (ulong)iVar1;
      iVar3 = iVar3 + -2;
      do {
        Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4
                  (param_1,*(undefined4 *)(param_2 + 0x20 + uVar4 * 4),0);
        if (iVar3 < 0) goto LAB_01843e84;
        uVar4 = uVar4 - 1;
        iVar3 = iVar3 + -1;
      } while (uVar4 < *(uint *)(param_2 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
LAB_01843e84:
  uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
  return uVar2;
}

