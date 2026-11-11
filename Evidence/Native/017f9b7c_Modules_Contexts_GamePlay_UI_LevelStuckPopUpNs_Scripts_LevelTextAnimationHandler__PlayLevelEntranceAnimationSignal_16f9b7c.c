/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$PlayLevelEntranceAnimationSignal
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__PlayLevelEntranceAnimationSignal (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this, int32_t bottleRowCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$PlayLevelEntranceAnimationSignal
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__PlayLevelEntranceAnimationSignal
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this,
   int32_t bottleRowCount, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__PlayLevelEntranceAnimationSignal_16f9b7c
                 (long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  
  if ((bRam0000000005c24b99 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24b99 = 1;
  }
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__SetParentInitialPositions_16f9640
            (param_1,param_2);
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                       *(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x34),
                       *(undefined8 *)(param_1 + 0x40),0,0);
    puVar2 = PTR_DAT_057874c0;
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),
                         *(undefined8 *)PTR_DAT_057874c0);
      puVar3 = PTR_DAT_057bbd38;
      if (*(long *)(param_1 + 0x60) != 0) {
        DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                  (*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x3c),uVar4,
                   *(undefined8 *)PTR_DAT_057bbd38);
        if (*(long *)(param_1 + 0x60) != 0) {
          uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                            (*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                             *(undefined4 *)(param_1 + 0x84),
                             *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x34),
                             *(undefined8 *)(param_1 + 0x48),0,0);
          if (*(long *)(param_1 + 0x60) != 0) {
            uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18),
                               *(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0x60) != 0) {
              DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                        (*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x3c),uVar4,
                         *(undefined8 *)puVar3);
              if (*(long *)(param_1 + 0x60) != 0) {
                uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                  (*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                                   *(undefined4 *)(param_1 + 0x90),
                                   *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x34),
                                   *(undefined8 *)(param_1 + 0x50),0,0);
                if (*(long *)(param_1 + 0x60) != 0) {
                  plVar5 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                             (uVar4,*(undefined8 *)
                                                     (*(long *)(param_1 + 0x60) + 0x18),
                                              *(undefined8 *)puVar2);
                  if (*(long *)(param_1 + 0x60) != 0) {
                    fVar6 = *(float *)(*(long *)(param_1 + 0x60) + 0x3c);
                    if ((bRam0000000005c2b023 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar3);
                      bRam0000000005c2b023 = 1;
                    }
                    if (((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) &&
                       ((char)plVar5[0x20] == '\0')) {
                      if ((int)plVar5[2] == 1) {
                        plVar1 = plVar5;
                        if (*plVar5 != *(long *)PTR_DAT_058134a8) {
                          plVar1 = (long *)0x0;
                        }
                        DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar6,plVar1,0)
                        ;
                      }
                      else {
                        *(float *)((long)plVar5 + 0xac) = fVar6;
                        *(bool *)(plVar5 + 0x23) = fVar6 <= 0.0;
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

