/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$StartRankUpAnimationCall
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__StartRankUpAnimationCall (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, int32_t newRankNumber, int32_t previousRankNumber, int32_t oldHatCount, int32_t newHatCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$StartRankUpAnimationCall
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__StartRankUpAnimationCall
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this, int32_t newRankNumber, int32_t previousRankNumber, int32_t oldHatCount, int32_t
   newHatCount, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__StartRankUpAnimationCall_38cacd8
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
  
                    /* catch() { ... } // from try @ 039cabdc with catch @ 039cacd8
                       catch() { ... } // from try @ 039cac18 with catch @ 039cacd8
                       catch() { ... } // from try @ 039cac44 with catch @ 039cacd8
                       catch() { ... } // from try @ 039cacc8 with catch @ 039cacd8 */
  puVar3 = PTR_DAT_057b4560;
                    /* try { // try from 039cacdc to 03acacdf has its CatchHandler @ 039cace8 */
                    /* try { // try from 039cace0 to 03acaceb has its CatchHandler @ 039caa60 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039cacdc with catch @ 039cace8
                        */
                    /* catch() { ... } // from try @ 039cada4 with catch @ 039cacec
                       catch() { ... } // from try @ 039cadf4 with catch @ 039cacec
                       catch() { ... } // from try @ 039cae20 with catch @ 039cacec
                       catch() { ... } // from try @ 039caea4 with catch @ 039cacec */
  if ((bRam0000000005c34b66 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f93b0);
    FUN_012d0dc8(PTR_DAT_0576c200);
                    /* try { // try from 039cad2c to 03acad2f has its CatchHandler @ 039cadbc */
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
                    /* try { // try from 039cad58 to 03acad67 has its CatchHandler @ 039cadc0 */
    FUN_012d0dc8(PTR_DAT_05813140);
    FUN_012d0dc8(PTR_DAT_057b4560);
    bRam0000000005c34b66 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar8 == 0) goto LAB_039cb15c;
  System_Object___ctor_23dfe5c(lVar8,0);
                    /* try { // try from 039cad8c to 03acada3 has its CatchHandler @ 039cadc4 */
  *(long *)(lVar8 + 0x10) = param_1;
  FUN_012d0d74((long *)(lVar8 + 0x10),param_1);
  *(int *)(lVar8 + 0x20) = param_2;
  *(int *)(lVar8 + 0x24) = param_3;
                    /* try { // try from 039cada4 to 03acaddb has its CatchHandler @ 039cacec */
  *(undefined4 *)(lVar8 + 0x28) = param_4;
  *(undefined4 *)(lVar8 + 0x2c) = param_5;
  if (param_3 <= param_2) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_039cb15c;
  uVar6 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetIndexEquivalentOfRank_38caa14
                    (*(long *)(param_1 + 0x28),param_3);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cad2c with catch @ 039cadbc
                        */
  *(undefined4 *)(lVar8 + 0x18) = uVar6;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cad58 with catch @ 039cadc0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039cad8c with catch @ 039cadc4
                        */
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_039cb15c;
  uVar6 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetIndexEquivalentOfRank_38caa14
                    (*(long *)(param_1 + 0x28),*(undefined4 *)(lVar8 + 0x20));
  *(undefined4 *)(lVar8 + 0x1c) = uVar6;
                    /* try { // try from 039caddc to 03acadf3 has its CatchHandler @ 039cae9c */
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_039cb15c;
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                    (*(long *)(param_1 + 0x20),uVar6,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_039cb15c;
                    /* try { // try from 039cadf4 to 03acae07 has its CatchHandler @ 039cacec */
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__HasElementAtIndex_4007400
                    (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x18),0);
  puVar3 = PTR_DAT_05814830;
  if ((uVar9 & 1) == 0) {
    return;
  }
                    /* try { // try from 039cae08 to 03acae1f has its CatchHandler @ 039cae9c */
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
                    /* try { // try from 039cae20 to 03acae8b has its CatchHandler @ 039cacec */
    thunk_FUN_0130472c();
  }
  lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar3);
  if (lVar10 == 0) goto LAB_039cb15c;
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar10,0);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__SetUserToIndex_38cab2c
                (*(long *)(param_1 + 0x28),*(undefined4 *)(lVar8 + 0x18)),
     *(long *)(param_1 + 0x28) == 0)) goto LAB_039cb15c;
  Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateAllViewElementRanks_38cb168
            ();
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_039cb15c;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
            (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_039cb15c;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_400aeec
            (*(long *)(param_1 + 0x18),*(undefined4 *)(lVar8 + 0x18),0);
  puVar3 = PTR_DAT_057f93b0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_039cb15c;
                    /* try { // try from 039cae8c to 03acae9b has its CatchHandler @ 039cae9c */
  plVar11 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                              (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x18),0);
                    /* catch() { ... } // from try @ 039caddc with catch @ 039cae9c
                       catch() { ... } // from try @ 039cae08 with catch @ 039cae9c
                       catch() { ... } // from try @ 039cae8c with catch @ 039cae9c */
  if (plVar11 == (long *)0x0) {
LAB_039caeb8:
    plVar11 = (long *)0x0;
  }
  else {
                    /* try { // try from 039caea0 to 03acaea3 has its CatchHandler @ 039caeac */
                    /* try { // try from 039caea4 to 03acaeaf has its CatchHandler @ 039cacec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039caea0 with catch @ 039caeac
                        */
    bVar1 = *(byte *)(*(long *)puVar3 + 300);
                    /* catch() { ... } // from try @ 039caf5c with catch @ 039caeb0
                       catch() { ... } // from try @ 039caf9c with catch @ 039caeb0
                       catch() { ... } // from try @ 039cafd4 with catch @ 039caeb0
                       catch() { ... } // from try @ 039cb000 with catch @ 039caeb0
                       catch() { ... } // from try @ 039cb084 with catch @ 039caeb0 */
    if (*(byte *)(*plVar11 + 300) < bVar1) goto LAB_039caeb8;
                    /* try { // try from 039caedc to 03acaf5b has its CatchHandler @ 039caf6c */
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
      plVar11 = (long *)0x0;
    }
  }
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 == (long *)0x0) goto LAB_039cb15c;
  (**(code **)(*plVar12 + 0x1e8))
            (plVar12,plVar11,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar12 + 0x1f0));
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 == 0) goto LAB_039cb15c;
  fVar14 = *(float *)(param_1 + 0x50);
  fVar15 = *(float *)(lVar10 + 100);
  uVar7 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar10 + 0x5c) >> 0x20),
                   (float)*(undefined8 *)(param_1 + 0x48) + (float)*(undefined8 *)(lVar10 + 0x5c));
  *(undefined8 *)(lVar8 + 0x30) = uVar7;
  *(float *)(lVar8 + 0x38) = fVar14 + fVar15;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_039cb15c;
  uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                    (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0);
  fVar14 = (float)uVar7;
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_039cb15c;
    plVar12 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0);
                    /* try { // try from 039caf5c to 03acaf83 has its CatchHandler @ 039caeb0 */
    if (plVar12 == (long *)0x0) {
LAB_039caf78:
      plVar12 = (long *)0x0;
    }
    else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039caedc with catch @ 039caf6c
                        */
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if (*(byte *)(*plVar12 + 300) < bVar1) goto LAB_039caf78;
                    /* try { // try from 039caf84 to 03acaf9b has its CatchHandler @ 039cb07c */
      if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
        plVar12 = (long *)0x0;
      }
    }
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 == (long *)0x0) goto LAB_039cb15c;
                    /* try { // try from 039caf9c to 03acafbb has its CatchHandler @ 039caeb0 */
    (**(code **)(*plVar13 + 0x1e8))
              (plVar13,plVar12,*(undefined4 *)(lVar8 + 0x1c),*(undefined8 *)(*plVar13 + 0x1f0));
  }
  puVar2 = PTR_DAT_0576c200;
                    /* try { // try from 039cafbc to 03acafd3 has its CatchHandler @ 039cb07c */
  if (*(int *)(lVar8 + 0x20) < 4) {
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
                    /* try { // try from 039cafd4 to 03acafe7 has its CatchHandler @ 039caeb0 */
    uVar9 = UnityEngine_Object__op_Inequality_408e110(plVar11,0,0);
                    /* try { // try from 039cafe8 to 03acafff has its CatchHandler @ 039cb07c */
    if ((((uVar9 & 1) != 0) && (plVar11 == (long *)0x0)) && (3 < *(int *)(lVar8 + 0x18)))
    goto LAB_039cb15c;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 039cb000 to 03acb06b has its CatchHandler @ 039caeb0 */
      thunk_FUN_0130472c();
    }
    uVar9 = UnityEngine_Object__op_Inequality_408e110(plVar11,0,0);
    if (((uVar9 & 1) != 0) && (*(int *)(lVar8 + 0x18) < 5)) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_039cb15c;
      uVar9 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                        (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0);
      if ((uVar9 & 1) != 0) {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (plVar12 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                        (*(long *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x1c),0),
           plVar12 == (long *)0x0)) goto LAB_039cb15c;
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
                    /* try { // try from 039cb06c to 03acb07b has its CatchHandler @ 039cb07c */
                    /* catch() { ... } // from try @ 039caf84 with catch @ 039cb07c
                       catch() { ... } // from try @ 039cafbc with catch @ 039cb07c
                       catch() { ... } // from try @ 039cafe8 with catch @ 039cb07c
                       catch() { ... } // from try @ 039cb06c with catch @ 039cb07c */
                    /* try { // try from 039cb080 to 03acb083 has its CatchHandler @ 039cb08c */
                    /* try { // try from 039cb084 to 03acb08f has its CatchHandler @ 039caeb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039cb080 with catch @ 039cb08c
                        */
        if ((*(byte *)(*plVar12 + 300) < bVar1) ||
           ((((*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3 ||
              (lVar10 = UnityEngine_Component__get_transform_408b444(plVar12,0), lVar10 == 0)) ||
             (UnityEngine_Transform__get_position_4092b08(lVar10,0), plVar11 == (long *)0x0)) ||
            (fVar15 = fVar14, lVar10 = UnityEngine_Component__get_transform_408b444(plVar11,0),
            lVar10 == 0)))) goto LAB_039cb15c;
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
    if (plVar11 == (long *)0x0) goto LAB_039cb15c;
    Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__SetHatCountForRankUpAnim_38cb2bc
              (plVar11,*(undefined4 *)(lVar8 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x44);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
    if (lVar10 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar10,lVar8,*(undefined8 *)PTR_DAT_05813140,0);
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
LAB_039cb15c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

