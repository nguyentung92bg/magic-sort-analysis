/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$CalculateScrollDuration
float Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__CalculateScrollDuration (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, int32_t rankDelta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$CalculateScrollDuration
   float 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__CalculateScrollDuration
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this, int32_t rankDelta, const MethodInfo* method); */

float Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__CalculateScrollDuration_38cba84
                (long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x54) * (float)param_2;
    fVar3 = *(float *)(lVar1 + 0x58);
    if (fVar2 <= *(float *)(lVar1 + 0x58)) {
      fVar3 = fVar2;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

