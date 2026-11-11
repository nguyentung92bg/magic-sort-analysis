/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$Initialize
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__Initialize (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, int32_t currentRank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$Initialize
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__Initialize
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this, int32_t currentRank, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__Initialize_38c9a30
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  plVar8 = *(long **)(param_4 + 0x28);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    if (*(long *)(param_4 + 0x18) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                (*(long *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20),0,0);
      plVar8 = *(long **)(param_4 + 0x28);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        *(undefined4 *)(param_4 + 0x38) = param_2;
        if (*(long *)(param_4 + 0x18) != 0) {
          uVar16 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetColliderCenter_4009be8
                             (*(long *)(param_4 + 0x18),0);
          *(undefined4 *)(param_4 + 0x48) = uVar16;
          *(undefined4 *)(param_4 + 0x4c) = param_2;
          *(undefined4 *)(param_4 + 0x50) = param_3;
          Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__StoreInitialLocalPositionsOfScrollElements_38ca91c
                    (param_4);
          if (*(long *)(param_4 + 0x28) != 0) {
            uVar5 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetIndexEquivalentOfRank_38caa14
                              (*(long *)(param_4 + 0x28),param_5);
            lVar10 = *(long *)(param_4 + 0x18);
            if (lVar10 != 0) {
              if ((bRam0000000005c393bc & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057b4bd0,uVar5,0);
                bRam0000000005c393bc = 1;
              }
              puVar4 = PTR_DAT_057b4bd0;
              plVar8 = *(long **)(lVar10 + 0x30);
              if (plVar8 != (long *)0x0) {
                lVar12 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057b4bd0) {
                      puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_0410af84;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
                iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                if (iVar7 == 0) {
                  return;
                }
                plVar8 = *(long **)(lVar10 + 0x30);
                if (plVar8 != (long *)0x0) {
                  lVar12 = *plVar8;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_0410afec;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar4,1);
LAB_0410afec:
                  iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                  if ((int)uVar5 < 0) {
                    return;
                  }
                  if (iVar7 <= (int)uVar5) {
                    return;
                  }
                  if (*(char *)(lVar10 + 0xb0) == '\0') {
                    return;
                  }
                  plVar8 = *(long **)(lVar10 + 0x30);
                  if (plVar8 != (long *)0x0) {
                    lVar12 = *plVar8;
                    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                          goto LAB_0410b078;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar4,5);
LAB_0410b078:
                    uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    if ((uVar13 & 1) != 0) {
                      plVar8 = *(long **)(lVar10 + 0x30);
                      if (plVar8 == (long *)0x0) goto LAB_0410b1dc;
                      lVar12 = *plVar8;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                            goto LAB_0410b0e0;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar4,1);
LAB_0410b0e0:
                      iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                      uVar5 = iVar7 + ~uVar5;
                    }
                    plVar8 = *(long **)(lVar10 + 0x30);
                    if (plVar8 != (long *)0x0) {
                      lVar12 = *plVar8;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_0410b148;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar4,0);
LAB_0410b148:
                      lVar12 = (*(code *)*puVar9)(plVar8,uVar5,puVar9[1]);
                      iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                        (lVar10);
                      if (lVar12 != 0) {
                        lVar11 = 0x14;
                        if (iVar7 != 1) {
                          lVar11 = 0x10;
                        }
                        fVar20 = *(float *)(lVar10 + 0x70);
                        fVar18 = -*(float *)(lVar12 + lVar11);
                        fVar19 = *(float *)(lVar10 + 0x6c);
                        if (fVar18 <= *(float *)(lVar10 + 0x6c)) {
                          fVar19 = fVar18;
                        }
                        fVar21 = fVar19;
                        if (fVar18 < fVar20) {
                          fVar21 = fVar20;
                        }
                        iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                          (lVar10);
                        if (*(long *)(lVar10 + 0x28) != 0) {
                          fVar18 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                    (*(long *)(lVar10 + 0x28),0);
                          if (iVar7 != 1) {
                            fVar19 = fVar18;
                          }
                          fVar19 = fVar21 - fVar19;
                          if ((bRam0000000005c393b5 & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_057f7938);
                            FUN_012d0dc8(PTR_DAT_057be0d0);
                            FUN_012d0dc8(PTR_DAT_057b68e8);
                            bRam0000000005c393b5 = 1;
                          }
                          fVar18 = (float)Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetDisplacement_400a4c0
                                                    (fVar19,lVar10);
                          lVar12 = *(long *)(lVar10 + 0x98);
                          if (cRam0000000005c272fe == '\0') {
                            FUN_012d0dc8(PTR_DAT_057d6f00);
                            cRam0000000005c272fe = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                          }
                          if (lVar12 != 0) {
                            fVar17 = 1.0;
                            if (fVar19 < 0.0) {
                              fVar17 = -1.0;
                            }
                            System_Collections_Generic_Queue_float___Enqueue_336a53c
                                      (fVar17 * SQRT(fVar20 * fVar20 +
                                                     fVar18 * fVar18 + fVar21 * fVar21),lVar12,
                                       *(undefined8 *)PTR_DAT_057be0d0);
                            lVar12 = *(long *)(lVar10 + 0x98);
                            if (lVar12 != 0) {
                              if (3 < *(int *)(lVar12 + 0x20)) {
                                System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                          (lVar12,*(undefined8 *)PTR_DAT_057f7938);
                              }
                              fVar19 = *(float *)(lVar10 + 0x54);
                              fVar18 = fVar18 + *(float *)(lVar10 + 0x50);
                              fVar21 = fVar21 + fVar19;
                              fVar20 = fVar20 + *(float *)(lVar10 + 0x58);
                              *(float *)(lVar10 + 0x50) = fVar18;
                              *(float *)(lVar10 + 0x54) = fVar21;
                              *(float *)(lVar10 + 0x58) = fVar20;
                              if (*(long *)(lVar10 + 0x28) != 0) {
                                fVar17 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                          (*(long *)(lVar10 + 0x28),0);
                                if (*(long *)(lVar10 + 0x28) != 0) {
                                  UnityEngine_Transform__set_localPosition_4092ce0
                                            (fVar18,fVar21,fVar20,*(long *)(lVar10 + 0x28),0);
                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                            (lVar10);
                                  iVar7 = *(int *)(lVar10 + 0x38);
                                  iVar1 = *(int *)(lVar10 + 0x3c);
                                  for (iVar15 = 9999;
                                      ((((uVar13 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                            (lVar10), (uVar13 & 1) != 0 ||
                                         (uVar13 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                            (lVar10), (uVar13 & 1) != 0)) ||
                                        (uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                            (lVar10), (uVar13 & 1) != 0)) ||
                                       (uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                           (lVar10), (uVar13 & 1) != 0)) &&
                                      (iVar15 != 0)); iVar15 = iVar15 + -1) {
                                    iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                      (lVar10);
                                    fVar20 = fVar21 - fVar19;
                                    if (iVar6 != 1) {
                                      fVar20 = fVar18 - fVar17;
                                    }
                                    if (fVar20 <= 0.0) {
                                      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentDown_400a878
                                                (lVar10);
                                    }
                                    else {
                                      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentUp_400a724
                                                ();
                                    }
                                    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                              (lVar10);
                                  }
                                  iVar15 = *(int *)(lVar10 + 0x38);
                                  iVar6 = *(int *)(lVar10 + 0x3c);
                                  iVar2 = iVar7;
                                  puVar4 = PTR_DAT_057b4bd0;
                                  if ((bRam0000000005c393b6 & 1) == 0) {
                                    FUN_012d0dc8(PTR_DAT_057b4bd0);
                                    bRam0000000005c393b6 = 1;
                                    puVar4 = PTR_DAT_057b4bd0;
                                  }
                                  for (; puVar3 = PTR_DAT_057b4bd0, iVar2 <= iVar1;
                                      iVar2 = iVar2 + 1) {
                                    if ((iVar2 < iVar15) || (iVar6 < iVar2)) {
                                      plVar8 = *(long **)(lVar10 + 0x30);
                                      if (plVar8 == (long *)0x0) goto LAB_0410aa3c;
                                      lVar11 = *plVar8;
                                      lVar12 = *(long *)PTR_DAT_057b4bd0;
                                      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                      PTR_DAT_057b4bd0 = puVar4;
                                      if (uVar13 != 0) {
                                        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar14 + -2) == lVar12) {
                                            puVar9 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                                            goto LAB_0410a980;
                                          }
                                          uVar13 = uVar13 - 1;
                                          piVar14 = piVar14 + 4;
                                        } while (uVar13 != 0);
                                      }
                                      puVar9 = (undefined8 *)FUN_0131971c(plVar8,lVar12,2);
LAB_0410a980:
                                      (*(code *)*puVar9)(plVar8,iVar2,puVar9[1]);
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
                                      plVar8 = *(long **)(lVar10 + 0x30);
                                      puVar4 = PTR_DAT_057b4bd0;
                                      if (plVar8 == (long *)0x0) {
LAB_0410aa3c:
                                        PTR_DAT_057b4bd0 = puVar4;
                    /* WARNING: Subroutine does not return */
                                        FUN_012d0ef0();
                                      }
                                      lVar11 = *plVar8;
                                      lVar12 = *(long *)puVar3;
                                      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                      if (uVar13 != 0) {
                                        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar14 + -2) == lVar12) {
                                            puVar9 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                                            goto LAB_0410aa08;
                                          }
                                          uVar13 = uVar13 - 1;
                                          piVar14 = piVar14 + 4;
                                        } while (uVar13 != 0);
                                      }
                                      puVar9 = (undefined8 *)FUN_0131971c(plVar8,lVar12,3);
LAB_0410aa08:
                                      (*(code *)*puVar9)(plVar8,iVar15,puVar9[1]);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

