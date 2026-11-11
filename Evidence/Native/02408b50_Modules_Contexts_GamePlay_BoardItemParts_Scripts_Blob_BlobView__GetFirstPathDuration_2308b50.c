/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$GetFirstPathDuration
float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetFirstPathDuration (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o targetTopPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$GetFirstPathDuration
   float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetFirstPathDuration
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   targetTopPosition, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetFirstPathDuration_2308b50
          (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  param_2 = param_2 + *(float *)(*(long *)(param_4 + 0x40) + 0x5c);
  fVar4 = param_2;
  fVar5 = param_3 + 0.0;
  lVar2 = UnityEngine_Component__get_transform_408b444(param_4,0);
  if (lVar2 != 0) {
    fVar3 = (float)UnityEngine_Transform__get_position_4092b08(lVar2,0);
    if (cRam0000000005c25e4a == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c25e4a = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar2 = *(long *)(param_4 + 0x40);
    if (lVar2 != 0) {
      fVar3 = fVar3 - (param_1 + 0.0);
      fVar4 = fVar4 - param_2;
      fVar5 = fVar5 - (param_3 + 0.0);
      lVar1 = 0x60;
      if (*(float *)(lVar2 + 0x68) <= SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4)) {
        lVar1 = 100;
      }
      return *(undefined4 *)(lVar2 + lVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

