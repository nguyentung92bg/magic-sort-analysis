/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobSelectScale
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectScale (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, int32_t waterHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobSelectScale
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectScale
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, int32_t waterHeight,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectScale_2309764
               (undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000005c2a662 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a662 = 1;
  }
  lVar2 = UnityEngine_Component__get_transform_408b444(param_3,0);
  if (lVar2 != 0) {
    fVar6 = (float)UnityEngine_Transform__get_localScale_4093230(lVar2,0);
    lVar2 = *(long *)(param_3 + 0x40);
    if (lVar2 != 0) {
      fVar8 = *(float *)(lVar2 + 0x94);
      fVar7 = *(float *)(lVar2 + 0xac);
      uVar3 = UnityEngine_Component__get_transform_408b444(param_3,0);
      if (*(long *)(param_3 + 0x40) != 0) {
        fVar8 = fVar8 * (float)param_4;
        fVar6 = fVar6 + fVar8;
        param_2 = param_2 + fVar8;
        fVar8 = fVar7;
        if (param_2 <= fVar7) {
          fVar8 = param_2;
        }
        if (param_2 < 1.0) {
          fVar8 = 1.0;
        }
                    /* try { // try from 02409808 to 0250985f has its CatchHandler @ 02409808
                       catch() { ... } // from try @ 02409808 with catch @ 02409808
                       catch() { ... } // from try @ 024098d8 with catch @ 02409808
                       catch() { ... } // from try @ 02409908 with catch @ 02409808
                       catch() { ... } // from try @ 0240997c with catch @ 02409808 */
        if (fVar6 <= fVar7) {
          fVar7 = fVar6;
        }
        if (fVar6 < 1.0) {
          fVar7 = 1.0;
        }
        lVar2 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (fVar7,fVar8,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x40) + 0x98),
                           uVar3,0);
        if (*(long *)(param_3 + 0x40) != 0) {
          uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x40) + 0xa0);
          if ((bRam0000000005c2b025 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05805638,uVar3,*(undefined8 *)PTR_DAT_057874c0);
            FUN_012d0dc8(PTR_DAT_05776a80);
            FUN_012d0dc8(PTR_DAT_0580b108);
            bRam0000000005c2b025 = 1;
          }
          puVar1 = PTR_DAT_05776a80;
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
            *(undefined4 *)(lVar2 + 0xb4) = 0x25;
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0580b108;
            if (lVar4 != 0) {
              DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar3,0);
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar5 != 0) {
                DG_Tweening_EaseFunction___ctor_1ed6eb4
                          (lVar5,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
                *(long *)(lVar2 + 0xb8) = lVar5;
                FUN_012d0d74((long *)(lVar2 + 0xb8),lVar5);
                return lVar2;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

