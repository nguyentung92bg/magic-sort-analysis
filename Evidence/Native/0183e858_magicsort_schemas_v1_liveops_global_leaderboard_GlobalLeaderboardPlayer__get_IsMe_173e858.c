/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GlobalLeaderboardPlayer$$get_IsMe
bool magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_IsMe (magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.global_leaderboard.GlobalLeaderboardPlayer$$get_IsMe
   bool magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_IsMe
   (magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer_o __this, const
   MethodInfo* method); */

ulong magicsort_schemas_v1_liveops_global_leaderboard_GlobalLeaderboardPlayer__get_IsMe_173e858
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
                    /* try { // try from 0183e858 to 0193e8d7 has its CatchHandler @ 0183e858
                       catch() { ... } // from try @ 0183e858 with catch @ 0183e858
                       catch() { ... } // from try @ 0183ecac with catch @ 0183e858
                       catch() { ... } // from try @ 0183ecf8 with catch @ 0183e858 */
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0xc,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    cVar1 = Google_FlatBuffers_ByteBuffer__Get_313576c
                      (*(long *)(param_1 + 2),*param_1 + (int)uVar2,0);
    uVar2 = (ulong)(cVar1 != '\0');
  }
  return uVar2;
}

