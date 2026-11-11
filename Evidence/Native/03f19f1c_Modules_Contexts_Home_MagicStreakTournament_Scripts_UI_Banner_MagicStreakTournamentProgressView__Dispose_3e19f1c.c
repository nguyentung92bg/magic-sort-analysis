/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$Dispose
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__Dispose (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$Dispose
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__Dispose
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__Dispose_3e19f1c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar4,0,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_012d0d74((long *)(param_1 + 0x70),0);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar4,0,0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_012d0d74((long *)(param_1 + 0x58),0);
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar4,0,0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_012d0d74((long *)(param_1 + 0x60),0);
  plVar5 = (long *)(param_1 + 0x68);
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar5,0,0);
  }
  *plVar5 = 0;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

