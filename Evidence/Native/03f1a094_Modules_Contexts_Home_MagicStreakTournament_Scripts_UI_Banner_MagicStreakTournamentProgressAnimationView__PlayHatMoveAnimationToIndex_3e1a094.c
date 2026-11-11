/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$PlayHatMoveAnimationToIndex
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatMoveAnimationToIndex (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t initialStreakCount, int32_t targetStreakCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$PlayHatMoveAnimationToIndex
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatMoveAnimationToIndex
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t initialStreakCount, int32_t targetStreakCount, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatMoveAnimationToIndex_3e1a094
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  puVar4 = PTR_DAT_057815e0;
  if ((bRam0000000005c380d8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05777250);
    FUN_012d0dc8(PTR_DAT_057f77b8);
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c380d8 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (3 < param_6 - 2U) {
    return uVar5;
  }
  lVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount_3e1acb8
                    (param_4,param_5);
  lVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount_3e1acb8
                    (param_4,param_6);
  if (lVar6 != 0) {
    lVar11 = *(long *)(param_4 + 0x18);
    UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
    if (lVar11 != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0(lVar11,0);
      fVar12 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
      if (lVar7 != 0) {
        uVar14 = param_2;
        uVar15 = param_3;
        fVar13 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar7,0);
        lVar6 = *(long *)(param_4 + 0x30);
        if ((lVar6 != 0) && (*(long *)(param_4 + 0x28) != 0)) {
          uVar1 = *(undefined4 *)(lVar6 + 0x104);
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetAllMultiplierColors_3e1ad10
                    (*(undefined4 *)(lVar6 + 0x19c),*(undefined4 *)(lVar6 + 0x1a0),
                     *(undefined4 *)(lVar6 + 0x1a4),*(undefined4 *)(lVar6 + 0x1a8));
          if (*(long *)(param_4 + 0x28) != 0) {
            Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetDefaultSeparatorSprites_3e1aec4
                      ();
            puVar4 = PTR_DAT_057f77b8;
            if (*(long *)(param_4 + 0x30) != 0) {
              DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                        (*(undefined4 *)(*(long *)(param_4 + 0x30) + 0x28),uVar5,0);
              lVar6 = *(long *)puVar4;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar6 = *(long *)puVar4;
              }
              puVar3 = PTR_DAT_057606c8;
              lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar7 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar6 = *(long *)puVar4;
                }
                uVar10 = **(undefined8 **)(lVar6 + 0xb8);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if (lVar7 == 0) goto LAB_03f1a380;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar7,uVar10,*(undefined8 *)PTR_DAT_05777250,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                *plVar8 = lVar7;
                FUN_012d0d74(plVar8,lVar7);
              }
              puVar4 = PTR_DAT_058030a8;
              DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar7,0);
              lVar6 = FUN_012d0e38(*(undefined8 *)puVar4,3);
              if (lVar6 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 != 0) {
                  *(float *)(lVar6 + 0x20) = fVar12;
                  *(undefined4 *)(lVar6 + 0x24) = param_2;
                  *(undefined4 *)(lVar6 + 0x28) = param_3;
                  if (uVar2 != 1) {
                    *(undefined4 *)(lVar6 + 0x30) = uVar1;
                    *(float *)(lVar6 + 0x2c) = (fVar12 + fVar13) * 0.5;
                    *(undefined4 *)(lVar6 + 0x34) = param_3;
                    if (2 < uVar2) {
                      *(float *)(lVar6 + 0x38) = fVar13;
                      *(undefined4 *)(lVar6 + 0x3c) = uVar14;
                      *(undefined4 *)(lVar6 + 0x40) = uVar15;
                      uVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__MoveAlongCurve_3e1b024
                                         (param_4,lVar6,param_6);
                      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar10,0);
                      uVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetTotalDurationForHat_3e1b2a4
                                         (param_4,param_6);
                      if (*(long *)(param_4 + 0x28) != 0) {
                        uVar9 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__FollowHatXPosition_3e1b2ec
                                          ();
                        DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar9,0);
                        if (*(long *)(param_4 + 0x28) != 0) {
                          uVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateTargetRank_3e1b3d4
                                             (uVar10,*(long *)(param_4 + 0x28),1);
                          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar10,0);
                          return uVar5;
                        }
                      }
                      goto LAB_03f1a380;
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
            }
          }
        }
      }
    }
  }
LAB_03f1a380:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

