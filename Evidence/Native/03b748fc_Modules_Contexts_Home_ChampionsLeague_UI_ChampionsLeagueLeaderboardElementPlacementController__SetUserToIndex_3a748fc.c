/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$SetUserToIndex
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__SetUserToIndex (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$SetUserToIndex
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__SetUserToIndex
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t index, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__SetUserToIndex_3a748fc
               (long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__SetUserToIndex_3a74938
              ();
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      if ((bRam0000000005c393bc & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b4bd0,param_2,0);
        bRam0000000005c393bc = 1;
      }
      puVar4 = PTR_DAT_057b4bd0;
      plVar13 = *(long **)(lVar7 + 0x30);
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057b4bd0) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0410af84;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
        iVar6 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        if (iVar6 == 0) {
          return;
        }
        plVar13 = *(long **)(lVar7 + 0x30);
        if (plVar13 != (long *)0x0) {
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_0410afec;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar4,1);
LAB_0410afec:
          iVar6 = (*(code *)*puVar8)(plVar13,puVar8[1]);
          if ((int)param_2 < 0) {
            return;
          }
          if (iVar6 <= (int)param_2) {
            return;
          }
          if (*(char *)(lVar7 + 0xb0) == '\0') {
            return;
          }
          plVar13 = *(long **)(lVar7 + 0x30);
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                  goto LAB_0410b078;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar4,5);
LAB_0410b078:
            uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
            if ((uVar11 & 1) != 0) {
              plVar13 = *(long **)(lVar7 + 0x30);
              if (plVar13 == (long *)0x0) goto LAB_0410b1dc;
              lVar10 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_0410b0e0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar4,1);
LAB_0410b0e0:
              iVar6 = (*(code *)*puVar8)(plVar13,puVar8[1]);
              param_2 = iVar6 + ~param_2;
            }
            plVar13 = *(long **)(lVar7 + 0x30);
            if (plVar13 != (long *)0x0) {
              lVar10 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0410b148;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar4,0);
