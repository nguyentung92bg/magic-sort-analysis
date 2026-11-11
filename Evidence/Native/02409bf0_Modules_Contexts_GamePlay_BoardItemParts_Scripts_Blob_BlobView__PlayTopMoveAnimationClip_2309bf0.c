/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$PlayTopMoveAnimationClip
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayTopMoveAnimationClip (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o targetTopPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$PlayTopMoveAnimationClip
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayTopMoveAnimationClip
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   targetTopPosition, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayTopMoveAnimationClip_2309bf0
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = param_2;
  fVar7 = param_3;
  if ((bRam0000000005c2a666 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ce808);
    FUN_012d0dc8(PTR_DAT_05759490);
    bRam0000000005c2a666 = 1;
  }
  lVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
  if (lVar3 != 0) {
    fVar5 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
    if (cRam0000000005c25e4a == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c25e4a = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                    /* try { // try from 02409c98 to 02509cbf has its CatchHandler @ 02409e50 */
      thunk_FUN_0130472c();
    }
    if ((*(long *)(param_4 + 0x40) != 0) && (lVar3 = *(long *)(param_4 + 0x30), lVar3 != 0)) {
                    /* try { // try from 02409cd8 to 02509d3b has its CatchHandler @ 02409e54 */
      puVar1 = (undefined8 *)PTR_DAT_05759490;
      if (*(float *)(*(long *)(param_4 + 0x40) + 0x68) <=
          SQRT((fVar7 - param_3) * (fVar7 - param_3) +
               (fVar5 - param_1) * (fVar5 - param_1) + (fVar6 - param_2) * (fVar6 - param_2))) {
        puVar1 = (undefined8 *)PTR_DAT_057ce808;
      }
      uVar4 = *puVar1;
      if (pcRam0000000005c28b88 == (code *)0x0) {
        pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar4,0xffffffff);
      }
      uVar2 = (*pcRam0000000005c28b88)(uVar4);
      if (pcRam0000000005c28b70 == (code *)0x0) {
        pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
      }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28b70)(0xff800000,lVar3,uVar2,0xffffffff);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

