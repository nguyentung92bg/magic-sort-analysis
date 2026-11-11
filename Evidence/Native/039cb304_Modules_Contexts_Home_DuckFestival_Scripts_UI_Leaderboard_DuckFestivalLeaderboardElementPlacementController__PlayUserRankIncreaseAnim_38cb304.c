/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$PlayUserRankIncreaseAnim
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlayUserRankIncreaseAnim (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, int32_t previousRankIndex, int32_t newRankIndex, int32_t newRankNumber, float scrollDuration, int32_t oldHatCount, int32_t newHatCount, UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$PlayUserRankIncreaseAnim
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlayUserRankIncreaseAnim
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this, int32_t previousRankIndex, int32_t newRankIndex, int32_t newRankNumber, float
   scrollDuration, int32_t oldHatCount, int32_t newHatCount, UnityEngine_Vector3_o
   targetCenterPosition, const MethodInfo* method); */

ulong Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlayUserRankIncreaseAnim_38cb304
                (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                ,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar14;
  int *piVar15;
  float fVar16;
  
  puVar4 = PTR_DAT_057e1b80;
  if ((bRam0000000005c34b67 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057f93b0);
    FUN_012d0dc8(PTR_DAT_057ffd68);
    FUN_012d0dc8(PTR_DAT_0581a0c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05782f08);
    FUN_012d0dc8(PTR_DAT_057adf70);
    FUN_012d0dc8(PTR_DAT_057feb28);
    FUN_012d0dc8(PTR_DAT_057e6b60);
    FUN_012d0dc8(PTR_DAT_057f2ed0);
    FUN_012d0dc8(PTR_DAT_057e1b80);
    FUN_012d0dc8(PTR_DAT_05773970);
    FUN_012d0dc8(PTR_DAT_0575f2d0);
    bRam0000000005c34b67 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_05814830;
  puVar4 = PTR_DAT_057b8520;
  if (lVar6 != 0) {
    System_Object___ctor_23dfe5c(lVar6,0);
    *(long *)(lVar6 + 0x20) = param_5;
    *(undefined4 *)(lVar6 + 0x18) = param_9;
    *(undefined4 *)(lVar6 + 0x1c) = param_10;
    FUN_012d0d74((long *)(lVar6 + 0x20),param_5);
    *(undefined4 *)(lVar6 + 0x30) = param_7;
    *(undefined4 *)(lVar6 + 0x40) = param_8;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar5);
    puVar4 = PTR_DAT_05807f60;
    if (lVar7 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
      if ((param_1 < 0.0) || (*(int *)(lVar6 + 0x40) < 0)) {
        iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
        puVar13 = (undefined8 *)PTR_DAT_05773970;
      }
      else {
        *(int *)(lVar6 + 0x2c) = param_6;
        puVar5 = PTR_DAT_0581a0c8;
        if (*(int *)(lVar6 + 0x30) < param_6) {
          param_6 = param_6 - *(int *)(lVar6 + 0x30);
          *(int *)(lVar6 + 0x28) = param_6;
          if (8 < param_6) {
            param_6 = 9;
          }
          if (param_6 < 2) {
            param_6 = 1;
          }
          *(int *)(lVar6 + 0x34) = param_6;
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if (lVar7 != 0) {
            System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar7,*(undefined8 *)PTR_DAT_057ffd68);
            *(long *)(lVar6 + 0x38) = lVar7;
            FUN_012d0d74((long *)(lVar6 + 0x38),lVar7);
            puVar4 = PTR_DAT_057815e0;
            if (*(long *)(param_5 + 0x20) != 0) {
              plVar8 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__RemoveConnectionOfTheView_4007928
                                         (*(long *)(param_5 + 0x20),*(undefined4 *)(lVar6 + 0x2c),0)
              ;
              if (plVar8 == (long *)0x0) {
                plVar8 = (long *)0x0;
                *(undefined8 *)(lVar6 + 0x10) = 0;
              }
              else {
                lVar7 = *(long *)PTR_DAT_057f93b0;
                bVar2 = *(byte *)(lVar7 + 300);
                if (*(byte *)(*plVar8 + 300) < bVar2) {
                  plVar14 = (long *)0x0;
                }
                else {
                  plVar14 = plVar8;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar7) {
                    plVar14 = (long *)0x0;
                  }
                }
                *(long **)(lVar6 + 0x10) = plVar14;
                if (*(byte *)(*plVar8 + 300) < bVar2) {
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar7) {
                  plVar8 = (long *)0x0;
                }
              }
              puVar5 = PTR_DAT_0576c200;
              plVar14 = (long *)(lVar6 + 0x10);
              FUN_012d0d74(plVar14,plVar8);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar10 = DG_Tweening_DOTween__Sequence_1eda154(0);
              lVar7 = *plVar14;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar5);
              }
              uVar11 = UnityEngine_Object__op_Implicit_4081098(lVar7,0);
              if ((uVar11 & 1) == 0) {
                return uVar11;
              }
              if ((*plVar14 != 0) && (*plVar14 != 0)) {
                Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__SetHatCountForRankUpAnim_38cb2bc
                          (*plVar14,*(undefined4 *)(lVar6 + 0x18));
                Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__ExtractUserView_38cb890
                          (param_5,*(undefined8 *)(lVar6 + 0x10));
                uVar12 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__ExtractUserViewTween_38cb944
                                   (param_2,param_3,param_4,param_5,*(undefined8 *)(lVar6 + 0x10));
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar12,0);
                puVar4 = PTR_DAT_057606c8;
                lVar7 = *(long *)(param_5 + 0x30);
                if ((lVar7 != 0) && (*(long *)(param_5 + 0x18) != 0)) {
                  fVar16 = *(float *)(lVar7 + 0x54) * (float)*(int *)(lVar6 + 0x28);
                  fVar3 = *(float *)(lVar7 + 0x58);
                  if (fVar16 <= *(float *)(lVar7 + 0x58)) {
                    fVar3 = fVar16;
                  }
                  uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_40064c8
                                     (fVar3,*(long *)(param_5 + 0x18),*(undefined4 *)(lVar6 + 0x30),
                                      0);
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar12,0);
                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                  if (lVar7 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar7,lVar6,*(undefined8 *)PTR_DAT_05782f08,0);
                    DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar10,lVar7,0);
                    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    if (lVar7 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar7,lVar6,*(undefined8 *)PTR_DAT_057adf70,0);
                      DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar10,lVar7,0);
                      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                      if (lVar7 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar7,lVar6,*(undefined8 *)PTR_DAT_057feb28,0);
                        DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar10,lVar7,0);
                        uVar12 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlugUserViewTween_38cbab0
                                           (param_5,*(undefined8 *)(lVar6 + 0x10),
                                            *(undefined4 *)(lVar6 + 0x30));
                        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar12,0);
                        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                        if (lVar7 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar7,lVar6,*(undefined8 *)PTR_DAT_057e6b60,0);
                          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078
                                    (uVar10,lVar7,0);
                          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                          if (lVar7 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar7,lVar6,*(undefined8 *)PTR_DAT_057f2ed0,0);
                            uVar11 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                               (uVar10,0,1);
                            if ((lVar7 != 0) && ((uVar11 & 1) != 0)) {
                              if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_012d0ef0();
                              }
                              DG_Tweening_Sequence__DoInsertCallback_1edffe8
                                        (*(undefined4 *)(uVar10 + 0xa0),uVar10,lVar7);
                            }
                            return uVar10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_039cb884;
        }
        iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
        puVar13 = (undefined8 *)PTR_DAT_0575f2d0;
      }
      if (iVar1 == 0) {
        thunk_FUN_0130472c();
      }
      puVar4 = PTR_DAT_05807f60;
      uVar9 = *puVar13;
      uVar12 = 0;
      if ((bRam0000000005c3a1ab & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05807f60,0);
        FUN_012d0dc8(PTR_DAT_0578cb58);
        bRam0000000005c3a1ab = 1;
        uVar12 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        uVar12 = extraout_x1_00;
      }
      if (cRam0000000005c26b67 == '\0') {
        FUN_012d0dc8(PTR_DAT_05807f60,uVar12);
        cRam0000000005c26b67 = '\x01';
      }
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar6 = *(long *)puVar4;
      }
      plVar8 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar6 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0578cb58) {
            puVar13 = (undefined8 *)(lVar6 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_04178e0c;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0578cb58,3);
LAB_04178e0c:
                    /* WARNING: Could not recover jumptable at 0x04178e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)*puVar13)(plVar8,0,uVar9,puVar13[1]);
      return uVar10;
    }
  }
LAB_039cb884:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

