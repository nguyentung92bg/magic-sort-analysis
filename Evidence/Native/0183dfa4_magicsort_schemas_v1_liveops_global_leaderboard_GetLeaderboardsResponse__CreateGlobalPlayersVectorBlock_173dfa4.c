/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateGlobalPlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGlobalPlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_GlobalLeaderboardPlayer__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateGlobalPlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGlobalPlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_GlobalLeaderboardPlayer__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateGlobalPlayersVectorBlock_173dfa4
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c24d26 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05815b08);
    bRam0000000005c24d26 = 1;
  }
  puVar1 = PTR_DAT_05815b08;
  if ((param_2 != 0) && (param_1 != 0)) {
                    /* try { // try from 0183dff4 to 0193e063 has its CatchHandler @ 0183e414 */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_GlobalLeaderboardPlayer___23871a0
              (param_1,param_2,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

