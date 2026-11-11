/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetView$$SetView
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SetView (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView_o* __this, int32_t closedCarpetCount, int32_t initialCarpetCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetView$$SetView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SetView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView_o* __this, int32_t
   closedCarpetCount, int32_t initialCarpetCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SetView_2f5cf4c
               (long param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000005c308dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_05793f20);
    FUN_012d0dc8(PTR_DAT_057c2298);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c308dd = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plVar15 = (long *)(param_1 + 0x28);
  if (((*plVar15 != 0) && (lVar12 = *(long *)(*plVar15 + 0x38), lVar12 != 0)) &&
     (lVar12 = UnityEngine_Component__get_gameObject_408b480(lVar12,0), lVar12 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar12,1,0);
    if ((*plVar15 != 0) && (lVar12 = *(long *)(*plVar15 + 0x48), lVar12 != 0)) {
      lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
      if ((*plVar15 != 0) &&
         ((lVar14 = *(long *)(*plVar15 + 0x28), lVar14 != 0 &&
          (lVar14 = *(long *)(lVar14 + 0x80), lVar14 != 0)))) {
        uVar17 = System_Collections_Generic_List_float___get_Item_1d70b20
                           (lVar14,param_3 - param_2,*(undefined8 *)PTR_DAT_0576d090);
        if ((*plVar15 != 0) &&
           (((lVar14 = *(long *)(*plVar15 + 0x48), lVar14 != 0 &&
             (lVar14 = UnityEngine_Component__get_transform_408b444(lVar14,0), lVar14 != 0)) &&
            (UnityEngine_Transform__get_localScale_4093230(lVar14,0), lVar12 != 0)))) {
          UnityEngine_Transform__set_localScale_40932d0(uVar17,lVar12,0);
          puVar10 = PTR_DAT_05805c10;
          puVar9 = PTR_DAT_057c2298;
          lVar12 = *plVar15;
          if (lVar12 != 0) {
            iVar16 = 1;
            while (lVar14 = *(long *)(lVar12 + 0x78), lVar14 != 0) {
              iVar7 = iVar16 + -1;
              if (*(int *)(lVar14 + 0x18) <= iVar7) {
                iVar16 = 0;
                goto LAB_0305d2a0;
              }
              lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar14,iVar7,*(undefined8 *)puVar9);
              if ((lVar12 == 0) ||
                 (lVar12 = UnityEngine_Component__get_gameObject_408b480(lVar12,0), lVar12 == 0))
              break;
              UnityEngine_GameObject__SetActive_408e318(lVar12,iVar7 <= param_2 + -1,0);
              if ((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x78), lVar12 == 0)) break;
              lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar12,iVar7,*(undefined8 *)puVar9);
                    /* try { // try from 0305d148 to 0315d14b has its CatchHandler @ 0305d324 */
                    /* try { // try from 0305d158 to 0315d15f has its CatchHandler @ 0305d328 */
              if (((*plVar15 == 0) || (lVar14 = *(long *)(*plVar15 + 0x20), lVar14 == 0)) ||
                 (lVar12 == 0)) break;
                    /* try { // try from 0305d160 to 0315d27b has its CatchHandler @ 0305ce70 */
              lVar4 = 0x20;
              if (param_2 != iVar16) {
                lVar4 = 0x28;
              }
              UnityEngine_SpriteRenderer__set_sprite_4095b64
                        (lVar12,*(undefined8 *)(lVar14 + lVar4),0);
              if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x78), lVar12 == 0)) ||
                 (lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar12,iVar7,*(undefined8 *)puVar9), lVar12 == 0)) break;
              lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
              if (param_2 == iVar16) {
                if ((*plVar15 == 0) || (lVar14 = *(long *)(*plVar15 + 0x28), lVar14 == 0)) break;
                puVar1 = (undefined4 *)(lVar14 + 0x1ec);
                puVar2 = (undefined4 *)(lVar14 + 0x1f0);
                puVar3 = (undefined4 *)(lVar14 + 500);
              }
              else {
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(puVar10);
                  cRam0000000005c230a9 = '\x01';
                }
                lVar14 = *(long *)(*(long *)puVar10 + 0xb8);
                puVar1 = (undefined4 *)(lVar14 + 0xc);
                puVar2 = (undefined4 *)(lVar14 + 0x10);
                puVar3 = (undefined4 *)(lVar14 + 0x14);
              }
              if (lVar12 == 0) break;
              UnityEngine_Transform__set_localScale_40932d0(*puVar1,*puVar2,*puVar3,lVar12,0);
              if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x78), lVar12 == 0)) ||
                 (lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar12,iVar7,*(undefined8 *)puVar9), lVar12 == 0)) break;
              lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
              if (((*plVar15 == 0) || (lVar14 = *(long *)(*plVar15 + 0x28), lVar14 == 0)) ||
                 (lVar12 == 0)) break;
              bVar11 = param_2 != iVar16;
              lVar4 = 0x1f8;
              if (bVar11) {
                lVar4 = 0x204;
              }
              lVar5 = 0x1fc;
              if (bVar11) {
                lVar5 = 0x208;
              }
              lVar6 = 0x200;
              if (bVar11) {
                lVar6 = 0x20c;
              }
                    /* try { // try from 0305d27c to 0315d27f has its CatchHandler @ 0305d2cc */
              UnityEngine_Transform__set_localPosition_4092ce0
                        (*(undefined4 *)(lVar14 + lVar4),*(undefined4 *)(lVar14 + lVar5),
                         *(undefined4 *)(lVar14 + lVar6),lVar12,0);
              lVar12 = *plVar15;
                    /* try { // try from 0305d28c to 0315d293 has its CatchHandler @ 0305d2d0 */
              iVar16 = iVar16 + 1;
              if (lVar12 == 0) break;
            }
          }
        }
      }
    }
  }
  goto LAB_0305d3d0;
