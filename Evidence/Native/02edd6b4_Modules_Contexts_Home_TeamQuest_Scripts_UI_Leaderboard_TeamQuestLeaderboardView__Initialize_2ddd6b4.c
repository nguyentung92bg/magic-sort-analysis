/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardView$$Initialize
void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardView__Initialize (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardView$$Initialize
   void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardView__Initialize
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardView__Initialize_2ddd6b4
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,0);
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 != 0) {
        iVar6 = 0;
        if ((bRam0000000005c393bc & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057b4bd0,0,0);
          bRam0000000005c393bc = 1;
        }
        puVar3 = PTR_DAT_057b4bd0;
        plVar7 = *(long **)(lVar8 + 0x30);
        if (plVar7 != (long *)0x0) {
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057b4bd0) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_0410af84;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
          iVar5 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if (iVar5 == 0) {
            return;
          }
          plVar7 = *(long **)(lVar8 + 0x30);
          if (plVar7 != (long *)0x0) {
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0410afec;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,1);
LAB_0410afec:
            iVar5 = (*(code *)*puVar9)(plVar7,puVar9[1]);
            if (iVar5 < 1) {
              return;
            }
            if (*(char *)(lVar8 + 0xb0) == '\0') {
              return;
            }
            plVar7 = *(long **)(lVar8 + 0x30);
            if (plVar7 != (long *)0x0) {
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                    goto LAB_0410b078;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,5);
LAB_0410b078:
              uVar12 = (*(code *)*puVar9)(plVar7,puVar9[1]);
              if ((uVar12 & 1) != 0) {
                plVar7 = *(long **)(lVar8 + 0x30);
                if (plVar7 == (long *)0x0) goto LAB_0410b1dc;
                lVar11 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_0410b0e0;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,1);
LAB_0410b0e0:
                iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
                iVar6 = iVar6 + -1;
              }
              plVar7 = *(long **)(lVar8 + 0x30);
              if (plVar7 != (long *)0x0) {
                lVar11 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0410b148;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,0);