LAB_0410b148:
              lVar10 = (*(code *)*puVar8)(plVar13,param_2,puVar8[1]);
              iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                (lVar7);
              if (lVar10 != 0) {
                lVar9 = 0x14;
                if (iVar6 != 1) {
                  lVar9 = 0x10;
                }
                fVar18 = *(float *)(lVar7 + 0x70);
                fVar16 = -*(float *)(lVar10 + lVar9);
                fVar17 = *(float *)(lVar7 + 0x6c);
                if (fVar16 <= *(float *)(lVar7 + 0x6c)) {
                  fVar17 = fVar16;
                }
                fVar19 = fVar17;
                if (fVar16 < fVar18) {
                  fVar19 = fVar18;
                }
                iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                  (lVar7);
                if (*(long *)(lVar7 + 0x28) != 0) {
                  fVar16 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                            (*(long *)(lVar7 + 0x28),0);
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
                                            (fVar17,lVar7);
                  lVar10 = *(long *)(lVar7 + 0x98);
                  if (cRam0000000005c272fe == '\0') {
                    FUN_012d0dc8(PTR_DAT_057d6f00);
                    cRam0000000005c272fe = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  if (lVar10 != 0) {
                    fVar15 = 1.0;
                    if (fVar17 < 0.0) {
                      fVar15 = -1.0;
                    }
                    System_Collections_Generic_Queue_float___Enqueue_336a53c
                              (fVar15 * SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar19 * fVar19),
                               lVar10,*(undefined8 *)PTR_DAT_057be0d0);
                    lVar10 = *(long *)(lVar7 + 0x98);
                    if (lVar10 != 0) {
                      if (3 < *(int *)(lVar10 + 0x20)) {
                        System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                  (lVar10,*(undefined8 *)PTR_DAT_057f7938);
                      }
                      fVar17 = *(float *)(lVar7 + 0x54);
                      fVar16 = fVar16 + *(float *)(lVar7 + 0x50);
                      fVar19 = fVar19 + fVar17;
                      fVar18 = fVar18 + *(float *)(lVar7 + 0x58);
                      *(float *)(lVar7 + 0x50) = fVar16;
                      *(float *)(lVar7 + 0x54) = fVar19;
                      *(float *)(lVar7 + 0x58) = fVar18;
                      if (*(long *)(lVar7 + 0x28) != 0) {
                        fVar15 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                  (*(long *)(lVar7 + 0x28),0);
                        if (*(long *)(lVar7 + 0x28) != 0) {
                          UnityEngine_Transform__set_localPosition_4092ce0
                                    (fVar16,fVar19,fVar18,*(long *)(lVar7 + 0x28),0);
                          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                    (lVar7);
                          iVar6 = *(int *)(lVar7 + 0x38);
                          iVar1 = *(int *)(lVar7 + 0x3c);
                          for (iVar14 = 9999;
                              ((((uVar11 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                     (lVar7), (uVar11 & 1) != 0 ||
                                 (uVar11 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                     (lVar7), (uVar11 & 1) != 0)) ||
                                (uVar11 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                    (lVar7), (uVar11 & 1) != 0)) ||
                               (uVar11 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                   (lVar7), (uVar11 & 1) != 0)) && (iVar14 != 0));
                              iVar14 = iVar14 + -1) {
                            iVar5 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                              (lVar7);
                            fVar18 = fVar19 - fVar17;
                            if (iVar5 != 1) {
                              fVar18 = fVar16 - fVar15;
                            }
                            if (fVar18 <= 0.0) {
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
                          iVar14 = *(int *)(lVar7 + 0x38);
                          iVar5 = *(int *)(lVar7 + 0x3c);
                          iVar2 = iVar6;
                          puVar4 = PTR_DAT_057b4bd0;
                          if ((bRam0000000005c393b6 & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_057b4bd0);
                            bRam0000000005c393b6 = 1;
                            puVar4 = PTR_DAT_057b4bd0;
                          }
                          for (; puVar3 = PTR_DAT_057b4bd0, iVar2 <= iVar1; iVar2 = iVar2 + 1) {
                            if ((iVar2 < iVar14) || (iVar5 < iVar2)) {
                              plVar13 = *(long **)(lVar7 + 0x30);
                              if (plVar13 == (long *)0x0) goto LAB_0410aa3c;
                              lVar9 = *plVar13;
                              lVar10 = *(long *)PTR_DAT_057b4bd0;
                              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
                              PTR_DAT_057b4bd0 = puVar4;
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == lVar10) {
                                    puVar8 = (undefined8 *)
                                             (lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                                    goto LAB_0410a980;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar8 = (undefined8 *)FUN_0131971c(plVar13,lVar10,2);
LAB_0410a980:
                              (*(code *)*puVar8)(plVar13,iVar2,puVar8[1]);
                              puVar4 = PTR_DAT_057b4bd0;
                            }
                            PTR_DAT_057b4bd0 = puVar4;
                            puVar4 = PTR_DAT_057b4bd0;
                            PTR_DAT_057b4bd0 = puVar3;
                          }
                          do {
                            PTR_DAT_057b4bd0 = puVar4;
                            if (iVar5 < iVar14) {
                              return;
                            }
                            if ((iVar14 < iVar6) || (iVar1 < iVar14)) {
                              plVar13 = *(long **)(lVar7 + 0x30);
                              puVar4 = PTR_DAT_057b4bd0;
                              if (plVar13 == (long *)0x0) {
LAB_0410aa3c:
                                PTR_DAT_057b4bd0 = puVar4;
                    /* WARNING: Subroutine does not return */
                                FUN_012d0ef0();
                              }
                              lVar9 = *plVar13;
                              lVar10 = *(long *)puVar3;
                              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == lVar10) {
                                    puVar8 = (undefined8 *)
                                             (lVar9 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                                    goto LAB_0410aa08;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar8 = (undefined8 *)FUN_0131971c(plVar13,lVar10,3);
LAB_0410aa08:
                              (*(code *)*puVar8)(plVar13,iVar14,puVar8[1]);
                            }
                            iVar14 = iVar14 + 1;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

