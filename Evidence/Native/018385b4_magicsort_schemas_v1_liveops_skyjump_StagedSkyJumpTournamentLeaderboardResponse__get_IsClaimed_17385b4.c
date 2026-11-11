/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$get_IsClaimed
bool magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__get_IsClaimed (magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$get_IsClaimed
   bool 
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__get_IsClaimed
   (magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse_o __this, const
   MethodInfo* method); */

ulong magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__get_IsClaimed_17385b4
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0x10,0);
  if ((int)uVar2 != 0) {
                    /* try { // try from 018385cc to 0193860b has its CatchHandler @ 01838aa0 */
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

