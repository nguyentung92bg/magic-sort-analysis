/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$PlayUserRankIncreaseAnim
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlayUserRankIncreaseAnim (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, int32_t newRankNumber, float scrollDuration, int32_t oldHatCount, int32_t newHatCount, UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$PlayUserRankIncreaseAnim
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlayUserRankIncreaseAnim
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this, int32_t newRankNumber, float scrollDuration, int32_t oldHatCount, int32_t newHatCount,
   UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method); */

ulong Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlayUserRankIncreaseAnim_3e174e8
                (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar15;
  int *piVar16;
  float fVar17;
  
  puVar4 = PTR_DAT_05813890;
  if ((bRam0000000005c380b9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057b0bf8);
    FUN_012d0dc8(PTR_DAT_05802288);
    FUN_012d0dc8(PTR_DAT_0576ec60);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578b408);
    FUN_012d0dc8(PTR_DAT_05786d40);
    FUN_012d0dc8(PTR_DAT_057a76a8);
    FUN_012d0dc8(PTR_DAT_05807eb8);
    FUN_012d0dc8(PTR_DAT_057b7738);
    FUN_012d0dc8(PTR_DAT_05813890);
    FUN_012d0dc8(PTR_DAT_05773970);
    FUN_012d0dc8(PTR_DAT_0575f2d0);
    bRam0000000005c380b9 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_05814830;
  puVar4 = PTR_DAT_057b8520;
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(long *)(lVar7 + 0x20) = param_5;
    *(undefined4 *)(lVar7 + 0x18) = param_7;
    *(undefined4 *)(lVar7 + 0x1c) = param_8;
    FUN_012d0d74((long *)(lVar7 + 0x20),param_5);
    *(undefined4 *)(lVar7 + 0x40) = param_6;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar5);
    puVar4 = PTR_DAT_05807f60;
    if (lVar8 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
      if ((param_1 < 0.0) || (*(int *)(lVar7 + 0x40) < 0)) {
        iVar2 = *(int *)(*(long *)puVar4 + 0xe0);
        puVar14 = (undefined8 *)PTR_DAT_05773970;
joined_r0x03f1775c:
        if (iVar2 == 0) {
          thunk_FUN_0130472c();
        }
        puVar4 = PTR_DAT_05807f60;
        uVar10 = *puVar14;
        uVar13 = 0;
        if ((bRam0000000005c3a1ab & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05807f60,0);
          FUN_012d0dc8(PTR_DAT_0578cb58);
          bRam0000000005c3a1ab = 1;
          uVar13 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          uVar13 = extraout_x1_00;
        }
        if (cRam0000000005c26b67 == '\0') {
          FUN_012d0dc8(PTR_DAT_05807f60,uVar13);
          cRam0000000005c26b67 = '\x01';
        }
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar7 = *(long *)puVar4;
        }
        plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar7 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0578cb58) {
              puVar14 = (undefined8 *)(lVar7 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_04178e0c;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0578cb58,3);
LAB_04178e0c:
                    /* WARNING: Could not recover jumptable at 0x04178e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)*puVar14)(plVar9,0,uVar10,puVar14[1]);
        return uVar11;
      }
      *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x40) + -1;
      if (*(long *)(param_5 + 0x28) != 0) {
        iVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__GetUserIndex_3e17a84
                          ();
        *(int *)(lVar7 + 0x2c) = iVar6;
        puVar5 = PTR_DAT_05802288;
        iVar2 = iVar6 - *(int *)(lVar7 + 0x30);
        if (iVar2 == 0 || iVar6 < *(int *)(lVar7 + 0x30)) {
          iVar2 = *(int *)(*(long *)puVar4 + 0xe0);
          puVar14 = (undefined8 *)PTR_DAT_0575f2d0;
          goto joined_r0x03f1775c;
        }
        *(int *)(lVar7 + 0x28) = iVar2;
        if (8 < iVar2) {
          iVar2 = 9;
        }
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        *(int *)(lVar7 + 0x34) = iVar2;
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
        if (lVar8 != 0) {
          System_Collections_Generic_List_object____ctor_21fc1fc
                    (lVar8,*(undefined8 *)PTR_DAT_057b0bf8);
          *(long *)(lVar7 + 0x38) = lVar8;
          FUN_012d0d74((long *)(lVar7 + 0x38),lVar8);
          puVar4 = PTR_DAT_057815e0;
          if (*(long *)(param_5 + 0x20) != 0) {
            plVar9 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__RemoveConnectionOfTheView_4007928
                                       (*(long *)(param_5 + 0x20),*(undefined4 *)(lVar7 + 0x2c),0);
            if (plVar9 == (long *)0x0) {
              plVar9 = (long *)0x0;
              *(undefined8 *)(lVar7 + 0x10) = 0;
            }
            else {
              lVar8 = *(long *)PTR_DAT_0576ec60;
              bVar1 = *(byte *)(lVar8 + 300);
              if (*(byte *)(*plVar9 + 300) < bVar1) {
                plVar15 = (long *)0x0;
              }
              else {
                plVar15 = plVar9;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                  plVar15 = (long *)0x0;
                }
              }
              *(long **)(lVar7 + 0x10) = plVar15;
              if (*(byte *)(*plVar9 + 300) < bVar1) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                plVar9 = (long *)0x0;
              }
            }
            puVar5 = PTR_DAT_0576c200;
            plVar15 = (long *)(lVar7 + 0x10);
            FUN_012d0d74(plVar15,plVar9);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar11 = DG_Tweening_DOTween__Sequence_1eda154(0);
            lVar8 = *plVar15;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar5);
            }
            uVar12 = UnityEngine_Object__op_Implicit_4081098(lVar8,0);
            if ((uVar12 & 1) == 0) {
              return uVar12;
            }
            if ((*plVar15 != 0) && (lVar8 = *(long *)(*plVar15 + 0x48), lVar8 != 0)) {
              Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRank_3e161f4
                        (lVar8,*(int *)(lVar7 + 0x2c) + 1);
              if ((*(long *)(lVar7 + 0x10) != 0) &&
                 (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x60), lVar8 != 0)) {
                Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardImage__UpdateDisplay_3e15918
                          (lVar8,*(undefined4 *)(lVar7 + 0x18));
                Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserView_3e17b18
                          (param_5,*(undefined8 *)(lVar7 + 0x10));
                uVar13 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserViewTween_3e17bcc
                                   (param_2,param_3,param_4,param_5,*(undefined8 *)(lVar7 + 0x10));
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar11,uVar13,0);
                puVar4 = PTR_DAT_057606c8;
                lVar8 = *(long *)(param_5 + 0x30);
                if ((lVar8 != 0) && (*(long *)(param_5 + 0x18) != 0)) {
                  fVar17 = *(float *)(lVar8 + 0x54) * (float)*(int *)(lVar7 + 0x28);
                  fVar3 = *(float *)(lVar8 + 0x58);
                  if (fVar17 <= *(float *)(lVar8 + 0x58)) {
                    fVar3 = fVar17;
                  }
                  uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_40064c8
                                     (fVar3,*(long *)(param_5 + 0x18),*(undefined4 *)(lVar7 + 0x30),
                                      0);
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar11,uVar13,0);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                  if (lVar8 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar8,lVar7,*(undefined8 *)PTR_DAT_0578b408,0);
                    DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar11,lVar8,0);
                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    if (lVar8 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar8,lVar7,*(undefined8 *)PTR_DAT_05786d40,0);
                      DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar11,lVar8,0);
                      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                      if (lVar8 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar8,lVar7,*(undefined8 *)PTR_DAT_057a76a8,0);
                        DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar11,lVar8,0);
                        uVar13 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserViewTween_3e17d38
                                           (param_5,*(undefined8 *)(lVar7 + 0x10),
                                            *(undefined4 *)(lVar7 + 0x30));
                        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar11,uVar13,0);
                        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                        if (lVar8 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar8,lVar7,*(undefined8 *)PTR_DAT_05807eb8,0);
                          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078
                                    (uVar11,lVar8,0);
                          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                          if (lVar8 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar8,lVar7,*(undefined8 *)PTR_DAT_057b7738,0);
                            uVar12 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                               (uVar11,0,1);
                            if ((lVar8 != 0) && ((uVar12 & 1) != 0)) {
                              if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_012d0ef0();
                              }
                              DG_Tweening_Sequence__DoInsertCallback_1edffe8
                                        (*(undefined4 *)(uVar11 + 0xa0),uVar11,lVar8);
                            }
                            return uVar11;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

