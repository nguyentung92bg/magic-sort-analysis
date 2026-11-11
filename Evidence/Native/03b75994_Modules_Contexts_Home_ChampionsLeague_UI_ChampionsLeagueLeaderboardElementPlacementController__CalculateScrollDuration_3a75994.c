/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$CalculateScrollDuration
float Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__CalculateScrollDuration (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t rankDelta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$CalculateScrollDuration
   float 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__CalculateScrollDuration
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t rankDelta, const MethodInfo* method); */

float Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__CalculateScrollDuration_3a75994
                (long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 03b75994 to 03c759ab has its CatchHandler @ 03b75a30 */
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x54) * (float)param_2;
    fVar3 = *(float *)(lVar1 + 0x58);
                    /* try { // try from 03b759b0 to 03c759b3 has its CatchHandler @ 03b75a1c */
    if (fVar2 <= *(float *)(lVar1 + 0x58)) {
      fVar3 = fVar2;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

