/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$get_IsFinished
bool magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__get_IsFinished (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$get_IsFinished
   bool magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__get_IsFinished
   (magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData_o __this, const MethodInfo*
   method); */

ulong magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__get_IsFinished_173b5b8
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0x12,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    cVar1 = Google_FlatBuffers_ByteBuffer__Get_313576c
                      (*(long *)(param_1 + 2),*param_1 + (int)uVar2,0);
    uVar2 = (ulong)(cVar1 != '\0');
  }
                    /* try { // try from 0183b5f8 to 0193b61f has its CatchHandler @ 0183b9e4 */
  return uVar2;
}

