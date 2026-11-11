/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobSelectSizeChange
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectSizeChange (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, int32_t waterHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobSelectSizeChange
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectSizeChange
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, int32_t waterHeight,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectSizeChange_2309914
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c2a664 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9160);
    FUN_012d0dc8(PTR_DAT_057b5800);
    FUN_012d0dc8(PTR_DAT_057d3900);
                    /* try { // try from 02409964 to 02509973 has its CatchHandler @ 02409974 */
    FUN_012d0dc8(PTR_DAT_05782870);
                    /* catch() { ... } // from try @ 024098f0 with catch @ 02409974
                       catch() { ... } // from try @ 02409964 with catch @ 02409974 */
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 02409978 to 0250997b has its CatchHandler @ 02409984 */
                    /* try { // try from 0240997c to 02509987 has its CatchHandler @ 02409808 */
    FUN_012d0dc8(PTR_DAT_0578b510);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02409978 with catch @ 02409984
                        */
                    /* try { // try from 02409988 to 02509c97 has its CatchHandler @ 02409988
                       catch() { ... } // from try @ 02409988 with catch @ 02409988
                       catch() { ... } // from try @ 02409d7c with catch @ 02409988
                       catch() { ... } // from try @ 02409e40 with catch @ 02409988
                       catch() { ... } // from try @ 02409edc with catch @ 02409988 */
    FUN_012d0dc8(PTR_DAT_05760708);
    bRam0000000005c2a664 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Animator__Play_1f79afc(*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_05760708,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_SpriteRenderer__set_drawMode_4095be4(*(long *)(param_1 + 0x20),1,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar3 != 0) {
          lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                     *(undefined4 *)(lVar6 + 0x14),lVar3,0);
          if ((*(long *)(param_1 + 0x40) != 0) &&
             (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x80), lVar3 != 0)) {
            System_Collections_Generic_List_Vector2___get_Item_22704f4
                      (lVar3,param_2,*(undefined8 *)PTR_DAT_0578b510);
            puVar1 = PTR_DAT_057d3900;
            if (*(long *)(param_1 + 0x20) != 0) {
              UnityEngine_SpriteRenderer__set_size_4095cb8(*(long *)(param_1 + 0x20),0);
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_05782870;
              if (lVar3 != 0) {
                DG_Tweening_Core_DOGetter_Vector2____ctor_156d69c
                          (lVar3,param_1,*(undefined8 *)PTR_DAT_057c9160,0);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar6 != 0) {
                  DG_Tweening_Core_DOSetter_Vector2____ctor_156ea7c
                            (lVar6,param_1,*(undefined8 *)PTR_DAT_057b5800,0);
                  lVar7 = *(long *)(param_1 + 0x40);
                  if (lVar7 != 0) {
                    uVar8 = *(undefined4 *)(lVar7 + 0x88);
                    uVar9 = *(undefined4 *)(lVar7 + 0x8c);
                    uVar10 = *(undefined4 *)(lVar7 + 0x90);
                    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    puVar1 = PTR_DAT_057815e0;
                    if ((bRam0000000005c28415 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057e44e8,lVar6,0);
                      FUN_012d0dc8(PTR_DAT_057815e0);
                      bRam0000000005c28415 = 1;
                    }
                    puVar2 = PTR_DAT_057e44e8;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    puVar1 = PTR_DAT_057815e0;
                    lVar7 = *(long *)puVar2;
                    if ((bRam0000000005c2ae92 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057815e0);
                      FUN_012d0dc8(PTR_DAT_058163b8);
                      bRam0000000005c2ae92 = 1;
                    }
                    puVar2 = PTR_DAT_058163b8;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    DG_Tweening_DOTween__InitCheck_1ed8408(0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    uVar4 = (**(code **)(**(long **)(lVar7 + 0x38) + 8))();
                    uVar5 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 8) + 8))
                                      (uVar9,uVar10,uVar8,uVar4,lVar3,lVar6,0);
                    if ((uVar5 & 1) == 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                      }
                      DG_Tweening_Core_TweenManager__Despawn_33305a0(uVar4,1,0);
                      uVar4 = 0;
                    }
                    return uVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

