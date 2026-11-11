/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$GenerateOrderedRewardSequence
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GenerateOrderedRewardSequence (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, System_Collections_Generic_List_RewardModel__o* rewards, float initialPercentage, float lastRewardPercentage, System_Action_o* onCompleteAction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$GenerateOrderedRewardSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GenerateOrderedRewardSequence
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, System_Collections_Generic_List_RewardModel__o* rewards, float initialPercentage, float
   lastRewardPercentage, System_Action_o* onCompleteAction, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GenerateOrderedRewardSequence_3e13ab0
          (undefined4 param_1,float param_2,float param_3,long param_4,long param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float extraout_s0;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar18;
  ulong uVar20;
  
  puVar2 = PTR_DAT_0580c0b8;
  fVar15 = param_2;
  if ((bRam0000000005c380a6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_057e73f0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057ebef8);
    FUN_012d0dc8(PTR_DAT_05802470);
    FUN_012d0dc8(PTR_DAT_0580c0b8);
    FUN_012d0dc8(PTR_DAT_057cffd8);
    FUN_012d0dc8(PTR_DAT_057bc020);
    FUN_012d0dc8(PTR_DAT_0579a010);
    bRam0000000005c380a6 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_4);
    *(undefined8 *)(lVar4 + 0x18) = param_6;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x18),param_6);
    if (param_5 != 0) {
      if (*(int *)(param_5 + 0x18) == 0) {
        return 0;
      }
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ToggleBackBar_3e1417c
                (param_4,1);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ToggleFrontBar_3e1414c
                (param_4,1);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetFrontBarZero_3e141ac
                (param_4);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetBackBarZero_3e141dc
                (param_4);
      if ((*(long *)(param_4 + 0x28) != 0) &&
         (lVar6 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x28),0),
         lVar6 != 0)) {
        fVar13 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
        if (cRam0000000005c28262 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c28262 = '\x01';
        }
        puVar3 = PTR_DAT_0579a010;
        puVar2 = PTR_DAT_057606c8;
        lVar6 = *(long *)(param_4 + 0x20);
        if (lVar6 != 0) {
          if (0 < *(int *)(param_5 + 0x18)) {
            fVar14 = *(float *)(lVar6 + 0x18);
            fVar16 = ABS(param_2);
            if (fVar16 <= 1.0) {
              fVar16 = 1.0;
            }
            lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
            iVar11 = 0;
            fVar21 = *(float *)(lVar6 + 0x3c);
            fVar16 = fVar16 * _LAB_04321df0;
            fVar17 = *(float *)(lVar6 + 0x44) * fVar14;
            uVar18 = (ulong)(uint)fVar17;
            fVar19 = *(float *)(lVar6 + 0x40) * fVar14;
            uVar20 = (ulong)(uint)fVar19;
            uVar22 = (ulong)(uint)(param_3 + fVar17);
            uVar23 = (ulong)(uint)(fVar15 + fVar19);
            do {
              fVar17 = (float)uVar20;
              fVar15 = (float)uVar18;
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              if (lVar6 == 0) goto LAB_03f14148;
              System_Object___ctor_23dfe5c(lVar6,0);
              *(long *)(lVar6 + 0x18) = lVar4;
              FUN_012d0d74((long *)(lVar6 + 0x18),lVar4);
              uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GetCurrency_3e14c4c
                                (param_4,param_5,iVar11);
              puVar12 = (undefined8 *)(lVar6 + 0x10);
              *puVar12 = uVar7;
              FUN_012d0d74(puVar12,uVar7);
              if (iVar11 == 0) {
                if (*(long *)(param_4 + 0x28) == 0) goto LAB_03f14148;
                uVar7 = *puVar12;
                lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x28),0);
                if (lVar8 == 0) goto LAB_03f14148;
                uVar9 = UnityEngine_Transform__get_position_4092b08(lVar8,0);
                Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetCurrencyViewPosition_3e14514
                          (uVar9,uVar7);
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OpenBackBar_3e1420c
                                  (param_4);
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar7,0);
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBarLeftOverValue_3e146b4
                                  (param_1,param_4);
                DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleInCurrencyView_3e149f4
                                  (param_4,*puVar12);
                uVar7 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
                lVar8 = *(long *)(param_4 + 0x20);
                if (lVar8 == 0) goto LAB_03f14148;
                uVar18 = uVar23;
                uVar20 = uVar22;
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__MoveCurrencyView_3e14478
                                  (fVar13 + fVar21 * fVar14,uVar23,uVar22,
                                   *(undefined4 *)(lVar8 + 0xa4),uVar7,*puVar12,
                                   *(undefined8 *)(lVar8 + 0x90));
                DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBar_3e14564
                                  (0x3f800000,param_4);
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar7,0);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                puVar10 = (undefined8 *)PTR_DAT_057cffd8;
                if (lVar8 == 0) goto LAB_03f14148;
LAB_03f13fb0:
                DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar6,*puVar10,0);
                DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar8,0);
