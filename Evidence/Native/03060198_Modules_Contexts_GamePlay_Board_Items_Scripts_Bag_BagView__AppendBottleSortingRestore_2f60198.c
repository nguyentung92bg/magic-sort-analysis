/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$AppendBottleSortingRestore
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__AppendBottleSortingRestore (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, DG_Tweening_Sequence_o* sequence, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$AppendBottleSortingRestore
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__AppendBottleSortingRestore
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, DG_Tweening_Sequence_o*
   sequence, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__AppendBottleSortingRestore_2f60198
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0575c420;
  if ((bRam0000000005c308f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057b83c8);
    FUN_012d0dc8(PTR_DAT_0575c420);
    bRam0000000005c308f3 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_3);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_057b83c8,0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(param_2,0,1);
      if ((lVar4 != 0) && ((uVar2 & 1) != 0)) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        DG_Tweening_Sequence__DoInsertCallback_1edffe8
                  (*(undefined4 *)(param_2 + 0xa0),param_2,lVar4);
      }
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

