/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayMiniGameEnergyCollectAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayMiniGameEnergyCollectAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayMiniGameEnergyCollectAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayMiniGameEnergyCollectAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayMiniGameEnergyCollectAnimation_4109ed8
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  puVar2 = PTR_DAT_057815e0;
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
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057d6f80,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 != 0) {
      fVar6 = *(float *)(lVar4 + 0x18) + 0.0;
      uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                         *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x1c),
                         *(undefined8 *)(param_1 + 0x98),0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar6,uVar3,uVar5,0);
      puVar2 = PTR_DAT_05766e90;
      if (*(long *)(param_1 + 0xa0) != 0) {
        DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                  (uVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                   *(undefined8 *)PTR_DAT_05766e90);
        if (*(long *)(param_1 + 0x70) != 0) {
          if (*(char *)(*(long *)(param_1 + 0x70) + 0x1c) == '\0') {
            return uVar3;
          }
          if (*(long *)(param_1 + 0x90) != 0) {
            uVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x90),0);
            lVar4 = *(long *)(param_1 + 0xa0);
            if (lVar4 != 0) {
              uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                                 *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x1c),uVar5,0
                                );
              uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar6,uVar3,uVar5,0);
              if (*(long *)(param_1 + 0xa0) != 0) {
                DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x30),
                           *(undefined8 *)puVar2);
                return uVar3;
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

