/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardView$$MoveToMyRow
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView__MoveToMyRow (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView_o* __this, System_Collections_Generic_List_IStrikeShowLeaderboardRowViewModel__o* rows, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardView$$MoveToMyRow
   void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView__MoveToMyRow
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView_o* __this,
   System_Collections_Generic_List_IStrikeShowLeaderboardRowViewModel__o* rows, const MethodInfo*
   method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView__MoveToMyRow_2afb9e4
               (long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((bRam0000000005c2ec06 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a9e48);
    FUN_012d0dc8(PTR_DAT_057da770);
    FUN_012d0dc8(PTR_DAT_05789798);
    bRam0000000005c2ec06 = 1;
  }
  puVar4 = PTR_DAT_057da770;
  puVar5 = PTR_DAT_05789798;
  if (param_2 == 0) {
LAB_02bfbadc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 02bfba3c to 02cfba93 has its CatchHandler @ 02bfba3c
                       catch() { ... } // from try @ 02bfba3c with catch @ 02bfba3c
                       catch() { ... } // from try @ 02bfbab4 with catch @ 02bfba3c
                       catch() { ... } // from try @ 02bfbb44 with catch @ 02bfba3c */
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar15 = 0;
    do {
      plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (param_2,uVar15,*(undefined8 *)puVar4);
      if (plVar8 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 300);
                    /* try { // try from 02bfba94 to 02cfbab3 has its CatchHandler @ 02bfbb00 */
        if (((bVar2 <= *(byte *)(*plVar8 + 300)) &&
            (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) &&
           ((char)plVar8[10] != '\0')) {
          lVar9 = *(long *)(param_1 + 0x18);
          if (lVar9 == 0) goto LAB_02bfbadc;
          if ((bRam0000000005c393bc & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057b4bd0,uVar15,0);
            bRam0000000005c393bc = 1;
          }
          puVar5 = PTR_DAT_057b4bd0;
          plVar8 = *(long **)(lVar9 + 0x30);
          if (plVar8 == (long *)0x0) goto LAB_0410b1dc;
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 == 0) goto LAB_0410af64;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0410af4c;
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < *(int *)(param_2 + 0x18));
  }
                    /* try { // try from 02bfbab4 to 02cfbb17 has its CatchHandler @ 02bfba3c */
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0410af4c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057b4bd0) {
      puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
      goto LAB_0410af84;
    }
  }
LAB_0410af64:
  puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
  iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
  if (iVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(lVar9 + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0410afec;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar5,1);
LAB_0410afec:
    iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if ((int)uVar15 < 0) {
      return;
    }
    if (iVar7 <= (int)uVar15) {
      return;
    }
    if (*(char *)(lVar9 + 0xb0) == '\0') {
      return;
    }
    plVar8 = *(long **)(lVar9 + 0x30);
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 5) * 0x10 + 0x138);
            goto LAB_0410b078;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar5,5);
LAB_0410b078:
      uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if ((uVar13 & 1) != 0) {
        plVar8 = *(long **)(lVar9 + 0x30);
        if (plVar8 == (long *)0x0) goto LAB_0410b1dc;
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0410b0e0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar5,1);
LAB_0410b0e0:
        iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        uVar15 = iVar7 + ~uVar15;
      }
      plVar8 = *(long **)(lVar9 + 0x30);
      if (plVar8 != (long *)0x0) {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0410b148;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar5,0);
