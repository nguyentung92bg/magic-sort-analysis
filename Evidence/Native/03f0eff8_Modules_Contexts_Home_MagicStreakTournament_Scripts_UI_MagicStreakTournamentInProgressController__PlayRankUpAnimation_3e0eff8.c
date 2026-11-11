/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$PlayRankUpAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__PlayRankUpAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o* __this, int32_t currentRank, int32_t lastRank, int32_t currentHat, int32_t lastHat, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$PlayRankUpAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__PlayRankUpAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o*
   __this, int32_t currentRank, int32_t lastRank, int32_t currentHat, int32_t lastHat, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__PlayRankUpAnimation_3e0eff8
               (long param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_03f0f034:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowScrollBar_412018c
                    (*(long *)(param_1 + 0x58),0);
  puVar4 = PTR_DAT_05775ef0;
  if ((uVar8 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x28);
  }
  if (lVar9 == 0) goto LAB_03f0f034;
  if ((bRam0000000005c380b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576ec60);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05797500);
    FUN_012d0dc8(PTR_DAT_05775ef0);
    bRam0000000005c380b8 = 1;
  }
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_03f0f4c4;
  System_Object___ctor_23dfe5c(lVar10,0);
  *(long *)(lVar10 + 0x10) = lVar9;
  FUN_012d0d74((long *)(lVar10 + 0x10),lVar9);
  *(int *)(lVar10 + 0x18) = param_2;
  *(int *)(lVar10 + 0x1c) = param_3;
  *(undefined4 *)(lVar10 + 0x20) = param_5;
  *(undefined4 *)(lVar10 + 0x24) = param_4;
  if (param_3 <= param_2) {
    return;
  }
  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03f0f4c4;
  param_2 = param_2 + -1;
  uVar8 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                    (*(long *)(lVar9 + 0x20),param_2,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03f0f4c4;
  iVar2 = param_3 + -1;
  uVar8 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                    (*(long *)(lVar9 + 0x20),iVar2,0);
  puVar4 = PTR_DAT_05814830;
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar11 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar4);
  if (lVar11 == 0) goto LAB_03f0f4c4;
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar11,0);
  if ((*(long *)(lVar9 + 0x28) == 0) ||
     (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__SetUserToIndex_3e17208
                (*(long *)(lVar9 + 0x28),iVar2), *(long *)(lVar9 + 0x28) == 0)) goto LAB_03f0f4c4;
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateAllViewElementRanks_3e17374
            ();
  if (*(long *)(lVar9 + 0x18) == 0) goto LAB_03f0f4c4;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_400aeec
            (*(long *)(lVar9 + 0x18),iVar2,0);
  puVar4 = PTR_DAT_0576ec60;
  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03f0f4c4;
  plVar12 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                              (*(long *)(lVar9 + 0x20),iVar2,0);
  if (plVar12 == (long *)0x0) {
LAB_03f0f20c:
    plVar12 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar4 + 300);
    if (*(byte *)(*plVar12 + 300) < bVar1) goto LAB_03f0f20c;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
      plVar12 = (long *)0x0;
    }
  }
  plVar13 = *(long **)(lVar9 + 0x28);
  if (plVar13 == (long *)0x0) goto LAB_03f0f4c4;
  (**(code **)(*plVar13 + 0x1e8))(plVar13,plVar12,iVar2,*(undefined8 *)(*plVar13 + 0x1f0));
  lVar11 = *(long *)(lVar9 + 0x30);
  if (lVar11 == 0) goto LAB_03f0f4c4;
  fVar15 = *(float *)(lVar9 + 0x50);
  fVar16 = *(float *)(lVar11 + 100);
  uVar7 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar11 + 0x5c) >> 0x20),
                   (float)*(undefined8 *)(lVar9 + 0x48) + (float)*(undefined8 *)(lVar11 + 0x5c));
  *(undefined8 *)(lVar10 + 0x28) = uVar7;
  *(float *)(lVar10 + 0x30) = fVar15 + fVar16;
  if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03f0f4c4;
  uVar8 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                    (*(long *)(lVar9 + 0x20),param_2,0);
  fVar15 = (float)uVar7;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03f0f4c4;
    plVar13 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                (*(long *)(lVar9 + 0x20),param_2,0);
    if (plVar13 == (long *)0x0) {
LAB_03f0f2d0:
      plVar13 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if (*(byte *)(*plVar13 + 300) < bVar1) goto LAB_03f0f2d0;
      if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
        plVar13 = (long *)0x0;
      }
    }
    plVar14 = *(long **)(lVar9 + 0x28);
    if (plVar14 == (long *)0x0) goto LAB_03f0f4c4;
    (**(code **)(*plVar14 + 0x1e8))(plVar14,plVar13,param_2,*(undefined8 *)(*plVar14 + 0x1f0));
  }
  puVar3 = PTR_DAT_0576c200;
  if (*(int *)(lVar10 + 0x18) < 4) {
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar8 = UnityEngine_Object__op_Inequality_408e110(plVar12,0,0);
    if ((4 < param_3) && ((uVar8 & 1) != 0)) {
      if ((plVar12 == (long *)0x0) || (plVar12[9] == 0)) goto LAB_03f0f4c4;
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRank_3e161f4
                (plVar12[9],*(undefined4 *)(lVar10 + 0x18));
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar8 = UnityEngine_Object__op_Inequality_408e110(plVar12,0,0);
    if ((iVar2 < 5) && ((uVar8 & 1) != 0)) {
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03f0f4c4;
      uVar8 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                        (*(long *)(lVar9 + 0x20),param_2,0);
      if ((uVar8 & 1) != 0) {
        if ((*(long *)(lVar9 + 0x20) == 0) ||
           (plVar13 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                        (*(long *)(lVar9 + 0x20),param_2,0), plVar13 == (long *)0x0)
           ) goto LAB_03f0f4c4;
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar13 + 300) < bVar1) ||
           ((((*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4 ||
              (lVar11 = UnityEngine_Component__get_transform_408b444(plVar13,0), lVar11 == 0)) ||
             (UnityEngine_Transform__get_position_4092b08(lVar11,0), plVar12 == (long *)0x0)) ||
            (fVar16 = fVar15, lVar11 = UnityEngine_Component__get_transform_408b444(plVar12,0),
            lVar11 == 0)))) goto LAB_03f0f4c4;
        UnityEngine_Transform__get_position_4092b08(lVar11,0);
        *(float *)(lVar10 + 0x2c) = (fVar15 + fVar16) * 0.5;
      }
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = UnityEngine_Object__op_Inequality_408e110(plVar12,0,0);
  if ((uVar8 & 1) != 0) {
    if ((plVar12 == (long *)0x0) || (plVar12[0xc] == 0)) goto LAB_03f0f4c4;
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardImage__UpdateDisplay_3e15918
              (plVar12[0xc],*(undefined4 *)(lVar10 + 0x20));
  }
  if (*(long *)(lVar9 + 0x30) != 0) {
    uVar17 = *(undefined4 *)(*(long *)(lVar9 + 0x30) + 0x44);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar9 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar10,*(undefined8 *)PTR_DAT_05797500,0);
      puVar4 = PTR_DAT_057815e0;
      if ((bRam0000000005c28460 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0,1,0);
        FUN_012d0dc8(PTR_DAT_057d6890);
        FUN_012d0dc8(PTR_DAT_057ca968);
        FUN_012d0dc8(PTR_DAT_057f1100);
        bRam0000000005c28460 = 1;
      }
      puVar6 = PTR_DAT_057f1100;
      puVar5 = PTR_DAT_057d6890;
      puVar3 = PTR_DAT_057ca968;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      DG_Tweening_DOTween__Sequence_1eda154();
      uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar17);
      uVar7 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                        (uVar7,lVar9,*(undefined8 *)puVar5);
      lVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                        (uVar7,0,1,*(undefined8 *)puVar6);
      uVar7 = *(undefined8 *)puVar3;
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) && (*(char *)(lVar9 + 0x100) == '\0'))
      {
        *(undefined1 *)(lVar9 + 0x9c) = 1;
        return;
      }
      return;
    }
  }
LAB_03f0f4c4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

