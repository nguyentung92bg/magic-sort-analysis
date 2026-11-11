/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$ShowWorldLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowWorldLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$ShowWorldLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowWorldLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowWorldLeaderboard_2af029c
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000005c2eba5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c6b8);
    bRam0000000005c2eba5 = 1;
  }
  if (*(long *)(param_4 + 0x58) == 0) {
LAB_02bf0358:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar8 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetGlobalLeaderboard_35b3d5c
                    (*(long *)(param_4 + 0x58),0);
  if (lVar8 == 0) {
    bVar17 = false;
  }
  else {
    bVar17 = 0 < *(int *)(lVar8 + 0x18);
  }
  if (*(long *)(param_4 + 0x28) == 0) goto LAB_02bf0358;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x28),bVar17 ^ 1,0);
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_02bf0358;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x20),bVar17,0);
  if (bVar17 == false) {
    lVar8 = *(long *)(param_4 + 0x30);
    if (lVar8 == 0) {
      return;
    }
    if ((bRam0000000005c393be & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057b4bd0,0);
      bRam0000000005c393be = 1;
    }
    if (*(long *)(lVar8 + 0x78) != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar8 + 0x78),0,0);
    }
    *(undefined1 *)(lVar8 + 0xb0) = 0;
    *(undefined2 *)(lVar8 + 0x74) = 0;
    if (*(long *)(lVar8 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined4 *)(*(long *)(lVar8 + 0x60) + 0x10) = 0;
    puVar16 = (undefined8 *)(lVar8 + 0x30);
    plVar10 = (long *)*puVar16;
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057b4bd0) {
            puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 10) * 0x10 + 0x138);
            goto LAB_0410b4c8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057b4bd0,10);
LAB_0410b4c8:
      (*(code *)*puVar12)(plVar10,puVar12[1]);
    }
    *puVar16 = 0;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar16 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar17) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  if ((bRam0000000005c2eba7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d1730);
    bRam0000000005c2eba7 = 1;
  }
  uVar5 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__GetUserTeamIndex_2af04dc
                    (param_4,lVar8);
  if ((int)uVar5 < 0) {
    uVar9 = 0;
  }
  else {
    if (lVar8 == 0) goto LAB_02bf04d8;
    uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar8,uVar5,*(undefined8 *)PTR_DAT_057d1730);
  }
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__InitializeStickyElements_2af05b4
            (param_4,uVar9,uVar5);
  if (*(long *)(param_4 + 0x40) == 0) {
LAB_02bf04d8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar10 = (long *)(*(long *)(param_4 + 0x40) + 0x28);
  *plVar10 = lVar8;
  FUN_012d0d74(plVar10,lVar8);
  if (*(long *)(param_4 + 0x30) == 0) goto LAB_02bf04d8;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
            (*(long *)(param_4 + 0x30),0);
  lVar8 = *(long *)(param_4 + 0x30);
  if (lVar8 == 0) goto LAB_02bf04d8;
  uVar9 = *(undefined8 *)(param_4 + 0x38);
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if ((bRam0000000005c393ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818138,uVar9,uVar5,0);
    FUN_012d0dc8(PTR_DAT_057b4bd0);
    bRam0000000005c393ae = 1;
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar8 + 0x78),0,0);
  }
  puVar16 = (undefined8 *)(lVar8 + 0x30);
  *puVar16 = uVar9;
  FUN_012d0d74(puVar16,uVar9);
  iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar8);
  if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
  fVar22 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar8 + 0x20),0);
  lVar11 = *(long *)(lVar8 + 0x20);
  if (iVar6 == 1) {
    if (lVar11 == 0) goto LAB_04109950;
    fVar24 = param_2;
    UnityEngine_Collider2D__get_offset_2e26068(lVar11,0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar23 = fVar24;
    UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar8 + 0x20),0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar24 = param_2 * 0.5 - fVar24;
    fVar22 = fVar23;
    UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar8 + 0x20),0);
  }
  else {
    if (lVar11 == 0) goto LAB_04109950;
    fVar24 = (float)UnityEngine_Collider2D__get_offset_2e26068(lVar11,0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar23 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar8 + 0x20),0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar24 = fVar22 * 0.5 - fVar24;
    fVar22 = (float)UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar8 + 0x20),0);
  }
  uVar14 = (ulong)(uint)(fVar23 * -0.5);
  fVar24 = (fVar24 + (fVar23 * -0.5 - fVar22)) * 0.5;
  iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar8);
  fVar22 = 0.0;
  if (iVar6 != 1) {
    fVar22 = fVar24;
    fVar24 = 0.0;
  }
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetBoundsSize_4009264(lVar8);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  UnityEngine_Bounds___ctor_38373f8(fVar22,fVar24,0,uVar9,uVar14,param_3,&uStack_88,0);
  plVar10 = *(long **)(lVar8 + 0x30);
  *(undefined8 *)(lVar8 + 0x88) = uStack_80;
  *(undefined8 *)(lVar8 + 0x80) = uStack_88;
  *(undefined8 *)(lVar8 + 0x90) = uStack_78;
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_05818138) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0410948c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_05818138,0);
LAB_0410948c:
    (*(code *)*puVar12)(plVar10,puVar12[1]);
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__CalculateMaxMin_400999c(lVar8);
    puVar4 = PTR_DAT_057b4bd0;
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 != (long *)0x0) {
      lVar11 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057b4bd0) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_04109500;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057b4bd0,1);
