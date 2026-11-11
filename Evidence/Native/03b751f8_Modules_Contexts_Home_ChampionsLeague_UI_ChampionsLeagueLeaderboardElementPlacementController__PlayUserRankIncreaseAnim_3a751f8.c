/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$PlayUserRankIncreaseAnim
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlayUserRankIncreaseAnim (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t previousRankIndex, int32_t newRankIndex, int32_t newRankNumber, float scrollDuration, int32_t oldHatCount, int32_t newHatCount, UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$PlayUserRankIncreaseAnim
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlayUserRankIncreaseAnim
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t previousRankIndex, int32_t newRankIndex, int32_t newRankNumber, float
   scrollDuration, int32_t oldHatCount, int32_t newHatCount, UnityEngine_Vector3_o
   targetCenterPosition, const MethodInfo* method); */

ulong Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlayUserRankIncreaseAnim_3a751f8
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
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar15;
  float fVar16;
  
  puVar4 = PTR_DAT_05775418;
                    /* try { // try from 03b75208 to 03c754cf has its CatchHandler @ 03b75208
                       catch() { ... } // from try @ 03b75208 with catch @ 03b75208
                       catch() { ... } // from try @ 03b7553c with catch @ 03b75208
                       catch() { ... } // from try @ 03b75588 with catch @ 03b75208
                       catch() { ... } // from try @ 03b7559c with catch @ 03b75208
                       catch() { ... } // from try @ 03b755dc with catch @ 03b75208
                       catch() { ... } // from try @ 03b75618 with catch @ 03b75208 */
  if ((bRam0000000005c35a97 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aa2e0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_0577e308);
    FUN_012d0dc8(PTR_DAT_057efb50);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057dc7c8);
    FUN_012d0dc8(PTR_DAT_058131d8);
    FUN_012d0dc8(PTR_DAT_057f7db8);
    FUN_012d0dc8(PTR_DAT_057a2520);
    FUN_012d0dc8(PTR_DAT_057950b0);
    FUN_012d0dc8(PTR_DAT_05775418);
    FUN_012d0dc8(PTR_DAT_05773970);
    FUN_012d0dc8(PTR_DAT_0575f2d0);
    bRam0000000005c35a97 = 1;
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
        puVar14 = (undefined8 *)PTR_DAT_05773970;
      }
      else {
        *(int *)(lVar6 + 0x2c) = param_6;
        puVar5 = PTR_DAT_057efb50;
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
                      (lVar7,*(undefined8 *)PTR_DAT_0577e308);
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
                lVar7 = *(long *)PTR_DAT_057aa2e0;
                bVar2 = *(byte *)(lVar7 + 300);
                if (*(byte *)(*plVar8 + 300) < bVar2) {
                  plVar12 = (long *)0x0;
                }
                else {
                    /* try { // try from 03b754d0 to 03c754d7 has its CatchHandler @ 03b755a8 */
                  plVar12 = plVar8;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar7) {
                    plVar12 = (long *)0x0;
                  }
                }
                *(long **)(lVar6 + 0x10) = plVar12;
                if (*(byte *)(*plVar8 + 300) < bVar2) {
                    /* try { // try from 03b754f4 to 03c7553b has its CatchHandler @ 03b755ac */
                  plVar8 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar7) {
                  plVar8 = (long *)0x0;
                }
              }
              puVar5 = PTR_DAT_0576c200;
              plVar12 = (long *)(lVar6 + 0x10);
              FUN_012d0d74(plVar12,plVar8);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar10 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    /* try { // try from 03b7553c to 03c7556f has its CatchHandler @ 03b75208 */
              lVar7 = *plVar12;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar5);
              }
              uVar11 = UnityEngine_Object__op_Implicit_4081098(lVar7,0);
              if ((uVar11 & 1) == 0) {
                return uVar11;
              }
              plVar12 = (long *)*plVar12;
              if (plVar12 != (long *)0x0) {
                    /* try { // try from 03b75570 to 03c75573 has its CatchHandler @ 03b755a0 */
                    /* try { // try from 03b75574 to 03c75587 has its CatchHandler @ 03b755a4 */
                (**(code **)(*plVar12 + 0x1d8))
                          (plVar12,*(int *)(lVar6 + 0x2c) + 1,*(undefined8 *)(*plVar12 + 0x1e0));
                plVar8 = *(long **)(lVar6 + 0x10);
                if (plVar8 != (long *)0x0) {
                    /* try { // try from 03b75588 to 03c75597 has its CatchHandler @ 03b75208 */
                  (**(code **)(*plVar8 + 0x1e8))
                            (plVar8,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)(*plVar8 + 0x1f0));
                    /* try { // try from 03b75598 to 03c7559b has its CatchHandler @ 03b7559c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b75598 with catch @ 03b7559c
                       try { // try from 03b7559c to 03c755c3 has its CatchHandler @ 03b75208 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b75570 with catch @ 03b755a0
                        */
                  Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__ExtractUserView_3a757a0
                            (param_5,*(undefined8 *)(lVar6 + 0x10));
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b75574 with catch @ 03b755a4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b754d0 with catch @ 03b755a8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b754f4 with catch @ 03b755ac
                        */
                  uVar13 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__ExtractUserViewTween_3a75854
                                     (param_2,param_3,param_4,param_5,*(undefined8 *)(lVar6 + 0x10))
                  ;
                    /* try { // try from 03b755c4 to 03c755db has its CatchHandler @ 03b75610 */
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar13,0);
                  puVar4 = PTR_DAT_057606c8;
                  lVar7 = *(long *)(param_5 + 0x30);
                  if ((lVar7 != 0) && (*(long *)(param_5 + 0x18) != 0)) {
                    /* try { // try from 03b755dc to 03c755ff has its CatchHandler @ 03b75208 */
                    fVar16 = *(float *)(lVar7 + 0x54) * (float)*(int *)(lVar6 + 0x28);
                    fVar3 = *(float *)(lVar7 + 0x58);
                    /* try { // try from 03b75600 to 03c7560f has its CatchHandler @ 03b75610 */
                    if (fVar16 <= *(float *)(lVar7 + 0x58)) {
                      fVar3 = fVar16;
                    }
                    uVar13 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_40064c8
                                       (fVar3,*(long *)(param_5 + 0x18),
                                        *(undefined4 *)(lVar6 + 0x30),0);
                    /* catch() { ... } // from try @ 03b755c4 with catch @ 03b75610
                       catch() { ... } // from try @ 03b75600 with catch @ 03b75610 */
                    /* try { // try from 03b75614 to 03c75617 has its CatchHandler @ 03b75620 */
                    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar13,0);
                    /* try { // try from 03b75618 to 03c75623 has its CatchHandler @ 03b75208 */
                    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b75614 with catch @ 03b75620
                        */
                    if (lVar7 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar7,lVar6,*(undefined8 *)PTR_DAT_057dc7c8,0);
                      DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar10,lVar7,0);
                      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                      if (lVar7 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar7,lVar6,*(undefined8 *)PTR_DAT_058131d8,0);
                        DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar10,lVar7,0);
                        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                        if (lVar7 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar7,lVar6,*(undefined8 *)PTR_DAT_057f7db8,0);
                          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078
                                    (uVar10,lVar7,0);
                          uVar13 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlugUserViewTween_3a759c0
                                             (param_5,*(undefined8 *)(lVar6 + 0x10),
                                              *(undefined4 *)(lVar6 + 0x30));
                          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar13,0);
                          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                          if (lVar7 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar7,lVar6,*(undefined8 *)PTR_DAT_057a2520,0);
                            DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078
                                      (uVar10,lVar7,0);
                            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                            if (lVar7 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar7,lVar6,*(undefined8 *)PTR_DAT_057950b0,0);
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
          }
          goto LAB_03b75794;
        }
        iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
        puVar14 = (undefined8 *)PTR_DAT_0575f2d0;
      }
      if (iVar1 == 0) {
        thunk_FUN_0130472c();
      }
      puVar4 = PTR_DAT_05807f60;
      uVar9 = *puVar14;
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
            puVar14 = (undefined8 *)(lVar6 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_04178e0c;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0578cb58,3);
LAB_04178e0c:
                    /* WARNING: Could not recover jumptable at 0x04178e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)*puVar14)(plVar8,0,uVar9,puVar14[1]);
      return uVar10;
    }
  }
LAB_03b75794:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

