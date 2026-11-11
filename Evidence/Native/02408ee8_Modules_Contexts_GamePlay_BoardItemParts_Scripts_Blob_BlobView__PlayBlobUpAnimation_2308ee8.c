/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$PlayBlobUpAnimation
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayBlobUpAnimation (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o topPosition, int32_t waterHeight, int32_t heightInBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$PlayBlobUpAnimation
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayBlobUpAnimation
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   topPosition, int32_t waterHeight, int32_t heightInBottle, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayBlobUpAnimation_2308ee8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5,
          int param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_05772750;
  if ((bRam0000000005c2a661 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05804f60);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057819b0);
    FUN_012d0dc8(PTR_DAT_05772750);
    FUN_012d0dc8(PTR_DAT_057f1680);
    bRam0000000005c2a661 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_4);
    *(undefined4 *)(lVar3 + 0x18) = param_5;
    plVar7 = (long *)(param_4 + 0x50);
    if (*plVar7 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(param_4 + 0x50) = uVar4;
    FUN_012d0d74(plVar7,uVar4);
    uVar8 = *(undefined8 *)(param_4 + 0x50);
    uVar4 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectMoveUp_230963c
                      (param_1,param_2,param_3,param_4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar8,uVar4,0);
    if (*(long *)(param_4 + 0x40) != 0) {
      uVar8 = *(undefined8 *)(param_4 + 0x50);
      uVar9 = *(undefined4 *)(*(long *)(param_4 + 0x40) + 0xa8);
      uVar4 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectScale_2309764
                        (param_4,*(undefined4 *)(lVar3 + 0x18));
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar9,uVar8,uVar4,0);
      puVar1 = PTR_DAT_057606c8;
      if (param_6 == 0xc) {
        lVar3 = *(long *)(param_4 + 0x30);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)PTR_DAT_057f1680;
          if (pcRam0000000005c28b88 == (code *)0x0) {
            pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar4,0xffffffff);
          }
          uVar9 = (*pcRam0000000005c28b88)(uVar4);
          if (pcRam0000000005c28b70 == (code *)0x0) {
            pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
          }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*pcRam0000000005c28b70)(0xff800000,lVar3,uVar9,0xffffffff);
          return uVar4;
        }
      }
      else {
        lVar6 = *plVar7;
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        if (lVar5 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057819b0,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar6,lVar5,0);
          if (*(long *)(param_4 + 0x40) != 0) {
            uVar4 = *(undefined8 *)(param_4 + 0x50);
            uVar9 = *(undefined4 *)(*(long *)(param_4 + 0x40) + 0x88);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar3,param_4,*(undefined8 *)PTR_DAT_05804f60,0);
              uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,0,1);
              if ((lVar3 != 0) && ((uVar2 & 1) != 0)) {
                DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar9,uVar4,lVar3);
              }
              return uVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

