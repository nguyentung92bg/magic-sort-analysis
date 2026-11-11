/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlaySelectAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlaySelectAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlaySelectAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlaySelectAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlaySelectAnimation_410b300
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3abc6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d8678);
    FUN_012d0dc8(PTR_DAT_057cc518);
    bRam0000000005c3abc6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x18);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
    if (lVar3 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244
                (lVar3,param_1,*(undefined8 *)PTR_DAT_057d8678,0);
      uVar4 = DG_Tweening_DOVirtual__Float_1edbb8c(0,uVar5,uVar5,lVar3,0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar4,0);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

