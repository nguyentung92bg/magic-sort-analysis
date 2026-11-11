/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$get_PlayersLength
int32_t magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__get_PlayersLength (magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$get_PlayersLength
   int32_t
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__get_PlayersLength
   (magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse_o
   __this, const MethodInfo* method); */

void magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__get_PlayersLength_1739d48
               (int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 01839cbc with catch @ 01839d4c
                       try { // try from 01839d4c to 01939d97 has its CatchHandler @ 018399c0 */
                    /* catch() { ... } // from try @ 01839cb8 with catch @ 01839d50 */
                    /* catch() { ... } // from try @ 01839c9c with catch @ 01839d54 */
                    /* catch() { ... } // from try @ 01839cfc with catch @ 01839d58 */
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,10,0);
                    /* catch() { ... } // from try @ 01839ca4 with catch @ 01839d5c
                       catch() { ... } // from try @ 01839cd8 with catch @ 01839d5c */
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 01839a68 with catch @ 01839d74 */
                    /* catch() { ... } // from try @ 01839a00 with catch @ 01839d78
                       catch() { ... } // from try @ 01839cc0 with catch @ 01839d78 */
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar1 = *param_1;
    iVar3 = Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
                      (*(long *)(param_1 + 2),iVar1 + iVar2,4);
    if (*(long *)(param_1 + 2) != 0) {
      Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
                (*(long *)(param_1 + 2),iVar1 + iVar2 + iVar3,4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