LAB_03f13fd8:
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleOutCurrencyView_3e14938
                                  (param_4,*puVar12);
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar7,0);
              }
              else {
                if (*(long *)(param_4 + 0x28) == 0) goto LAB_03f14148;
                iVar1 = *(int *)(param_5 + 0x18);
                uVar7 = *puVar12;
                lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x28),0);
                if (lVar8 == 0) goto LAB_03f14148;
                uVar9 = UnityEngine_Transform__get_position_4092b08(lVar8,0);
                if (cRam0000000005c28262 == '\0') {
                  uVar9 = FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c28262 = '\x01';
                }
                if (*(long *)(param_4 + 0x20) == 0) goto LAB_03f14148;
                fVar19 = *(float *)(*(long *)(param_4 + 0x20) + 0x18);
                lVar8 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                uVar18 = (ulong)(uint)(fVar15 + *(float *)(lVar8 + 0x40) * fVar19);
                uVar20 = (ulong)(uint)(fVar17 + *(float *)(lVar8 + 0x44) * fVar19);
                Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetCurrencyViewPosition_3e14514
                          (extraout_s0 + *(float *)(lVar8 + 0x3c) * fVar19,uVar18,uVar20,uVar9,uVar7
                          );
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar8 == 0) goto LAB_03f14148;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar8,param_4,*(undefined8 *)PTR_DAT_057e73f0,0);
                DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar8,0);
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleInCurrencyView_3e149f4
                                  (param_4,*puVar12);
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar7,0);
                if (iVar11 != iVar1 + -1) {
                  uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBar_3e14564
                                    (0x3f800000,param_4);
                  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  puVar10 = (undefined8 *)PTR_DAT_057bc020;
                  if (lVar8 != 0) goto LAB_03f13fb0;
                  goto LAB_03f14148;
                }
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBar_3e14564
                                  (param_2,param_4);
                DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
                if (cRam0000000005c23465 == '\0') {
                  FUN_012d0dc8(PTR_DAT_05764ae0);
                  cRam0000000005c23465 = '\x01';
                }
                fVar17 = **(float **)(*(long *)PTR_DAT_05764ae0 + 0xb8) * 8.0;
                uVar18 = (ulong)(uint)ABS(1.0 - param_2);
                fVar15 = fVar16;
                if (fVar16 <= fVar17) {
                  fVar15 = fVar17;
                }
                if (ABS(1.0 - param_2) < fVar15) goto LAB_03f13fd8;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(param_5 + 0x18));
            lVar6 = *(long *)(param_4 + 0x20);
            if (lVar6 == 0) goto LAB_03f14148;
          }
          DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                    (*(undefined4 *)(lVar6 + 0xac),uVar5,0);
          uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__CloseBackBar_3e14344
                            (param_4);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar7,0);
          uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__CloseFrontBar_3e14804
                            (param_4);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
          if (*(long *)(param_4 + 0x28) != 0) {
            uVar7 = *(undefined8 *)(param_4 + 0x50);
            lVar6 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x28),0);
            if (lVar6 != 0) {
              uVar9 = UnityEngine_Transform__get_position_4092b08(lVar6,0);
              if (*(long *)(param_4 + 0x20) != 0) {
                uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__MoveCurrencyView_3e14478
                                  (uVar9,uVar7,*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x98));
                DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar6 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar6,lVar4,*(undefined8 *)PTR_DAT_057ebef8,0);
                  DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar6,0);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  puVar2 = PTR_DAT_0579e470;
                  if (lVar6 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar6,lVar4,*(undefined8 *)PTR_DAT_05802470,0);
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                              (uVar5,lVar6,*(undefined8 *)puVar2);
                    return uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f14148:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

