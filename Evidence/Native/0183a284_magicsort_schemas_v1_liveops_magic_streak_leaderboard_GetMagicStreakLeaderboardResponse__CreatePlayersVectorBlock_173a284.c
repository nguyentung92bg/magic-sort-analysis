/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreatePlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, System_ArraySegment_Offset_StreakLeaderboardPlayer___o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreatePlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   System_ArraySegment_Offset_StreakLeaderboardPlayer___o data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVectorBlock_173a284
          (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 0183a028 with catch @ 0183a284 */
  puVar1 = PTR_DAT_057d5230;
                    /* try { // try from 0183a29c to 0193a2b3 has its CatchHandler @ 0183a340 */
  if ((bRam0000000005c24cf4 & 1) == 0) {
                    /* try { // try from 0183a2b4 to 0193a32f has its CatchHandler @ 01839ecc */
    FUN_012d0dc8(PTR_DAT_0577ca28);
    FUN_012d0dc8(PTR_DAT_057d5230);
    FUN_012d0dc8(PTR_DAT_057c7508);
    bRam0000000005c24cf4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057c7508;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,4,param_3 >> 0x20,4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StreakLeaderboardPlayer___2388078
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* try { // try from 0183a330 to 0193a33f has its CatchHandler @ 0183a340 */
                    /* catch() { ... } // from try @ 0183a29c with catch @ 0183a340
                       catch() { ... } // from try @ 0183a330 with catch @ 0183a340 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0183a344 to 0193a347 has its CatchHandler @ 0183a350 */
  FUN_012d0ef0();
}

