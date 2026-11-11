/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$ShowAddFriends
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowAddFriends (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$ShowAddFriends
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowAddFriends
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowAddFriends_2aedfa8
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  
  if (*(long *)(param_4 + 0x20) == 0) {
LAB_02bedfcc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Hide_2aee010();
  lVar7 = *(long *)(param_4 + 0x28);
  if (lVar7 == 0) goto LAB_02bedfcc;
  *(undefined1 *)(lVar7 + 0x40) = 1;
  lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar7,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
  if ((bRam0000000005c2eb89 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e30a8);
    FUN_012d0dc8(PTR_DAT_05789980);
    FUN_012d0dc8(PTR_DAT_057fab98);
    bRam0000000005c2eb89 = 1;
  }
  if (*(long *)(lVar7 + 0x48) == 0) {
LAB_02bed2a4:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendSuggestions_1c7bffc
                    (*(long *)(lVar7 + 0x48),0);
  if ((*(long *)(lVar7 + 0x28) == 0) ||
     (Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                (*(long *)(lVar7 + 0x28),0), lVar4 == 0)) goto LAB_02bed2a4;
  if (*(int *)(lVar4 + 0x18) == 0) {
    return;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057fab98);
  puVar1 = PTR_DAT_057e30a8;
  if (lVar5 == 0) goto LAB_02bed2a4;
  Modules_Contexts_Home_Friends_Scripts_SuggestTitleElementViewModel___ctor_1b8cfe4(lVar5,0);
  System_Collections_Generic_List_object___Insert_21fd8a0(lVar4,0,lVar5,*(undefined8 *)puVar1);
  if (*(long *)(lVar7 + 0x38) == 0) goto LAB_02bed2a4;
  plVar6 = (long *)(*(long *)(lVar7 + 0x38) + 0x28);
  *plVar6 = lVar4;
  FUN_012d0d74(plVar6,lVar4);
  if (*(long *)(lVar7 + 0x28) == 0) goto LAB_02bed2a4;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
            (*(long *)(lVar7 + 0x28),0);
  lVar4 = *(long *)(lVar7 + 0x28);
  if (lVar4 == 0) goto LAB_02bed2a4;
  uVar9 = *(undefined8 *)(lVar7 + 0x30);
  if ((bRam0000000005c393ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818138,uVar9,0,0);
    FUN_012d0dc8(PTR_DAT_057b4bd0);
    bRam0000000005c393ae = 1;
  }
  if (*(long *)(lVar4 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar4 + 0x78),0,0);
  }
  puVar12 = (undefined8 *)(lVar4 + 0x30);
  *puVar12 = uVar9;
  FUN_012d0d74(puVar12,uVar9);
  iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar4);
  if (*(long *)(lVar4 + 0x20) == 0) goto LAB_04109950;
  fVar17 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar4 + 0x20),0);
  lVar7 = *(long *)(lVar4 + 0x20);
  if (iVar2 == 1) {
    if (lVar7 == 0) goto LAB_04109950;
    fVar19 = param_2;
    UnityEngine_Collider2D__get_offset_2e26068(lVar7,0);
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_04109950;
    fVar18 = fVar19;
    UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar4 + 0x20),0);
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_04109950;
    fVar19 = param_2 * 0.5 - fVar19;
    fVar17 = fVar18;
    UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar4 + 0x20),0);
  }
  else {
    if (lVar7 == 0) goto LAB_04109950;
    fVar19 = (float)UnityEngine_Collider2D__get_offset_2e26068(lVar7,0);
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_04109950;
    fVar18 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar4 + 0x20),0);
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_04109950;
    fVar19 = fVar17 * 0.5 - fVar19;
    fVar17 = (float)UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar4 + 0x20),0);
  }
  uVar10 = (ulong)(uint)(fVar18 * -0.5);
  fVar19 = (fVar19 + (fVar18 * -0.5 - fVar17)) * 0.5;
  iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar4);
  fVar17 = 0.0;
  if (iVar2 != 1) {
    fVar17 = fVar19;
    fVar19 = 0.0;
  }
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetBoundsSize_4009264(lVar4);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  UnityEngine_Bounds___ctor_38373f8(fVar17,fVar19,0,uVar9,uVar10,param_3,&uStack_88,0);
  plVar6 = *(long **)(lVar4 + 0x30);
  *(undefined8 *)(lVar4 + 0x88) = uStack_80;
  *(undefined8 *)(lVar4 + 0x80) = uStack_88;
  *(undefined8 *)(lVar4 + 0x90) = uStack_78;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_05818138) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0410948c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_05818138,0);
LAB_0410948c:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__CalculateMaxMin_400999c(lVar4);
    puVar1 = PTR_DAT_057b4bd0;
    plVar6 = *(long **)(lVar4 + 0x30);
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057b4bd0) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_04109500;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057b4bd0,1);
LAB_04109500:
      iVar2 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      uVar13 = iVar2 - 1;
      plVar6 = (long *)*puVar12;
      if (-1 < (int)uVar13) {
        uVar13 = 0;
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_04109578;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,5);
LAB_04109578:
        uVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        if ((uVar10 & 1) != 0) {
          plVar6 = (long *)*puVar12;
          if (plVar6 == (long *)0x0) goto LAB_04109950;
          lVar7 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_041095e0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,1);
