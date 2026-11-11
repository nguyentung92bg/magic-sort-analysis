/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideBoosterButtonsWithQuitDelay
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsWithQuitDelay (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideBoosterButtonsWithQuitDelay
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsWithQuitDelay
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsWithQuitDelay_16f8904
                 (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c24b92 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c24b92 = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  plVar5 = (long *)(param_1 + 0xe8);
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar5,0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  FUN_012d0d74(plVar5,uVar3);
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x58), lVar4 != 0)) {
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (*(undefined4 *)(param_1 + 0xb8),uVar8,*(undefined4 *)(param_1 + 0xc0),
                       *(undefined4 *)(lVar4 + 0x10),*(undefined8 *)(param_1 + 0x18),0,0);
    puVar2 = PTR_DAT_05770998;
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x58), lVar4 != 0)) {
      uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                        (uVar3,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_05770998);
      DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar3,0);
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar4 != 0)) {
        uVar10 = *(undefined4 *)(param_1 + 0xd0);
        uVar9 = *(undefined4 *)(param_1 + 0xd8);
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                          (uVar10,uVar8,uVar9,*(undefined4 *)(lVar4 + 0x10),
                           *(undefined8 *)(param_1 + 0x20),0,0);
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar4 != 0)) {
          uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                            (uVar3,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)puVar2);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar3,0);
          if ((*(long *)(param_1 + 0xa8) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar4 != 0)) {
            uVar6 = *(undefined8 *)(param_1 + 0xe8);
            uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                              (uVar10,uVar8,uVar9,*(undefined4 *)(lVar4 + 0x10),
                               *(undefined8 *)(param_1 + 0x88),0,0);
            if ((*(long *)(param_1 + 0xa8) != 0) &&
               (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar4 != 0)) {
              uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar3,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)puVar2);
              DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar3,0);
              if ((*(long *)(param_1 + 0xa8) != 0) &&
                 (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x68), lVar4 != 0)) {
                uVar6 = *(undefined8 *)(param_1 + 0xe8);
                uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                  (*(undefined4 *)(param_1 + 0xc4),uVar8,
                                   *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(lVar4 + 0x10),
                                   *(undefined8 *)(param_1 + 0x28),0,0);
                if ((*(long *)(param_1 + 0xa8) != 0) &&
                   (lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x68), lVar4 != 0)) {
                  uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                    (uVar3,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)puVar2);
                  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar3,0);
                  if (*(long *)(param_1 + 0xa8) != 0) {
                    plVar5 = (long *)*plVar5;
                    fVar7 = *(float *)(*(long *)(param_1 + 0xa8) + 0x50);
                    if ((bRam0000000005c2b023 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)PTR_DAT_057f03e0);
                      bRam0000000005c2b023 = 1;
                    }
                    if (((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) &&
                       ((char)plVar5[0x20] == '\0')) {
                      if ((int)plVar5[2] == 1) {
                        plVar1 = plVar5;
                        if (*plVar5 != *(long *)PTR_DAT_058134a8) {
                          plVar1 = (long *)0x0;
                        }
                        DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar7,plVar1,0)
                        ;
                      }
                      else {
                        *(float *)((long)plVar5 + 0xac) = fVar7;
                        *(bool *)(plVar5 + 0x23) = fVar7 <= 0.0;
                      }
                    }
                    return plVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

