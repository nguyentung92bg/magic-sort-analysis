/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$PlayCompleteAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, float keyRevealDelay, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0240ba04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$PlayCompleteAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, float
   keyRevealDelay, bool immediate, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__PlayCompleteAnimation_230b1f0
               (float param_1,float param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = PTR_DAT_05805ac8;
  if ((bRam0000000005c2a675 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05770168);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0575a1b0);
    FUN_012d0dc8(PTR_DAT_05796d10);
    FUN_012d0dc8(PTR_DAT_057bd898);
    FUN_012d0dc8(PTR_DAT_0578ac28);
    FUN_012d0dc8(PTR_DAT_0576fd88);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057b32e8);
    FUN_012d0dc8(PTR_DAT_0581bdc0);
    FUN_012d0dc8(PTR_DAT_0576c778);
    FUN_012d0dc8(PTR_DAT_05805ac8);
    FUN_012d0dc8(PTR_DAT_0577ac90);
    FUN_012d0dc8(PTR_DAT_057d8458);
    FUN_012d0dc8(PTR_DAT_057961d8);
    FUN_012d0dc8(PTR_DAT_057bf0c8);
    FUN_012d0dc8(PTR_DAT_057e2948);
    FUN_012d0dc8(PTR_DAT_057ecf90);
    FUN_012d0dc8(PTR_DAT_05806570);
    bRam0000000005c2a675 = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x18) = param_3;
    FUN_012d0d74((long *)(lVar4 + 0x18),param_3);
    if (*(long *)(param_3 + 0x48) != 0) {
      uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__get_WoodboxConfig_2607780
                        (*(long *)(param_3 + 0x48),0);
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      FUN_012d0d74();
                    /* try { // try from 0240b400 to 0250b457 has its CatchHandler @ 0240b400
                       catch() { ... } // from try @ 0240b400 with catch @ 0240b400
                       catch() { ... } // from try @ 0240b4c8 with catch @ 0240b400
                       catch() { ... } // from try @ 0240b4f8 with catch @ 0240b400
                       catch() { ... } // from try @ 0240b56c with catch @ 0240b400 */
      if (*(long *)(param_3 + 0x48) != 0) {
        lVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__get_WoodboxConfig_2607780
                          (*(long *)(param_3 + 0x48),0);
        if ((*(long *)(param_3 + 0x58) != 0) && (lVar6 != 0)) {
          lVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodBoxAnimationConfig__GetWoodBoxConfigsForSize_230a658
                            (lVar6,*(int *)(*(long *)(param_3 + 0x58) + 0x18) + -1);
          puVar1 = PTR_DAT_0576fd88;
          if (*(long *)(param_3 + 0x48) != 0) {
            uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__PlayWoodboxCompleteAnimation_26080ac
                              (*(long *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x58),param_4 & 1
                               ,0);
                    /* try { // try from 0240b458 to 0250b4c7 has its CatchHandler @ 0240b4c8 */
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar7 != 0) {
              System_Collections_Generic_HashSet_object____ctor_200a670
                        (lVar7,*(undefined8 *)PTR_DAT_0578ac28);
              puVar3 = PTR_DAT_05806570;
              puVar19 = (undefined8 *)PTR_DAT_057bf0c8;
              puVar2 = PTR_DAT_057a7f80;
              puVar1 = PTR_DAT_057606c8;
              if (*(long *)(param_3 + 0x58) != 0) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_d8,*(long *)(param_3 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
                fVar24 = 0.0;
                uStack_98 = uStack_d0;
                uStack_a0 = uStack_d8;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240b458 with catch @ 0240b4c8
                       try { // try from 0240b4c8 to 0250b4df has its CatchHandler @ 0240b400 */
                lStack_90 = lStack_c8;
                    /* try { // try from 0240b4e0 to 0250b4f7 has its CatchHandler @ 0240b564 */
                while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                         (&uStack_a0,*(undefined8 *)PTR_DAT_057b41c8),
                      (uVar8 & 1) != 0) {
                  lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057961d8);
                    /* try { // try from 0240b4f8 to 0250b553 has its CatchHandler @ 0240b400 */
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  System_Object___ctor_23dfe5c(lVar9,0);
                  plVar17 = (long *)(lVar9 + 0x18);
                  *plVar17 = lVar4;
                  FUN_012d0d74(plVar17);
                  plVar18 = (long *)(lVar9 + 0x10);
                  *plVar18 = lStack_90;
                  FUN_012d0d74(plVar18);
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                              (*plVar18,0);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *plVar10;
                  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    /* try { // try from 0240b554 to 0250b563 has its CatchHandler @ 0240b564 */
                  if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 0240b4e0 with catch @ 0240b564
                       catch() { ... } // from try @ 0240b554 with catch @ 0240b564 */
                    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                    /* try { // try from 0240b568 to 0250b56b has its CatchHandler @ 0240b574 */
                    /* try { // try from 0240b56c to 0250b577 has its CatchHandler @ 0240b400 */
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0575a2d8) {
                        puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
                        fVar22 = param_2;
                        goto LAB_0240b5a0;
                      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240b568 with catch @ 0240b574
                        */
                      uVar8 = uVar8 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0xb);
                  fVar22 = param_2;
LAB_0240b5a0:
                  lVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  UnityEngine_Transform__get_localPosition_4092c40(lVar13,0);
                  fVar21 = 0.0;
                  if ((param_4 & 1) == 0) {
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    fVar21 = fVar24 + *(float *)(lVar6 + 0x1c);
                  }
                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar13,lVar9,*(undefined8 *)PTR_DAT_0577ac90,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar5,lVar13,0)
                  ;
                  lVar13 = *plVar18;
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(PTR_DAT_05805c10);
                    cRam0000000005c230a9 = '\x01';
                  }
                  if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar14 = *(long *)(*plVar17 + 0x10);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar15 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 0240b67c to 0250b6cf has its CatchHandler @ 0240b67c
                       catch() { ... } // from try @ 0240b67c with catch @ 0240b67c
                       catch() { ... } // from try @ 0240b71c with catch @ 0240b67c
                       catch() { ... } // from try @ 0240b758 with catch @ 0240b67c
                       catch() { ... } // from try @ 0240b788 with catch @ 0240b67c
                       catch() { ... } // from try @ 0240b7fc with catch @ 0240b67c */
                  uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale_249e454
                                     (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                                      *(undefined4 *)(lVar15 + 0x14),*(undefined4 *)(lVar14 + 0x24),
                                      lVar13,*(undefined8 *)(lVar14 + 0x28),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar5,uVar12,0);
                  if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0240bc7c to 0250bc8b has its CatchHandler @ 0240bc8c */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar17 + 0x10);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation_249e578
                                     (*(undefined4 *)(lVar13 + 0x48),*(undefined4 *)(lVar13 + 0x3c),
                                      *(undefined4 *)(lVar13 + 0x40),*(undefined4 *)(lVar13 + 0x44),
                                      0x42340000,*plVar18,*(undefined4 *)(lVar13 + 0x4c),0);
                    /* try { // try from 0240b6d0 to 0250b71b has its CatchHandler @ 0240b758 */
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar5,uVar12,0);
                  if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar17 + 0x10);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0240bc3c with catch @ 0240bc8c
                       catch() { ... } // from try @ 0240bc7c with catch @ 0240bc8c */
                    FUN_012d0ef0();
                  }
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0240bc90 to 0250bc93 has its CatchHandler @ 0240bc9c */
                    FUN_012d0ef0();
                  }
                  param_2 = *(float *)(lVar13 + 0xc4);
                  uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY_249e864
                                     (fVar22 + *(float *)(lVar13 + 0xc0),*plVar18,
                                      *(undefined8 *)(lVar13 + 200),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar5,uVar12,0);
                    /* try { // try from 0240b71c to 0250b74b has its CatchHandler @ 0240b67c */
                  if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0240bc54 to 0250bc7b has its CatchHandler @ 0240bbc4 */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar17 + 0x10);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0240bc94 to 0250bc9f has its CatchHandler @ 0240bbc4 */
                    FUN_012d0ef0();
                  }
                  fVar22 = *(float *)(lVar13 + 0xb4);
                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                    /* try { // try from 0240b74c to 0250b757 has its CatchHandler @ 0240b758 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240b6d0 with catch @ 0240b758
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0240b74c with catch @ 0240b758
                       try { // try from 0240b758 to 0250b76f has its CatchHandler @ 0240b67c */
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar13,lVar9,*(undefined8 *)PTR_DAT_057d8458,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                            (fVar21 + fVar22,uVar5,lVar13,0);
                    /* try { // try from 0240b770 to 0250b787 has its CatchHandler @ 0240b7f4 */
                  if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar17 + 0x10);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240bc90 with catch @ 0240bc9c
                        */
                    FUN_012d0ef0();
                  }
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                    /* try { // try from 0240b788 to 0250b7e3 has its CatchHandler @ 0240b67c */
                  lVar14 = *(long *)(*plVar18 + 0x88);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  fVar22 = *(float *)(lVar13 + 0xb0);
                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                            (&uStack_d8,lVar14,*(undefined8 *)PTR_DAT_057b7918);
                  fVar24 = fVar24 + fVar22;
                  uStack_b8 = uStack_d0;
                  uStack_c0 = uStack_d8;
                  lStack_b0 = lStack_c8;
                  while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                           (&uStack_c0,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
                    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    /* try { // try from 0240b7e4 to 0250b7f3 has its CatchHandler @ 0240b7f4 */
                    System_Object___ctor_23dfe5c(lVar13,0);
                    plVar10 = (long *)(lVar13 + 0x18);
                    *plVar10 = lVar9;
                    /* catch() { ... } // from try @ 0240b770 with catch @ 0240b7f4
                       catch() { ... } // from try @ 0240b7e4 with catch @ 0240b7f4 */
                    /* try { // try from 0240b7f8 to 0250b7fb has its CatchHandler @ 0240b804 */
                    FUN_012d0d74(plVar10,lVar9);
                    /* try { // try from 0240b7fc to 0250b807 has its CatchHandler @ 0240b67c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240b7f8 with catch @ 0240b804
                        */
                    plVar18 = (long *)(lVar13 + 0x10);
                    *plVar18 = lStack_b0;
                    FUN_012d0d74(plVar18);
                    plVar17 = (long *)*plVar18;
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    uVar8 = (**(code **)(*plVar17 + 0x418))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x420));
                    if ((uVar8 & 1) == 0) {
                      uVar8 = System_Collections_Generic_HashSet_object___Contains_200acd8
                                        (lVar7,*plVar18,*(undefined8 *)PTR_DAT_057bd898);
                      if ((uVar8 & 1) == 0) {
                        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        lVar14 = *(long *)(*plVar10 + 0x18);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        lVar14 = *(long *)(lVar14 + 0x10);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        uVar12 = *(undefined8 *)(lVar14 + 0x28);
                        uVar23 = *(undefined4 *)(lVar14 + 0x24);
                        uVar20 = *(undefined8 *)(lVar14 + 0xe0);
                        lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575a1b0);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        System_Func_object__bool____ctor_338137c
                                  (lVar14,lVar13,*(undefined8 *)PTR_DAT_057e2948,0);
                        lVar14 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                                           (uVar20,lVar14,*(undefined8 *)PTR_DAT_05770168);
                        puVar19 = (undefined8 *)PTR_DAT_057bf0c8;
                        if (lVar14 != 0) {
                          uVar12 = *(undefined8 *)(lVar14 + 0x18);
                          uVar23 = *(undefined4 *)(lVar14 + 0x14);
                        }
                        lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar14,lVar13,*(undefined8 *)PTR_DAT_057ecf90,0);
                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                  (fVar21,uVar5,lVar14,0);
                        if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        uVar20 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                           (*plVar18,0);
                        if (cRam0000000005c230a9 == '\0') {
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230a9 = '\x01';
                        }
                        lVar13 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                        param_2 = *(float *)(lVar13 + 0x10);
                        uVar20 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                                           (*(undefined4 *)(lVar13 + 0xc),param_2,
                                            *(undefined4 *)(lVar13 + 0x14),uVar23,uVar20);
                        uVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                           (uVar20,uVar12,*(undefined8 *)PTR_DAT_057874c0);
                        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar5,uVar12,0);
                        System_Collections_Generic_HashSet_object___Add_200b82c
                                  (lVar7,*plVar18,*(undefined8 *)PTR_DAT_05796d10);
                      }
                    }
                    else {
                      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar14,lVar13,*puVar19,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar21,uVar5,lVar14,0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_c0,*(undefined8 *)PTR_DAT_057605b8);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
                uVar23 = _DAT_04321768;
                if ((param_4 & 1) == 0) {
                  if (lVar6 == 0) goto LAB_0240bcb4;
                  uVar23 = *(undefined4 *)(lVar6 + 0x20);
                }
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar7 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar7,lVar4,*(undefined8 *)PTR_DAT_057b32e8,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar23,uVar5,lVar7,0);
                  if (*(long *)(lVar4 + 0x10) != 0) {
                    uVar23 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0xd0);
                    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar7 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar7,lVar4,*(undefined8 *)PTR_DAT_0581bdc0,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar23,uVar5,lVar7,0);
                      if (lVar6 != 0) {
                        uVar23 = *(undefined4 *)(lVar6 + 0x18);
                        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                        if (lVar7 != 0) {
                    /* try { // try from 0240bbc4 to 0250bc03 has its CatchHandler @ 0240bbc4
                       catch() { ... } // from try @ 0240bbc4 with catch @ 0240bbc4
                       catch() { ... } // from try @ 0240bc18 with catch @ 0240bbc4
                       catch() { ... } // from try @ 0240bc54 with catch @ 0240bbc4
                       catch() { ... } // from try @ 0240bc94 with catch @ 0240bbc4 */
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar7,lVar4,*(undefined8 *)PTR_DAT_0576c778,0);
                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                    (uVar23,uVar5,lVar7,0);
                          if ((param_4 & 1) == 0) {
                    /* try { // try from 0240bc04 to 0250bc17 has its CatchHandler @ 0240bc24 */
                            DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                      (*(float *)(lVar6 + 0x24) + param_1,uVar5,
                                       *(undefined8 *)PTR_DAT_057f03e0);
                          }
                    /* try { // try from 0240bc18 to 0250bc3b has its CatchHandler @ 0240bbc4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240bc04 with catch @ 0240bc24
                        */
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
  }
LAB_0240bcb4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

