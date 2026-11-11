/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CountryPlayers
System_Nullable_GlobalLeaderboardPlayer__o magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CountryPlayers (magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o __this, int32_t j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CountryPlayers
   System_Nullable_GlobalLeaderboardPlayer__o
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CountryPlayers
   (magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse_o __this, int32_t j,
   const MethodInfo* method); */

void magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CountryPlayers_173dbfc
               (undefined8 *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c24d24 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579b3b0);
    bRam0000000005c24d24 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,6,0);
  puVar1 = PTR_DAT_0579b3b0;
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    iVar2 = Google_FlatBuffers_Table____vector_3139c00(param_2,iVar2,0);
    uVar3 = Google_FlatBuffers_Table____indirect_3139ae8(param_2,iVar2 + param_3 * 4,0);
    auVar5 = magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer____assign_173db88
                       (&uStack_40,uVar3,*(undefined8 *)(param_2 + 8));
    uVar4 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_GlobalLeaderboardPlayer____ctor_203b278(param_1,auVar5._0_8_,auVar5._8_8_,uVar4)
    ;
  }
  return;
}

