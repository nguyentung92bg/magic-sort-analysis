/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayBlobDownAnimation
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDownAnimation (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, UnityEngine_Vector3_o getBlobUpPosition, UnityEngine_Vector3_o waterLineDropEndPosition, int32_t bottleCountInBetween, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayBlobDownAnimation
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDownAnimation
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this,
   UnityEngine_Vector3_o getBlobUpPosition, UnityEngine_Vector3_o waterLineDropEndPosition, int32_t
   bottleCountInBetween, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDownAnimation_2308b7c
               (float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,long param_7,undefined4 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_058150a0;
  lVar3 = *(long *)(param_7 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a667 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057dc478);
    FUN_012d0dc8(PTR_DAT_0580a228);
    FUN_012d0dc8(PTR_DAT_058150a0);
    bRam0000000005c2a667 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar3;
    FUN_012d0d74((long *)(lVar4 + 0x10),lVar3);
    *(undefined4 *)(lVar4 + 0x28) = param_8;
    *(undefined4 *)(lVar4 + 0x2c) = param_4;
    *(undefined4 *)(lVar4 + 0x30) = param_5;
    *(undefined4 *)(lVar4 + 0x34) = param_6;
    plVar7 = (long *)(lVar3 + 0x58);
    if (*plVar7 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(lVar3 + 0x58) = uVar5;
    FUN_012d0d74(plVar7,uVar5);
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(lVar3 + 0x40) != 0) {
      fVar9 = *(float *)(*(long *)(lVar3 + 0x40) + 0x5c);
      *(float *)(lVar4 + 0x18) = param_1 + 0.0;
      *(float *)(lVar4 + 0x1c) = param_2 + fVar9;
      *(float *)(lVar4 + 0x20) = param_3 + 0.0;
      uVar8 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetDynamicTopMoveDuration_2309b14
                        (lVar3);
      *(undefined4 *)(lVar4 + 0x24) = uVar8;
      Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayTopMoveAnimationClip_2309bf0
                (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                 *(undefined4 *)(lVar4 + 0x20),lVar3);
      uVar5 = *(undefined8 *)(lVar3 + 0x58);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,lVar4,*(undefined8 *)PTR_DAT_057dc478,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar3,0);
        lVar6 = *plVar7;
        uVar8 = *(undefined4 *)(lVar4 + 0x24);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,lVar4,*(undefined8 *)PTR_DAT_0580a228,0);
          uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,0,1);
          if ((lVar3 != 0) && ((uVar2 & 1) != 0)) {
            DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar8,lVar6,lVar3);
          }
          return lVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

