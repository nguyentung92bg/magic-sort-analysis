/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$PlayLevelEntranceAnimation
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__PlayLevelEntranceAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, int32_t bottleRowCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$PlayLevelEntranceAnimation
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__PlayLevelEntranceAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   int32_t bottleRowCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__PlayLevelEntranceAnimation_16f8620
               (long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c24b90 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24b90 = 1;
  }
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__SetParentInitialPositions_16f7e64
            (param_1,param_2);
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediately_16f88ac
            (param_1);
  if (*(long *)(param_1 + 0x118) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x118),0,0);
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x110),0,0);
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x120),0,0);
  }
  puVar1 = (undefined8 *)(param_1 + 0x118);
  if (*(long *)(param_1 + 0x128) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x128),0,0);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_012d0d74(puVar1,0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_012d0d74(param_1 + 0x110,0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_012d0d74(param_1 + 0x120,0);
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_012d0d74(param_1 + 0x128,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                       *(undefined4 *)(param_1 + 0xc0),
                       *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                       *(undefined8 *)(param_1 + 0x18),0,0);
    puVar5 = PTR_DAT_057874c0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar7,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                         *(undefined8 *)PTR_DAT_057874c0);
      puVar6 = PTR_DAT_057bbd38;
      if (*(long *)(param_1 + 0xa8) != 0) {
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                          (*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3c),uVar7,
                           *(undefined8 *)PTR_DAT_057bbd38);
        *(undefined8 *)(param_1 + 0x110) = uVar7;
        FUN_012d0d74(param_1 + 0x110,uVar7);
        if (*(long *)(param_1 + 0xa8) != 0) {
          uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                            (*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                             *(undefined4 *)(param_1 + 0xd8),
                             *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                             *(undefined8 *)(param_1 + 0x20),0,0);
          if (*(long *)(param_1 + 0xa8) != 0) {
            uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar7,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                               *(undefined8 *)puVar5);
            if (*(long *)(param_1 + 0xa8) != 0) {
              uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                (*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3c),uVar7,
                                 *(undefined8 *)puVar6);
              *(undefined8 *)(param_1 + 0x120) = uVar7;
              FUN_012d0d74(param_1 + 0x120,uVar7);
              if (*(long *)(param_1 + 0xa8) != 0) {
                uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                  (*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                                   *(undefined4 *)(param_1 + 0xd8),
                                   *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                                   *(undefined8 *)(param_1 + 0x88),0,0);
                if (*(long *)(param_1 + 0xa8) != 0) {
                  uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar7,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                                     *(undefined8 *)puVar5);
                  if (*(long *)(param_1 + 0xa8) != 0) {
                    uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                      (*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3c),uVar7,
                                       *(undefined8 *)puVar6);
                    *(undefined8 *)(param_1 + 0x128) = uVar7;
                    FUN_012d0d74(param_1 + 0x128,uVar7);
                    if (*(long *)(param_1 + 0xa8) != 0) {
                      uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                        (*(undefined4 *)(param_1 + 0xc4),
                                         *(undefined4 *)(param_1 + 200),
                                         *(undefined4 *)(param_1 + 0xcc),
                                         *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x70),
                                         *(undefined8 *)(param_1 + 0x28),0,0);
                      if (*(long *)(param_1 + 0xa8) != 0) {
                        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar7,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x40),
                                           *(undefined8 *)puVar5);
                        if (*(long *)(param_1 + 0xa8) != 0) {
                          uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                            (*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3c),uVar7
                                             ,*(undefined8 *)puVar6);
                          *puVar1 = uVar7;
                          if (iRam0000000005c3d478 != 0) {
                            puVar2 = (ulong *)(((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                              if (bVar4) {
                                *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          return;
                        }
                      }
                    }
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

