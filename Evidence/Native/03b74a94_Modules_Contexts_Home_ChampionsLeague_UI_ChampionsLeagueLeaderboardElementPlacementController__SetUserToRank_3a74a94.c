/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$SetUserToRank
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__SetUserToRank (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$SetUserToRank
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__SetUserToRank
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t rank, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__SetUserToRank_3a74a94
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetIndexEquivalentOfRank_3a747e0
                      ();
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__SetUserToIndex_3a74938
                (*(long *)(param_1 + 0x28),uVar5);
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 != 0) {
        if ((bRam0000000005c393bc & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057b4bd0,uVar5,0);
          bRam0000000005c393bc = 1;
        }
        puVar4 = PTR_DAT_057b4bd0;
        plVar14 = *(long **)(lVar8 + 0x30);
        if (plVar14 != (long *)0x0) {
          lVar11 = *plVar14;
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
          puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
          iVar7 = (*(code *)*puVar9)(plVar14,puVar9[1]);
          if (iVar7 == 0) {
            return;
          }
          plVar14 = *(long **)(lVar8 + 0x30);
          if (plVar14 != (long *)0x0) {
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0410afec;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar4,1);
LAB_0410afec:
            iVar7 = (*(code *)*puVar9)(plVar14,puVar9[1]);
            if ((int)uVar5 < 0) {
              return;
            }
            if (iVar7 <= (int)uVar5) {
              return;
            }
            if (*(char *)(lVar8 + 0xb0) == '\0') {
              return;
            }
            plVar14 = *(long **)(lVar8 + 0x30);
            if (plVar14 != (long *)0x0) {
              lVar11 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                    goto LAB_0410b078;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar4,5);
LAB_0410b078:
              uVar12 = (*(code *)*puVar9)(plVar14,puVar9[1]);
              if ((uVar12 & 1) != 0) {
                plVar14 = *(long **)(lVar8 + 0x30);
                if (plVar14 == (long *)0x0) goto LAB_0410b1dc;
                lVar11 = *plVar14;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                      puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_0410b0e0;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar4,1);
LAB_0410b0e0:
                iVar7 = (*(code *)*puVar9)(plVar14,puVar9[1]);
                uVar5 = iVar7 + ~uVar5;
              }
              plVar14 = *(long **)(lVar8 + 0x30);
              if (plVar14 != (long *)0x0) {
                lVar11 = *plVar14;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0410b148;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar4,0);
LAB_0410b148:
                lVar11 = (*(code *)*puVar9)(plVar14,uVar5,puVar9[1]);
                iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                  (lVar8);
                if (lVar11 != 0) {
                  lVar10 = 0x14;
                  if (iVar7 != 1) {
                    lVar10 = 0x10;
                  }
                  fVar19 = *(float *)(lVar8 + 0x70);
                  fVar17 = -*(float *)(lVar11 + lVar10);
                  fVar18 = *(float *)(lVar8 + 0x6c);
                  if (fVar17 <= *(float *)(lVar8 + 0x6c)) {
                    fVar18 = fVar17;
                  }
                  fVar20 = fVar18;
                  if (fVar17 < fVar19) {
                    fVar20 = fVar19;
                  }
                  iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                    (lVar8);
                  if (*(long *)(lVar8 + 0x28) != 0) {
                    fVar17 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                              (*(long *)(lVar8 + 0x28),0);
                    if (iVar7 != 1) {
                      fVar18 = fVar17;
                    }
                    fVar18 = fVar20 - fVar18;
                    if ((bRam0000000005c393b5 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057f7938);
                      FUN_012d0dc8(PTR_DAT_057be0d0);
                      FUN_012d0dc8(PTR_DAT_057b68e8);
                      bRam0000000005c393b5 = 1;
                    }
                    fVar17 = (float)Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetDisplacement_400a4c0
                                              (fVar18,lVar8);
                    lVar11 = *(long *)(lVar8 + 0x98);
                    if (cRam0000000005c272fe == '\0') {
                      FUN_012d0dc8(PTR_DAT_057d6f00);
                      cRam0000000005c272fe = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    if (lVar11 != 0) {
                      fVar16 = 1.0;
                      if (fVar18 < 0.0) {
                        fVar16 = -1.0;
                      }
                      System_Collections_Generic_Queue_float___Enqueue_336a53c
                                (fVar16 * SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar20 * fVar20),
                                 lVar11,*(undefined8 *)PTR_DAT_057be0d0);
                      lVar11 = *(long *)(lVar8 + 0x98);
                      if (lVar11 != 0) {
                        if (3 < *(int *)(lVar11 + 0x20)) {
                          System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                    (lVar11,*(undefined8 *)PTR_DAT_057f7938);
                        }
                        fVar18 = *(float *)(lVar8 + 0x54);
                        fVar17 = fVar17 + *(float *)(lVar8 + 0x50);
                        fVar20 = fVar20 + fVar18;
                        fVar19 = fVar19 + *(float *)(lVar8 + 0x58);
                        *(float *)(lVar8 + 0x50) = fVar17;
                        *(float *)(lVar8 + 0x54) = fVar20;
                        *(float *)(lVar8 + 0x58) = fVar19;
                        if (*(long *)(lVar8 + 0x28) != 0) {
                          fVar16 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                    (*(long *)(lVar8 + 0x28),0);
                          if (*(long *)(lVar8 + 0x28) != 0) {
                            UnityEngine_Transform__set_localPosition_4092ce0
                                      (fVar17,fVar20,fVar19,*(long *)(lVar8 + 0x28),0);
                            Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                      (lVar8);
                            iVar7 = *(int *)(lVar8 + 0x38);
                            iVar1 = *(int *)(lVar8 + 0x3c);
                            for (iVar15 = 9999;
                                ((((uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                       (lVar8), (uVar12 & 1) != 0 ||
                                   (uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                       (lVar8), (uVar12 & 1) != 0)) ||
                                  (uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                      (lVar8), (uVar12 & 1) != 0)) ||
                                 (uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                     (lVar8), (uVar12 & 1) != 0)) && (iVar15 != 0));
                                iVar15 = iVar15 + -1) {
                              iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                (lVar8);
                              fVar19 = fVar20 - fVar18;
                              if (iVar6 != 1) {
                                fVar19 = fVar17 - fVar16;
                              }
                              if (fVar19 <= 0.0) {
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
                            iVar15 = *(int *)(lVar8 + 0x38);
                            iVar6 = *(int *)(lVar8 + 0x3c);
                            iVar2 = iVar7;
                            puVar4 = PTR_DAT_057b4bd0;
                            if ((bRam0000000005c393b6 & 1) == 0) {
                              FUN_012d0dc8(PTR_DAT_057b4bd0);
                              bRam0000000005c393b6 = 1;
                              puVar4 = PTR_DAT_057b4bd0;
                            }
                            for (; puVar3 = PTR_DAT_057b4bd0, iVar2 <= iVar1; iVar2 = iVar2 + 1) {
                              if ((iVar2 < iVar15) || (iVar6 < iVar2)) {
                                plVar14 = *(long **)(lVar8 + 0x30);
                                if (plVar14 == (long *)0x0) goto LAB_0410aa3c;
                                lVar10 = *plVar14;
                                lVar11 = *(long *)PTR_DAT_057b4bd0;
                                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                PTR_DAT_057b4bd0 = puVar4;
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
                                puVar9 = (undefined8 *)FUN_0131971c(plVar14,lVar11,2);
LAB_0410a980:
                                (*(code *)*puVar9)(plVar14,iVar2,puVar9[1]);
                                puVar4 = PTR_DAT_057b4bd0;
                              }
                              PTR_DAT_057b4bd0 = puVar4;
                              puVar4 = PTR_DAT_057b4bd0;
                              PTR_DAT_057b4bd0 = puVar3;
                            }
                            do {
                              PTR_DAT_057b4bd0 = puVar4;
                              if (iVar6 < iVar15) {
                                return;
                              }
                              if ((iVar15 < iVar7) || (iVar1 < iVar15)) {
                                plVar14 = *(long **)(lVar8 + 0x30);
                                puVar4 = PTR_DAT_057b4bd0;
                                if (plVar14 == (long *)0x0) {
LAB_0410aa3c:
                                  PTR_DAT_057b4bd0 = puVar4;
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar10 = *plVar14;
                                lVar11 = *(long *)puVar3;
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
                                puVar9 = (undefined8 *)FUN_0131971c(plVar14,lVar11,3);
LAB_0410aa08:
                                (*(code *)*puVar9)(plVar14,iVar15,puVar9[1]);
                              }
                              iVar15 = iVar15 + 1;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

