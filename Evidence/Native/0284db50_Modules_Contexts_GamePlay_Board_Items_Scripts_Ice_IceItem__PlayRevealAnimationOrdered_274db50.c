/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$PlayRevealAnimationOrdered
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__PlayRevealAnimationOrdered (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, bool startImmediately, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$PlayRevealAnimationOrdered
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__PlayRevealAnimationOrdered
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, bool startImmediately,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__PlayRevealAnimationOrdered_274db50
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam0000000005c2c6d7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057eaae0);
    FUN_012d0dc8(PTR_DAT_05800618);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057d3068);
    FUN_012d0dc8(PTR_DAT_057e01d0);
    FUN_012d0dc8(PTR_DAT_0578fa28);
    FUN_012d0dc8(PTR_DAT_057d5eb0);
    FUN_012d0dc8(PTR_DAT_05780868);
    FUN_012d0dc8(PTR_DAT_05790178);
    FUN_012d0dc8(PTR_DAT_0578b8a0);
    FUN_012d0dc8(PTR_DAT_057752d0);
    FUN_012d0dc8(PTR_DAT_05759188);
    FUN_012d0dc8(PTR_DAT_0575b5e8);
    FUN_012d0dc8(PTR_DAT_057d8510);
    bRam0000000005c2c6d7 = 1;
  }
  lVar9 = *(long *)(param_4 + 0x70);
  if (*(char *)(param_4 + 0x88) == '\0') {
    fVar18 = _UNK_0438ebac;
    if (lVar9 == 0) goto LAB_0284e480;
  }
  else {
    if (lVar9 == 0) goto LAB_0284e480;
    fVar18 = *(float *)(lVar9 + 0x48);
  }
  uVar19 = *(undefined4 *)(lVar9 + 0x4c);
  uVar20 = 0;
  if ((param_5 & 1) == 0) {
    uVar20 = *(undefined4 *)(lVar9 + 0x50);
  }
  fVar22 = *(float *)(lVar9 + 0x54);
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar3 = PTR_DAT_057b43e8;
  puVar2 = PTR_DAT_057606c8;
  puVar1 = PTR_DAT_0575a2d8;
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  fVar18 = fVar18 + 0.0;
  fVar21 = 0.0;
  if ((param_5 & 1) == 0) {
    fVar21 = fVar18;
  }
  if (*(int *)(param_4 + 0x68) == 0) {
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_0284e480;
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask_274e664
              (*(long *)(param_4 + 0x48),1);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_0284e480;
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleLeftMask_274e694
              (*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_0284e480;
    lVar12 = *(long *)(param_4 + 0x48);
    lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_4 + 0x58),*(undefined4 *)(param_4 + 0x68),
                       *(undefined8 *)puVar3);
    if ((lVar9 == 0) ||
       (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (lVar9,0), plVar5 == (long *)0x0)) goto LAB_0284e480;
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0284ded4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,0);
LAB_0284ded4:
    fVar17 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar9 = *(long *)(param_4 + 0x70);
    if ((lVar9 == 0) || (lVar12 == 0)) goto LAB_0284e480;
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetRightMaskPosition_274e6c4
              (fVar17 + *(float *)(lVar9 + 0x24),fVar18 + *(float *)(lVar9 + 0x28),
               param_3 + *(float *)(lVar9 + 0x2c),lVar12);
    puVar2 = PTR_DAT_057e01d0;
    puVar1 = PTR_DAT_057d3068;
    if (0 < *(int *)(param_4 + 100)) {
      iVar14 = 0;
      do {
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_0284e480;
        System_Object___ctor_23dfe5c(lVar9,0);
        *(long *)(lVar9 + 0x18) = param_4;
        FUN_012d0d74((long *)(lVar9 + 0x18),param_4);
        *(int *)(lVar9 + 0x10) = iVar14;
        iVar14 = iVar14 + 1;
        *(float *)(lVar9 + 0x14) = fVar22 * (float)iVar14;
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        if (lVar12 == 0) goto LAB_0284e480;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar12,lVar9,*(undefined8 *)puVar1,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar4,lVar12,0);
        if (*(long *)(param_4 + 0x70) == 0) goto LAB_0284e480;
        fVar21 = fVar21 + *(float *)(*(long *)(param_4 + 0x70) + 0x58);
      } while (iVar14 < *(int *)(param_4 + 100));
    }
  }
  else {
    if (*(int *)(param_4 + 0x68) != *(int *)(param_4 + 100) + -1) {
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05790178);
      if (lVar9 != 0) {
        System_Object___ctor_23dfe5c(lVar9,0);
        *(long *)(lVar9 + 0x18) = param_4;
        FUN_012d0d74((long *)(lVar9 + 0x18),param_4);
        if (*(long *)(param_4 + 0x48) != 0) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleLeftMask_274e694
                    (*(long *)(param_4 + 0x48),1);
          if (*(long *)(param_4 + 0x48) != 0) {
            Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask_274e664
                      (*(long *)(param_4 + 0x48),1);
            if (*(long *)(param_4 + 0x58) != 0) {
              lVar13 = *(long *)(param_4 + 0x48);
              lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (*(long *)(param_4 + 0x58),*(undefined4 *)(param_4 + 0x68),
                                  *(undefined8 *)puVar3);
              if ((lVar12 != 0) &&
                 (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                             (lVar12,0), plVar5 != (long *)0x0)) {
                lVar12 = *plVar5;
                uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_0284e0e0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,0);
LAB_0284e0e0:
                fVar22 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                lVar12 = *(long *)(param_4 + 0x70);
                if ((lVar12 != 0) && (lVar13 != 0)) {
                  fVar18 = fVar18 + *(float *)(lVar12 + 0x34);
                  param_3 = param_3 + *(float *)(lVar12 + 0x38);
                  Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetLeftMaskPosition_274e71c
                            (fVar22 + *(float *)(lVar12 + 0x30),fVar18,param_3,lVar13);
                  if (*(long *)(param_4 + 0x58) != 0) {
                    lVar13 = *(long *)(param_4 + 0x48);
                    lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (*(long *)(param_4 + 0x58),*(undefined4 *)(param_4 + 0x68),
                                        *(undefined8 *)puVar3);
                    if ((lVar12 != 0) &&
                       (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                                   (lVar12,0), plVar5 != (long *)0x0)) {
                      lVar12 = *plVar5;
                      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                            puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                            goto LAB_0284e18c;
                          }
                          uVar10 = uVar10 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,0);
LAB_0284e18c:
                      fVar22 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                      lVar12 = *(long *)(param_4 + 0x70);
                      if ((lVar12 != 0) && (lVar13 != 0)) {
                        Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetRightMaskPosition_274e6c4
                                  (fVar22 + *(float *)(lVar12 + 0x3c),
                                   fVar18 + *(float *)(lVar12 + 0x40),
                                   param_3 + *(float *)(lVar12 + 0x44),lVar13);
                        if (*(long *)(param_4 + 0x70) != 0) {
                          iVar14 = *(int *)(param_4 + 0x68);
                          *(undefined4 *)(lVar9 + 0x10) =
                               *(undefined4 *)(*(long *)(param_4 + 0x70) + 0x5c);
                          lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                          if (lVar12 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar12,lVar9,*(undefined8 *)PTR_DAT_05780868,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar21,uVar4,lVar12,0);
                            puVar2 = PTR_DAT_0578b8a0;
                            puVar1 = PTR_DAT_057752d0;
                            if (*(long *)(param_4 + 0x70) != 0) {
                              iVar16 = iVar14 + -1;
                              iVar14 = iVar14 + 1;
                              fVar21 = fVar21 + *(float *)(*(long *)(param_4 + 0x70) + 0x58);
                              iVar15 = 1;
                              do {
                                if ((iVar16 < 0) && (*(int *)(param_4 + 100) <= iVar14))
                                goto LAB_0284e3e0;
                                lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                if (lVar12 == 0) break;
                                System_Object___ctor_23dfe5c(lVar12,0);
                                *(long *)(lVar12 + 0x20) = lVar9;
                                FUN_012d0d74((long *)(lVar12 + 0x20),lVar9);
                                lVar13 = *(long *)(param_4 + 0x70);
                                if (lVar13 == 0) break;
                                fVar18 = *(float *)(lVar13 + 0x5c);
                                fVar22 = *(float *)(lVar13 + 0x60);
                                *(float *)(lVar12 + 0x14) = -(fVar22 * (float)iVar15) - fVar18;
                                *(float *)(lVar12 + 0x1c) = fVar22 * (float)iVar15 + fVar18;
                                *(bool *)(lVar12 + 0x10) = iVar16 == 0;
                                iVar8 = *(int *)(param_4 + 100);
                                *(bool *)(lVar12 + 0x18) = iVar14 == iVar8 + -1;
                                if (-1 < iVar16) {
                                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05759188);
                                  if (lVar13 == 0) break;
                                  System_Object___ctor_23dfe5c(lVar13,0);
                                  *(long *)(lVar13 + 0x18) = lVar12;
                                  FUN_012d0d74((long *)(lVar13 + 0x18),lVar12);
                                  *(int *)(lVar13 + 0x10) = iVar16;
                                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                                  if (lVar7 == 0) break;
                                  DG_Tweening_TweenCallback___ctor_1ed6da8
                                            (lVar7,lVar13,*(undefined8 *)puVar1,0);
                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                            (fVar21,uVar4,lVar7,0);
                                  iVar8 = *(int *)(param_4 + 100);
                                  iVar16 = iVar16 + -1;
                                }
                                if (iVar14 < iVar8) {
                                  lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057d8510);
                                  if (lVar13 == 0) break;
                                  System_Object___ctor_23dfe5c(lVar13,0);
                                  *(long *)(lVar13 + 0x18) = lVar12;
                                  FUN_012d0d74((long *)(lVar13 + 0x18),lVar12);
                                  *(int *)(lVar13 + 0x10) = iVar14;
                                  lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                                  if (lVar12 == 0) break;
                                  DG_Tweening_TweenCallback___ctor_1ed6da8
                                            (lVar12,lVar13,*(undefined8 *)PTR_DAT_0575b5e8,0);
                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                            (fVar21,uVar4,lVar12,0);
                                  iVar14 = iVar14 + 1;
                                }
                                if (*(long *)(param_4 + 0x70) == 0) break;
                                iVar15 = iVar15 + 1;
                                fVar21 = fVar21 + *(float *)(*(long *)(param_4 + 0x70) + 0x58);
                              } while( true );
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
      goto LAB_0284e480;
    }
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_0284e480;
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleLeftMask_274e694
              (*(long *)(param_4 + 0x48),1);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_0284e480;
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask_274e664
              (*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_0284e480;
    lVar12 = *(long *)(param_4 + 0x48);
    lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_4 + 0x58),*(undefined4 *)(param_4 + 0x68),
                       *(undefined8 *)puVar3);
    if ((lVar9 == 0) ||
       (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (lVar9,0), plVar5 == (long *)0x0)) goto LAB_0284e480;
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0284dfd0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,0);
LAB_0284dfd0:
    fVar17 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar9 = *(long *)(param_4 + 0x70);
    if ((lVar9 == 0) || (lVar12 == 0)) goto LAB_0284e480;
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetLeftMaskPosition_274e71c
              (fVar17 + *(float *)(lVar9 + 0x18),fVar18 + *(float *)(lVar9 + 0x1c),
               param_3 + *(float *)(lVar9 + 0x20),lVar12);
    puVar2 = PTR_DAT_057d5eb0;
    puVar1 = PTR_DAT_0578fa28;
    iVar14 = *(int *)(param_4 + 100) + -1;
    if (-1 < iVar14) {
      iVar15 = -*(int *)(param_4 + 100);
      do {
        iVar15 = iVar15 + 1;
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_0284e480;
        System_Object___ctor_23dfe5c(lVar9,0);
        *(long *)(lVar9 + 0x20) = param_4;
        FUN_012d0d74((long *)(lVar9 + 0x20),param_4);
        *(int *)(lVar9 + 0x10) = iVar14;
        *(bool *)(lVar9 + 0x14) = iVar15 == 0;
        *(float *)(lVar9 + 0x18) = -(fVar22 * (float)(iVar15 + *(int *)(param_4 + 100)));
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        if (lVar12 == 0) goto LAB_0284e480;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar12,lVar9,*(undefined8 *)puVar1,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar4,lVar12,0);
        if (*(long *)(param_4 + 0x70) == 0) goto LAB_0284e480;
        iVar14 = iVar14 + -1;
        fVar21 = fVar21 + *(float *)(*(long *)(param_4 + 0x70) + 0x58);
      } while (-1 < iVar14);
    }
  }
LAB_0284e3e0:
  puVar1 = PTR_DAT_057606c8;
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
  if (lVar9 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,param_4,*(undefined8 *)PTR_DAT_057eaae0,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar20,uVar4,lVar9,0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar9 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,param_4,*(undefined8 *)PTR_DAT_05800618,0);
      uVar10 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,0,1);
      if ((lVar9 != 0) && ((uVar10 & 1) != 0)) {
        DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar19,uVar4,lVar9);
      }
      return uVar4;
    }
  }
LAB_0284e480:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

