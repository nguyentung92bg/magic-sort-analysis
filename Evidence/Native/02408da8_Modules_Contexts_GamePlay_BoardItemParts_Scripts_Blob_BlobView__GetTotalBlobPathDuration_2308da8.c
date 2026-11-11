/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$GetTotalBlobPathDuration
float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetTotalBlobPathDuration (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o targetTopPosition, UnityEngine_Vector3_o endPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$GetTotalBlobPathDuration
   float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetTotalBlobPathDuration
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   targetTopPosition, UnityEngine_Vector3_o endPosition, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetTotalBlobPathDuration_2308da8
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,long param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_7 + 0x40) != 0) {
    param_2 = param_2 + *(float *)(*(long *)(param_7 + 0x40) + 0x5c);
    fVar2 = (float)Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetDynamicTopMoveDuration_2309b14
                             (param_1 + 0.0,param_2,param_3 + 0.0);
    lVar1 = *(long *)(param_7 + 0x40);
    if (lVar1 != 0) {
      fVar6 = *(float *)(lVar1 + 0x6c);
      fVar5 = *(float *)(lVar1 + 0x70);
      if (cRam0000000005c25e4a == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c25e4a = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar1 = *(long *)(param_7 + 0x40);
      if (lVar1 != 0) {
        param_4 = (param_1 + 0.0) - param_4;
        param_2 = param_2 - param_5;
        param_6 = (param_3 + 0.0) - param_6;
        fVar3 = SQRT(param_6 * param_6 + param_4 * param_4 + param_2 * param_2) /
                *(float *)(lVar1 + 0x78);
        fVar4 = fVar3;
        if (1.0 < fVar3) {
          fVar4 = 1.0;
        }
        if (fVar3 < 0.0) {
          fVar4 = 0.0;
        }
        return (fVar2 + fVar6 + (fVar5 - fVar6) * fVar4) - *(float *)(lVar1 + 0x7c);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

