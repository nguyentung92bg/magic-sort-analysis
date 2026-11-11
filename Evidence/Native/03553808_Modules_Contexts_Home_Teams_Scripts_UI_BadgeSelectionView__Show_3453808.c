/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$Show
void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__Show (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, int32_t selectedBadgeId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.BadgeSelectionView$$Show
   void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__Show
   (Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView_o* __this, int32_t selectedBadgeId,
   const MethodInfo* method); */

void Modules_Contexts_Home_Teams_Scripts_UI_BadgeSelectionView__Show_3453808
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar9 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar9,1,0);
  puVar5 = PTR_DAT_057f4968;
  if ((bRam0000000005c325af & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e4818);
    FUN_012d0dc8(PTR_DAT_0580e588);
    FUN_012d0dc8(PTR_DAT_057a94e8);
    FUN_012d0dc8(PTR_DAT_057c4090);
    FUN_012d0dc8(PTR_DAT_0579ff20);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    FUN_012d0dc8(PTR_DAT_057f4968);
    bRam0000000005c325af = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_0579ff20);
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar6 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__GetBadgeCount_2f007d4
                        (*(long *)(param_1 + 0x18),0);
      puVar4 = PTR_DAT_0580e588;
      puVar3 = PTR_DAT_057c4090;
      puVar5 = PTR_DAT_057a94e8;
      if (0 < iVar6) {
        iVar8 = 0;
        do {
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e4818);
          if (lVar10 == 0) goto LAB_03553ae4;
          System_Object___ctor_23dfe5c(lVar10,0);
          *(undefined4 *)(lVar10 + 0x18) = param_2;
          lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cfb88);
          if (lVar11 == 0) goto LAB_03553ae4;
          System_Collections_Generic_List_int____ctor_204e880(lVar11,*(undefined8 *)puVar3);
          plVar17 = (long *)(lVar10 + 0x10);
          *plVar17 = lVar11;
          FUN_012d0d74(plVar17,lVar11);
          iVar18 = 0;
          do {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_03553ae4;
            iVar7 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__GetBadgeCount_2f007d4
                              (*(long *)(param_1 + 0x18),0);
            if (iVar8 + iVar18 < iVar7) {
              lVar11 = *plVar17;
              if (lVar11 == 0) goto LAB_03553ae4;
              lVar13 = *(long *)(lVar11 + 0x10);
              lVar15 = *(long *)puVar4;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_03553ae4;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(int *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = iVar8 + iVar18 + 1;
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))();
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 != 4);
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_03553ae4;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar17 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *plVar17 = lVar10;
            FUN_012d0d74(plVar17,lVar10);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar9,lVar10);
          }
          iVar8 = iVar8 + 4;
        } while (iVar8 < iVar6);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        plVar17 = (long *)(*(long *)(param_1 + 0x38) + 0x28);
        *plVar17 = lVar9;
        FUN_012d0d74(plVar17,lVar9);
        if (*(long *)(param_1 + 0x28) != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                    (*(long *)(param_1 + 0x28),0);
          if (*(long *)(param_1 + 0x28) != 0) {
            Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                      (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0,0);
            lVar9 = *(long *)(param_1 + 0x28);
            if (lVar9 != 0) {
              iVar6 = 0;
              if ((bRam0000000005c393bc & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057b4bd0,0,0);
                bRam0000000005c393bc = 1;
              }
              puVar5 = PTR_DAT_057b4bd0;
              plVar17 = *(long **)(lVar9 + 0x30);
              if (plVar17 != (long *)0x0) {
                lVar10 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057b4bd0) {
                      puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_0410af84;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar12 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
                iVar8 = (*(code *)*puVar12)(plVar17,puVar12[1]);
                if (iVar8 == 0) {
                  return;
                }
                plVar17 = *(long **)(lVar9 + 0x30);
                if (plVar17 != (long *)0x0) {
                  lVar10 = *plVar17;
                  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                        puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_0410afec;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar17,*(long *)puVar5,1);
LAB_0410afec:
                  iVar8 = (*(code *)*puVar12)(plVar17,puVar12[1]);
                  if (iVar8 < 1) {
                    return;
                  }
                  if (*(char *)(lVar9 + 0xb0) == '\0') {
                    return;
                  }
                  plVar17 = *(long **)(lVar9 + 0x30);
                  if (plVar17 != (long *)0x0) {
                    lVar10 = *plVar17;
                    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                    if (uVar14 != 0) {
                      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                          puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                          goto LAB_0410b078;
                        }
                        uVar14 = uVar14 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_0131971c(plVar17,*(long *)puVar5,5);
LAB_0410b078:
                    uVar14 = (*(code *)*puVar12)(plVar17,puVar12[1]);
                    if ((uVar14 & 1) != 0) {
                      plVar17 = *(long **)(lVar9 + 0x30);
                      if (plVar17 == (long *)0x0) goto LAB_0410b1dc;
                      lVar10 = *plVar17;
                      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                      if (uVar14 != 0) {
                        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                            goto LAB_0410b0e0;
                          }
                          uVar14 = uVar14 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0131971c(plVar17,*(long *)puVar5,1);
LAB_0410b0e0:
                      iVar6 = (*(code *)*puVar12)(plVar17,puVar12[1]);
                      iVar6 = iVar6 + -1;
                    }
                    plVar17 = *(long **)(lVar9 + 0x30);
                    if (plVar17 != (long *)0x0) {
                      lVar10 = *plVar17;
                      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                      if (uVar14 != 0) {
                        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                            puVar12 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_0410b148;
                          }
                          uVar14 = uVar14 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0131971c(plVar17,*(long *)puVar5,0);
LAB_0410b148:
                      lVar10 = (*(code *)*puVar12)(plVar17,iVar6,puVar12[1]);
                      iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                        (lVar9);
                      if (lVar10 != 0) {
                        lVar11 = 0x14;
                        if (iVar6 != 1) {
                          lVar11 = 0x10;
                        }
                        fVar22 = *(float *)(lVar9 + 0x70);
                        fVar20 = -*(float *)(lVar10 + lVar11);
                        fVar21 = *(float *)(lVar9 + 0x6c);
                        if (fVar20 <= *(float *)(lVar9 + 0x6c)) {
                          fVar21 = fVar20;
                        }
                        fVar23 = fVar21;
                        if (fVar20 < fVar22) {
                          fVar23 = fVar22;
                        }
                        iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                          (lVar9);
                        if (*(long *)(lVar9 + 0x28) != 0) {
                          fVar20 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                    (*(long *)(lVar9 + 0x28),0);
                          if (iVar6 != 1) {
                            fVar21 = fVar20;
                          }
                          fVar21 = fVar23 - fVar21;
                          if ((bRam0000000005c393b5 & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_057f7938);
                            FUN_012d0dc8(PTR_DAT_057be0d0);
                            FUN_012d0dc8(PTR_DAT_057b68e8);
                            bRam0000000005c393b5 = 1;
                          }
                          fVar20 = (float)Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetDisplacement_400a4c0
                                                    (fVar21,lVar9);
                          lVar10 = *(long *)(lVar9 + 0x98);
                          if (cRam0000000005c272fe == '\0') {
                            FUN_012d0dc8(PTR_DAT_057d6f00);
                            cRam0000000005c272fe = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                          }
                          if (lVar10 != 0) {
                            fVar19 = 1.0;
                            if (fVar21 < 0.0) {
                              fVar19 = -1.0;
                            }
                            System_Collections_Generic_Queue_float___Enqueue_336a53c
                                      (fVar19 * SQRT(fVar22 * fVar22 +
                                                     fVar20 * fVar20 + fVar23 * fVar23),lVar10,
                                       *(undefined8 *)PTR_DAT_057be0d0);
                            lVar10 = *(long *)(lVar9 + 0x98);
                            if (lVar10 != 0) {
                              if (3 < *(int *)(lVar10 + 0x20)) {
                                System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                          (lVar10,*(undefined8 *)PTR_DAT_057f7938);
                              }
                              fVar21 = *(float *)(lVar9 + 0x54);
                              fVar20 = fVar20 + *(float *)(lVar9 + 0x50);
                              fVar23 = fVar23 + fVar21;
                              fVar22 = fVar22 + *(float *)(lVar9 + 0x58);
                              *(float *)(lVar9 + 0x50) = fVar20;
                              *(float *)(lVar9 + 0x54) = fVar23;
                              *(float *)(lVar9 + 0x58) = fVar22;
                              if (*(long *)(lVar9 + 0x28) != 0) {
                                fVar19 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                          (*(long *)(lVar9 + 0x28),0);
                                if (*(long *)(lVar9 + 0x28) != 0) {
                                  UnityEngine_Transform__set_localPosition_4092ce0
                                            (fVar20,fVar23,fVar22,*(long *)(lVar9 + 0x28),0);
                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                            (lVar9);
                                  iVar6 = *(int *)(lVar9 + 0x38);
                                  iVar8 = *(int *)(lVar9 + 0x3c);
                                  for (iVar18 = 9999;
                                      ((((uVar14 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                            (lVar9), (uVar14 & 1) != 0 ||
                                         (uVar14 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                            (lVar9), (uVar14 & 1) != 0)) ||
                                        (uVar14 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                            (lVar9), (uVar14 & 1) != 0)) ||
                                       (uVar14 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                           (lVar9), (uVar14 & 1) != 0)) &&
                                      (iVar18 != 0)); iVar18 = iVar18 + -1) {
                                    iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                      (lVar9);
                                    fVar22 = fVar23 - fVar21;
                                    if (iVar7 != 1) {
                                      fVar22 = fVar20 - fVar19;
                                    }
                                    if (fVar22 <= 0.0) {
                                      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentDown_400a878
                                                (lVar9);
                                    }
                                    else {
                                      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentUp_400a724
                                                ();
                                    }
                                    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                              (lVar9);
                                  }
                                  iVar18 = *(int *)(lVar9 + 0x38);
                                  iVar7 = *(int *)(lVar9 + 0x3c);
                                  iVar2 = iVar6;
                                  puVar5 = PTR_DAT_057b4bd0;
                                  if ((bRam0000000005c393b6 & 1) == 0) {
                                    FUN_012d0dc8(PTR_DAT_057b4bd0);
                                    bRam0000000005c393b6 = 1;
                                    puVar5 = PTR_DAT_057b4bd0;
                                  }
                                  for (; puVar3 = PTR_DAT_057b4bd0, iVar2 <= iVar8;
                                      iVar2 = iVar2 + 1) {
                                    if ((iVar2 < iVar18) || (iVar7 < iVar2)) {
                                      plVar17 = *(long **)(lVar9 + 0x30);
                                      if (plVar17 == (long *)0x0) goto LAB_0410aa3c;
                                      lVar11 = *plVar17;
                                      lVar10 = *(long *)PTR_DAT_057b4bd0;
                                      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                      PTR_DAT_057b4bd0 = puVar5;
                                      if (uVar14 != 0) {
                                        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar16 + -2) == lVar10) {
                                            puVar12 = (undefined8 *)
                                                      (lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0410a980;
                                          }
                                          uVar14 = uVar14 - 1;
                                          piVar16 = piVar16 + 4;
                                        } while (uVar14 != 0);
                                      }
                                      puVar12 = (undefined8 *)FUN_0131971c(plVar17,lVar10,2);
LAB_0410a980:
                                      (*(code *)*puVar12)(plVar17,iVar2,puVar12[1]);
                                      puVar5 = PTR_DAT_057b4bd0;
                                    }
                                    PTR_DAT_057b4bd0 = puVar5;
                                    puVar5 = PTR_DAT_057b4bd0;
                                    PTR_DAT_057b4bd0 = puVar3;
                                  }
                                  do {
                                    PTR_DAT_057b4bd0 = puVar5;
                                    if (iVar7 < iVar18) {
                                      return;
                                    }
                                    if ((iVar18 < iVar6) || (iVar8 < iVar18)) {
                                      plVar17 = *(long **)(lVar9 + 0x30);
                                      puVar5 = PTR_DAT_057b4bd0;
                                      if (plVar17 == (long *)0x0) {
LAB_0410aa3c:
                                        PTR_DAT_057b4bd0 = puVar5;
                    /* WARNING: Subroutine does not return */
                                        FUN_012d0ef0();
                                      }
                                      lVar11 = *plVar17;
                                      lVar10 = *(long *)puVar3;
                                      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                      if (uVar14 != 0) {
                                        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar16 + -2) == lVar10) {
                                            puVar12 = (undefined8 *)
                                                      (lVar11 + (long)(*piVar16 + 3) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0410aa08;
                                          }
                                          uVar14 = uVar14 - 1;
                                          piVar16 = piVar16 + 4;
                                        } while (uVar14 != 0);
                                      }
                                      puVar12 = (undefined8 *)FUN_0131971c(plVar17,lVar10,3);
LAB_0410aa08:
                                      (*(code *)*puVar12)(plVar17,iVar18,puVar12[1]);
                                    }
                                    iVar18 = iVar18 + 1;
                                    puVar5 = PTR_DAT_057b4bd0;
                                  } while( true );
                                }
                              }
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                      }
                    }
                  }
                }
              }
LAB_0410b1dc:
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
      }
    }
  }
LAB_03553ae4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

