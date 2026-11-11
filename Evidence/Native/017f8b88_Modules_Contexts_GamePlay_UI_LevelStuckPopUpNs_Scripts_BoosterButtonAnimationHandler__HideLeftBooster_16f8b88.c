/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideLeftBooster
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBooster (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideLeftBooster
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBooster
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBooster_16f8b88
               (long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000005c24b93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c24b93 = 1;
  }
  plVar7 = (long *)(param_1 + 0xf0);
  if (*plVar7 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_012d0d74(plVar7,0);
  lVar6 = *(long *)(param_1 + 0xa8);
  if (lVar6 != 0) {
    iVar2 = *(int *)(lVar6 + 0x54);
    uVar9 = *(undefined4 *)(param_1 + 0xbc);
    if (iVar2 - 2U < 2) {
      uVar8 = *(undefined4 *)(param_1 + 0x48);
    }
    else if (iVar2 == 1) {
      uVar8 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0xb8);
      if (iVar2 == 0) {
        uVar9 = *(undefined4 *)(param_1 + 0x34);
      }
    }
    if (*(long *)(lVar6 + 0x58) != 0) {
      uVar5 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                        (uVar8,uVar9,*(undefined4 *)(param_1 + 0xc0),
                         *(undefined4 *)(*(long *)(lVar6 + 0x58) + 0x10),
                         *(undefined8 *)(param_1 + 0x18),0,0);
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x58), lVar6 != 0)) {
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                          (uVar5,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)PTR_DAT_05770998);
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x58), lVar6 != 0)) {
          lVar6 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                            (*(undefined4 *)(lVar6 + 0x20),uVar5,*(undefined8 *)PTR_DAT_057bbd38);
          *plVar7 = lVar6;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

