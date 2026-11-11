/* IL2CPP: magicsort.schemas.v1.liveops.weekly_leaderboard.GetWeeklyLeaderboardResponse$$get_IsFinished
bool magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_IsFinished (magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.weekly_leaderboard.GetWeeklyLeaderboardResponse$$get_IsFinished
   bool magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_IsFinished
   (magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse_o __this, const
   MethodInfo* method); */

ulong magicsort_schemas_v1_liveops_weekly_leaderboard_GetWeeklyLeaderboardResponse__get_IsFinished_14443dc
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0xe,0);
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

