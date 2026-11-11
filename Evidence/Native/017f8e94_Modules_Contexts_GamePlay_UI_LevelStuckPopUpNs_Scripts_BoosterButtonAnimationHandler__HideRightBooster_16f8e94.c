/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideRightBooster
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideRightBooster (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideRightBooster
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideRightBooster
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideRightBooster_16f8e94
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000005c24b95 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c24b95 = 1;
  }
  plVar6 = (long *)(param_1 + 0xf8);
  if (*plVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_012d0d74(plVar6,0);
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0xc4);
    uVar8 = *(undefined4 *)(param_1 + 200);
    switch(*(undefined4 *)(lVar5 + 0x54)) {
    case 0:
      uVar8 = *(undefined4 *)(param_1 + 0x34);
      break;
    case 1:
    case 3:
      uVar7 = *(undefined4 *)(param_1 + 0x3c);
      break;
    case 2:
      uVar7 = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(long *)(lVar5 + 0x68) != 0) {
      uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                        (uVar7,uVar8,*(undefined4 *)(param_1 + 0xcc),
                         *(undefined4 *)(*(long *)(lVar5 + 0x68) + 0x10),
                         *(undefined8 *)(param_1 + 0x28),0,0);
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x68), lVar5 != 0)) {
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                          (uVar4,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_05770998);
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x68), lVar5 != 0)) {
          lVar5 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                            (*(undefined4 *)(lVar5 + 0x20),uVar4,*(undefined8 *)PTR_DAT_057bbd38);
          *plVar6 = lVar5;
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

