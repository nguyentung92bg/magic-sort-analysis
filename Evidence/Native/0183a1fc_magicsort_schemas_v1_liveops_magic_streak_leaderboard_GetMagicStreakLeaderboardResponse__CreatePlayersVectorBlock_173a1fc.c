/* IL2CPP: magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreatePlayersVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_StreakLeaderboardPlayer__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.magic_streak_leaderboard.GetMagicStreakLeaderboardResponse$$CreatePlayersVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_StreakLeaderboardPlayer__array* data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_magic_streak_leaderboard_GetMagicStreakLeaderboardResponse__CreatePlayersVectorBlock_173a1fc
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* try { // try from 0183a200 to 0193a24f has its CatchHandler @ 0183a25c */
  if ((bRam0000000005c24cf3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579eee0);
    bRam0000000005c24cf3 = 1;
  }
  puVar1 = PTR_DAT_0579eee0;
  if ((param_2 != 0) && (param_1 != 0)) {
                    /* catch() { ... } // from try @ 0183a1c0 with catch @ 0183a250
                       try { // try from 0183a250 to 0193a29b has its CatchHandler @ 01839ecc */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
                    /* catch() { ... } // from try @ 0183a1bc with catch @ 0183a254 */
                    /* catch() { ... } // from try @ 0183a1a0 with catch @ 0183a258 */
                    /* catch() { ... } // from try @ 0183a200 with catch @ 0183a25c */
                    /* catch() { ... } // from try @ 0183a1a8 with catch @ 0183a260
                       catch() { ... } // from try @ 0183a1dc with catch @ 0183a260 */
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StreakLeaderboardPlayer___2388294
              (param_1,param_2,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0183a12c with catch @ 0183a264 */
                    /* catch() { ... } // from try @ 01839fc8 with catch @ 0183a268 */
                    /* catch() { ... } // from try @ 0183a140 with catch @ 0183a26c */
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* catch() { ... } // from try @ 01839fdc with catch @ 0183a270 */
                    /* catch() { ... } // from try @ 0183a000 with catch @ 0183a274 */
                    /* catch() { ... } // from try @ 01839f74 with catch @ 0183a278 */
                    /* catch() { ... } // from try @ 01839f0c with catch @ 0183a27c
                       catch() { ... } // from try @ 0183a1c4 with catch @ 0183a27c */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0183a07c with catch @ 0183a280 */
  FUN_012d0ef0();
}

