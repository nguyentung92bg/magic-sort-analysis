/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayDefaultCollectAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayDefaultCollectAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayDefaultCollectAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayDefaultCollectAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayDefaultCollectAnimation_410a068
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3abba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05766e90);
    bRam0000000005c3abba = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    uVar5 = *(undefined4 *)(lVar4 + 0x18);
    uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                       *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x1c),
                       *(undefined8 *)(param_1 + 0x98),0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar5,uVar2,uVar3,0);
    puVar1 = PTR_DAT_05766e90;
    if (*(long *)(param_1 + 0xa0) != 0) {
      DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                (uVar3,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                 *(undefined8 *)PTR_DAT_05766e90);
      if (*(long *)(param_1 + 0x70) != 0) {
        if (*(char *)(*(long *)(param_1 + 0x70) + 0x1c) != '\0') {
          if ((*(long *)(param_1 + 0xa0) == 0) || (*(long *)(param_1 + 0x90) == 0))
          goto LAB_0420a1c0;
          uVar5 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x18);
          uVar3 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x90),0);
          lVar4 = *(long *)(param_1 + 0xa0);
          if (lVar4 == 0) goto LAB_0420a1c0;
          uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                             *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x1c),uVar3,0);
          uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar5,uVar2,uVar3,0);
          if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0420a1c0;
          DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar3,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),*(undefined8 *)puVar1);
        }
        if (*(long *)(param_1 + 0xa0) != 0) {
          uVar5 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x38);
          uVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayRevealAnimation_410a1c4
                            (param_1);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar5,uVar2,uVar3,0);
          return uVar2;
        }
      }
    }
  }
LAB_0420a1c0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

