/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.Rewarded2xButton$$ShowLoadingBarIfRewardedNotReady
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowLoadingBarIfRewardedNotReady (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.Rewarded2xButton$$ShowLoadingBarIfRewardedNotReady
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowLoadingBarIfRewardedNotReady
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__ShowLoadingBarIfRewardedNotReady_16f0dcc
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar7 = Modules_Contexts_Application_Ads_Scripts_AdService__IsRewardedReady_1b5f73c
                      (*(long *)(param_1 + 0x48),0);
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((bRam0000000005c24b52 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05758e60);
          bRam0000000005c24b52 = 1;
        }
        puVar9 = (undefined8 *)(lVar8 + 0x18);
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*puVar9,0,0);
        lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar8,0);
        puVar4 = PTR_DAT_05758e60;
        if (lVar5 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
          uVar6 = UnityEngine_Component__get_transform_408b444(lVar8,0);
          uVar6 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                            (0,0,0xc3b40000,0x3f800000,uVar6,1,0);
          uVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__2451144
                            (uVar6,0xffffffff,0,*(undefined8 *)puVar4);
          *(undefined8 *)(lVar8 + 0x18) = uVar6;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(lVar8 + 0x18) != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar8 + 0x18),0,0);
      }
      lVar8 = UnityEngine_Component__get_gameObject_408b480(lVar8,0);
      if (lVar8 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar8,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

