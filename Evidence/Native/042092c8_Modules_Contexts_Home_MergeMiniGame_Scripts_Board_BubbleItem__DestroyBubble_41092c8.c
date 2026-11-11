/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.BubbleItem$$DestroyBubble
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem__DestroyBubble (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.BubbleItem$$DestroyBubble
   DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem__DestroyBubble
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem__DestroyBubble_41092c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c3abb4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2498);
    FUN_012d0dc8(PTR_DAT_057e71f8);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c3abb4 = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057d2498,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xec);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057e71f8,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar5,uVar3,lVar4,0);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

