/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$StartRankUpAnimationCall
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__StartRankUpAnimationCall (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t newRankNumber, int32_t previousRankNumber, int32_t oldHatCount, int32_t newHatCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$StartRankUpAnimationCall
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__StartRankUpAnimationCall
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t newRankNumber, int32_t previousRankNumber, int32_t oldHatCount, int32_t
   newHatCount, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__StartRankUpAnimationCall_3a74ae4
               (long param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  
  puVar3 = PTR_DAT_057dec30;
  if ((bRam0000000005c35a96 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aa2e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057cacc8);
    FUN_012d0dc8(PTR_DAT_057dec30);
    bRam0000000005c35a96 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar8 == 0) goto LAB_03b74f84;
  System_Object___ctor_23dfe5c(lVar8,0);
  *(long *)(lVar8 + 0x10) = param_1;
  FUN_012d0d74((long *)(lVar8 + 0x10),param_1);
  *(int *)(lVar8 + 0x20) = param_2;
  *(int *)(lVar8 + 0x24) = param_3;
  *(undefined4 *)(lVar8 + 0x28) = param_4;
  *(undefined4 *)(lVar8 + 0x2c) = param_5;
  if (param_3 <= param_2) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_03b74f84;
  uVar6 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetIndexEquivalentOfRank_3a747e0
                    (*(long *)(param_1 + 0x28),param_3);
  *(undefined4 *)(lVar8 + 0x18) = uVar6;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_03b74f84;
  uVar6 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetIndexEquivalentOfRank_3a747e0
                    (*(long *)(param_1 + 0x28),*(undefined4 *)(lVar8 + 0x20));
  *(undefined4 *)(lVar8 + 0x1c) = uVar6;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_03b74f84;
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                    (*(long *)(param_1 + 0x20),uVar6,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_03b74f84;
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                    (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x18),0);
  puVar3 = PTR_DAT_05814830;
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar3);
  if (lVar10 == 0) goto LAB_03b74f84;
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar10,0);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__SetUserToIndex_3a74938
                (*(long *)(param_1 + 0x28),*(undefined4 *)(lVar8 + 0x18)),
     *(long *)(param_1 + 0x28) == 0)) goto LAB_03b74f84;
  Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateAllViewElementRanks_3a74f90
            ();
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_03b74f84;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
            (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_03b74f84;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_400aeec
            (*(long *)(param_1 + 0x18),*(undefined4 *)(lVar8 + 0x18),0);
  puVar3 = PTR_DAT_057aa2e0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_03b74f84;
  plVar11 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                              (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x18),0);
  if (plVar11 == (long *)0x0) {
LAB_03b74cc4:
    plVar11 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar3 + 300);
    if (*(byte *)(*plVar11 + 300) < bVar1) goto LAB_03b74cc4;
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
      plVar11 = (long *)0x0;
    }
  }
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 == (long *)0x0) goto LAB_03b74f84;
  (**(code **)(*plVar12 + 0x1e8))
            (plVar12,plVar11,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar12 + 0x1f0));
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 == 0) goto LAB_03b74f84;
  fVar14 = *(float *)(param_1 + 0x50);
  fVar15 = *(float *)(lVar10 + 100);
  uVar7 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar10 + 0x5c) >> 0x20),
                   (float)*(undefined8 *)(param_1 + 0x48) + (float)*(undefined8 *)(lVar10 + 0x5c));
  *(undefined8 *)(lVar8 + 0x30) = uVar7;
  *(float *)(lVar8 + 0x38) = fVar14 + fVar15;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_03b74f84;
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                    (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0);
  fVar14 = (float)uVar7;
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_03b74f84;
    plVar12 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0);
    if (plVar12 == (long *)0x0) {
LAB_03b74d84:
      plVar12 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if (*(byte *)(*plVar12 + 300) < bVar1) goto LAB_03b74d84;
      if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
        plVar12 = (long *)0x0;
      }
    }
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 == (long *)0x0) goto LAB_03b74f84;
    (**(code **)(*plVar13 + 0x1e8))
              (plVar13,plVar12,*(undefined4 *)(lVar8 + 0x1c),*(undefined8 *)(*plVar13 + 0x1f0));
  }
  puVar2 = PTR_DAT_0576c200;
  if (*(int *)(lVar8 + 0x20) < 4) {
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar9 = UnityEngine_Object__op_Inequality_408e110(plVar11,0,0);
    if (((uVar9 & 1) != 0) && (3 < *(int *)(lVar8 + 0x18))) {
      if (plVar11 == (long *)0x0) goto LAB_03b74f84;
      (**(code **)(*plVar11 + 0x1d8))
                (plVar11,*(undefined4 *)(lVar8 + 0x20),*(undefined8 *)(*plVar11 + 0x1e0));
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar9 = UnityEngine_Object__op_Inequality_408e110(plVar11,0,0);
    if (((uVar9 & 1) != 0) && (*(int *)(lVar8 + 0x18) < 5)) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_03b74f84;
      uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                        (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0);
      if ((uVar9 & 1) != 0) {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (plVar12 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                        (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0),
           plVar12 == (long *)0x0)) goto LAB_03b74f84;
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if (((*(byte *)(*plVar12 + 300) < bVar1) ||
            (((*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3 ||
              (lVar10 = UnityEngine_Component__get_transform_408b444(plVar12,0), lVar10 == 0)) ||
             (UnityEngine_Transform__get_position_4092b08(lVar10,0), plVar11 == (long *)0x0)))) ||
           (fVar15 = fVar14, lVar10 = UnityEngine_Component__get_transform_408b444(plVar11,0),
           lVar10 == 0)) goto LAB_03b74f84;
        UnityEngine_Transform__get_position_4092b08(lVar10,0);
        *(float *)(lVar8 + 0x34) = (fVar14 + fVar15) * 0.5;
      }
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = UnityEngine_Object__op_Inequality_408e110(plVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if (plVar11 == (long *)0x0) goto LAB_03b74f84;
    (**(code **)(*plVar11 + 0x1e8))
              (plVar11,*(undefined4 *)(lVar8 + 0x28),*(undefined8 *)(*plVar11 + 0x1f0));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x44);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar10 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar10,lVar8,*(undefined8 *)PTR_DAT_057cacc8,0);
      puVar3 = PTR_DAT_057815e0;
      if ((bRam0000000005c28460 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0,1,0);
        FUN_012d0dc8(PTR_DAT_057d6890);
        FUN_012d0dc8(PTR_DAT_057ca968);
        FUN_012d0dc8(PTR_DAT_057f1100);
        bRam0000000005c28460 = 1;
      }
      puVar5 = PTR_DAT_057f1100;
      puVar4 = PTR_DAT_057d6890;
      puVar2 = PTR_DAT_057ca968;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      DG_Tweening_DOTween__Sequence_1eda154();
      uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar6);
      uVar7 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                        (uVar7,lVar10,*(undefined8 *)puVar4);
      lVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                        (uVar7,0,1,*(undefined8 *)puVar5);
      uVar7 = *(undefined8 *)puVar2;
      if (((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) && (*(char *)(lVar8 + 0x100) == '\0'))
      {
        *(undefined1 *)(lVar8 + 0x9c) = 1;
        return;
      }
      return;
    }
  }
LAB_03b74f84:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