LAB_0305d2a0:
  puVar8 = PTR_DAT_057c2030;
  lVar14 = *(long *)(lVar12 + 0x80);
  if (lVar14 == 0) goto LAB_0305d3d0;
  if (*(int *)(lVar14 + 0x18) <= iVar16) {
                    /* catch() { ... } // from try @ 0305d340 with catch @ 0305d354 */
    iVar16 = 0;
    goto LAB_0305d360;
  }
  lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                     (lVar14,iVar16,*(undefined8 *)puVar9);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0305d27c with catch @ 0305d2cc
                        */
  if ((lVar12 == 0) ||
     (lVar12 = UnityEngine_Component__get_gameObject_408b480(lVar12,0), lVar12 == 0))
  goto LAB_0305d3d0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0305d28c with catch @ 0305d2d0
                        */
  UnityEngine_GameObject__SetActive_408e318(lVar12,iVar16 < param_2 + -1,0);
                    /* try { // try from 0305d2e8 to 0315d2eb has its CatchHandler @ 0305d2f8 */
                    /* catch() { ... } // from try @ 0305d2e8 with catch @ 0305d2f8 */
  if ((*plVar15 == 0) ||
     ((lVar12 = *(long *)(*plVar15 + 0x80), lVar12 == 0 ||
      (lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar12,iVar16,*(undefined8 *)puVar9), lVar12 == 0)))) goto LAB_0305d3d0;
  lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
                    /* try { // try from 0305d308 to 0315d323 has its CatchHandler @ 0305d388 */
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(puVar10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar12 == 0) goto LAB_0305d3d0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0305d148 with catch @ 0305d324
                       try { // try from 0305d324 to 0315d33f has its CatchHandler @ 0305ce70 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0305d158 with catch @ 0305d328
                        */
  lVar14 = *(long *)(*(long *)puVar10 + 0xb8);
  UnityEngine_Transform__set_localScale_40932d0
            (*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
             *(undefined4 *)(lVar14 + 0x14),lVar12,0);
                    /* try { // try from 0305d340 to 0315d343 has its CatchHandler @ 0305d354 */
  lVar12 = *plVar15;
  iVar16 = iVar16 + 1;
  if (lVar12 == 0) goto LAB_0305d3d0;
  goto LAB_0305d2a0;
  while( true ) {
    if (*(int *)(lVar14 + 0x18) <= iVar16) {
      if (*(long *)(lVar12 + 0x68) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_a8,*(long *)(lVar12 + 0x68),*(undefined8 *)PTR_DAT_0579f3e8);
        puVar9 = PTR_DAT_057fbae0;
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        uStack_80 = uStack_98;
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_90,*(undefined8 *)puVar9), (uVar13 & 1) != 0) {
          DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0(0x3f800000,0,uStack_80,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_90,*(undefined8 *)PTR_DAT_057936b8);
        lVar12 = *plVar15;
        if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (lVar14 = *(long *)(*(long *)(lVar12 + 0x28) + 0x20), lVar14 != 0)) {
          lVar12 = *(long *)(lVar12 + 0x38);
          System_Collections_Generic_List_Vector3___get_Item_2275a94
                    (lVar14,0,*(undefined8 *)PTR_DAT_05793f20);
          if (lVar12 != 0) {
            UnityEngine_Transform__set_localPosition_4092ce0(lVar12,0);
            if ((*plVar15 != 0) && (lVar12 = *(long *)(*plVar15 + 0x38), lVar12 != 0)) {
              lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
              if ((*plVar15 != 0) &&
                 (((lVar14 = *(long *)(*plVar15 + 0x28), lVar14 != 0 &&
                   (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) &&
                  (uVar17 = System_Collections_Generic_List_float___get_Item_1d70b20
                                      (lVar14,0,*(undefined8 *)PTR_DAT_0576d090), lVar12 != 0)))) {
                UnityEngine_Transform__set_localScale_40932d0(uVar17,0x3f800000,0x3f800000,lVar12,0)
                ;
                if (*plVar15 != 0) {
                  DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                            (0x3f800000,0,*(undefined8 *)(*plVar15 + 0x50),0);
                  if ((*plVar15 != 0) && (lVar12 = *(long *)(*plVar15 + 0x50), lVar12 != 0)) {
                    lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
                    if ((*plVar15 != 0) &&
                       ((lVar14 = *(long *)(*plVar15 + 0x50), lVar14 != 0 &&
                        (lVar14 = UnityEngine_Component__get_transform_408b444(lVar14,0),
                        lVar14 != 0)))) {
                      uVar17 = UnityEngine_Transform__get_localPosition_4092c40(lVar14,0);
                      if ((*plVar15 != 0) &&
                         ((lVar14 = *(long *)(*plVar15 + 0x28), lVar14 != 0 && (lVar12 != 0)))) {
                        lVar4 = 0x1a0;
                        if (param_2 != 1) {
                          lVar4 = 0x194;
                        }
                        UnityEngine_Transform__set_localPosition_4092ce0
                                  (uVar17,*(undefined4 *)(lVar14 + lVar4),0,lVar12,0);
                        if ((*plVar15 != 0) && (lVar12 = *(long *)(*plVar15 + 0x50), lVar12 != 0)) {
                          lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
                          if ((*plVar15 != 0) &&
                             ((lVar14 = *(long *)(*plVar15 + 0x28), lVar14 != 0 && (lVar12 != 0))))
                          {
                            bVar11 = param_2 != 1;
                            lVar4 = 0x184;
                            if (bVar11) {
                              lVar4 = 0x178;
                            }
                            lVar5 = 0x188;
                            if (bVar11) {
                              lVar5 = 0x17c;
                            }
                            lVar6 = 0x18c;
                            if (bVar11) {
                              lVar6 = 0x180;
                            }
                            UnityEngine_Transform__set_localScale_40932d0
                                      (*(undefined4 *)(lVar14 + lVar4),
                                       *(undefined4 *)(lVar14 + lVar5),
                                       *(undefined4 *)(lVar14 + lVar6),lVar12,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
                    /* try { // try from 0305d374 to 0315d37f has its CatchHandler @ 0305ce70 */
    lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar14,iVar16,*(undefined8 *)puVar8);
                    /* try { // try from 0305d380 to 0315d387 has its CatchHandler @ 0305d388 */
    if (lVar12 == 0) break;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0305d308 with catch @ 0305d388
                       catch(type#2 @ 00000000) { ... } // from try @ 0305d364 with catch @ 0305d388
                       catch(type#2 @ 00000000) { ... } // from try @ 0305d380 with catch @ 0305d388
                        */
    lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(puVar10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar12 == 0) break;
    lVar14 = *(long *)(*(long *)puVar10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
               *(undefined4 *)(lVar14 + 0x14),lVar12,0);
    lVar12 = *plVar15;
    iVar16 = iVar16 + 1;
    if (lVar12 == 0) break;
LAB_0305d360:
    lVar14 = *(long *)(lVar12 + 0x70);
                    /* try { // try from 0305d364 to 0315d373 has its CatchHandler @ 0305d388 */
    if (lVar14 == 0) break;
  }
LAB_0305d3d0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

