/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$MoveTargetWithScale
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__MoveTargetWithScale (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.ProgressItem$$MoveTargetWithScale
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__MoveTargetWithScale
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem_o* __this,
   UnityEngine_Transform_o* target, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_ProgressItem__MoveTargetWithScale_410c928
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3abcd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3abcd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (param_2 != 0) {
    UnityEngine_Transform__get_position_4092b08(param_2,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar3 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar3,0,0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
      uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
      lVar4 = *(long *)(param_1 + 0x50);
      if (lVar4 != 0) {
        uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar4 + 0x74),*(undefined4 *)(lVar4 + 0x78),
                           *(undefined4 *)(lVar4 + 0x7c),*(undefined4 *)(lVar4 + 0x80),uVar3,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

