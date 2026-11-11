/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$SetColor
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__SetColor (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, UnityEngine_Color_o blobColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$SetColor
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__SetColor
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this,
   UnityEngine_Color_o blobColor, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__SetColor_230913c
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_057f4cd0;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a66c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4cd0);
    bRam0000000005c2a66c = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (lVar3 != 0) {
    uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
    if (pcRam0000000005c34768 == (code *)0x0) {
      pcRam0000000005c34768 = (code *)FUN_012d0d84(&UNK_043b3aeb,uVar1,0);
    }
    (*pcRam0000000005c34768)(lVar3,uVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

