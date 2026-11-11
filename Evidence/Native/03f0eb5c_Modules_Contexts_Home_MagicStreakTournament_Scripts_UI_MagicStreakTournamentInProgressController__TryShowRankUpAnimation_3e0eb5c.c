/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$TryShowRankUpAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__TryShowRankUpAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$TryShowRankUpAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__TryShowRankUpAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__TryShowRankUpAnimation_3e0eb5c
               (long param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_03f0ec0c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar12 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsRankUp_412004c
                     (*(long *)(param_1 + 0x58),0);
  if ((uVar12 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_03f0ec0c;
  iVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                    (*(long *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_03f0ec0c;
  iVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLastSeenRank_4120014
                    (*(long *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_03f0ec0c;
  uVar9 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore_411ffe0
                    (*(long *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_03f0ec0c;
  uVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLastSeenScore_4120030
                     (*(long *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_03f0f034:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar12 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowScrollBar_412018c
                     (*(long *)(param_1 + 0x58),0);
  puVar4 = PTR_DAT_05775ef0;
  if ((uVar12 & 1) == 0) {
    lVar13 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x28);
  }
  if (lVar13 == 0) goto LAB_03f0f034;
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
  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar14 == 0) goto LAB_03f0f4c4;
  System_Object___ctor_23dfe5c(lVar14,0);
  *(long *)(lVar14 + 0x10) = lVar13;
  FUN_012d0d74((long *)(lVar14 + 0x10),lVar13);
  *(int *)(lVar14 + 0x18) = iVar7;
  *(int *)(lVar14 + 0x1c) = iVar8;
  *(undefined4 *)(lVar14 + 0x20) = uVar10;
  *(undefined4 *)(lVar14 + 0x24) = uVar9;
  if (iVar8 <= iVar7) {
    return;
  }
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03f0f4c4;
  iVar7 = iVar7 + -1;
  uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                     (*(long *)(lVar13 + 0x20),iVar7,0);
  if ((uVar12 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03f0f4c4;
  iVar2 = iVar8 + -1;
  uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                     (*(long *)(lVar13 + 0x20),iVar2,0);
  puVar4 = PTR_DAT_05814830;
  if ((uVar12 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar15 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar4);
  if (lVar15 == 0) goto LAB_03f0f4c4;
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar15,0);
  if ((*(long *)(lVar13 + 0x28) == 0) ||
     (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__SetUserToIndex_3e17208
                (*(long *)(lVar13 + 0x28),iVar2), *(long *)(lVar13 + 0x28) == 0)) goto LAB_03f0f4c4;
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateAllViewElementRanks_3e17374
            ();
  if (*(long *)(lVar13 + 0x18) == 0) goto LAB_03f0f4c4;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_400aeec
            (*(long *)(lVar13 + 0x18),iVar2,0);
  puVar4 = PTR_DAT_0576ec60;
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03f0f4c4;
  plVar16 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                              (*(long *)(lVar13 + 0x20),iVar2,0);
  if (plVar16 == (long *)0x0) {
LAB_03f0f20c:
    plVar16 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar4 + 300);
    if (*(byte *)(*plVar16 + 300) < bVar1) goto LAB_03f0f20c;
    if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
      plVar16 = (long *)0x0;
    }
  }
  plVar17 = *(long **)(lVar13 + 0x28);
  if (plVar17 == (long *)0x0) goto LAB_03f0f4c4;
  (**(code **)(*plVar17 + 0x1e8))(plVar17,plVar16,iVar2,*(undefined8 *)(*plVar17 + 0x1f0));
  lVar15 = *(long *)(lVar13 + 0x30);
  if (lVar15 == 0) goto LAB_03f0f4c4;
  fVar19 = *(float *)(lVar13 + 0x50);
  fVar20 = *(float *)(lVar15 + 100);
  uVar11 = CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar15 + 0x5c) >> 0x20),
                    (float)*(undefined8 *)(lVar13 + 0x48) + (float)*(undefined8 *)(lVar15 + 0x5c));
  *(undefined8 *)(lVar14 + 0x28) = uVar11;
  *(float *)(lVar14 + 0x30) = fVar19 + fVar20;
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03f0f4c4;
  uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                     (*(long *)(lVar13 + 0x20),iVar7,0);
  fVar19 = (float)uVar11;
  if ((uVar12 & 1) != 0) {
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03f0f4c4;
    plVar17 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                (*(long *)(lVar13 + 0x20),iVar7,0);
    if (plVar17 == (long *)0x0) {
LAB_03f0f2d0:
      plVar17 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if (*(byte *)(*plVar17 + 300) < bVar1) goto LAB_03f0f2d0;
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
        plVar17 = (long *)0x0;
      }
    }
    plVar18 = *(long **)(lVar13 + 0x28);
    if (plVar18 == (long *)0x0) goto LAB_03f0f4c4;
    (**(code **)(*plVar18 + 0x1e8))(plVar18,plVar17,iVar7,*(undefined8 *)(*plVar18 + 0x1f0));
  }
  puVar3 = PTR_DAT_0576c200;
  if (*(int *)(lVar14 + 0x18) < 4) {
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar12 = UnityEngine_Object__op_Inequality_408e110(plVar16,0,0);
    if ((4 < iVar8) && ((uVar12 & 1) != 0)) {
      if ((plVar16 == (long *)0x0) || (plVar16[9] == 0)) goto LAB_03f0f4c4;
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRank_3e161f4
                (plVar16[9],*(undefined4 *)(lVar14 + 0x18));
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar12 = UnityEngine_Object__op_Inequality_408e110(plVar16,0,0);
    if ((iVar2 < 5) && ((uVar12 & 1) != 0)) {
      if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03f0f4c4;
      uVar12 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                         (*(long *)(lVar13 + 0x20),iVar7,0);
      if ((uVar12 & 1) != 0) {
        if ((*(long *)(lVar13 + 0x20) == 0) ||
           (plVar17 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                        (*(long *)(lVar13 + 0x20),iVar7,0), plVar17 == (long *)0x0))
        goto LAB_03f0f4c4;
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar17 + 300) < bVar1) ||
           ((((*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4 ||
              (lVar15 = UnityEngine_Component__get_transform_408b444(plVar17,0), lVar15 == 0)) ||
             (UnityEngine_Transform__get_position_4092b08(lVar15,0), plVar16 == (long *)0x0)) ||
            (fVar20 = fVar19, lVar15 = UnityEngine_Component__get_transform_408b444(plVar16,0),
            lVar15 == 0)))) goto LAB_03f0f4c4;
        UnityEngine_Transform__get_position_4092b08(lVar15,0);
        *(float *)(lVar14 + 0x2c) = (fVar19 + fVar20) * 0.5;
      }
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar12 = UnityEngine_Object__op_Inequality_408e110(plVar16,0,0);
  if ((uVar12 & 1) != 0) {
    if ((plVar16 == (long *)0x0) || (plVar16[0xc] == 0)) goto LAB_03f0f4c4;
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRewardImage__UpdateDisplay_3e15918
              (plVar16[0xc],*(undefined4 *)(lVar14 + 0x20));
  }
  if (*(long *)(lVar13 + 0x30) != 0) {
    uVar9 = *(undefined4 *)(*(long *)(lVar13 + 0x30) + 0x44);
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar13 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar13,lVar14,*(undefined8 *)PTR_DAT_05797500,0);
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
      uVar11 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar9);
      uVar11 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                         (uVar11,lVar13,*(undefined8 *)puVar5);
      lVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                         (uVar11,0,1,*(undefined8 *)puVar6);
      uVar11 = *(undefined8 *)puVar3;
      if (((lVar13 != 0) && (*(char *)(lVar13 + 0xe8) != '\0')) &&
         (*(char *)(lVar13 + 0x100) == '\0')) {
        *(undefined1 *)(lVar13 + 0x9c) = 1;
        return;
      }
      return;
    }
  }
LAB_03f0f4c4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

