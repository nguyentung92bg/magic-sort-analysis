/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayBlobDeselect
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDeselect (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, float blobTargetYPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayBlobDeselect
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDeselect
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, float
   blobTargetYPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDeselect_2309280
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a66a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057ce270);
    bRam0000000005c2a66a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  FUN_012d0d74((undefined8 *)(lVar2 + 0x60),uVar3);
  if (*(long *)(lVar2 + 0x30) != 0) {
    UnityEngine_Animator__Play_1f79afc(*(long *)(lVar2 + 0x30),*(undefined8 *)PTR_DAT_057ce270,0);
    uVar4 = *(undefined8 *)(lVar2 + 0x60);
    uVar3 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobDeselectMoveBack_230a05c
                      (param_1,lVar2);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar3,0);
    return *(undefined8 *)(lVar2 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