LAB_0410b148:
                lVar11 = (*(code *)*puVar9)(plVar7,iVar6,puVar9[1]);
                iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                  (lVar8);
                if (lVar11 != 0) {
                  lVar10 = 0x14;
                  if (iVar6 != 1) {
                    lVar10 = 0x10;
                  }
                  fVar18 = *(float *)(lVar8 + 0x70);
                  fVar16 = -*(float *)(lVar11 + lVar10);
                  fVar17 = *(float *)(lVar8 + 0x6c);
                  if (fVar16 <= *(float *)(lVar8 + 0x6c)) {
                    fVar17 = fVar16;
                  }
                  fVar19 = fVar17;
                  if (fVar16 < fVar18) {
                    fVar19 = fVar18;
                  }
                  iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                    (lVar8);
                  if (*(long *)(lVar8 + 0x28) != 0) {
                    fVar16 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                              (*(long *)(lVar8 + 0x28),0);
                    if (iVar6 != 1) {
                      fVar17 = fVar16;
                    }
                    fVar17 = fVar19 - fVar17;
                    if ((bRam0000000005c393b5 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057f7938);
                      FUN_012d0dc8(PTR_DAT_057be0d0);
                      FUN_012d0dc8(PTR_DAT_057b68e8);
                      bRam0000000005c393b5 = 1;
                    }
                    fVar16 = (float)Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetDisplacement_400a4c0
                                              (fVar17,lVar8);
                    lVar11 = *(long *)(lVar8 + 0x98);
                    if (cRam0000000005c272fe == '\0') {
                      FUN_012d0dc8(PTR_DAT_057d6f00);
                      cRam0000000005c272fe = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    if (lVar11 != 0) {
                      fVar15 = 1.0;
                      if (fVar17 < 0.0) {
                        fVar15 = -1.0;
                      }
                      System_Collections_Generic_Queue_float___Enqueue_336a53c
                                (fVar15 * SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar19 * fVar19),
                                 lVar11,*(undefined8 *)PTR_DAT_057be0d0);
                      lVar11 = *(long *)(lVar8 + 0x98);
                      if (lVar11 != 0) {
                        if (3 < *(int *)(lVar11 + 0x20)) {
                          System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                    (lVar11,*(undefined8 *)PTR_DAT_057f7938);
                        }
                        fVar17 = *(float *)(lVar8 + 0x54);
                        fVar16 = fVar16 + *(float *)(lVar8 + 0x50);
                        fVar19 = fVar19 + fVar17;
                        fVar18 = fVar18 + *(float *)(lVar8 + 0x58);
                        *(float *)(lVar8 + 0x50) = fVar16;
                        *(float *)(lVar8 + 0x54) = fVar19;
                        *(float *)(lVar8 + 0x58) = fVar18;
                        if (*(long *)(lVar8 + 0x28) != 0) {
                          fVar15 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                    (*(long *)(lVar8 + 0x28),0);
                          if (*(long *)(lVar8 + 0x28) != 0) {
                            UnityEngine_Transform__set_localPosition_4092ce0
                                      (fVar16,fVar19,fVar18,*(long *)(lVar8 + 0x28),0);
                            Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                      (lVar8);
                            iVar6 = *(int *)(lVar8 + 0x38);
                            iVar5 = *(int *)(lVar8 + 0x3c);
                            for (iVar14 = 9999;
                                ((((uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                       (lVar8), (uVar12 & 1) != 0 ||
                                   (uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                       (lVar8), (uVar12 & 1) != 0)) ||
                                  (uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                      (lVar8), (uVar12 & 1) != 0)) ||
                                 (uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                     (lVar8), (uVar12 & 1) != 0)) && (iVar14 != 0));
                                iVar14 = iVar14 + -1) {
                              iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                (lVar8);
                              fVar18 = fVar19 - fVar17;
                              if (iVar4 != 1) {
                                fVar18 = fVar16 - fVar15;
                              }
                              if (fVar18 <= 0.0) {
                                Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentDown_400a878
                                          (lVar8);
                              }
                              else {
                                Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentUp_400a724
                                          ();
                              }
                              Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                        (lVar8);
                            }
                            iVar14 = *(int *)(lVar8 + 0x38);
                            iVar4 = *(int *)(lVar8 + 0x3c);
                            iVar1 = iVar6;
                            puVar3 = PTR_DAT_057b4bd0;
                            if ((bRam0000000005c393b6 & 1) == 0) {
                              FUN_012d0dc8(PTR_DAT_057b4bd0);
                              bRam0000000005c393b6 = 1;
                              puVar3 = PTR_DAT_057b4bd0;
                            }
                            for (; puVar2 = PTR_DAT_057b4bd0, iVar1 <= iVar5; iVar1 = iVar1 + 1) {
                              if ((iVar1 < iVar14) || (iVar4 < iVar1)) {
                                plVar7 = *(long **)(lVar8 + 0x30);
                                if (plVar7 == (long *)0x0) goto LAB_0410aa3c;
                                lVar10 = *plVar7;
                                lVar11 = *(long *)PTR_DAT_057b4bd0;
                                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                PTR_DAT_057b4bd0 = puVar3;
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == lVar11) {
                                      puVar9 = (undefined8 *)
                                               (lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                                      goto LAB_0410a980;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar9 = (undefined8 *)FUN_0131971c(plVar7,lVar11,2);
LAB_0410a980:
                                (*(code *)*puVar9)(plVar7,iVar1,puVar9[1]);
                                puVar3 = PTR_DAT_057b4bd0;
                              }
                              PTR_DAT_057b4bd0 = puVar3;
                              puVar3 = PTR_DAT_057b4bd0;
                              PTR_DAT_057b4bd0 = puVar2;
                            }
                            do {
                              PTR_DAT_057b4bd0 = puVar3;
                              if (iVar4 < iVar14) {
                                return;
                              }
                              if ((iVar14 < iVar6) || (iVar5 < iVar14)) {
                                plVar7 = *(long **)(lVar8 + 0x30);
                                puVar3 = PTR_DAT_057b4bd0;
                                if (plVar7 == (long *)0x0) {
LAB_0410aa3c:
                                  PTR_DAT_057b4bd0 = puVar3;
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar10 = *plVar7;
                                lVar11 = *(long *)puVar2;
                                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == lVar11) {
                                      puVar9 = (undefined8 *)
                                               (lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                                      goto LAB_0410aa08;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar9 = (undefined8 *)FUN_0131971c(plVar7,lVar11,3);
LAB_0410aa08:
                                (*(code *)*puVar9)(plVar7,iVar14,puVar9[1]);
                              }
                              iVar14 = iVar14 + 1;
                              puVar3 = PTR_DAT_057b4bd0;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

