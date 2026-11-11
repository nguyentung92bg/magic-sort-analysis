/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$ShowBoosterButtons
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__ShowBoosterButtons (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$ShowBoosterButtons
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__ShowBoosterButtons
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__ShowBoosterButtons_16f8400
                 (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x58), lVar5 != 0)) {
    fVar8 = *(float *)(lVar5 + 0x14);
    if ((bRam0000000005c24b91 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_057f03e0);
      FUN_012d0dc8(PTR_DAT_057874c0);
      bRam0000000005c24b91 = 1;
    }
    puVar2 = PTR_DAT_057815e0;
    plVar6 = (long *)(param_1 + 0xe0);
    if (*plVar6 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    FUN_012d0d74(plVar6,uVar4);
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0xe0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                        (*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                         *(undefined4 *)(param_1 + 0xc0),
                         *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                         *(undefined8 *)(param_1 + 0x18),0,0);
      puVar2 = PTR_DAT_057874c0;
      if (*(long *)(param_1 + 0xa8) != 0) {
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar4,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar7,uVar4,0);
        if (*(long *)(param_1 + 0xa8) != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0xe0);
          uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                            (*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                             *(undefined4 *)(param_1 + 0xd8),
                             *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                             *(undefined8 *)(param_1 + 0x20),0,0);
          if (*(long *)(param_1 + 0xa8) != 0) {
            uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar4,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                               *(undefined8 *)puVar2);
            DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar7,uVar4,0);
            if (*(long *)(param_1 + 0xa8) != 0) {
              uVar7 = *(undefined8 *)(param_1 + 0xe0);
              uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                (*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                                 *(undefined4 *)(param_1 + 0xd8),
                                 *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                                 *(undefined8 *)(param_1 + 0x88),0,0);
              if (*(long *)(param_1 + 0xa8) != 0) {
                uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar4,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                                   *(undefined8 *)puVar2);
                DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar7,uVar4,0);
                if (*(long *)(param_1 + 0xa8) != 0) {
                  uVar7 = *(undefined8 *)(param_1 + 0xe0);
                  uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                    (*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),
                                     *(undefined4 *)(param_1 + 0xcc),
                                     *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                                     *(undefined8 *)(param_1 + 0x28),0,0);
                  puVar3 = PTR_DAT_057f03e0;
                  if (*(long *)(param_1 + 0xa8) != 0) {
                    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                      (uVar4,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                                       *(undefined8 *)puVar2);
                    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar7,uVar4,0);
                    plVar6 = (long *)*plVar6;
                    if ((bRam0000000005c2b023 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar3);
                      bRam0000000005c2b023 = 1;
                    }
                    if (((plVar6 != (long *)0x0) && ((char)plVar6[0x1d] != '\0')) &&
                       ((char)plVar6[0x20] == '\0')) {
                      if ((int)plVar6[2] == 1) {
                        plVar1 = plVar6;
                        if (*plVar6 != *(long *)PTR_DAT_058134a8) {
                          plVar1 = (long *)0x0;
                        }
                        DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar8,plVar1,0)
                        ;
                      }
                      else {
                        *(float *)((long)plVar6 + 0xac) = fVar8;
                        *(bool *)(plVar6 + 0x23) = fVar8 <= 0.0;
                      }
                    }
                    return plVar6;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

