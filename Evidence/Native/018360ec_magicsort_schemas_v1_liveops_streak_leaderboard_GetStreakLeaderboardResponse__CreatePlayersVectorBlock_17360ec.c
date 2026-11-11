/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreatePlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_StreakLeaderboardPlayer__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreatePlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_StreakLeaderboardPlayer__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock_17360ec
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* try { // try from 01836104 to 01936107 has its CatchHandler @ 01836308 */
  if ((bRam0000000005c24cbc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579eee0);
    bRam0000000005c24cbc = 1;
  }
  puVar1 = PTR_DAT_0579eee0;
                    /* try { // try from 01836120 to 0193619f has its CatchHandler @ 0183631c */
  if ((param_2 != 0) && (param_1 != 0)) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StreakLeaderboardPlayer___2388294
              (param_1,param_2,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