LAB_04109500:
      iVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
      plVar10 = (long *)*puVar16;
      uVar2 = iVar6 - 1U;
      if ((int)uVar5 <= (int)(iVar6 - 1U)) {
        uVar2 = uVar5;
      }
      uVar18 = 0;
      if (-1 < (int)uVar5) {
        uVar18 = uVar2;
      }
      if (plVar10 != (long *)0x0) {
        lVar11 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
              goto LAB_04109578;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,5);
LAB_04109578:
        uVar14 = (*(code *)*puVar12)(plVar10,puVar12[1]);
        if ((uVar14 & 1) != 0) {
          plVar10 = (long *)*puVar16;
          if (plVar10 == (long *)0x0) goto LAB_04109950;
          lVar11 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_041095e0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,1);
LAB_041095e0:
          iVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar18 = iVar6 + ~uVar18;
        }
        plVar10 = (long *)*puVar16;
        if (plVar10 != (long *)0x0) {
          lVar11 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_04109648;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,0);
LAB_04109648:
          lVar11 = (*(code *)*puVar12)(plVar10,uVar18,puVar12[1]);
          iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar8);
          if (lVar11 != 0) {
            lVar13 = 0x14;
            if (iVar6 != 1) {
              lVar13 = 0x10;
            }
            fVar24 = -*(float *)(lVar11 + lVar13);
            fVar22 = *(float *)(lVar8 + 0x6c);
            if (fVar24 <= *(float *)(lVar8 + 0x6c)) {
              fVar22 = fVar24;
            }
            if (fVar24 < *(float *)(lVar8 + 0x70)) {
              fVar22 = *(float *)(lVar8 + 0x70);
            }
            iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                              (lVar8);
            fVar24 = fVar22;
            fVar23 = 0.0;
            if (iVar6 != 1) {
              fVar24 = 0.0;
              fVar23 = fVar22;
            }
            *(float *)(lVar8 + 0x50) = fVar23;
            *(float *)(lVar8 + 0x54) = fVar24;
            *(undefined4 *)(lVar8 + 0x58) = 0;
            if (*(long *)(lVar8 + 0x28) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (fVar23,fVar24,0,*(long *)(lVar8 + 0x28),0);
              plVar10 = (long *)*puVar16;
              if (plVar10 != (long *)0x0) {
                iVar6 = 0;
                iVar21 = 0x7fffffff;
                iVar19 = -0x80000000;
                do {
                  lVar11 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar12 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto LAB_04109730;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,1);
LAB_04109730:
                  iVar7 = (*(code *)*puVar12)(plVar10,puVar12[1]);
                  if (iVar7 <= iVar6) {
                    lVar11 = *(long *)(lVar8 + 0xc0);
                    *(int *)(lVar8 + 0x38) = iVar21;
                    *(int *)(lVar8 + 0x3c) = iVar19;
                    *(undefined1 *)(lVar8 + 0xb0) = 1;
                    if (lVar11 != 0) {
                      (**(code **)(lVar11 + 0x18))
                                (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                    }
                    return;
                  }
                  plVar10 = (long *)*puVar16;
                  if (plVar10 == (long *)0x0) break;
                  lVar11 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar12 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_04109798;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,0);
LAB_04109798:
                  lVar11 = (*(code *)*puVar12)(plVar10,iVar6,puVar12[1]);
                  if ((lVar11 == 0) || (plVar10 = (long *)*puVar16, plVar10 == (long *)0x0)) break;
                  lVar13 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_04109804;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,0);
LAB_04109804:
                  lVar13 = (*(code *)*puVar12)(plVar10,iVar6,puVar12[1]);
                  if (lVar13 == 0) break;
                  fVar22 = (float)((ulong)*(undefined8 *)(lVar13 + 0x10) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar8 + 0x50) >> 0x20);
                  UnityEngine_Bounds__set_center_383763c
                            (CONCAT44(fVar22,(float)*(undefined8 *)(lVar13 + 0x10) +
                                             (float)*(undefined8 *)(lVar8 + 0x50)),fVar22,
                             *(float *)(lVar13 + 0x18) + *(float *)(lVar8 + 0x58),lVar11 + 0x1c,0);
                  plVar10 = *(long **)(lVar8 + 0x30);
                  if (plVar10 == (long *)0x0) break;
                  lVar11 = *plVar10;
                  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                        puVar12 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_04109894;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,0);
LAB_04109894:
                  lVar11 = (*(code *)*puVar12)(plVar10,iVar6,puVar12[1]);
                  if (lVar11 == 0) break;
                  uStack_90 = *(undefined8 *)(lVar8 + 0x90);
                  uStack_98 = *(undefined8 *)(lVar8 + 0x88);
                  uStack_a0 = *(undefined8 *)(lVar8 + 0x80);
                  uVar14 = UnityEngine_Bounds__Intersects_3837898(lVar11 + 0x1c,&uStack_a0,0);
                  iVar7 = iVar21;
                  iVar20 = iVar19;
                  if ((uVar14 & 1) != 0) {
                    plVar10 = (long *)*puVar16;
                    if (plVar10 == (long *)0x0) break;
                    lVar11 = *plVar10;
                    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                          goto LAB_04109924;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar4,3);
LAB_04109924:
                    (*(code *)*puVar12)(plVar10,iVar6,puVar12[1]);
                    iVar7 = iVar6;
                    if (iVar21 <= iVar6) {
                      iVar7 = iVar21;
                    }
                    iVar20 = iVar6;
                    if (iVar6 <= iVar19) {
                      iVar20 = iVar19;
                    }
                  }
                  plVar10 = (long *)*puVar16;
                  iVar6 = iVar6 + 1;
                  iVar21 = iVar7;
                  iVar19 = iVar20;
                  if (plVar10 == (long *)0x0) break;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
LAB_04109950:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

