/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementMedalView$$SetRankFontSize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRankFontSize (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementMedalView$$SetRankFontSize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRankFontSize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView_o*
   __this, int32_t rank, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRankFontSize_3e16304
               (long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = 0x58;
  if (9 < param_2) {
    lVar1 = 0x5c;
  }
  fVar3 = *(float *)(param_1 + lVar1);
  if (*(float *)((long)plVar2 + 0x1dc) == fVar3) {
    return;
  }
  *(undefined1 *)(plVar2 + 0x6d) = 1;
  *(float *)((long)plVar2 + 0x1dc) = fVar3;
  if ((char)plVar2[0x46] == '\0') {
    *(float *)((long)plVar2 + 0x1e4) = fVar3;
  }
  (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x03ebd4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
  return;
}