LAB_0410b148:
        lVar12 = (*(code *)*puVar10)(plVar8,uVar15,puVar10[1]);
        iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                          (lVar9);
        if (lVar12 != 0) {
          lVar11 = 0x14;
          if (iVar7 != 1) {
            lVar11 = 0x10;
          }
          fVar20 = *(float *)(lVar9 + 0x70);
          fVar18 = -*(float *)(lVar12 + lVar11);
          fVar19 = *(float *)(lVar9 + 0x6c);
          if (fVar18 <= *(float *)(lVar9 + 0x6c)) {
            fVar19 = fVar18;
          }
          fVar21 = fVar19;
          if (fVar18 < fVar20) {
            fVar21 = fVar20;
          }
          iVar7 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar9);
          if (*(long *)(lVar9 + 0x28) != 0) {
            fVar18 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                      (*(long *)(lVar9 + 0x28),0);
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
                                      (fVar19,lVar9);
            lVar12 = *(long *)(lVar9 + 0x98);
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
                        (fVar17 * SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar21 * fVar21),lVar12,
                         *(undefined8 *)PTR_DAT_057be0d0);
              lVar12 = *(long *)(lVar9 + 0x98);
              if (lVar12 != 0) {
                if (3 < *(int *)(lVar12 + 0x20)) {
                  System_Collections_Generic_Queue_float___Dequeue_336a6e8
                            (lVar12,*(undefined8 *)PTR_DAT_057f7938);
                }
                fVar19 = *(float *)(lVar9 + 0x54);
                fVar18 = fVar18 + *(float *)(lVar9 + 0x50);
                fVar21 = fVar21 + fVar19;
                fVar20 = fVar20 + *(float *)(lVar9 + 0x58);
                *(float *)(lVar9 + 0x50) = fVar18;
                *(float *)(lVar9 + 0x54) = fVar21;
                *(float *)(lVar9 + 0x58) = fVar20;
                if (*(long *)(lVar9 + 0x28) != 0) {
                  fVar17 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                            (*(long *)(lVar9 + 0x28),0);
                  if (*(long *)(lVar9 + 0x28) != 0) {
                    UnityEngine_Transform__set_localPosition_4092ce0
                              (fVar18,fVar21,fVar20,*(long *)(lVar9 + 0x28),0);
                    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                              (lVar9);
                    iVar7 = *(int *)(lVar9 + 0x38);
                    iVar1 = *(int *)(lVar9 + 0x3c);
                    for (iVar16 = 9999;
                        (((uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                              (lVar9), (uVar13 & 1) != 0 ||
                          (uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                              (lVar9), (uVar13 & 1) != 0)) ||
                         ((uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                              (lVar9), (uVar13 & 1) != 0 ||
                          (uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                              (lVar9), (uVar13 & 1) != 0)))) && (iVar16 != 0));
                        iVar16 = iVar16 + -1) {
                      iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                        (lVar9);
                      fVar20 = fVar21 - fVar19;
                      if (iVar6 != 1) {
                        fVar20 = fVar18 - fVar17;
                      }
                      if (fVar20 <= 0.0) {
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
                    iVar16 = *(int *)(lVar9 + 0x38);
                    iVar6 = *(int *)(lVar9 + 0x3c);
                    iVar3 = iVar7;
                    puVar5 = PTR_DAT_057b4bd0;
                    if ((bRam0000000005c393b6 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057b4bd0);
                      bRam0000000005c393b6 = 1;
                      puVar5 = PTR_DAT_057b4bd0;
                    }
                    for (; puVar4 = PTR_DAT_057b4bd0, iVar3 <= iVar1; iVar3 = iVar3 + 1) {
                      if ((iVar3 < iVar16) || (iVar6 < iVar3)) {
                        plVar8 = *(long **)(lVar9 + 0x30);
                        if (plVar8 == (long *)0x0) goto LAB_0410aa3c;
                        lVar11 = *plVar8;
                        lVar12 = *(long *)PTR_DAT_057b4bd0;
                        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                        PTR_DAT_057b4bd0 = puVar5;
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == lVar12) {
                              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138)
                              ;
                              goto LAB_0410a980;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_0131971c(plVar8,lVar12,2);
LAB_0410a980:
                        (*(code *)*puVar10)(plVar8,iVar3,puVar10[1]);
                        puVar5 = PTR_DAT_057b4bd0;
                      }
                      PTR_DAT_057b4bd0 = puVar5;
                      puVar5 = PTR_DAT_057b4bd0;
                      PTR_DAT_057b4bd0 = puVar4;
                    }
                    do {
                      PTR_DAT_057b4bd0 = puVar5;
                      if (iVar6 < iVar16) {
                        return;
                      }
                      if ((iVar16 < iVar7) || (iVar1 < iVar16)) {
                        plVar8 = *(long **)(lVar9 + 0x30);
                        puVar5 = PTR_DAT_057b4bd0;
                        if (plVar8 == (long *)0x0) {
LAB_0410aa3c:
                          PTR_DAT_057b4bd0 = puVar5;
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        lVar11 = *plVar8;
                        lVar12 = *(long *)puVar4;
                        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == lVar12) {
                              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138)
                              ;
                              goto LAB_0410aa08;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_0131971c(plVar8,lVar12,3);
LAB_0410aa08:
                        (*(code *)*puVar10)(plVar8,iVar16,puVar10[1]);
                      }
                      iVar16 = iVar16 + 1;
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
LAB_0410b1dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

