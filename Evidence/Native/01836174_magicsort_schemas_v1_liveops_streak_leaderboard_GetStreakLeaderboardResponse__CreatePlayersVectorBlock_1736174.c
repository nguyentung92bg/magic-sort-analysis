/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreatePlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, System_ArraySegment_Offset_StreakLeaderboardPlayer___o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreatePlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   System_ArraySegment_Offset_StreakLeaderboardPlayer___o data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock_1736174
          (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_057d5230;
  if ((bRam0000000005c24cbd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577ca28);
    FUN_012d0dc8(PTR_DAT_057d5230);
    FUN_012d0dc8(PTR_DAT_057c7508);
    bRam0000000005c24cbd = 1;
  }
                    /* try { // try from 018361d0 to 019361f7 has its CatchHandler @ 01836310 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057c7508;
  if (param_1 != 0) {
                    /* try { // try from 018361f8 to 019362bf has its CatchHandler @ 01835d58 */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,4,param_3 >> 0x20,4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StreakLeaderboardPlayer___2388078
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

