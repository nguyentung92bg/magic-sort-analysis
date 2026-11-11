/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetRankDisplay
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetRankDisplay (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetRankDisplay
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetRankDisplay
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   __this, int32_t rank, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetRankDisplay_3e161dc
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_14;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar3 = *(long **)(lVar1 + 0x50);
  uStack_14 = param_2;
  uVar2 = System_Int32__ToString_26c9768(&uStack_14,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRankFontSize_3e16304
              (lVar1,uStack_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

