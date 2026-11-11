/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobEnterBottle
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobEnterBottle (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02409fe4) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobEnterBottle
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobEnterBottle
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   targetPosition, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobEnterBottle_2309ee0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
                    /* try { // try from 02409ee8 to 02509eef has its CatchHandler @ 02409efc */
                    /* catch() { ... } // from try @ 02409e6c with catch @ 02409ef0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02409eb4 with catch @ 02409efc
                       catch(type#2 @ 00000000) { ... } // from try @ 02409ee8 with catch @ 02409efc
                        */
  uVar3 = param_2;
  uVar11 = param_3;
  if ((bRam0000000005c2a669 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057b1c60);
    bRam0000000005c2a669 = 1;
  }
  fVar9 = (float)uVar11;
  fVar7 = (float)uVar3;
  if (*(long *)(param_4 + 0x30) != 0) {
    UnityEngine_Animator__Play_1f79afc(*(long *)(param_4 + 0x30),*(undefined8 *)PTR_DAT_057b1c60,0);
    lVar2 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar2 != 0) {
      fVar6 = (float)UnityEngine_Transform__get_position_4092b08(lVar2,0);
      if (cRam0000000005c25e4a == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c25e4a = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar2 = *(long *)(param_4 + 0x40);
      if (lVar2 != 0) {
        fVar6 = fVar6 - (float)param_1;
        fVar7 = fVar7 - (float)param_2;
        fVar9 = fVar9 - (float)param_3;
        fVar8 = *(float *)(lVar2 + 0x6c);
        fVar10 = *(float *)(lVar2 + 0x70);
        fVar7 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7) / *(float *)(lVar2 + 0x78);
        if (fVar7 < 0.0) {
          fVar7 = 0.0;
        }
        uVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
        lVar2 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                          (param_1,param_2,param_3,fVar8 + (fVar10 - fVar8) * fVar7,uVar3,0,0);
        if (*(long *)(param_4 + 0x40) != 0) {
          uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x40) + 0x48);
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

