/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateCountryPlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateCountryPlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, System_ArraySegment_Offset_GlobalLeaderboardPlayer___o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.global_leaderboard.GetLeaderboardsResponse$$CreateCountryPlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateCountryPlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   System_ArraySegment_Offset_GlobalLeaderboardPlayer___o data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_global_leaderboard_GetLeaderboardsResponse__CreateCountryPlayersVectorBlock_173e2d4
          (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_057e5f80;
                    /* try { // try from 0183e2fc to 0193e35b has its CatchHandler @ 0183e404 */
  if ((bRam0000000005c24d2a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c89f8);
    FUN_012d0dc8(PTR_DAT_057e5f80);
    FUN_012d0dc8(PTR_DAT_057b1fe0);
    bRam0000000005c24d2a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057b1fe0;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,4,param_3 >> 0x20,4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_GlobalLeaderboardPlayer___2386f84
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* try { // try from 0183e384 to 0193e3a7 has its CatchHandler @ 0183e400 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

