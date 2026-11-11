/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$PlayCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t waterColorId, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$PlayCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t waterColorId,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayCompleteAnimation_2747624
          (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_057b7b78;
  if ((bRam0000000005c2c6b4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0577c4b8);
    FUN_012d0dc8(PTR_DAT_057b7b78);
    bRam0000000005c2c6b4 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_1);
    puVar6 = (undefined8 *)(lVar3 + 0x18);
    *puVar6 = param_2;
    FUN_012d0d74(puVar6,param_2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar8 = (undefined8 *)(param_1 + 0x68);
    *puVar8 = uVar4;
    FUN_012d0d74(puVar8,uVar4);
    uVar9 = *puVar8;
    uVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__UpdateTargetContainer_2749954
                      (param_1,param_3,param_4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar9,uVar4,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar4 = *puVar8;
      uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x74);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_0577c4b8,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar10,uVar4,lVar5,0);
        if (((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
           (lVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetMosaicConfigsForSize_2745f48
                              (*(long *)(param_1 + 0x28),
                               *(int *)(*(long *)(lVar3 + 0x18) + 0x18) + -1),
           puVar2 = PTR_DAT_057bcc80, puVar1 = PTR_DAT_057874c0, lVar3 != 0)) {
          uVar10 = *(undefined4 *)(lVar3 + 0x60);
          uVar7 = *(undefined8 *)(param_1 + 0x68);
          uVar4 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                            (*(undefined4 *)(lVar3 + 0x2c),*(undefined4 *)(lVar3 + 0x30),
                             *(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x24),
                             *(undefined8 *)(param_1 + 0x40),0,0);
          uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Flattened_2749d44
                            (*(undefined4 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x38));
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,uVar9,*(undefined8 *)puVar2);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar7,uVar4,0);
          uVar7 = *(undefined8 *)(param_1 + 0x68);
          uVar10 = *(undefined4 *)(lVar3 + 0x60);
          uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x44),
                             *(undefined4 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x24),
                             *(undefined8 *)(param_1 + 0x40),0);
          uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Flattened_2749d44
                            (*(undefined4 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x50));
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,uVar9,*(undefined8 *)puVar1);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar7,uVar4,0);
          uVar9 = *(undefined8 *)(param_1 + 0x68);
          uVar10 = *(undefined4 *)(lVar3 + 0x60);
          uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                            (*(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x24),
                             *(undefined8 *)(param_1 + 0x40),0,0);
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(lVar3 + 0x58),*(undefined8 *)puVar1);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar9,uVar4,0);
          uVar9 = *(undefined8 *)(param_1 + 0x68);
          uVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayMosaicDestroyAnimation_2749ee8
                            (param_1,*puVar6);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar9,uVar4,0);
          return *(undefined8 *)(param_1 + 0x68);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

