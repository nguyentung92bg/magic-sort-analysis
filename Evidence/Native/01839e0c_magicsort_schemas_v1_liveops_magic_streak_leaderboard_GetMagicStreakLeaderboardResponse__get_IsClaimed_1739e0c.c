/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$get_IsClaimed
bool magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__get_IsClaimed (magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$get_IsClaimed
   bool 
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__get_IsClaimed
   (magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse_o
   __this, const MethodInfo* method); */

ulong magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__get_IsClaimed_1739e0c
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0x10,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* try { // try from 01839e2c to 01939e3b has its CatchHandler @ 01839e3c */
                    /* catch() { ... } // from try @ 01839d98 with catch @ 01839e3c
                       catch() { ... } // from try @ 01839e2c with catch @ 01839e3c */
    cVar1 = Google_FlatBuffers_ByteBuffer__Get_313576c
                      (*(long *)(param_1 + 2),*param_1 + (int)uVar2,0);
                    /* try { // try from 01839e40 to 01939e43 has its CatchHandler @ 01839e4c */
                    /* try { // try from 01839e44 to 01939e4f has its CatchHandler @ 018399c0 */
    uVar2 = (ulong)(cVar1 != '\0');
  }
                    /* catch() { ... } // from try @ 01839e40 with catch @ 01839e4c */
  return uVar2;
}

