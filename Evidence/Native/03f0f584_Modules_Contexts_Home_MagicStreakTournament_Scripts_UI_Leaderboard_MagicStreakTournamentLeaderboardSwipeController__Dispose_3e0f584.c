/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$Dispose
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__Dispose (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$Dispose
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__Dispose
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__Dispose_3e0f584
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c393be & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4bd0,0);
    bRam0000000005c393be = 1;
  }
  if (*(long *)(lVar4 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar4 + 0x78),0,0);
  }
  *(undefined1 *)(lVar4 + 0xb0) = 0;
  *(undefined2 *)(lVar4 + 0x74) = 0;
  if (*(long *)(lVar4 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined4 *)(*(long *)(lVar4 + 0x60) + 0x10) = 0;
  puVar8 = (undefined8 *)(lVar4 + 0x30);
  plVar9 = (long *)*puVar8;
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057b4bd0) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 10) * 0x10 + 0x138);
          goto LAB_0410b4c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057b4bd0,10);
LAB_0410b4c8:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  *puVar8 = 0;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

