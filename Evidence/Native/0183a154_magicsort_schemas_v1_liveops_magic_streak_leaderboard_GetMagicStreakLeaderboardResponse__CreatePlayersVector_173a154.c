/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreatePlayersVector
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_StreakLeaderboardPlayer__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreatePlayersVector
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_StreakLeaderboardPlayer__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVector_173a154
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
                    /* try { // try from 0183a1a0 to 0193a1a3 has its CatchHandler @ 0183a258 */
      uVar4 = (ulong)iVar1;
      iVar3 = iVar3 + -2;
                    /* try { // try from 0183a1a8 to 0193a1ab has its CatchHandler @ 0183a260 */
      do {
        Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4
                  (param_1,*(undefined4 *)(param_2 + 0x20 + uVar4 * 4),0);
                    /* try { // try from 0183a1bc to 0193a1bf has its CatchHandler @ 0183a254 */
        if (iVar3 < 0) goto LAB_0183a1d8;
                    /* try { // try from 0183a1c0 to 0193a1c3 has its CatchHandler @ 0183a250 */
                    /* try { // try from 0183a1c4 to 0193a1c7 has its CatchHandler @ 0183a27c */
        uVar4 = uVar4 - 1;
        iVar3 = iVar3 + -1;
      } while (uVar4 < *(uint *)(param_2 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
LAB_0183a1d8:
                    /* try { // try from 0183a1dc to 0193a1ff has its CatchHandler @ 0183a260 */
  uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
  return uVar2;
}

