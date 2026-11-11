/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$HideLevelTextQuit
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__HideLevelTextQuit (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$HideLevelTextQuit
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__HideLevelTextQuit
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this,
   const MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__HideLevelTextQuit_16f9f34
                 (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  
  if ((bRam0000000005c24b9c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    bRam0000000005c24b9c = 1;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x38),
                       *(undefined8 *)(param_1 + 0x40),0,0);
    puVar2 = PTR_DAT_057bbd38;
    if (*(long *)(param_1 + 0x60) != 0) {
      DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                (*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x30),uVar3,
                 *(undefined8 *)PTR_DAT_057bbd38);
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                          (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x38),
                           *(undefined8 *)(param_1 + 0x48),0,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                    (*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x30),uVar3,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x60) != 0) {
            plVar4 = (long *)DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                       (*(undefined4 *)(param_1 + 0x30),
                                        *(undefined4 *)(param_1 + 0x34),
                                        *(undefined4 *)(param_1 + 0x38),
                                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x38),
                                        *(undefined8 *)(param_1 + 0x50),0,0);
            if (*(long *)(param_1 + 0x60) != 0) {
              fVar5 = *(float *)(*(long *)(param_1 + 0x60) + 0x30);
              if ((bRam0000000005c2b023 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar2);
                bRam0000000005c2b023 = 1;
              }
              if (((plVar4 != (long *)0x0) && ((char)plVar4[0x1d] != '\0')) &&
                 ((char)plVar4[0x20] == '\0')) {
                if ((int)plVar4[2] == 1) {
                  plVar1 = plVar4;
                  if (*plVar4 != *(long *)PTR_DAT_058134a8) {
                    plVar1 = (long *)0x0;
                  }
                  DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar5,plVar1,0);
                }
                else {
                  *(float *)((long)plVar4 + 0xac) = fVar5;
                  *(bool *)(plVar4 + 0x23) = fVar5 <= 0.0;
                }
              }
              return plVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

