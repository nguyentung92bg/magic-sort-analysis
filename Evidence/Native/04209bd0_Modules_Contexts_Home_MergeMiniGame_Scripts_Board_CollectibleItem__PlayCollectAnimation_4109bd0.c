/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayCollectAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayCollectAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayCollectAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayCollectAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayCollectAnimation_4109bd0
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0x60), lVar3 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar3,param_1,0);
    puVar2 = PTR_DAT_057815e0;
    if (*(long *)(param_1 + 0xd0) != 0) {
      if (*(int *)(*(long *)(param_1 + 0xd0) + 0x10) == 0x15) {
        if ((bRam0000000005c3abbc & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057d6f80);
          FUN_012d0dc8(PTR_DAT_057815e0);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_05766e90);
          bRam0000000005c3abbc = 1;
        }
        puVar1 = PTR_DAT_057606c8;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_1,*(undefined8 *)PTR_DAT_057d6f80,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar4,lVar3,0);
          lVar3 = *(long *)(param_1 + 0xa0);
          if (lVar3 != 0) {
            fVar6 = *(float *)(lVar3 + 0x18) + 0.0;
            uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                              (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                               *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x1c),
                               *(undefined8 *)(param_1 + 0x98),0);
            uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar6,uVar4,uVar5,0);
            puVar2 = PTR_DAT_05766e90;
            if (*(long *)(param_1 + 0xa0) != 0) {
              DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                         *(undefined8 *)PTR_DAT_05766e90);
              if (*(long *)(param_1 + 0x70) != 0) {
                if (*(char *)(*(long *)(param_1 + 0x70) + 0x1c) == '\0') {
                  return uVar4;
                }
                if (*(long *)(param_1 + 0x90) != 0) {
                  uVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x90),0)
                  ;
                  lVar3 = *(long *)(param_1 + 0xa0);
                  if (lVar3 != 0) {
                    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                      (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                                       *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x1c),
                                       uVar5,0);
                    uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar6,uVar4,uVar5,0)
                    ;
                    if (*(long *)(param_1 + 0xa0) != 0) {
                      DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                                 *(undefined8 *)puVar2);
                      return uVar4;
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
      if ((bRam0000000005c3abba & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_05766e90);
        bRam0000000005c3abba = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar3 = *(long *)(param_1 + 0xa0);
      if (lVar3 != 0) {
        uVar7 = *(undefined4 *)(lVar3 + 0x18);
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                           *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x1c),
                           *(undefined8 *)(param_1 + 0x98),0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
        puVar2 = PTR_DAT_05766e90;
        if (*(long *)(param_1 + 0xa0) != 0) {
          DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                     *(undefined8 *)PTR_DAT_05766e90);
          if (*(long *)(param_1 + 0x70) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x70) + 0x1c) != '\0') {
              if ((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_1 + 0x90) == 0))
              goto LAB_0420a1c0;
              uVar7 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x18);
              uVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x90),0);
              lVar3 = *(long *)(param_1 + 0xa0);
              if (lVar3 == 0) goto LAB_0420a1c0;
              uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                                 *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x1c),uVar5,0
                                );
              uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
              if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0420a1c0;
              DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                         *(undefined8 *)puVar2);
            }
            if (*(long *)(param_1 + 0xa0) != 0) {
              uVar7 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x38);
              uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayRevealAnimation_410a1c4
                                (param_1);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
              return uVar4;
            }
          }
        }
      }
LAB_0420a1c0:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

