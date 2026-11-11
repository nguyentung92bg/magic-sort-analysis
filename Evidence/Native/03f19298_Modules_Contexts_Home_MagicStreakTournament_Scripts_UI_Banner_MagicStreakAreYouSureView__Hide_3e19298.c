/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakAreYouSureView$$Hide
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__Hide (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakAreYouSureView$$Hide
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__Hide
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__Hide_3e19298
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
                    /* try { // try from 03f192a4 to 040192ab has its CatchHandler @ 03f19420 */
  lVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar4 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x38) != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar4 + 0x38),0,0);
      }
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x70);
        if (lVar5 != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
        }
        *(undefined8 *)(lVar4 + 0x70) = 0;
        FUN_012d0d74((long *)(lVar4 + 0x70),0);
        lVar5 = *(long *)(lVar4 + 0x58);
        if (lVar5 != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
        }
        *(undefined8 *)(lVar4 + 0x58) = 0;
        FUN_012d0d74((long *)(lVar4 + 0x58),0);
        lVar5 = *(long *)(lVar4 + 0x60);
        if (lVar5 != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
        }
        *(undefined8 *)(lVar4 + 0x60) = 0;
        FUN_012d0d74((long *)(lVar4 + 0x60),0);
        plVar6 = (long *)(lVar4 + 0x68);
        if (*plVar6 != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
        }
        *plVar6 = 0;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

