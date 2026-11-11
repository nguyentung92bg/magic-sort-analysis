/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInResultView$$UpdateScrollbar
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateScrollbar (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInResultView$$UpdateScrollbar
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateScrollbar
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateScrollbar_32dd4ec
               (long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if ((bRam0000000005c31d96 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784728);
    FUN_012d0dc8(PTR_DAT_057b4ad8);
    FUN_012d0dc8(PTR_DAT_05816f50);
    FUN_012d0dc8(PTR_DAT_057ab1c8);
    FUN_012d0dc8(PTR_DAT_057620c8);
    bRam0000000005c31d96 = 1;
  }
  lVar14 = *(long *)(param_1 + 0x38);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
    lVar14 = *(long *)(param_1 + 0x20);
    if (lVar14 != 0) {
      if ((bRam0000000005c393be & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b4bd0,0);
        bRam0000000005c393be = 1;
      }
      if (*(long *)(lVar14 + 0x78) != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar14 + 0x78),0,0);
      }
      *(undefined1 *)(lVar14 + 0xb0) = 0;
      *(undefined2 *)(lVar14 + 0x74) = 0;
      if (*(long *)(lVar14 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined4 *)(*(long *)(lVar14 + 0x60) + 0x10) = 0;
      puVar12 = (undefined8 *)(lVar14 + 0x30);
      plVar11 = (long *)*puVar12;
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057b4bd0) {
              puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
              goto LAB_0410b4c8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057b4bd0,10);
LAB_0410b4c8:
        (*(code *)*puVar13)(plVar11,puVar13[1]);
      }
      *puVar12 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(*(long *)(param_1 + 0x30) + 0x28) = lVar14;
    FUN_012d0d74();
    puVar7 = PTR_DAT_057620c8;
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,0);
      lVar14 = *(long *)puVar7;
      lVar17 = *(long *)(param_1 + 0x38);
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar14 = *(long *)puVar7;
      }
      puVar6 = PTR_DAT_05816f50;
      lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar18 == 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar14 = *(long *)puVar7;
        }
        uVar20 = **(undefined8 **)(lVar14 + 0xb8);
        lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
        if (lVar18 == 0) goto LAB_033dd67c;
        System_Predicate_object____ctor_30fcf30(lVar18,uVar20,*(undefined8 *)PTR_DAT_057ab1c8,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        *plVar11 = lVar18;
        FUN_012d0d74(plVar11,lVar18);
      }
      if (lVar17 != 0) {
        uVar8 = System_Collections_Generic_List_object___FindIndex_21fd2fc
                          (lVar17,lVar18,*(undefined8 *)PTR_DAT_05784728);
        if (uVar8 == 0xffffffff) {
          return;
        }
        lVar14 = *(long *)(param_1 + 0x20);
        if (lVar14 != 0) {
          if ((bRam0000000005c393bc & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057b4bd0,uVar8,0);
            bRam0000000005c393bc = 1;
          }
          puVar7 = PTR_DAT_057b4bd0;
          plVar11 = *(long **)(lVar14 + 0x30);
          if (plVar11 != (long *)0x0) {
            lVar17 = *plVar11;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057b4bd0) {
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_0410af84;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
            iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if (iVar10 == 0) {
              return;
            }
            plVar11 = *(long **)(lVar14 + 0x30);
            if (plVar11 != (long *)0x0) {
              lVar17 = *plVar11;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                    puVar12 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_0410afec;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar7,1);
LAB_0410afec:
              iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((int)uVar8 < 0) {
                return;
              }
              if (iVar10 <= (int)uVar8) {
                return;
              }
              if (*(char *)(lVar14 + 0xb0) == '\0') {
                return;
              }
              plVar11 = *(long **)(lVar14 + 0x30);
              if (plVar11 != (long *)0x0) {
                lVar17 = *plVar11;
                uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                      puVar12 = (undefined8 *)(lVar17 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                      goto LAB_0410b078;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar7,5);
LAB_0410b078:
                uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                if ((uVar15 & 1) != 0) {
                  plVar11 = *(long **)(lVar14 + 0x30);
                  if (plVar11 == (long *)0x0) goto LAB_0410b1dc;
                  lVar17 = *plVar11;
                  uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_0410b0e0;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar7,1);
LAB_0410b0e0:
                  iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                  uVar8 = iVar10 + ~uVar8;
                }
                plVar11 = *(long **)(lVar14 + 0x30);
                if (plVar11 != (long *)0x0) {
                  lVar17 = *plVar11;
                  uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                        puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_0410b148;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar7,0);
LAB_0410b148:
                  lVar17 = (*(code *)*puVar12)(plVar11,uVar8,puVar12[1]);
                  iVar10 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                     (lVar14);
                  if (lVar17 != 0) {
                    lVar18 = 0x14;
                    if (iVar10 != 1) {
                      lVar18 = 0x10;
                    }
                    fVar24 = *(float *)(lVar14 + 0x70);
                    fVar22 = -*(float *)(lVar17 + lVar18);
                    fVar23 = *(float *)(lVar14 + 0x6c);
                    if (fVar22 <= *(float *)(lVar14 + 0x6c)) {
                      fVar23 = fVar22;
                    }
                    fVar25 = fVar23;
                    if (fVar22 < fVar24) {
                      fVar25 = fVar24;
                    }
                    iVar10 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                       (lVar14);
                    if (*(long *)(lVar14 + 0x28) != 0) {
                      fVar22 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                (*(long *)(lVar14 + 0x28),0);
                      if (iVar10 != 1) {
                        fVar23 = fVar22;
                      }
                      fVar23 = fVar25 - fVar23;
                      if ((bRam0000000005c393b5 & 1) == 0) {
                        FUN_012d0dc8(PTR_DAT_057f7938);
                        FUN_012d0dc8(PTR_DAT_057be0d0);
                        FUN_012d0dc8(PTR_DAT_057b68e8);
                        bRam0000000005c393b5 = 1;
                      }
                      fVar22 = (float)Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetDisplacement_400a4c0
                                                (fVar23,lVar14);
                      lVar17 = *(long *)(lVar14 + 0x98);
                      if (cRam0000000005c272fe == '\0') {
                        FUN_012d0dc8(PTR_DAT_057d6f00);
                        cRam0000000005c272fe = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                      }
                      if (lVar17 != 0) {
                        fVar21 = 1.0;
                        if (fVar23 < 0.0) {
                          fVar21 = -1.0;
                        }
                        System_Collections_Generic_Queue_float___Enqueue_336a53c
                                  (fVar21 * SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25
                                                ),lVar17,*(undefined8 *)PTR_DAT_057be0d0);
                        lVar17 = *(long *)(lVar14 + 0x98);
                        if (lVar17 != 0) {
                          if (3 < *(int *)(lVar17 + 0x20)) {
                            System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                      (lVar17,*(undefined8 *)PTR_DAT_057f7938);
                          }
                          fVar23 = *(float *)(lVar14 + 0x54);
                          fVar22 = fVar22 + *(float *)(lVar14 + 0x50);
                          fVar25 = fVar25 + fVar23;
                          fVar24 = fVar24 + *(float *)(lVar14 + 0x58);
                          *(float *)(lVar14 + 0x50) = fVar22;
                          *(float *)(lVar14 + 0x54) = fVar25;
                          *(float *)(lVar14 + 0x58) = fVar24;
                          if (*(long *)(lVar14 + 0x28) != 0) {
                            fVar21 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                      (*(long *)(lVar14 + 0x28),0);
                            if (*(long *)(lVar14 + 0x28) != 0) {
                              UnityEngine_Transform__set_localPosition_4092ce0
                                        (fVar22,fVar25,fVar24,*(long *)(lVar14 + 0x28),0);
                              Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                        (lVar14);
                              iVar10 = *(int *)(lVar14 + 0x38);
                              iVar2 = *(int *)(lVar14 + 0x3c);
                              for (iVar19 = 9999;
                                  ((((uVar15 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                         (lVar14), (uVar15 & 1) != 0 ||
                                     (uVar15 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                         (lVar14), (uVar15 & 1) != 0)) ||
                                    (uVar15 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                        (lVar14), (uVar15 & 1) != 0)) ||
                                   (uVar15 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                       (lVar14), (uVar15 & 1) != 0)) &&
                                  (iVar19 != 0)); iVar19 = iVar19 + -1) {
                                iVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                  (lVar14);
                                fVar24 = fVar25 - fVar23;
                                if (iVar9 != 1) {
                                  fVar24 = fVar22 - fVar21;
                                }
                                if (fVar24 <= 0.0) {
                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentDown_400a878
                                            (lVar14);
                                }
                                else {
                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentUp_400a724
                                            ();
                                }
                                Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                          (lVar14);
                              }
                              iVar19 = *(int *)(lVar14 + 0x38);
                              iVar9 = *(int *)(lVar14 + 0x3c);
                              iVar5 = iVar10;
                              puVar7 = PTR_DAT_057b4bd0;
                              if ((bRam0000000005c393b6 & 1) == 0) {
                                FUN_012d0dc8(PTR_DAT_057b4bd0);
                                bRam0000000005c393b6 = 1;
                                puVar7 = PTR_DAT_057b4bd0;
                              }
                              for (; puVar6 = PTR_DAT_057b4bd0, iVar5 <= iVar2; iVar5 = iVar5 + 1) {
                                if ((iVar5 < iVar19) || (iVar9 < iVar5)) {
                                  plVar11 = *(long **)(lVar14 + 0x30);
                                  if (plVar11 == (long *)0x0) goto LAB_0410aa3c;
                                  lVar18 = *plVar11;
                                  lVar17 = *(long *)PTR_DAT_057b4bd0;
                                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                                  PTR_DAT_057b4bd0 = puVar7;
                                  if (uVar15 != 0) {
                                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar16 + -2) == lVar17) {
                                        puVar12 = (undefined8 *)
                                                  (lVar18 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                                        goto LAB_0410a980;
                                      }
                                      uVar15 = uVar15 - 1;
                                      piVar16 = piVar16 + 4;
                                    } while (uVar15 != 0);
                                  }
                                  puVar12 = (undefined8 *)FUN_0131971c(plVar11,lVar17,2);
LAB_0410a980:
                                  (*(code *)*puVar12)(plVar11,iVar5,puVar12[1]);
                                  puVar7 = PTR_DAT_057b4bd0;
                                }
                                PTR_DAT_057b4bd0 = puVar7;
                                puVar7 = PTR_DAT_057b4bd0;
                                PTR_DAT_057b4bd0 = puVar6;
                              }
                              do {
                                PTR_DAT_057b4bd0 = puVar7;
                                if (iVar9 < iVar19) {
                                  return;
                                }
                                if ((iVar19 < iVar10) || (iVar2 < iVar19)) {
                                  plVar11 = *(long **)(lVar14 + 0x30);
                                  puVar7 = PTR_DAT_057b4bd0;
                                  if (plVar11 == (long *)0x0) {
LAB_0410aa3c:
                                    PTR_DAT_057b4bd0 = puVar7;
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  lVar18 = *plVar11;
                                  lVar17 = *(long *)puVar6;
                                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                                  if (uVar15 != 0) {
                                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar16 + -2) == lVar17) {
                                        puVar12 = (undefined8 *)
                                                  (lVar18 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                                        goto LAB_0410aa08;
                                      }
                                      uVar15 = uVar15 - 1;
                                      piVar16 = piVar16 + 4;
                                    } while (uVar15 != 0);
                                  }
                                  puVar12 = (undefined8 *)FUN_0131971c(plVar11,lVar17,3);
LAB_0410aa08:
                                  (*(code *)*puVar12)(plVar11,iVar19,puVar12[1]);
                                }
                                iVar19 = iVar19 + 1;
                                puVar7 = PTR_DAT_057b4bd0;
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
LAB_033dd67c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

