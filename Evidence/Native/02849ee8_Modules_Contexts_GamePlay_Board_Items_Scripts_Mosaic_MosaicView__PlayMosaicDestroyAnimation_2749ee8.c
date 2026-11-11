/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$PlayMosaicDestroyAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayMosaicDestroyAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0284a640) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$PlayMosaicDestroyAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayMosaicDestroyAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayMosaicDestroyAnimation_2749ee8
          (undefined1 param_1 [16],float param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = PTR_DAT_0577ad08;
  if ((bRam0000000005c2c6b6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
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
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057d76e8);
    FUN_012d0dc8(PTR_DAT_0577ad08);
    FUN_012d0dc8(PTR_DAT_05771ab0);
    FUN_012d0dc8(PTR_DAT_057cca78);
    FUN_012d0dc8(PTR_DAT_057e59f8);
    FUN_012d0dc8(PTR_DAT_057d6dc0);
    FUN_012d0dc8(PTR_DAT_0581b000);
    FUN_012d0dc8(PTR_DAT_0580aa98);
    bRam0000000005c2c6b6 = 1;
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
    *(long *)(lVar5 + 0x10) = (long)param_3;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_3);
    *(long *)(lVar5 + 0x20) = param_3[5];
    FUN_012d0d74();
    puVar2 = PTR_DAT_057fc1d0;
    puVar1 = PTR_DAT_057815e0;
    if ((param_4 != 0) && (param_3[5] != 0)) {
      lVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetMosaicConfigsForSize_2745f48
                        (param_3[5],*(int *)(param_4 + 0x18) + -1);
      *(int *)(lVar5 + 0x18) = *(int *)(param_4 + 0x18) + -1;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar8 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
      uVar7 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar7,uVar8,*(undefined8 *)puVar2);
      puVar1 = PTR_DAT_057606c8;
      if (lVar6 != 0) {
        uVar19 = *(undefined4 *)(lVar6 + 0x14);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        puVar4 = PTR_DAT_0580aa98;
        puVar3 = PTR_DAT_057a7f80;
        puVar2 = PTR_DAT_05768d80;
        if (lVar9 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar5,*(undefined8 *)PTR_DAT_057d76e8,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar19,uVar7,lVar9,0);
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_d8,param_4,*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_05805c10;
          fVar22 = 0.0;
          uStack_98 = uStack_d0;
          uStack_a0 = uStack_d8;
          lStack_90 = lStack_c8;
          while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_a0,*(undefined8 *)PTR_DAT_057b41c8), (uVar10 & 1) != 0)
          {
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e59f8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Object___ctor_23dfe5c(lVar9,0);
            plVar17 = (long *)(lVar9 + 0x18);
            *plVar17 = lVar5;
            FUN_012d0d74(plVar17,lVar5);
            plVar18 = (long *)(lVar9 + 0x10);
            *plVar18 = lStack_90;
            FUN_012d0d74(plVar18);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            plVar11 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                        (*plVar18,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0575a2d8) {
                  puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
                  fVar21 = param_2;
                  goto LAB_0284a270;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0575a2d8,0xb);
            fVar21 = param_2;
LAB_0284a270:
            lVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            UnityEngine_Transform__get_localPosition_4092c40(lVar13,0);
            fVar20 = *(float *)(lVar6 + 0x18);
            lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar13,lVar9,*(undefined8 *)PTR_DAT_05771ab0,0)
            ;
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar20,uVar7,lVar13,0);
            lVar13 = *plVar18;
            if (cRam0000000005c230a9 == '\0') {
              FUN_012d0dc8(puVar2);
              cRam0000000005c230a9 = '\x01';
            }
            if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar14 = *(long *)(*plVar17 + 0x20);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar15 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale_249e454
                              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                               *(undefined4 *)(lVar15 + 0x14),*(undefined4 *)(lVar14 + 0x24),lVar13,
                               *(undefined8 *)(lVar14 + 0x28),0);
            fVar20 = fVar22 + fVar20;
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar20,uVar7,uVar8,0);
            if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar17 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation_249e578
                              (*(undefined4 *)(lVar13 + 0x3c),*(undefined4 *)(lVar13 + 0x30),
                               *(undefined4 *)(lVar13 + 0x34),*(undefined4 *)(lVar13 + 0x38),
                               0x42340000,*plVar18,*(undefined4 *)(lVar13 + 0x40),0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar20,uVar7,uVar8,0);
            if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar17 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            param_2 = *(float *)(lVar13 + 0x58);
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY_249e864
                              (fVar21 + *(float *)(lVar13 + 0x48),*plVar18,
                               *(undefined8 *)(lVar13 + 0x50),0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar20,uVar7,uVar8,0);
            if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar17 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            fVar21 = *(float *)(lVar13 + 0x44);
            lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar13,lVar9,*(undefined8 *)PTR_DAT_057cca78,0)
            ;
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                      (fVar20 + fVar21,uVar7,lVar13,0);
            if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar17 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar14 = *(long *)(*plVar18 + 0x88);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            fVar21 = *(float *)(lVar13 + 0x5c);
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_d8,lVar14,*(undefined8 *)PTR_DAT_057b7918);
            fVar22 = fVar22 + fVar21;
            uStack_b8 = uStack_d0;
            uStack_c0 = uStack_d8;
            lStack_b0 = lStack_c8;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_c0,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
              lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Object___ctor_23dfe5c(lVar13,0);
              plVar18 = (long *)(lVar13 + 0x18);
              *plVar18 = lVar9;
              FUN_012d0d74(plVar18,lVar9);
              plVar11 = (long *)(lVar13 + 0x10);
              *plVar11 = lStack_b0;
              FUN_012d0d74(plVar11);
              plVar17 = (long *)*plVar11;
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar10 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
              if ((uVar10 & 1) == 0) {
                plVar17 = (long *)*plVar11;
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar10 = (**(code **)(*plVar17 + 0x418))(plVar17,*(undefined8 *)(*plVar17 + 0x420));
                if ((uVar10 & 1) == 0) {
                  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar14,lVar13,*(undefined8 *)PTR_DAT_057d6dc0,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar20,uVar7,lVar14,0)
                  ;
                  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                    (*plVar11,0);
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(puVar2);
                    cRam0000000005c230a9 = '\x01';
                  }
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar18 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(lVar13 + 0x20);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar14 = *(long *)(*(long *)puVar2 + 0xb8);
                  param_2 = *(float *)(lVar14 + 0x10);
                  uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                                    (*(undefined4 *)(lVar14 + 0xc),param_2,
                                     *(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar13 + 0x24),
                                     uVar8,0);
                  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar18 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(lVar13 + 0x20);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar8,*(undefined8 *)(lVar13 + 0x28),
                                     *(undefined8 *)PTR_DAT_057874c0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar20,uVar7,uVar8,0);
                }
                else {
                  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar14,lVar13,*(undefined8 *)PTR_DAT_0581b000,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar20,uVar7,lVar14,0)
                  ;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_c0,*(undefined8 *)PTR_DAT_057605b8);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
          uVar19 = *(undefined4 *)(lVar6 + 0x28);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar5 != 0) && (param_3 != (long *)0x0)) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar5,param_3,*(undefined8 *)(*param_3 + 0x1d0),0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar19,uVar7,lVar5,0);
            return uVar7;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

