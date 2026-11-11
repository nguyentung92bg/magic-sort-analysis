/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$UpdateView
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__UpdateView (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$UpdateView
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__UpdateView
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__UpdateView_2aee218
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000005c2eb94 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05775668);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_058126a8);
    FUN_012d0dc8(PTR_DAT_057c2a98);
    FUN_012d0dc8(PTR_DAT_05812100);
    FUN_012d0dc8(PTR_DAT_0575d760);
    FUN_012d0dc8(PTR_DAT_0579e668);
    FUN_012d0dc8(PTR_DAT_05767db8);
    FUN_012d0dc8(PTR_DAT_057c9060);
    bRam0000000005c2eb94 = 1;
  }
  if (*(char *)(param_4 + 0x48) == '\0') {
    return;
  }
  lVar12 = *(long *)(param_4 + 0x40);
  if (lVar12 == 0) {
LAB_02bee638:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar9 = *(long *)(lVar12 + 0x50);
  lVar12 = *(long *)(lVar12 + 0x58);
  if (lVar12 == 0) {
    bVar17 = false;
  }
  else {
    bVar17 = 0 < *(int *)(lVar12 + 0x18);
  }
  if (lVar9 == 0) {
    bVar21 = false;
  }
  else {
    bVar21 = 0 < *(int *)(lVar9 + 0x18);
  }
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
      (lVar5 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar5 == 0)) ||
     (plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar5,*(undefined8 *)PTR_DAT_057a1e60), puVar1 = PTR_DAT_05767db8,
     plVar6 == (long *)0x0)) goto LAB_02bee638;
  lVar5 = *plVar6;
  uVar14 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
        goto LAB_02bee3c4;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,0x10);
