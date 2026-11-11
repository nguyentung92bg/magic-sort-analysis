/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$ResetBlobView
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__ResetBlobView (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$ResetBlobView
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__ResetBlobView
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__ResetBlobView_2309458
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x50),0,0);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x58),0,0);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x60),0,0);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (cRam0000000005c259c0 == '\0') {
    FUN_012d0dc8(PTR_DAT_05803150);
    cRam0000000005c259c0 = '\x01';
  }
  if (lVar2 != 0) {
    UnityEngine_SpriteRenderer__set_size_4095cb8
              (*(undefined4 *)(*(long *)(*(long *)PTR_DAT_05803150 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05803150 + 0xb8) + 0xc),lVar2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_SpriteRenderer__set_drawMode_4095be4(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar2 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar2 != 0) {
          lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                     *(undefined4 *)(lVar1 + 0x14),lVar2,0);
          lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          if (lVar2 != 0) {
            if (pcRam0000000005c3a650 == (code *)0x0) {
              pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
            }
            (*pcRam0000000005c3a650)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

