/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetHatCountForRankUpAnim
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetHatCountForRankUpAnim (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$SetHatCountForRankUpAnim
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetHatCountForRankUpAnim
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   __this, int32_t count, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__SetHatCountForRankUpAnim_3e15da4
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int iStack_14;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iStack_14 = param_2;
  lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar3,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0 < param_2,0);
    if (0 < param_2) {
      plVar4 = *(long **)(lVar3 + 0x18);
      uVar2 = System_Int32__ToString_26c9768(&iStack_14,0);
      if (plVar4 == (long *)0x0) goto LAB_03f15988;
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
    }
    return;
  }
LAB_03f15988:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