LAB_02bee3c4:
  uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 == 0) goto LAB_02bee638;
  System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_05812100);
  puVar2 = PTR_DAT_058126a8;
  puVar1 = PTR_DAT_057c2a98;
  if (*(long *)(param_4 + 0x38) == 0) goto LAB_02bee638;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x38),0,0);
  if (bVar17 != false) {
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c9060);
    if (lVar8 == 0) goto LAB_02bee638;
    Modules_Contexts_Home_Friends_Scripts_RequestTitleElementViewModel___ctor_1b8cfec(lVar8,0);
    lVar13 = *(long *)(lVar5 + 0x10);
    lVar15 = *(long *)puVar1;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_02bee638;
    uVar18 = *(uint *)(lVar5 + 0x18);
    if (uVar18 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar18 + 1;
      plVar6 = (long *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
      *plVar6 = lVar8;
      FUN_012d0d74(plVar6,lVar8);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))(lVar5,lVar8);
    }
    System_Collections_Generic_List_object___AddRange_21fcc58(lVar5,lVar12,*(undefined8 *)puVar2);
  }
  if ((bVar21 & bVar17) != 0) {
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05775668);
    if (lVar12 == 0) goto LAB_02bee638;
    Modules_Contexts_Home_Friends_Scripts_DividerElementViewModel___ctor_1b8cff4(lVar12,0);
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar13 = *(long *)puVar1;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_02bee638;
    uVar18 = *(uint *)(lVar5 + 0x18);
    if (uVar18 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar18 + 1;
      plVar6 = (long *)(lVar8 + (long)(int)uVar18 * 8 + 0x20);
      *plVar6 = lVar12;
      FUN_012d0d74(plVar6,lVar12);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar5,lVar12);
    }
  }
  if (bVar21 != false) {
    System_Collections_Generic_List_object___AddRange_21fcc58(lVar5,lVar9,*(undefined8 *)puVar2);
  }
  if (*(long *)(param_4 + 0x30) == 0) goto LAB_02bee638;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x30),0,0);
  if (*(long *)(param_4 + 0x38) == 0) goto LAB_02bee638;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x38),bVar17,0);
  if ((uVar14 & 1) == 0) {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_02bee638;
    uVar14 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnyFriends_1c7a97c
                       (*(long *)(param_4 + 0x40),0);
    if ((bVar17 == false) && ((uVar14 & 1) == 0)) {
      if (*(long *)(param_4 + 0x40) == 0) goto LAB_02bee638;
      uVar14 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFacebookFriendsEnabled_1c7c4cc
                         (*(long *)(param_4 + 0x40),0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(param_4 + 0x18) != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                    (*(long *)(param_4 + 0x18),0);
          lVar12 = *(long *)(param_4 + 0x30);
          if (lVar12 != 0) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar12,1);
            return;
          }
        }
        goto LAB_02bee638;
      }
    }
  }
  if (*(long *)(param_4 + 0x28) == 0) goto LAB_02bee638;
  plVar6 = (long *)(*(long *)(param_4 + 0x28) + 0x28);
  *plVar6 = lVar5;
  FUN_012d0d74(plVar6,lVar5);
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_02bee638;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
            (*(long *)(param_4 + 0x18),0);
  lVar12 = *(long *)(param_4 + 0x18);
  if (lVar12 == 0) goto LAB_02bee638;
  uVar11 = *(undefined8 *)(param_4 + 0x20);
  if ((bRam0000000005c393ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818138,uVar11,0,0);
    FUN_012d0dc8(PTR_DAT_057b4bd0);
    bRam0000000005c393ae = 1;
  }
  if (*(long *)(lVar12 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar12 + 0x78),0,0);
  }
  puVar7 = (undefined8 *)(lVar12 + 0x30);
  *puVar7 = uVar11;
  FUN_012d0d74(puVar7,uVar11);
  iVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar12)
  ;
  if (*(long *)(lVar12 + 0x20) == 0) goto LAB_04109950;
  fVar23 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar12 + 0x20),0);
  lVar9 = *(long *)(lVar12 + 0x20);
  if (iVar3 == 1) {
    if (lVar9 == 0) goto LAB_04109950;
    fVar25 = param_2;
    UnityEngine_Collider2D__get_offset_2e26068(lVar9,0);
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_04109950;
    fVar24 = fVar25;
    UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar12 + 0x20),0);
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_04109950;
    fVar25 = param_2 * 0.5 - fVar25;
    fVar23 = fVar24;
    UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar12 + 0x20),0);
  }
  else {
    if (lVar9 == 0) goto LAB_04109950;
    fVar25 = (float)UnityEngine_Collider2D__get_offset_2e26068(lVar9,0);
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_04109950;
    fVar24 = (float)UnityEngine_BoxCollider2D__get_size_2e262c0(*(long *)(lVar12 + 0x20),0);
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_04109950;
    fVar25 = fVar23 * 0.5 - fVar25;
    fVar23 = (float)UnityEngine_Collider2D__get_offset_2e26068(*(long *)(lVar12 + 0x20),0);
  }
  uVar14 = (ulong)(uint)(fVar24 * -0.5);
  fVar25 = (fVar25 + (fVar24 * -0.5 - fVar23)) * 0.5;
  iVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058(lVar12)
  ;
  fVar23 = 0.0;
  if (iVar3 != 1) {
    fVar23 = fVar25;
    fVar25 = 0.0;
  }
  uVar11 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetBoundsSize_4009264(lVar12);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  UnityEngine_Bounds___ctor_38373f8(fVar23,fVar25,0,uVar11,uVar14,param_3,&uStack_88,0);
  plVar6 = *(long **)(lVar12 + 0x30);
  *(undefined8 *)(lVar12 + 0x88) = uStack_80;
  *(undefined8 *)(lVar12 + 0x80) = uStack_88;
  *(undefined8 *)(lVar12 + 0x90) = uStack_78;
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_05818138) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0410948c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_05818138,0);
LAB_0410948c:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__CalculateMaxMin_400999c(lVar12);
    puVar1 = PTR_DAT_057b4bd0;
    plVar6 = *(long **)(lVar12 + 0x30);
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057b4bd0) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_04109500;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057b4bd0,1);
LAB_04109500:
      iVar3 = (*(code *)*puVar10)(plVar6,puVar10[1]);
      uVar18 = iVar3 - 1;
      plVar6 = (long *)*puVar7;
      if (-1 < (int)uVar18) {
        uVar18 = 0;
      }
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 5) * 0x10 + 0x138);
              goto LAB_04109578;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,5);
LAB_04109578:
        uVar14 = (*(code *)*puVar10)(plVar6,puVar10[1]);
        if ((uVar14 & 1) != 0) {
          plVar6 = (long *)*puVar7;
          if (plVar6 == (long *)0x0) goto LAB_04109950;
          lVar9 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_041095e0;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,1);
