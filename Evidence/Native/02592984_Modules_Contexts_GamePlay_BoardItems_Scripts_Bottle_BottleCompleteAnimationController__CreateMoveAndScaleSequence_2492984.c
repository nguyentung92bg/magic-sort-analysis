/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateMoveAndScaleSequence
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateMoveAndScaleSequence (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, float startY, bool hasAnimationBlockingBlocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateMoveAndScaleSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateMoveAndScaleSequence
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   float startY, bool hasAnimationBlockingBlocker, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateMoveAndScaleSequence_2492984
          (undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  
  if ((bRam0000000005c2b2ba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a72d8);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2b2ba = 1;
  }
  fVar7 = 0.0;
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_2 + 0x28) == 0) goto LAB_02592c24;
    fVar7 = *(float *)(*(long *)(param_2 + 0x28) + 0x88);
  }
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                      (fVar7 + (float)param_1,*(undefined4 *)(*(long *)(param_2 + 0x28) + 0x80),
                       *(undefined8 *)(param_2 + 0x38),0,0);
    puVar2 = PTR_DAT_057874c0;
    if (*(long *)(param_2 + 0x28) != 0) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar4,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x70),
                         *(undefined8 *)PTR_DAT_057874c0);
      uVar4 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
      if (*(long *)(param_2 + 0x28) != 0) {
        uVar5 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                          (param_1,*(undefined4 *)(*(long *)(param_2 + 0x28) + 0x84),
                           *(undefined8 *)(param_2 + 0x38),0,0);
        if (*(long *)(param_2 + 0x28) != 0) {
          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar5,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x78),
                             *(undefined8 *)puVar2);
          uVar4 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
          lVar6 = *(long *)(param_2 + 0x28);
          if (lVar6 != 0) {
            uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                              (*(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                               *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x34),
                               *(undefined8 *)(param_2 + 0x38),0);
            puVar1 = PTR_DAT_057606c8;
            if (*(long *)(param_2 + 0x28) != 0) {
              uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar5,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x48),
                                 *(undefined8 *)puVar2);
              uVar4 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar6 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar6,param_2,*(undefined8 *)PTR_DAT_057a72d8,0);
                uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar4,lVar6,0);
                lVar6 = *(long *)(param_2 + 0x28);
                if (lVar6 != 0) {
                  uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                    (*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                                     *(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x38),
                                     *(undefined8 *)(param_2 + 0x38),0);
                  if (*(long *)(param_2 + 0x28) != 0) {
                    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                      (uVar5,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x40),
                                       *(undefined8 *)puVar2);
                    uVar4 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                    uVar5 = *(undefined8 *)(param_2 + 0x38);
                    if (cRam0000000005c230a9 == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230a9 = '\x01';
                    }
                    if (*(long *)(param_2 + 0x28) != 0) {
                      lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                      uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                        (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                                         *(undefined4 *)(lVar6 + 0x14),
                                         *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x50),uVar5,0);
                      if (*(long *)(param_2 + 0x28) != 0) {
                        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar5,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x58),
                                           *(undefined8 *)puVar2);
                        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                        return uVar3;
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
LAB_02592c24:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

