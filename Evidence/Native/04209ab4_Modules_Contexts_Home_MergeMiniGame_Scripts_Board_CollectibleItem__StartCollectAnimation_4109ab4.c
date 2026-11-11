/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$StartCollectAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__StartCollectAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$StartCollectAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__StartCollectAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__StartCollectAnimation_4109ab4
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_057815e0;
  if ((bRam0000000005c3abb6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1068);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    bRam0000000005c3abb6 = 1;
  }
  puVar2 = PTR_DAT_05777ce8;
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                    (uVar4,param_1,*(undefined8 *)puVar2);
  uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayCollectAnimation_4109bd0
                    (param_1);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_0579e470;
  if (lVar6 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057a1068,0);
    DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
              (uVar5,lVar6,*(undefined8 *)puVar3);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

