/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$Recycle
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__Recycle (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$Recycle
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__Recycle
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__Recycle_23095b8(long param_1)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__ResetBlobView_2309458();
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar1,0,0);
      lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar1 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

