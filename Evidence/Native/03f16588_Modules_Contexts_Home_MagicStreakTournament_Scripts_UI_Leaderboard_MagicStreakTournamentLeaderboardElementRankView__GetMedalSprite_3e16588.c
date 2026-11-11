/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$GetMedalSprite
UnityEngine_Sprite_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__GetMedalSprite (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$GetMedalSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__GetMedalSprite
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o*
   __this, int32_t rank, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__GetMedalSprite_3e16588
          (long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 3) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_03f165e4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x28);
  }
  else if (param_2 == 2) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_03f165e4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_03f165e4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  return *puVar1;
}

