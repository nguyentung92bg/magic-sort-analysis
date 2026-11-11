/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, System_Collections_Generic_List_LeaderboardTeam__o* leaderboard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Initialize
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   System_Collections_Generic_List_LeaderboardTeam__o* leaderboard, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize_2af041c
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000005c2eba7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d1730);
    bRam0000000005c2eba7 = 1;
  }
  uVar3 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__GetUserTeamIndex_2af04dc
                    (param_4,param_5);
  if ((int)uVar3 < 0) {
    uVar6 = 0;
  }
  else {
    if (param_5 == 0) goto LAB_02bf04d8;
    uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_5,uVar3,*(undefined8 *)PTR_DAT_057d1730);
  }
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__InitializeStickyElements_2af05b4
            (param_4,uVar6,uVar3);
  if (*(long *)(param_4 + 0x40) == 0) {
LAB_02bf04d8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar7 = (long *)(*(long *)(param_4 + 0x40) + 0x28);
  *plVar7 = param_5;
  FUN_012d0d74(plVar7,param_5);
  if (*(long *)(param_4 + 0x30) == 0) goto LAB_02bf04d8;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
            (*(long *)(param_4 + 0x30),0);
  lVar8 = *(long *)(param_4 + 0x30);
  if (lVar8 == 0) goto LAB_02bf04d8;
  uVar6 = *(undefined8 *)(param_4 + 0x38);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  if ((bRam0000000005c393ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818138,uVar6,uVar3,0);
    FUN_012d0dc8(PTR_DAT_057b4bd0);
    bRam0000000005c393ae = 1;
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar8 + 0x78),0,0);
  }
  puVar14 = (undefined8 *)(lVar8 + 0x30);
  *puVar14 = uVar6;
  FUN_012d0d74(puVar14,uVar6);
  iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar8);
  if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
  fVar19 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar8 + 0x20),0);
  lVar9 = *(long *)(lVar8 + 0x20);
  if (iVar4 == 1) {
    if (lVar9 == 0) goto LAB_04109950;
    fVar21 = param_2;
    UnityEngine_Collider2D__get_offset_2e26068(lVar9,0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar20 = fVar21;
    UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar8 + 0x20),0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar21 = param_2 * 0.5 - fVar21;
    fVar19 = fVar20;
    UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar8 + 0x20),0);
  }
  else {
    if (lVar9 == 0) goto LAB_04109950;
    fVar21 = (float)UnityEngine_Collider2D__get_offset_2e26068(lVar9,0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar20 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar8 + 0x20),0);
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_04109950;
    fVar21 = fVar19 * 0.5 - fVar21;
    fVar19 = (float)UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar8 + 0x20),0);
  }
  uVar12 = (ulong)(uint)(fVar20 * -0.5);
  fVar21 = (fVar21 + (fVar20 * -0.5 - fVar19)) * 0.5;
  iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar8);
  fVar19 = 0.0;
  if (iVar4 != 1) {
    fVar19 = fVar21;
    fVar21 = 0.0;
  }
  uVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetBoundsSize_4009264(lVar8);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  UnityEngine_Bounds___ctor_38373f8(fVar19,fVar21,0,uVar6,uVar12,param_3,&uStack_88,0);
  plVar7 = *(long **)(lVar8 + 0x30);
  *(undefined8 *)(lVar8 + 0x88) = uStack_80;
  *(undefined8 *)(lVar8 + 0x80) = uStack_88;
  *(undefined8 *)(lVar8 + 0x90) = uStack_78;
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_05818138) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0410948c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_05818138,0);
LAB_0410948c:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__CalculateMaxMin_400999c(lVar8);
    puVar2 = PTR_DAT_057b4bd0;
    plVar7 = *(long **)(lVar8 + 0x30);
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057b4bd0) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_04109500;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057b4bd0,1);
LAB_04109500:
      iVar4 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      plVar7 = (long *)*puVar14;
      uVar1 = iVar4 - 1U;
      if ((int)uVar3 <= (int)(iVar4 - 1U)) {
        uVar1 = uVar3;
      }
      uVar15 = 0;
      if (-1 < (int)uVar3) {
        uVar15 = uVar1;
      }
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_04109578;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,5);
LAB_04109578:
        uVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar12 & 1) != 0) {
          plVar7 = (long *)*puVar14;
          if (plVar7 == (long *)0x0) goto LAB_04109950;
          lVar9 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_041095e0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_041095e0:
          iVar4 = (*(code *)*puVar10)(plVar7,puVar10[1]);
          uVar15 = iVar4 + ~uVar15;
        }
        plVar7 = (long *)*puVar14;
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_04109648;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,0);
LAB_04109648:
          lVar9 = (*(code *)*puVar10)(plVar7,uVar15,puVar10[1]);
          iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar8);
          if (lVar9 != 0) {
            lVar11 = 0x14;
            if (iVar4 != 1) {
              lVar11 = 0x10;
            }
            fVar21 = -*(float *)(lVar9 + lVar11);
            fVar19 = *(float *)(lVar8 + 0x6c);
            if (fVar21 <= *(float *)(lVar8 + 0x6c)) {
              fVar19 = fVar21;
            }
            if (fVar21 < *(float *)(lVar8 + 0x70)) {
              fVar19 = *(float *)(lVar8 + 0x70);
            }
            iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                              (lVar8);
            fVar21 = fVar19;
            fVar20 = 0.0;
            if (iVar4 != 1) {
              fVar21 = 0.0;
              fVar20 = fVar19;
            }
            *(float *)(lVar8 + 0x50) = fVar20;
            *(float *)(lVar8 + 0x54) = fVar21;
            *(undefined4 *)(lVar8 + 0x58) = 0;
            if (*(long *)(lVar8 + 0x28) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (fVar20,fVar21,0,*(long *)(lVar8 + 0x28),0);
              plVar7 = (long *)*puVar14;
              if (plVar7 != (long *)0x0) {
                iVar4 = 0;
                iVar18 = 0x7fffffff;
                iVar16 = -0x80000000;
                do {
                  lVar9 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_04109730;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_04109730:
                  iVar5 = (*(code *)*puVar10)(plVar7,puVar10[1]);
                  if (iVar5 <= iVar4) {
                    lVar9 = *(long *)(lVar8 + 0xc0);
                    *(int *)(lVar8 + 0x38) = iVar18;
                    *(int *)(lVar8 + 0x3c) = iVar16;
                    *(undefined1 *)(lVar8 + 0xb0) = 1;
                    if (lVar9 != 0) {
                      (**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                    }
                    return;
                  }
                  plVar7 = (long *)*puVar14;
                  if (plVar7 == (long *)0x0) break;
                  lVar9 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_04109798;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,0);
LAB_04109798:
                  lVar9 = (*(code *)*puVar10)(plVar7,iVar4,puVar10[1]);
                  if ((lVar9 == 0) || (plVar7 = (long *)*puVar14, plVar7 == (long *)0x0)) break;
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_04109804;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,0);
LAB_04109804:
                  lVar11 = (*(code *)*puVar10)(plVar7,iVar4,puVar10[1]);
                  if (lVar11 == 0) break;
                  fVar19 = (float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar8 + 0x50) >> 0x20);
                  UnityEngine_Bounds__set_center_383763c
                            (CONCAT44(fVar19,(float)*(undefined8 *)(lVar11 + 0x10) +
                                             (float)*(undefined8 *)(lVar8 + 0x50)),fVar19,
                             *(float *)(lVar11 + 0x18) + *(float *)(lVar8 + 0x58),lVar9 + 0x1c,0);
                  plVar7 = *(long **)(lVar8 + 0x30);
                  if (plVar7 == (long *)0x0) break;
                  lVar9 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar10 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_04109894;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,0);
LAB_04109894:
                  lVar9 = (*(code *)*puVar10)(plVar7,iVar4,puVar10[1]);
                  if (lVar9 == 0) break;
                  uStack_90 = *(undefined8 *)(lVar8 + 0x90);
                  uStack_98 = *(undefined8 *)(lVar8 + 0x88);
                  uStack_a0 = *(undefined8 *)(lVar8 + 0x80);
                  uVar12 = UnityEngine_Bounds__Intersects_3837898(lVar9 + 0x1c,&uStack_a0,0);
                  iVar5 = iVar18;
                  iVar17 = iVar16;
                  if ((uVar12 & 1) != 0) {
                    plVar7 = (long *)*puVar14;
                    if (plVar7 == (long *)0x0) break;
                    lVar9 = *plVar7;
                    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                          puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                          goto LAB_04109924;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,3);
LAB_04109924:
                    (*(code *)*puVar10)(plVar7,iVar4,puVar10[1]);
                    iVar5 = iVar4;
                    if (iVar18 <= iVar4) {
                      iVar5 = iVar18;
                    }
                    iVar17 = iVar4;
                    if (iVar4 <= iVar16) {
                      iVar17 = iVar16;
                    }
                  }
                  plVar7 = (long *)*puVar14;
                  iVar4 = iVar4 + 1;
                  iVar18 = iVar5;
                  iVar16 = iVar17;
                  if (plVar7 == (long *)0x0) break;
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

