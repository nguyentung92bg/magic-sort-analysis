/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$SetTeamsLeaderboard
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__SetTeamsLeaderboard (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this, System_Collections_Generic_List_ITeamArenaLeaderboardViewModel__o* viewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$SetTeamsLeaderboard
   void 
   Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__SetTeamsLeaderboard
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this,
   System_Collections_Generic_List_ITeamArenaLeaderboardViewModel__o* viewModels, const MethodInfo*
   method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__SetTeamsLeaderboard_2969804
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000005c2d672 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d84f0);
    bRam0000000005c2d672 = 1;
  }
  if (*(long *)(param_4 + 0x48) == 0) {
LAB_02a69890:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
            (*(long *)(param_4 + 0x48),0);
  if ((param_5 == 0) || (*(int *)(param_5 + 0x18) == 0)) {
    return;
  }
  if (*(long *)(param_4 + 0x58) == 0) goto LAB_02a69890;
  plVar4 = (long *)(*(long *)(param_4 + 0x58) + 0x28);
  *plVar4 = param_5;
  FUN_012d0d74(plVar4,param_5);
  lVar5 = *(long *)(param_4 + 0x48);
  if (lVar5 == 0) goto LAB_02a69890;
  uVar8 = *(undefined8 *)(param_4 + 0x50);
  if ((bRam0000000005c393ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818138,uVar8,0,0);
    FUN_012d0dc8(PTR_DAT_057b4bd0);
    bRam0000000005c393ae = 1;
  }
  if (*(long *)(lVar5 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar5 + 0x78),0,0);
  }
  puVar12 = (undefined8 *)(lVar5 + 0x30);
  *puVar12 = uVar8;
  FUN_012d0d74(puVar12,uVar8);
  iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar5);
  if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04109950;
  fVar17 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar5 + 0x20),0);
  lVar6 = *(long *)(lVar5 + 0x20);
  if (iVar2 == 1) {
    if (lVar6 == 0) goto LAB_04109950;
    fVar19 = param_2;
    UnityEngine_Collider2D__get_offset_2e26068(lVar6,0);
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04109950;
    fVar18 = fVar19;
    UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar5 + 0x20),0);
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04109950;
    fVar19 = param_2 * 0.5 - fVar19;
    fVar17 = fVar18;
    UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar5 + 0x20),0);
  }
  else {
    if (lVar6 == 0) goto LAB_04109950;
    fVar19 = (float)UnityEngine_Collider2D__get_offset_2e26068(lVar6,0);
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04109950;
    fVar18 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar5 + 0x20),0);
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04109950;
    fVar19 = fVar17 * 0.5 - fVar19;
    fVar17 = (float)UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar5 + 0x20),0);
  }
  uVar10 = (ulong)(uint)(fVar18 * -0.5);
  fVar19 = (fVar19 + (fVar18 * -0.5 - fVar17)) * 0.5;
  iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar5);
  fVar17 = 0.0;
  if (iVar2 != 1) {
    fVar17 = fVar19;
    fVar19 = 0.0;
  }
  uVar8 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetBoundsSize_4009264(lVar5);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  UnityEngine_Bounds___ctor_38373f8(fVar17,fVar19,0,uVar8,uVar10,param_3,&uStack_88,0);
  plVar4 = *(long **)(lVar5 + 0x30);
  *(undefined8 *)(lVar5 + 0x88) = uStack_80;
  *(undefined8 *)(lVar5 + 0x80) = uStack_88;
  *(undefined8 *)(lVar5 + 0x90) = uStack_78;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_05818138) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0410948c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_05818138,0);
LAB_0410948c:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__CalculateMaxMin_400999c(lVar5);
    puVar1 = PTR_DAT_057b4bd0;
    plVar4 = *(long **)(lVar5 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057b4bd0) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_04109500;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057b4bd0,1);
LAB_04109500:
      iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      uVar13 = iVar2 - 1;
      plVar4 = (long *)*puVar12;
      if (-1 < (int)uVar13) {
        uVar13 = 0;
      }
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_04109578;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,5);
LAB_04109578:
        uVar10 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if ((uVar10 & 1) != 0) {
          plVar4 = (long *)*puVar12;
          if (plVar4 == (long *)0x0) goto LAB_04109950;
          lVar6 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_041095e0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,1);
LAB_041095e0:
          iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          uVar13 = iVar2 + ~uVar13;
        }
        plVar4 = (long *)*puVar12;
        if (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04109648;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,0);
