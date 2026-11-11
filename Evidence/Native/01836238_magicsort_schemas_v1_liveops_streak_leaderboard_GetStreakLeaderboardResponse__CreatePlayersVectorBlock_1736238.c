/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreatePlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakLeaderboardResponse$$CreatePlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakLeaderboardResponse__CreatePlayersVectorBlock_1736238
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c24cbe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b4a0);
    bRam0000000005c24cbe = 1;
  }
  puVar1 = PTR_DAT_0580b4a0;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,1,param_3,1,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StreakLeaderboardPlayer___238c788
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* try { // try from 018362c0 to 019362c3 has its CatchHandler @ 018362f8 */
                    /* try { // try from 018362c4 to 019362c7 has its CatchHandler @ 018362f4 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 018362c8 to 019362cb has its CatchHandler @ 018362f0 */
  FUN_012d0ef0();
}