LAB_041095e0:
          iVar3 = (*(code *)*puVar10)(plVar6,puVar10[1]);
          uVar18 = iVar3 + ~uVar18;
        }
        plVar6 = (long *)*puVar7;
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_04109648;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109648:
          lVar9 = (*(code *)*puVar10)(plVar6,uVar18,puVar10[1]);
          iVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar12);
          if (lVar9 != 0) {
            lVar5 = 0x14;
            if (iVar3 != 1) {
              lVar5 = 0x10;
            }
            fVar25 = -*(float *)(lVar9 + lVar5);
            fVar23 = *(float *)(lVar12 + 0x6c);
            if (fVar25 <= *(float *)(lVar12 + 0x6c)) {
              fVar23 = fVar25;
            }
            if (fVar25 < *(float *)(lVar12 + 0x70)) {
              fVar23 = *(float *)(lVar12 + 0x70);
            }
            iVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                              (lVar12);
            fVar25 = fVar23;
            fVar24 = 0.0;
            if (iVar3 != 1) {
              fVar25 = 0.0;
              fVar24 = fVar23;
            }
            *(float *)(lVar12 + 0x50) = fVar24;
            *(float *)(lVar12 + 0x54) = fVar25;
            *(undefined4 *)(lVar12 + 0x58) = 0;
            if (*(long *)(lVar12 + 0x28) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (fVar24,fVar25,0,*(long *)(lVar12 + 0x28),0);
              plVar6 = (long *)*puVar7;
              if (plVar6 != (long *)0x0) {
                iVar3 = 0;
                iVar22 = 0x7fffffff;
                iVar19 = -0x80000000;
                do {
                  lVar9 = *plVar6;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_04109730;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,1);
LAB_04109730:
                  iVar4 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                  if (iVar4 <= iVar3) {
                    lVar9 = *(long *)(lVar12 + 0xc0);
                    *(int *)(lVar12 + 0x38) = iVar22;
                    *(int *)(lVar12 + 0x3c) = iVar19;
                    *(undefined1 *)(lVar12 + 0xb0) = 1;
                    if (lVar9 != 0) {
                      (**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                    }
                    return;
                  }
                  plVar6 = (long *)*puVar7;
                  if (plVar6 == (long *)0x0) break;
                  lVar9 = *plVar6;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                        puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_04109798;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109798:
                  lVar9 = (*(code *)*puVar10)(plVar6,iVar3,puVar10[1]);
                  if ((lVar9 == 0) || (plVar6 = (long *)*puVar7, plVar6 == (long *)0x0)) break;
                  lVar5 = *plVar6;
                  uVar14 = (ulong)*(ushort *)(lVar5 + 0x12a);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                        puVar10 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_04109804;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109804:
                  lVar5 = (*(code *)*puVar10)(plVar6,iVar3,puVar10[1]);
                  if (lVar5 == 0) break;
                  fVar23 = (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar12 + 0x50) >> 0x20);
                  UnityEngine_Bounds__set_center_383763c
                            (CONCAT44(fVar23,(float)*(undefined8 *)(lVar5 + 0x10) +
                                             (float)*(undefined8 *)(lVar12 + 0x50)),fVar23,
                             *(float *)(lVar5 + 0x18) + *(float *)(lVar12 + 0x58),lVar9 + 0x1c,0);
                  plVar6 = *(long **)(lVar12 + 0x30);
                  if (plVar6 == (long *)0x0) break;
                  lVar9 = *plVar6;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                        puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_04109894;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0);
LAB_04109894:
                  lVar9 = (*(code *)*puVar10)(plVar6,iVar3,puVar10[1]);
                  if (lVar9 == 0) break;
                  uStack_90 = *(undefined8 *)(lVar12 + 0x90);
                  uStack_98 = *(undefined8 *)(lVar12 + 0x88);
                  uStack_a0 = *(undefined8 *)(lVar12 + 0x80);
                  uVar14 = UnityEngine_Bounds__Intersects_3837898(lVar9 + 0x1c,&uStack_a0,0);
                  iVar4 = iVar22;
                  iVar20 = iVar19;
                  if ((uVar14 & 1) != 0) {
                    plVar6 = (long *)*puVar7;
                    if (plVar6 == (long *)0x0) break;
                    lVar9 = *plVar6;
                    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar14 != 0) {
                      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
                          puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                          goto LAB_04109924;
                        }
                        uVar14 = uVar14 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,3);
LAB_04109924:
                    (*(code *)*puVar10)(plVar6,iVar3,puVar10[1]);
                    iVar4 = iVar3;
                    if (iVar22 <= iVar3) {
                      iVar4 = iVar22;
                    }
                    iVar20 = iVar3;
                    if (iVar3 <= iVar19) {
                      iVar20 = iVar19;
                    }
                  }
                  plVar6 = (long *)*puVar7;
                  iVar3 = iVar3 + 1;
                  iVar22 = iVar4;
                  iVar19 = iVar20;
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

