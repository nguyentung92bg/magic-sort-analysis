/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$StoreInitialLocalPositionsOfScrollElements
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__StoreInitialLocalPositionsOfScrollElements (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$StoreInitialLocalPositionsOfScrollElements
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__StoreInitialLocalPositionsOfScrollElements
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__StoreInitialLocalPositionsOfScrollElements_3e1709c
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c380be & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05809010);
    bRam0000000005c380be = 1;
  }
  puVar2 = PTR_DAT_05809010;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      iVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementsCount_40076cc
                        (lVar4,0);
      if (iVar3 <= iVar7) {
        return;
      }
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementAt_4007624
                             (*(long *)(param_1 + 0x20),iVar7,0), lVar4 == 0)) ||
         (lVar5 = *(long *)(param_1 + 0x58), lVar5 == 0)) break;
      uVar8 = *(undefined4 *)(lVar4 + 0x10);
      uVar9 = *(undefined4 *)(lVar4 + 0x14);
      uVar10 = *(undefined4 *)(lVar4 + 0x18);
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar4 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + 0x20) = uVar8;
        *(undefined4 *)(lVar6 + 0x24) = uVar9;
        *(undefined4 *)(lVar6 + 0x28) = uVar10;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x58) + 8))();
      }
      lVar4 = *(long *)(param_1 + 0x20);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