LAB_041095e0:
          iVar2 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          uVar13 = iVar2 + ~uVar13;
        }
        plVar6 = (long *)*puVar12;
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04109648;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109648:
          lVar7 = (*(code *)*puVar8)(plVar6,uVar13,puVar8[1]);
          iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar4);
          if (lVar7 != 0) {
            lVar5 = 0x14;
            if (iVar2 != 1) {
              lVar5 = 0x10;
            }
            fVar19 = -*(float *)(lVar7 + lVar5);
            fVar17 = *(float *)(lVar4 + 0x6c);
            if (fVar19 <= *(float *)(lVar4 + 0x6c)) {
              fVar17 = fVar19;
            }
            if (fVar19 < *(float *)(lVar4 + 0x70)) {
              fVar17 = *(float *)(lVar4 + 0x70);
            }
            iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                              (lVar4);
            fVar19 = fVar17;
            fVar18 = 0.0;
            if (iVar2 != 1) {
              fVar19 = 0.0;
              fVar18 = fVar17;
            }
            *(float *)(lVar4 + 0x50) = fVar18;
            *(float *)(lVar4 + 0x54) = fVar19;
            *(undefined4 *)(lVar4 + 0x58) = 0;
            if (*(long *)(lVar4 + 0x28) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (fVar18,fVar19,0,*(long *)(lVar4 + 0x28),0);
              plVar6 = (long *)*puVar12;
              if (plVar6 != (long *)0x0) {
                iVar2 = 0;
                iVar16 = 0x7fffffff;
                iVar14 = -0x80000000;
                do {
                  lVar7 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_04109730;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,1);
LAB_04109730:
                  iVar3 = (*(code *)*puVar8)(plVar6,puVar8[1]);
                  if (iVar3 <= iVar2) {
                    lVar7 = *(long *)(lVar4 + 0xc0);
                    *(int *)(lVar4 + 0x38) = iVar16;
                    *(int *)(lVar4 + 0x3c) = iVar14;
                    *(undefined1 *)(lVar4 + 0xb0) = 1;
                    if (lVar7 != 0) {
                      (**(code **)(lVar7 + 0x18))
                                (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
                    }
                    return;
                  }
                  plVar6 = (long *)*puVar12;
                  if (plVar6 == (long *)0x0) break;
                  lVar7 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04109798;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109798:
                  lVar7 = (*(code *)*puVar8)(plVar6,iVar2,puVar8[1]);
                  if ((lVar7 == 0) || (plVar6 = (long *)*puVar12, plVar6 == (long *)0x0)) break;
                  lVar5 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04109804;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109804:
                  lVar5 = (*(code *)*puVar8)(plVar6,iVar2,puVar8[1]);
                  if (lVar5 == 0) break;
                  fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20);
                  UnityEngine_Bounds__set_center_383763c
                            (CONCAT44(fVar17,(float)*(undefined8 *)(lVar5 + 0x10) +
                                             (float)*(undefined8 *)(lVar4 + 0x50)),fVar17,
                             *(float *)(lVar5 + 0x18) + *(float *)(lVar4 + 0x58),lVar7 + 0x1c,0);
                  plVar6 = *(long **)(lVar4 + 0x30);
                  if (plVar6 == (long *)0x0) break;
                  lVar7 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04109894;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109894:
                  lVar7 = (*(code *)*puVar8)(plVar6,iVar2,puVar8[1]);
                  if (lVar7 == 0) break;
                  uStack_90 = *(undefined8 *)(lVar4 + 0x90);
                  uStack_98 = *(undefined8 *)(lVar4 + 0x88);
                  uStack_a0 = *(undefined8 *)(lVar4 + 0x80);
                  uVar10 = UnityEngine_Bounds__Intersects_3837898(lVar7 + 0x1c,&uStack_a0,0);
                  iVar3 = iVar16;
                  iVar15 = iVar14;
                  if ((uVar10 & 1) != 0) {
                    plVar6 = (long *)*puVar12;
                    if (plVar6 == (long *)0x0) break;
                    lVar7 = *plVar6;
                    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                          goto LAB_04109924;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,3);
LAB_04109924:
                    (*(code *)*puVar8)(plVar6,iVar2,puVar8[1]);
                    iVar3 = iVar2;
                    if (iVar16 <= iVar2) {
                      iVar3 = iVar16;
                    }
                    iVar15 = iVar2;
                    if (iVar2 <= iVar14) {
                      iVar15 = iVar14;
                    }
                  }
                  plVar6 = (long *)*puVar12;
                  iVar2 = iVar2 + 1;
                  iVar16 = iVar3;
                  iVar14 = iVar15;
                  if (plVar6 == (long *)0x0) break;
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