LAB_04109648:
          lVar6 = (*(code *)*puVar7)(plVar4,uVar13,puVar7[1]);
          iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar5);
          if (lVar6 != 0) {
            lVar9 = 0x14;
            if (iVar2 != 1) {
              lVar9 = 0x10;
            }
            fVar19 = -*(float *)(lVar6 + lVar9);
            fVar17 = *(float *)(lVar5 + 0x6c);
            if (fVar19 <= *(float *)(lVar5 + 0x6c)) {
              fVar17 = fVar19;
            }
            if (fVar19 < *(float *)(lVar5 + 0x70)) {
              fVar17 = *(float *)(lVar5 + 0x70);
            }
            iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                              (lVar5);
            fVar19 = fVar17;
            fVar18 = 0.0;
            if (iVar2 != 1) {
              fVar19 = 0.0;
              fVar18 = fVar17;
            }
            *(float *)(lVar5 + 0x50) = fVar18;
            *(float *)(lVar5 + 0x54) = fVar19;
            *(undefined4 *)(lVar5 + 0x58) = 0;
            if (*(long *)(lVar5 + 0x28) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (fVar18,fVar19,0,*(long *)(lVar5 + 0x28),0);
              plVar4 = (long *)*puVar12;
              if (plVar4 != (long *)0x0) {
                iVar2 = 0;
                iVar16 = 0x7fffffff;
                iVar14 = -0x80000000;
                do {
                  lVar6 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_04109730;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,1);
LAB_04109730:
                  iVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                  if (iVar3 <= iVar2) {
                    lVar6 = *(long *)(lVar5 + 0xc0);
                    *(int *)(lVar5 + 0x38) = iVar16;
                    *(int *)(lVar5 + 0x3c) = iVar14;
                    *(undefined1 *)(lVar5 + 0xb0) = 1;
                    if (lVar6 != 0) {
                      (**(code **)(lVar6 + 0x18))
                                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
                    }
                    return;
                  }
                  plVar4 = (long *)*puVar12;
                  if (plVar4 == (long *)0x0) break;
                  lVar6 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04109798;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,0);
LAB_04109798:
                  lVar6 = (*(code *)*puVar7)(plVar4,iVar2,puVar7[1]);
                  if ((lVar6 == 0) || (plVar4 = (long *)*puVar12, plVar4 == (long *)0x0)) break;
                  lVar9 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04109804;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,0);
LAB_04109804:
                  lVar9 = (*(code *)*puVar7)(plVar4,iVar2,puVar7[1]);
                  if (lVar9 == 0) break;
                  fVar17 = (float)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar5 + 0x50) >> 0x20);
                  UnityEngine_Bounds__set_center_383763c
                            (CONCAT44(fVar17,(float)*(undefined8 *)(lVar9 + 0x10) +
                                             (float)*(undefined8 *)(lVar5 + 0x50)),fVar17,
                             *(float *)(lVar9 + 0x18) + *(float *)(lVar5 + 0x58),lVar6 + 0x1c,0);
                  plVar4 = *(long **)(lVar5 + 0x30);
                  if (plVar4 == (long *)0x0) break;
                  lVar6 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04109894;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,0);
LAB_04109894:
                  lVar6 = (*(code *)*puVar7)(plVar4,iVar2,puVar7[1]);
                  if (lVar6 == 0) break;
                  uStack_90 = *(undefined8 *)(lVar5 + 0x90);
                  uStack_98 = *(undefined8 *)(lVar5 + 0x88);
                  uStack_a0 = *(undefined8 *)(lVar5 + 0x80);
                  uVar10 = UnityEngine_Bounds__Intersects_3837898(lVar6 + 0x1c,&uStack_a0,0);
                  iVar3 = iVar16;
                  iVar15 = iVar14;
                  if ((uVar10 & 1) != 0) {
                    plVar4 = (long *)*puVar12;
                    if (plVar4 == (long *)0x0) break;
                    lVar6 = *plVar4;
                    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                          goto LAB_04109924;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,3);
LAB_04109924:
                    (*(code *)*puVar7)(plVar4,iVar2,puVar7[1]);
                    iVar3 = iVar2;
                    if (iVar16 <= iVar2) {
                      iVar3 = iVar16;
                    }
                    iVar15 = iVar2;
                    if (iVar2 <= iVar14) {
                      iVar15 = iVar14;
                    }
                  }
                  plVar4 = (long *)*puVar12;
                  iVar2 = iVar2 + 1;
                  iVar16 = iVar3;
                  iVar14 = iVar15;
                  if (plVar4 == (long *)0x0) break;
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

