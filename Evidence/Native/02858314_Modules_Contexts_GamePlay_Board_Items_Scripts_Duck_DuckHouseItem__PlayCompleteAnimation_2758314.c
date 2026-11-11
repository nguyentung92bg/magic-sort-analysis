/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$PlayCompleteAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, float revealDelay, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02858a5c) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$PlayCompleteAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, float revealDelay,
   bool immediate, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__PlayCompleteAnimation_2758314
               (float param_1,float param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = PTR_DAT_057d5418;
  if ((bRam0000000005c2c72d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057beac0);
    FUN_012d0dc8(PTR_DAT_0579b168);
    FUN_012d0dc8(PTR_DAT_0577d468);
    FUN_012d0dc8(PTR_DAT_05760510);
    FUN_012d0dc8(PTR_DAT_057d5418);
    FUN_012d0dc8(PTR_DAT_05790050);
    FUN_012d0dc8(PTR_DAT_057957d8);
    FUN_012d0dc8(PTR_DAT_05803f38);
    FUN_012d0dc8(PTR_DAT_057a0eb0);
    FUN_012d0dc8(PTR_DAT_05784210);
    FUN_012d0dc8(PTR_DAT_057dde80);
    bRam0000000005c2c72d = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_3;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_3);
    if (*(long *)(param_3 + 0x48) != 0) {
      plVar17 = (long *)(lVar5 + 0x18);
      *plVar17 = *(long *)(*(long *)(param_3 + 0x48) + 0x28);
      FUN_012d0d74(plVar17);
      if ((*(long *)(param_3 + 0x58) != 0) && (*plVar17 != 0)) {
        lVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetDuckHouseConfigBySize_2756640
                          (*plVar17,*(int *)(*(long *)(param_3 + 0x58) + 0x18) + -1);
        if (*(long *)(param_3 + 0x48) != 0) {
          uVar7 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__PlayCompleteAnimation_2758e48
                            (*(long *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x58),param_4 & 1);
          puVar1 = PTR_DAT_057606c8;
          if ((*(long *)(param_3 + 0x48) != 0) &&
             (lVar12 = *(long *)(*(long *)(param_3 + 0x48) + 0x28), lVar12 != 0)) {
            fVar20 = *(float *)(lVar12 + 0x18);
            fVar23 = *(float *)(lVar12 + 0x4c);
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar12 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar12,lVar5,*(undefined8 *)PTR_DAT_057beac0,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                        (fVar20 + fVar23,uVar7,lVar12,0);
              puVar3 = PTR_DAT_057dde80;
              puVar2 = PTR_DAT_057a7f80;
              if (*(long *)(param_3 + 0x58) != 0) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_d8,*(long *)(param_3 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
                puVar4 = PTR_DAT_05805c10;
                fVar20 = 0.0;
                uStack_98 = uStack_d0;
                uStack_a0 = uStack_d8;
                lStack_90 = lStack_c8;
                while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                         (&uStack_a0,*(undefined8 *)PTR_DAT_057b41c8),
                      (uVar8 & 1) != 0) {
                  lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803f38);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  System_Object___ctor_23dfe5c(lVar12,0);
                  plVar18 = (long *)(lVar12 + 0x18);
                  *plVar18 = lVar5;
                  FUN_012d0d74(plVar18);
                  plVar19 = (long *)(lVar12 + 0x10);
                  *plVar19 = lStack_90;
                  FUN_012d0d74(plVar19);
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                             (*plVar19,0);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *plVar9;
                  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar8 != 0) {
                    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0575a2d8) {
                        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
                        fVar23 = param_2;
                        goto LAB_02858698;
                      }
                      uVar8 = uVar8 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0575a2d8,0xb);
                  fVar23 = param_2;
LAB_02858698:
                  lVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
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
                    fVar21 = fVar20 + *(float *)(lVar6 + 0x10);
                  }
                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar13,lVar12,*(undefined8 *)PTR_DAT_05790050,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar7,lVar13,0)
                  ;
                  lVar13 = *plVar19;
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(puVar4);
                    cRam0000000005c230a9 = '\x01';
                  }
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar14 = *(long *)(*plVar18 + 0x18);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
                  uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale_249e454
                                     (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                                      *(undefined4 *)(lVar15 + 0x14),*(undefined4 *)(lVar14 + 0xb4),
                                      lVar13,*(undefined8 *)(lVar14 + 0xb8),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar11,0);
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar18 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation_249e578
                                     (*(undefined4 *)(lVar13 + 0xcc),*(undefined4 *)(lVar13 + 0xc0),
                                      *(undefined4 *)(lVar13 + 0xc4),*(undefined4 *)(lVar13 + 200),
                                      0x42340000,*plVar19,*(undefined4 *)(lVar13 + 0xd0),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar11,0);
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar18 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  param_2 = *(float *)(lVar13 + 0xe8);
                  uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY_249e864
                                     (fVar23 + *(float *)(lVar13 + 0xd8),*plVar19,
                                      *(undefined8 *)(lVar13 + 0xe0),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar11,0);
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar18 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  fVar23 = *(float *)(lVar13 + 0xd4);
                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar13,lVar12,*(undefined8 *)PTR_DAT_057957d8,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                            (fVar21 + fVar23,uVar7,lVar13,0);
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar18 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar14 = *(long *)(*plVar19 + 0x88);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  fVar23 = *(float *)(lVar13 + 0xec);
                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                            (&uStack_d8,lVar14,*(undefined8 *)PTR_DAT_057b7918);
                  fVar20 = fVar20 + fVar23;
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
                    System_Object___ctor_23dfe5c(lVar13,0);
                    plVar19 = (long *)(lVar13 + 0x18);
                    *plVar19 = lVar12;
                    FUN_012d0d74(plVar19,lVar12);
                    plVar9 = (long *)(lVar13 + 0x10);
                    *plVar9 = lStack_b0;
                    FUN_012d0d74(plVar9);
                    plVar18 = (long *)*plVar9;
                    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    uVar8 = (**(code **)(*plVar18 + 0x418))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x420));
                    if ((uVar8 & 1) == 0) {
                      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar14,lVar13,*(undefined8 *)PTR_DAT_057a0eb0,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar21,uVar7,lVar14,0);
                      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                         (*plVar9,0);
                      if (cRam0000000005c230a9 == '\0') {
                        FUN_012d0dc8(puVar4);
                        cRam0000000005c230a9 = '\x01';
                      }
                      if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar13 = *(long *)(*plVar19 + 0x18);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar13 = *(long *)(lVar13 + 0x18);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar14 = *(long *)(*(long *)puVar4 + 0xb8);
                      param_2 = *(float *)(lVar14 + 0x10);
                      uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                                         (*(undefined4 *)(lVar14 + 0xc),param_2,
                                          *(undefined4 *)(lVar14 + 0x14),
                                          *(undefined4 *)(lVar13 + 0xb4),uVar11,0);
                      if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar13 = *(long *)(*plVar19 + 0x18);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar13 = *(long *)(lVar13 + 0x18);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      uVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                         (uVar11,*(undefined8 *)(lVar13 + 0xb8),
                                          *(undefined8 *)PTR_DAT_057874c0);
                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar11,0);
                    }
                    else {
                      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar14,lVar13,*(undefined8 *)PTR_DAT_05784210,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar21,uVar7,lVar14,0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_c0,*(undefined8 *)PTR_DAT_057605b8);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
                if ((*plVar17 != 0) && (lVar6 != 0)) {
                  fVar20 = *(float *)(*plVar17 + 0x18);
                  fVar23 = *(float *)(lVar6 + 0x14);
                  lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar12 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar12,lVar5,*(undefined8 *)PTR_DAT_0579b168,0);
                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                              (fVar20 + fVar23,uVar7,lVar12,0);
                    uVar22 = *(undefined4 *)(lVar6 + 0x18);
                    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar12 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar12,lVar5,*(undefined8 *)PTR_DAT_0577d468,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar22,uVar7,lVar12,0);
                      uVar22 = *(undefined4 *)(lVar6 + 0x24);
                      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar6 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar6,lVar5,*(undefined8 *)PTR_DAT_05760510,0);
                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                  (uVar22,uVar7,lVar6,0);
                        if ((param_4 & 1) == 0) {
                          if (*plVar17 == 0) goto LAB_02858d08;
                          DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                    (*(float *)(*plVar17 + 0x18) + param_1,uVar7,
                                     *(undefined8 *)PTR_DAT_057f03e0);
                        }
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
LAB_02858d08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

