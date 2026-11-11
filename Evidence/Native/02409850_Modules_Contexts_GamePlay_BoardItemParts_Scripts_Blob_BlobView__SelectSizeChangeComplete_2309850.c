/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$SelectSizeChangeComplete
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__SelectSizeChangeComplete (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$SelectSizeChangeComplete
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__SelectSizeChangeComplete
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__SelectSizeChangeComplete_2309850
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* try { // try from 02409860 to 025098d7 has its CatchHandler @ 024098d8 */
  if ((bRam0000000005c2a663 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1680);
    bRam0000000005c2a663 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Animator__Play_1f79afc(*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_057f1680,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_SpriteRenderer__set_drawMode_4095be4(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02409860 with catch @ 024098d8
                       try { // try from 024098d8 to 025098ef has its CatchHandler @ 02409808 */
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar1 != 0) {
                    /* try { // try from 024098f0 to 02509907 has its CatchHandler @ 02409974 */
          lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uStack_30 = *(undefined4 *)(lVar2 + 0xc);
          uStack_2c = *(undefined4 *)(lVar2 + 0x10);
          uStack_28 = *(undefined4 *)(lVar2 + 0x14);
                    /* try { // try from 02409908 to 02509963 has its CatchHandler @ 02409808 */
          if (pcRam0000000005c3a650 == (code *)0x0) {
            pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
          }
          (*pcRam0000000005c3a650)(lVar1,&uStack_30);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

