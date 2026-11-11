/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$PlayProgressAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayProgressAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, int32_t waterColorId, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$PlayProgressAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayProgressAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, int32_t waterColorId,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayProgressAnimation_274753c
          (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2c6b3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c2c6b3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__UpdateTargetContainer_2749954
                    (param_1,param_2,param_3);
  uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar3,uVar4,0);
  if ((uVar2 & 1) != 0) {
    DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar3,uVar4);
  }
  return uVar3;
}

