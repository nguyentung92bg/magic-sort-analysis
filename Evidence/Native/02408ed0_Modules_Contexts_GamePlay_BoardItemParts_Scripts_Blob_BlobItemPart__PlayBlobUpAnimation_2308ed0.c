/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayBlobUpAnimation
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobUpAnimation (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, UnityEngine_Vector3_o originBottleBlobPosition, int32_t height, int32_t heightInWater, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayBlobUpAnimation
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobUpAnimation
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this,
   UnityEngine_Vector3_o originBottleBlobPosition, int32_t height, int32_t heightInWater, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobUpAnimation_2308ed0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5,
          int param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_05772750;
  lVar3 = *(long *)(param_4 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a661 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05804f60);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057819b0);
    FUN_012d0dc8(PTR_DAT_05772750);
    FUN_012d0dc8(PTR_DAT_057f1680);
    bRam0000000005c2a661 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar3;
    FUN_012d0d74((long *)(lVar4 + 0x10),lVar3);
    *(undefined4 *)(lVar4 + 0x18) = param_5;
    plVar8 = (long *)(lVar3 + 0x50);
    if (*plVar8 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(lVar3 + 0x50) = uVar5;
    FUN_012d0d74(plVar8,uVar5);
    uVar9 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectMoveUp_230963c
                      (param_1,param_2,param_3,lVar3);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar9,uVar5,0);
    if (*(long *)(lVar3 + 0x40) != 0) {
      uVar9 = *(undefined8 *)(lVar3 + 0x50);
      uVar10 = *(undefined4 *)(*(long *)(lVar3 + 0x40) + 0xa8);
      uVar5 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectScale_2309764
                        (lVar3,*(undefined4 *)(lVar4 + 0x18));
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar9,uVar5,0);
      puVar1 = PTR_DAT_057606c8;
      if (param_6 == 0xc) {
        lVar3 = *(long *)(lVar3 + 0x30);
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)PTR_DAT_057f1680;
          if (pcRam0000000005c28b88 == (code *)0x0) {
            pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar5,0xffffffff);
          }
          uVar10 = (*pcRam0000000005c28b88)(uVar5);
          if (pcRam0000000005c28b70 == (code *)0x0) {
            pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
          }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*pcRam0000000005c28b70)(0xff800000,lVar3,uVar10,0xffffffff);
          return uVar5;
        }
      }
      else {
        lVar7 = *plVar8;
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_057819b0,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar7,lVar6,0);
          if (*(long *)(lVar3 + 0x40) != 0) {
            uVar5 = *(undefined8 *)(lVar3 + 0x50);
            uVar10 = *(undefined4 *)(*(long *)(lVar3 + 0x40) + 0x88);
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar4,lVar3,*(undefined8 *)PTR_DAT_05804f60,0);
              uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar5,0,1);
              if ((lVar4 != 0) && ((uVar2 & 1) != 0)) {
                DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar10,uVar5,lVar4);
              }
              return uVar5;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

