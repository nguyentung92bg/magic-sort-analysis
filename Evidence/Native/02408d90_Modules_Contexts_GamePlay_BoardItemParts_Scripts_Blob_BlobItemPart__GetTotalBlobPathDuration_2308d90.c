/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$GetTotalBlobPathDuration
float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetTotalBlobPathDuration (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, UnityEngine_Vector3_o getBlobUpPosition, UnityEngine_Vector3_o waterLineDropEndPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$GetTotalBlobPathDuration
   float 
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetTotalBlobPathDuration
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this,
   UnityEngine_Vector3_o getBlobUpPosition, UnityEngine_Vector3_o waterLineDropEndPosition, const
   MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetTotalBlobPathDuration_2308d90
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,long param_7)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(long *)(param_7 + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    param_2 = param_2 + *(float *)(*(long *)(lVar1 + 0x40) + 0x5c);
    fVar3 = (float)Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetDynamicTopMoveDuration_2309b14
                             (param_1 + 0.0,param_2,param_3 + 0.0);
    lVar2 = *(long *)(lVar1 + 0x40);
    if (lVar2 != 0) {
      fVar7 = *(float *)(lVar2 + 0x6c);
      fVar6 = *(float *)(lVar2 + 0x70);
      if (cRam0000000005c25e4a == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c25e4a = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar1 = *(long *)(lVar1 + 0x40);
      if (lVar1 != 0) {
        param_4 = (param_1 + 0.0) - param_4;
        param_2 = param_2 - param_5;
        param_6 = (param_3 + 0.0) - param_6;
        fVar4 = SQRT(param_6 * param_6 + param_4 * param_4 + param_2 * param_2) /
                *(float *)(lVar1 + 0x78);
        fVar5 = fVar4;
        if (1.0 < fVar4) {
          fVar5 = 1.0;
        }
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        return (fVar3 + fVar7 + (fVar6 - fVar7) * fVar5) - *(float *)(lVar1 + 0x7c);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

