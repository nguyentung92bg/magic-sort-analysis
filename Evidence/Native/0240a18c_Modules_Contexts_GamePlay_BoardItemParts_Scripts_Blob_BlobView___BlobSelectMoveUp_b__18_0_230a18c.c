/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$<BlobSelectMoveUp>b__18_0
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView___BlobSelectMoveUp_b__18_0 (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$<BlobSelectMoveUp>b__18_0
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView___BlobSelectMoveUp_b__18_0
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView___BlobSelectMoveUp_b__18_0_230a18c
               (undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)UnityEngine_Component__get_transform_408b444(param_1,0);
  if (plVar2 != (long *)0x0) {
    if ((bRam0000000005c3a590 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05807f60,0,0);
      FUN_012d0dc8(PTR_DAT_057de130);
      FUN_012d0dc8(PTR_DAT_057c0b18);
      bRam0000000005c3a590 = 1;
    }
    puVar1 = PTR_DAT_057c0b18;
    if ((plVar2 != (long *)0x0) && (*plVar2 == *(long *)PTR_DAT_057de130)) {
      if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Debug__LogWarning_407ad74(*(undefined8 *)puVar1,plVar2);
    }
    if (pcRam0000000005c3a5a0 == (code *)0x0) {
      pcRam0000000005c3a5a0 = (code *)FUN_012d0d84(&UNK_043eec3f);
    }
                    /* WARNING: Could not recover jumptable at 0x041934a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a5a0)(plVar2,0,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

