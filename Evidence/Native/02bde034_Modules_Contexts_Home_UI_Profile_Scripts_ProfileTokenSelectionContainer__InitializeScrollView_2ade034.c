/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$InitializeScrollView
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__InitializeScrollView (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, System_Collections_Generic_List_TokenSelectionItemViewModel__o* items, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$InitializeScrollView
   void 
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__InitializeScrollView
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this,
   System_Collections_Generic_List_TokenSelectionItemViewModel__o* items, const MethodInfo* method);
    */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__InitializeScrollView_2ade034
               (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((bRam0000000005c2eafd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c4360);
    FUN_012d0dc8(PTR_DAT_057f4220);
    FUN_012d0dc8(PTR_DAT_0576b4c0);
    FUN_012d0dc8(PTR_DAT_057fdb68);
    FUN_012d0dc8(PTR_DAT_057df670);
    FUN_012d0dc8(PTR_DAT_057cd4f8);
    bRam0000000005c2eafd = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                (*(long *)(param_1 + 0x18),0), param_2 != 0)) {
    if (*(int *)(param_2 + 0x18) == 0) {
      return;
    }
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057df670);
    if (lVar7 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_0576b4c0);
      puVar3 = PTR_DAT_057f4220;
      puVar2 = PTR_DAT_057cd4f8;
      puVar4 = PTR_DAT_057c4360;
      iVar6 = *(int *)(param_2 + 0x18);
      if (0 < iVar6) {
        iVar18 = 0;
        iVar17 = 0;
        do {
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar8 == 0) goto LAB_02bde288;
          iVar6 = iVar6 + iVar18;
          if (2 < iVar6) {
            iVar6 = 3;
          }
          System_Object___ctor_23dfe5c(lVar8,0);
          uVar9 = System_Collections_Generic_List_object___GetRange_21fd6b8
                            (param_2,iVar17,iVar6,*(undefined8 *)puVar3);
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
          FUN_012d0d74();
          lVar12 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_02bde288;
          uVar16 = *(uint *)(lVar7 + 0x18);
          if (uVar16 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar16 + 1;
            plVar10 = (long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
            *plVar10 = lVar8;
            FUN_012d0d74(plVar10,lVar8);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar7,lVar8);
          }
          iVar6 = *(int *)(param_2 + 0x18);
          iVar17 = iVar17 + 3;
          iVar18 = iVar18 + -3;
        } while (iVar17 < iVar6);
      }
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        *(long *)(lVar8 + 0x28) = lVar7;
        FUN_012d0d74((long *)(lVar8 + 0x28),lVar7);
        *(undefined8 *)(lVar8 + 0x30) = uVar9;
        FUN_012d0d74((undefined8 *)(lVar8 + 0x30),uVar9);
        if (*(long *)(param_1 + 0x18) != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                    (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,0);
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 != 0) {
            uVar16 = (*(int *)(param_1 + 0x40) + -1) / 3;
            if ((bRam0000000005c393bc & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057b4bd0,uVar16,0);
              bRam0000000005c393bc = 1;
            }
            puVar4 = PTR_DAT_057b4bd0;
            plVar10 = *(long **)(lVar7 + 0x30);
            if (plVar10 != (long *)0x0) {
              lVar8 = *plVar10;
              uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057b4bd0) {
                    puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_0410af84;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
              iVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if (iVar6 == 0) {
                return;
              }
              plVar10 = *(long **)(lVar7 + 0x30);
              if (plVar10 != (long *)0x0) {
                lVar8 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                      puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto LAB_0410afec;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,1);
LAB_0410afec:
                iVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if ((int)uVar16 < 0) {
                  return;
                }
                if (iVar6 <= (int)uVar16) {
                  return;
                }
                if (*(char *)(lVar7 + 0xb0) == '\0') {
                  return;
                }
                plVar10 = *(long **)(lVar7 + 0x30);
                if (plVar10 != (long *)0x0) {
                  lVar8 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                        goto LAB_0410b078;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,5);
LAB_0410b078:
                  uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                  if ((uVar14 & 1) != 0) {
                    plVar10 = *(long **)(lVar7 + 0x30);
                    if (plVar10 == (long *)0x0) goto LAB_0410b1dc;
                    lVar8 = *plVar10;
                    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                          goto LAB_0410b0e0;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,1);
LAB_0410b0e0:
                    iVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                    uVar16 = iVar6 + ~uVar16;
                  }
                  plVar10 = *(long **)(lVar7 + 0x30);
                  if (plVar10 != (long *)0x0) {
                    lVar8 = *plVar10;
                    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_0410b148;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,0);
LAB_0410b148:
                    lVar8 = (*(code *)*puVar11)(plVar10,uVar16,puVar11[1]);
                    iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                      (lVar7);
                    if (lVar8 != 0) {
                      lVar12 = 0x14;
                      if (iVar6 != 1) {
                        lVar12 = 0x10;
                      }
                      fVar22 = *(float *)(lVar7 + 0x70);
                      fVar20 = -*(float *)(lVar8 + lVar12);
                      fVar21 = *(float *)(lVar7 + 0x6c);
                      if (fVar20 <= *(float *)(lVar7 + 0x6c)) {
                        fVar21 = fVar20;
                      }
                      fVar23 = fVar21;
                      if (fVar20 < fVar22) {
                        fVar23 = fVar22;
                      }
                      iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                        (lVar7);
                      if (*(long *)(lVar7 + 0x28) != 0) {
                        fVar20 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                  (*(long *)(lVar7 + 0x28),0);
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
                                                  (fVar21,lVar7);
                        lVar8 = *(long *)(lVar7 + 0x98);
                        if (cRam0000000005c272fe == '\0') {
                          FUN_012d0dc8(PTR_DAT_057d6f00);
                          cRam0000000005c272fe = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                        }
                        if (lVar8 != 0) {
                          fVar19 = 1.0;
                          if (fVar21 < 0.0) {
                            fVar19 = -1.0;
                          }
                          System_Collections_Generic_Queue_float___Enqueue_336a53c
                                    (fVar19 * SQRT(fVar22 * fVar22 +
                                                   fVar20 * fVar20 + fVar23 * fVar23),lVar8,
                                     *(undefined8 *)PTR_DAT_057be0d0);
                          lVar8 = *(long *)(lVar7 + 0x98);
                          if (lVar8 != 0) {
                            if (3 < *(int *)(lVar8 + 0x20)) {
                              System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                        (lVar8,*(undefined8 *)PTR_DAT_057f7938);
                            }
                            fVar21 = *(float *)(lVar7 + 0x54);
                            fVar20 = fVar20 + *(float *)(lVar7 + 0x50);
                            fVar23 = fVar23 + fVar21;
                            fVar22 = fVar22 + *(float *)(lVar7 + 0x58);
                            *(float *)(lVar7 + 0x50) = fVar20;
                            *(float *)(lVar7 + 0x54) = fVar23;
                            *(float *)(lVar7 + 0x58) = fVar22;
                            if (*(long *)(lVar7 + 0x28) != 0) {
                              fVar19 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                        (*(long *)(lVar7 + 0x28),0);
                              if (*(long *)(lVar7 + 0x28) != 0) {
                                UnityEngine_Transform__set_localPosition_4092ce0
                                          (fVar20,fVar23,fVar22,*(long *)(lVar7 + 0x28),0);
                                Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                          (lVar7);
                                iVar6 = *(int *)(lVar7 + 0x38);
                                iVar17 = *(int *)(lVar7 + 0x3c);
                                for (iVar18 = 9999;
                                    ((((uVar14 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                           (lVar7), (uVar14 & 1) != 0 ||
                                       (uVar14 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                           (lVar7), (uVar14 & 1) != 0)) ||
                                      (uVar14 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                          (lVar7), (uVar14 & 1) != 0)) ||
                                     (uVar14 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                         (lVar7), (uVar14 & 1) != 0)) &&
                                    (iVar18 != 0)); iVar18 = iVar18 + -1) {
                                  iVar5 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                    (lVar7);
                                  fVar22 = fVar23 - fVar21;
                                  if (iVar5 != 1) {
                                    fVar22 = fVar20 - fVar19;
                                  }
                                  if (fVar22 <= 0.0) {
                                    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentDown_400a878
                                              (lVar7);
                                  }
                                  else {
                                    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentUp_400a724
                                              ();
                                  }
                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                            (lVar7);
                                }
                                iVar18 = *(int *)(lVar7 + 0x38);
                                iVar5 = *(int *)(lVar7 + 0x3c);
                                iVar1 = iVar6;
                                puVar4 = PTR_DAT_057b4bd0;
                                if ((bRam0000000005c393b6 & 1) == 0) {
                                  FUN_012d0dc8(PTR_DAT_057b4bd0);
                                  bRam0000000005c393b6 = 1;
                                  puVar4 = PTR_DAT_057b4bd0;
                                }
                                for (; puVar2 = PTR_DAT_057b4bd0, iVar1 <= iVar17; iVar1 = iVar1 + 1
                                    ) {
                                  if ((iVar1 < iVar18) || (iVar5 < iVar1)) {
                                    plVar10 = *(long **)(lVar7 + 0x30);
                                    if (plVar10 == (long *)0x0) goto LAB_0410aa3c;
                                    lVar12 = *plVar10;
                                    lVar8 = *(long *)PTR_DAT_057b4bd0;
                                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                    PTR_DAT_057b4bd0 = puVar4;
                                    if (uVar14 != 0) {
                                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar15 + -2) == lVar8) {
                                          puVar11 = (undefined8 *)
                                                    (lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                                          goto LAB_0410a980;
                                        }
                                        uVar14 = uVar14 - 1;
                                        piVar15 = piVar15 + 4;
                                      } while (uVar14 != 0);
                                    }
                                    puVar11 = (undefined8 *)FUN_0131971c(plVar10,lVar8,2);
LAB_0410a980:
                                    (*(code *)*puVar11)(plVar10,iVar1,puVar11[1]);
                                    puVar4 = PTR_DAT_057b4bd0;
                                  }
                                  PTR_DAT_057b4bd0 = puVar4;
                                  puVar4 = PTR_DAT_057b4bd0;
                                  PTR_DAT_057b4bd0 = puVar2;
                                }
                                do {
                                  PTR_DAT_057b4bd0 = puVar4;
                                  if (iVar5 < iVar18) {
                                    return;
                                  }
                                  if ((iVar18 < iVar6) || (iVar17 < iVar18)) {
                                    plVar10 = *(long **)(lVar7 + 0x30);
                                    puVar4 = PTR_DAT_057b4bd0;
                                    if (plVar10 == (long *)0x0) {
LAB_0410aa3c:
                                      PTR_DAT_057b4bd0 = puVar4;
                    /* WARNING: Subroutine does not return */
                                      FUN_012d0ef0();
                                    }
                                    lVar12 = *plVar10;
                                    lVar8 = *(long *)puVar2;
                                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                    if (uVar14 != 0) {
                                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar15 + -2) == lVar8) {
                                          puVar11 = (undefined8 *)
                                                    (lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                                          goto LAB_0410aa08;
                                        }
                                        uVar14 = uVar14 - 1;
                                        piVar15 = piVar15 + 4;
                                      } while (uVar14 != 0);
                                    }
                                    puVar11 = (undefined8 *)FUN_0131971c(plVar10,lVar8,3);
LAB_0410aa08:
                                    (*(code *)*puVar11)(plVar10,iVar18,puVar11[1]);
                                  }
                                  iVar18 = iVar18 + 1;
                                  puVar4 = PTR_DAT_057b4bd0;
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
LAB_02bde288:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

