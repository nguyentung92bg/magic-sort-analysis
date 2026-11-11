/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$PlayNextQueuedReveal
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__PlayNextQueuedReveal (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$PlayNextQueuedReveal
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__PlayNextQueuedReveal
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__PlayNextQueuedReveal_2f5b238
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar3 = PTR_DAT_05818a38;
  if ((bRam0000000005c308d2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05763780);
    FUN_012d0dc8(PTR_DAT_05766d98);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0576fe00);
    FUN_012d0dc8(PTR_DAT_057a1e58);
    FUN_012d0dc8(PTR_DAT_057d06b0);
    FUN_012d0dc8(PTR_DAT_05818a38);
    FUN_012d0dc8(PTR_DAT_0577afc0);
    FUN_012d0dc8(PTR_DAT_057f5480);
    FUN_012d0dc8(PTR_DAT_05788ae8);
    FUN_012d0dc8(PTR_DAT_0577b7a0);
    bRam0000000005c308d2 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(long *)(lVar7 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar7 + 0x18),param_4);
    lVar8 = *(long *)(param_4 + 0x90);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x20) == 0) {
        return;
      }
      if (((*(long *)(param_4 + 0x48) != 0) &&
          (lVar12 = *(long *)(*(long *)(param_4 + 0x48) + 0x28), lVar12 != 0)) &&
         (lVar12 = *(long *)(lVar12 + 0x28), lVar12 != 0)) {
        fVar21 = *(float *)(lVar12 + 0x1e0);
        lVar8 = System_Collections_Generic_Queue_object___Dequeue_3369080
                          (lVar8,*(undefined8 *)PTR_DAT_05763780);
        plVar16 = (long *)(lVar7 + 0x10);
        *plVar16 = lVar8;
        FUN_012d0d74(plVar16,lVar8);
        lVar8 = *plVar16;
        if (lVar8 != 0) {
          iVar1 = *(int *)(lVar8 + 0x10);
          lVar12 = *(long *)(param_4 + 0x48);
          if (iVar1 == 0) {
            if (((lVar12 == 0) || (*(long *)(lVar12 + 0x28) == 0)) ||
               (lVar13 = *(long *)(*(long *)(lVar12 + 0x28) + 0x28), lVar13 == 0))
            goto LAB_0305b954;
            fVar21 = fVar21 + *(float *)(lVar13 + 0x1e4);
          }
          if (*(long *)(lVar8 + 0x20) != 0) {
            uVar2 = *(undefined4 *)(lVar8 + 0x14);
            uVar19 = *(undefined4 *)(lVar8 + 0x18);
            plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                       (*(long *)(lVar8 + 0x20),0);
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0305b474;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0575a2d8,0);
LAB_0305b474:
              uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              puVar3 = PTR_DAT_057606c8;
              if (lVar12 != 0) {
                uVar18 = Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__PlayCarpetAnimation_2f5ba98
                                   (uVar19,uVar18,param_2,param_3,lVar12,iVar1,uVar2);
                puVar10 = (undefined8 *)(param_4 + 0x70);
                *puVar10 = uVar18;
                FUN_012d0d74(puVar10,uVar18);
                uVar18 = *puVar10;
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if (lVar8 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,lVar7,*(undefined8 *)PTR_DAT_0576fe00,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar18,lVar8,0);
                  lVar8 = *(long *)(lVar7 + 0x10);
                  if (lVar8 != 0) {
                    uVar18 = *puVar10;
                    fVar20 = *(float *)(lVar8 + 0x18);
                    lVar8 = *(long *)(lVar8 + 0x20);
                    if (cRam0000000005c230a9 == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230a9 = '\x01';
                    }
                    if (((*(long *)(param_4 + 0x48) != 0) &&
                        (lVar12 = *(long *)(*(long *)(param_4 + 0x48) + 0x28), lVar12 != 0)) &&
                       ((lVar12 = *(long *)(lVar12 + 0x28), lVar12 != 0 && (lVar8 != 0)))) {
                      lVar13 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                      uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale_249e454
                                         (*(undefined4 *)(lVar13 + 0xc),
                                          *(undefined4 *)(lVar13 + 0x10),
                                          *(undefined4 *)(lVar13 + 0x14),
                                          *(undefined4 *)(lVar12 + 0x1a8),lVar8,
                                          *(undefined8 *)(lVar12 + 0x1b0),0);
                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                (fVar21 + fVar20,uVar18,uVar11,0);
                      puVar6 = PTR_DAT_057a7f80;
                      puVar5 = PTR_DAT_05788ae8;
                      puVar4 = PTR_DAT_0577b7a0;
                      if (((*plVar16 != 0) && (lVar8 = *(long *)(*plVar16 + 0x20), lVar8 != 0)) &&
                         (lVar8 = *(long *)(lVar8 + 0x88), lVar8 != 0)) {
                        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                  (&uStack_a8,lVar8,*(undefined8 *)PTR_DAT_057b7918);
                        uStack_88 = uStack_a0;
                        uStack_90 = uStack_a8;
                        lStack_80 = lStack_98;
                        while (uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                  (&uStack_90,*(undefined8 *)puVar6),
                              (uVar14 & 1) != 0) {
                          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          System_Object___ctor_23dfe5c(lVar8,0);
                          plVar17 = (long *)(lVar8 + 0x10);
                          *plVar17 = lStack_80;
                          FUN_012d0d74(plVar17);
                          plVar9 = (long *)*plVar17;
                          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          uVar14 = (**(code **)(*plVar9 + 0x418))
                                             (plVar9,*(undefined8 *)(*plVar9 + 0x420));
                          uVar18 = *puVar10;
                          lVar12 = *plVar16;
                          if ((uVar14 & 1) == 0) {
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            fVar20 = *(float *)(lVar12 + 0x18);
                            lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar12,lVar8,*(undefined8 *)PTR_DAT_0577afc0,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar21 + fVar20,uVar18,lVar12,0);
                            if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            uVar11 = *puVar10;
                            fVar20 = *(float *)(*plVar16 + 0x18);
                            uVar18 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                               (*plVar17,0);
                            if (cRam0000000005c230a9 == '\0') {
                              FUN_012d0dc8(PTR_DAT_05805c10);
                              cRam0000000005c230a9 = '\x01';
                            }
                            if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            lVar12 = *(long *)(*(long *)(param_4 + 0x48) + 0x28);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            lVar12 = *(long *)(lVar12 + 0x28);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            lVar13 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                            uVar18 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                                               (*(undefined4 *)(lVar13 + 0xc),
                                                *(undefined4 *)(lVar13 + 0x10),
                                                *(undefined4 *)(lVar13 + 0x14),
                                                *(undefined4 *)(lVar12 + 0x1a8),uVar18,0);
                            if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            lVar12 = *(long *)(*(long *)(param_4 + 0x48) + 0x28);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            lVar12 = *(long *)(lVar12 + 0x28);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            uVar18 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                               (uVar18,*(undefined8 *)(lVar12 + 0x1b0),
                                                *(undefined8 *)PTR_DAT_057874c0);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (fVar21 + fVar20,uVar11,uVar18,0);
                          }
                          else {
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            fVar20 = *(float *)(lVar12 + 0x18);
                            lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar12,lVar8,*(undefined8 *)PTR_DAT_057f5480,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar21 + fVar20,uVar18,lVar12,0);
                          }
                          if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          uVar18 = *puVar10;
                          fVar20 = *(float *)(*plVar16 + 0x18);
                          lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar12,lVar8,*(undefined8 *)puVar5,0);
                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                    (fVar21 + fVar20,uVar18,lVar12,0);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                  (&uStack_90,*(undefined8 *)PTR_DAT_057605b8);
                        if (iVar1 != 0) {
                          lVar8 = *plVar16;
                          if (((lVar8 == 0) || (*(long *)(param_4 + 0x48) == 0)) ||
                             ((lVar12 = *(long *)(*(long *)(param_4 + 0x48) + 0x28), lVar12 == 0 ||
                              ((lVar12 = *(long *)(lVar12 + 0x28), lVar12 == 0 ||
                               (*(long *)(lVar8 + 0x20) == 0)))))) goto LAB_0305b954;
                          uVar11 = *puVar10;
                          fVar20 = *(float *)(lVar8 + 0x18);
                          uVar18 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation_249e578
                                             (*(undefined4 *)(lVar12 + 0x1b8),
                                              *(undefined4 *)(lVar12 + 0x1bc),
                                              *(undefined4 *)(lVar12 + 0x1c0),
                                              *(undefined4 *)(lVar12 + 0x1c4),0x42340000,
                                              *(long *)(lVar8 + 0x20),
                                              *(undefined4 *)(lVar12 + 0x1c8),0);
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                    (fVar21 + fVar20,uVar11,uVar18,0);
                        }
                        if (*plVar16 != 0) {
                          uVar18 = *puVar10;
                          fVar20 = *(float *)(*plVar16 + 0x18);
                          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if (lVar8 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar8,lVar7,*(undefined8 *)PTR_DAT_057a1e58,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar21 + fVar20,uVar18,lVar8,0);
                            uVar18 = *puVar10;
                            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                            if (lVar8 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar8,lVar7,*(undefined8 *)PTR_DAT_057d06b0,0);
                              DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                        (uVar18,lVar8,*(undefined8 *)PTR_DAT_0579e470);
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
    }
  }
LAB_0305b954:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

