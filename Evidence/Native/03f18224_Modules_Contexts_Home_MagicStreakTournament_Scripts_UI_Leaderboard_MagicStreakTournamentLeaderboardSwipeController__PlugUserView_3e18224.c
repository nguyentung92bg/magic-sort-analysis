/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$PlugUserView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, int32_t currentRankIndex, int32_t newRankIndex, int32_t rankDelta, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* userView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$PlugUserView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this, int32_t currentRankIndex, int32_t newRankIndex, int32_t rankDelta,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   userView, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserView_3e18224
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 03f18248 to 04018637 has its CatchHandler @ 03f18248
                       catch() { ... } // from try @ 03f18248 with catch @ 03f18248
                       catch() { ... } // from try @ 03f1871c with catch @ 03f18248
                       catch() { ... } // from try @ 03f18788 with catch @ 03f18248
                       catch() { ... } // from try @ 03f187b4 with catch @ 03f18248
                       catch() { ... } // from try @ 03f187e4 with catch @ 03f18248 */
  if ((bRam0000000005c380bd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c380bd = 1;
  }
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__RemoveInsertUserViewModelAt_3e182fc
            (param_1,param_2,param_3);
  puVar2 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__UpdateVisibleScrollViews_400717c
              (*(long *)(param_1 + 0x20),param_3,param_5,param_2,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(param_5,0,0);
    if ((uVar3 & 1) != 0) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserViewToIndex_3e1835c
                (param_1,param_5,param_3);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IncreaseMaxIndexVisible_400aa40
                (*(long *)(param_1 + 0x18),1,0);
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        uVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                          (lVar4,0);
        if ((uVar3 & 1) != 0) {
          uVar1 = *(int *)(lVar4 + 0x3c) - 1;
          *(uint *)(lVar4 + 0x3c) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        }
        uVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                          (lVar4);
        if ((uVar3 & 1) != 0) {
          uVar1 = *(int *)(lVar4 + 0x38) - 1;
          *(uint *)(lVar4 + 0x38) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

