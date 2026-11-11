/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$ShowBoosterButtonsWithDelay
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__ShowBoosterButtonsWithDelay (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$ShowBoosterButtonsWithDelay
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__ShowBoosterButtonsWithDelay
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   float delay, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__ShowBoosterButtonsWithDelay_16f8424
                 (undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c24b91 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24b91 = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  plVar5 = (long *)(param_2 + 0xe0);
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar5,0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *(undefined8 *)(param_2 + 0xe0) = uVar4;
  FUN_012d0d74(plVar5,uVar4);
  if (*(long *)(param_2 + 0xa8) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0xe0);
    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (*(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xbc),
                       *(undefined4 *)(param_2 + 0xc0),
                       *(undefined4 *)(*(long *)(param_2 + 0xa8) + 0x70),
                       *(undefined8 *)(param_2 + 0x18),0,0);
    puVar2 = PTR_DAT_057874c0;
    if (*(long *)(param_2 + 0xa8) != 0) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar4,*(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x40),
                         *(undefined8 *)PTR_DAT_057874c0);
      DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar4,0);
      if (*(long *)(param_2 + 0xa8) != 0) {
        uVar6 = *(undefined8 *)(param_2 + 0xe0);
        uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                          (*(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd4),
                           *(undefined4 *)(param_2 + 0xd8),
                           *(undefined4 *)(*(long *)(param_2 + 0xa8) + 0x70),
                           *(undefined8 *)(param_2 + 0x20),0,0);
        if (*(long *)(param_2 + 0xa8) != 0) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x40),
                             *(undefined8 *)puVar2);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar4,0);
          if (*(long *)(param_2 + 0xa8) != 0) {
            uVar6 = *(undefined8 *)(param_2 + 0xe0);
            uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                              (*(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd4),
                               *(undefined4 *)(param_2 + 0xd8),
                               *(undefined4 *)(*(long *)(param_2 + 0xa8) + 0x70),
                               *(undefined8 *)(param_2 + 0x88),0,0);
            if (*(long *)(param_2 + 0xa8) != 0) {
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar4,*(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x40),
                                 *(undefined8 *)puVar2);
              DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar4,0);
              if (*(long *)(param_2 + 0xa8) != 0) {
                uVar6 = *(undefined8 *)(param_2 + 0xe0);
                uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                  (*(undefined4 *)(param_2 + 0xc4),*(undefined4 *)(param_2 + 200),
                                   *(undefined4 *)(param_2 + 0xcc),
                                   *(undefined4 *)(*(long *)(param_2 + 0xa8) + 0x70),
                                   *(undefined8 *)(param_2 + 0x28),0,0);
                puVar3 = PTR_DAT_057f03e0;
                if (*(long *)(param_2 + 0xa8) != 0) {
                  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar4,*(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x40),
                                     *(undefined8 *)puVar2);
                  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar4,0);
                  plVar5 = (long *)*plVar5;
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
                      DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(param_1,plVar1,0)
                      ;
                    }
                    else {
                      *(float *)((long)plVar5 + 0xac) = (float)param_1;
                      *(bool *)(plVar5 + 0x23) = (float)param_1 <= 0.0;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

