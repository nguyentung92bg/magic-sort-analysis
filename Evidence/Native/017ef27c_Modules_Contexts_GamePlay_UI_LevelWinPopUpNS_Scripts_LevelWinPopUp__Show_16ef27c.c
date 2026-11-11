/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUp$$Show
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__Show (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUp$$Show
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__Show
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__Show_16ef27c
               (long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  if ((bRam0000000005c24b4a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c21e0);
    FUN_012d0dc8(PTR_DAT_057f6990);
    FUN_012d0dc8(PTR_DAT_057a5778);
    FUN_012d0dc8(PTR_DAT_057fae88);
    FUN_012d0dc8(PTR_DAT_057dc3f0);
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0580d478);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580fa90);
    bRam0000000005c24b4a = 1;
  }
  if (param_2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar18 = *(long *)PTR_DAT_0580fa90;
    bVar2 = *(byte *)(lVar18 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar2 - 1) * 8) != lVar18)) {
LAB_017ef378:
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    *(long **)(param_1 + 0x70) = param_2;
    if ((*(byte *)(*param_2 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar2 - 1) * 8) != lVar18)) goto LAB_017ef378;
  }
  FUN_012d0d74(param_1 + 0x70,param_2);
  lVar18 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar18 == 0) goto LAB_017ef880;
  UnityEngine_GameObject__SetActive_408e318(lVar18,1,0);
  uVar7 = Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__get_IsDaily_16ef250
                    (param_1);
  if (((uVar7 & 1) == 0) &&
     (uVar7 = Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__ShouldShow2XRewarded_16ef884
                        (), (uVar7 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
    FUN_012d0d74((undefined8 *)(param_1 + 0x68));
    lVar18 = *(long *)(param_1 + 0x58);
  }
  else {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x58);
    FUN_012d0d74((undefined8 *)(param_1 + 0x68));
    lVar18 = *(long *)(param_1 + 0x60);
  }
  if (lVar18 == 0) goto LAB_017ef880;
  Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Hide_16ef900();
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_017ef880;
  Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Show_16ef960
            (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  uVar7 = Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__get_IsDaily_16ef250
                    (param_1);
  puVar4 = PTR_DAT_0576aae0;
  if ((uVar7 & 1) == 0) {
    if ((((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
         (lVar18 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar18 == 0)) ||
        (lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar18,*(undefined8 *)PTR_DAT_0580d478), lVar18 == 0)) ||
       (*(long *)(lVar18 + 0x20) == 0)) goto LAB_017ef880;
    uVar7 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakStateService__ShouldShowTowerWinStreakBanner_32e4b20
                      (*(long *)(lVar18 + 0x20),0);
    if (((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
        (lVar18 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar18 == 0)) ||
       ((lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar18,*(undefined8 *)PTR_DAT_057f6990), lVar18 == 0 ||
        (*(long *)(lVar18 + 0x20) == 0)))) goto LAB_017ef880;
    uVar8 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakStateService__ShouldShowBroomStreakBanner_3fc018c
                      (*(long *)(lVar18 + 0x20),0);
    if (((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
        (lVar18 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar18 == 0)) ||
       (lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar18,*(undefined8 *)PTR_DAT_058030e0), lVar18 == 0))
    goto LAB_017ef880;
    uVar9 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowBanner_411ff4c
                      (lVar18,0);
    if ((((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
         (lVar18 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar18 == 0)) ||
        (lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar18,*(undefined8 *)PTR_DAT_057dc3f0), lVar18 == 0)) ||
       (*(long *)(lVar18 + 0x18) == 0)) goto LAB_017ef880;
    uVar10 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeStateService__ShouldShowBanner_3cff798
                       (*(long *)(lVar18 + 0x18),0);
    if (((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
        (lVar18 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar18 == 0)) ||
       ((lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar18,*(undefined8 *)PTR_DAT_057a5778), lVar18 == 0 ||
        (*(long *)(lVar18 + 0x20) == 0)))) goto LAB_017ef880;
    uVar11 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceStateService__ShouldShowJetpackRaceBanner_3b1e664
                       (*(long *)(lVar18 + 0x20),0);
    if (((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
        (lVar18 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar18 == 0)) ||
       ((lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar18,*(undefined8 *)PTR_DAT_057fae88), lVar18 == 0 ||
        (*(long *)(lVar18 + 0x20) == 0)))) goto LAB_017ef880;
    uVar12 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageStateService__ShouldShowJetpackRaceWithStageBanner_3a8d208
                       (*(long *)(lVar18 + 0x20),0);
    if ((((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
         (lVar18 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar18 == 0)) ||
        (lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar18,*(undefined8 *)PTR_DAT_057c21e0), lVar18 == 0)) ||
       (*(long *)(lVar18 + 0x20) == 0)) goto LAB_017ef880;
    uVar13 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushStateService__ShouldShowBoatRushBanner_40f5250
                       (*(long *)(lVar18 + 0x20),0);
    if ((uVar11 & 1) == 0) {
      if ((uVar12 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageBannerView__Show_3b0ba28
                  (*(long *)(param_1 + 0x40),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
                  (*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
                  (*(long *)(param_1 + 0x28),0);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Hide_3e19ec8
                  (*(long *)(param_1 + 0x18),0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Hide_3cf37e8
                  (*(long *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceBannerView__Hide_1c69628
                  (*(long *)(param_1 + 0x38),0);
        goto LAB_017ef788;
      }
      if ((uVar7 & 1) == 0) {
        if ((uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
          Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Show_3fc21e4
                    (*(long *)(param_1 + 0x30),0);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
          Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
                    (*(long *)(param_1 + 0x28),0);
          goto LAB_017ef748;
        }
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_017ef880;
        if ((uVar9 & 1) == 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Hide_3e19ec8
                    (*(long *)(param_1 + 0x18),0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_017ef880;
          if ((uVar10 & 1) == 0) {
            Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Hide_3cf37e8
                      (*(long *)(param_1 + 0x20),0);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
            Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
                      (*(long *)(param_1 + 0x28),0);
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
            Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
                      (*(long *)(param_1 + 0x30),0);
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_017ef880;
            Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceBannerView__Hide_1c69628
                      (*(long *)(param_1 + 0x38),0);
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_017ef880;
            Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageBannerView__Hide_3b0cb90
                      (*(long *)(param_1 + 0x40),0);
            lVar18 = *(long *)(param_1 + 0x48);
            if (lVar18 == 0) goto LAB_017ef880;
            if ((uVar13 & 1) != 0) {
              if ((bRam0000000005c3aafc & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_05781cf0,0);
                FUN_012d0dc8(PTR_DAT_057c21e0);
                FUN_012d0dc8(PTR_DAT_0576aae0);
                FUN_012d0dc8(PTR_DAT_05790ca0);
                FUN_012d0dc8(PTR_DAT_057df5d8);
                FUN_012d0dc8(PTR_DAT_057a38c0);
                FUN_012d0dc8(PTR_DAT_058009a8);
                FUN_012d0dc8(PTR_DAT_057a4ba8);
                FUN_012d0dc8(PTR_DAT_057e68f0);
                FUN_012d0dc8(PTR_DAT_05784da0);
                FUN_012d0dc8(PTR_DAT_0576a1d0);
                bRam0000000005c3aafc = 1;
              }
              lVar14 = UnityEngine_Component__get_gameObject_408b480(lVar18,0);
              puVar4 = PTR_DAT_0576aae0;
              if (lVar14 != 0) {
                UnityEngine_GameObject__SetActive_408e318(lVar14,1,0);
                if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
                   (lVar14 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar14 != 0)) {
                  lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar14,*(undefined8 *)PTR_DAT_057c21e0);
                  plVar19 = (long *)(lVar18 + 0x50);
                  *plVar19 = lVar14;
                  FUN_012d0d74(plVar19,lVar14);
                  if ((*plVar19 != 0) &&
                     ((lVar14 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetRaceViewModel_3fd009c
                                          (*plVar19,0), lVar14 != 0 && (*plVar19 != 0)))) {
                    lVar20 = *(long *)(lVar14 + 0x50);
                    lVar15 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetLastSeenBannerViewModels_3fcf5a0
                                       (*plVar19,0);
                    puVar4 = PTR_DAT_0576a1d0;
                    if (*(long *)(lVar18 + 0x18) != 0) {
                      Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__Initialize_160dfd0
                                (*(long *)(lVar18 + 0x18),*(undefined8 *)(lVar14 + 0x18),0,0);
                      lVar16 = *(long *)puVar4;
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar16 = *(long *)puVar4;
                      }
                      puVar5 = PTR_DAT_05781cf0;
                      lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
                      if (lVar22 == 0) {
                        if (*(int *)(lVar16 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                          lVar16 = *(long *)puVar4;
                        }
                        uVar23 = **(undefined8 **)(lVar16 + 0xb8);
                        lVar22 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                        if (lVar22 == 0) goto LAB_041f6d38;
                        System_Comparison_object____ctor_14ec6c0
                                  (lVar22,uVar23,*(undefined8 *)PTR_DAT_057e68f0,0);
                        plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                        *plVar17 = lVar22;
                        FUN_012d0d74(plVar17,lVar22);
                      }
                      puVar6 = PTR_DAT_05790ca0;
                      if (lVar20 != 0) {
                        System_Collections_Generic_List_object___Sort_21fe6b8
                                  (lVar20,lVar22,*(undefined8 *)PTR_DAT_05790ca0);
                        lVar16 = *(long *)puVar4;
                        if (*(int *)(lVar16 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                          lVar16 = *(long *)puVar4;
                        }
                        lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
                        if (lVar22 == 0) {
                          if (*(int *)(lVar16 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                            lVar16 = *(long *)puVar4;
                          }
                          uVar23 = **(undefined8 **)(lVar16 + 0xb8);
                          lVar22 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                          if (lVar22 == 0) goto LAB_041f6d38;
                          System_Comparison_object____ctor_14ec6c0
                                    (lVar22,uVar23,*(undefined8 *)PTR_DAT_05784da0,0);
                          plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                          *plVar17 = lVar22;
                          FUN_012d0d74(plVar17,lVar22);
                        }
                        puVar4 = PTR_DAT_058009a8;
                        if (lVar15 != 0) {
                          uVar23 = System_Collections_Generic_List_object___Sort_21fe6b8
                                             (lVar15,lVar22,*(undefined8 *)puVar6);
                          uVar7 = Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushBannerView__ShouldPlayUnseenAnimation_40f6d3c
                                            (uVar23,lVar15,lVar20);
                          puVar5 = PTR_DAT_057a4ba8;
                          iVar1 = *(int *)(lVar20 + 0x18);
                          if (0 < iVar1) {
                            iVar21 = 0;
                            do {
                              if ((*(long *)(lVar18 + 0x20) == 0) ||
                                 (lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                     (*(long *)(lVar18 + 0x20),iVar21,
                                                      *(undefined8 *)puVar4), lVar15 == 0))
                              goto LAB_041f6d38;
                              Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushBannerUserView__Show_40f68c4
                                        ();
                              if (*(long *)(lVar18 + 0x20) == 0) goto LAB_041f6d38;
                              lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                 (*(long *)(lVar18 + 0x20),iVar21,
                                                  *(undefined8 *)puVar4);
                              uVar23 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                 (lVar20,iVar21,*(undefined8 *)puVar5);
                              if (lVar15 == 0) goto LAB_041f6d38;
                              Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushBannerUserView__SetViewModel_40f6228
                                        (lVar15,uVar23,*(undefined4 *)(lVar14 + 0x20));
                              iVar1 = *(int *)(lVar20 + 0x18);
                              iVar21 = iVar21 + 1;
                            } while (iVar21 < iVar1);
                          }
                          lVar14 = *(long *)(lVar18 + 0x20);
                          while (lVar14 != 0) {
                            if (*(int *)(lVar14 + 0x18) <= iVar1) {
                              if ((uVar7 & 1) != 0) {
                                Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushBannerView__PlayUnseenAnimation_40f6e68
                                          (lVar18);
                              }
                              if (*plVar19 != 0) {
                                uVar7 = *(ulong *)(*plVar19 + 0x10);
                                auVar24._8_8_ = 0;
                                auVar24._0_8_ = uVar7;
                                if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0(0,0);
                                }
                                if ((bRam0000000005c3914a & 1) == 0) {
                                  FUN_012d0dc8(PTR_DAT_057b6d70);
                                  auVar24 = FUN_012d0dc8(PTR_DAT_057d6e08);
                                  bRam0000000005c3914a = 1;
                                }
                                puVar4 = PTR_DAT_057d6e08;
                                if ((*(long *)(uVar7 + 0x20) != 0) &&
                                   (lVar18 = *(long *)(*(long *)(uVar7 + 0x20) + 0x18), lVar18 != 0)
                                   ) {
                                  lVar18 = *(long *)(lVar18 + 0x48);
                                  if (lVar18 != 0) {
                                    uVar23 = *(undefined8 *)(lVar18 + 0x38);
                                    *(undefined4 *)(lVar18 + 0x34) = *(undefined4 *)(lVar18 + 0x2c);
                                    auVar24 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                                    lVar14 = auVar24._0_8_;
                                    auVar3._8_8_ = 0;
                                    auVar3._0_8_ = auVar24._8_8_;
                                    auVar24 = auVar3 << 0x40;
                                    if (lVar14 == 0) goto LAB_040cbf34;
                                    System_Collections_Generic_List_object____ctor_21fc324
                                              (lVar14,uVar23,*(undefined8 *)PTR_DAT_057b6d70);
                                    *(long *)(lVar18 + 0x48) = lVar14;
                                    FUN_012d0d74((long *)(lVar18 + 0x48),lVar14);
                                  }
                                  *(undefined2 *)(uVar7 + 0x18) = 0x101;
                                  return;
                                }
LAB_040cbf34:
                    /* WARNING: Subroutine does not return */
                                FUN_012d0ef0(auVar24._0_8_,auVar24._8_8_);
                              }
                              break;
                            }
                            lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                                               (lVar14,iVar1,*(undefined8 *)puVar4);
                            if (lVar14 == 0) break;
                            Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushBannerUserView__Hide_40f68e8
                                      ();
                            iVar1 = iVar1 + 1;
                            lVar14 = *(long *)(lVar18 + 0x20);
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_041f6d38:
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            goto LAB_017ef790;
          }
          Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Show_3cf34c8();
        }
        else {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Show_3e19bcc
                    ();
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_017ef880;
          Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Hide_3cf37e8
                    (*(long *)(param_1 + 0x20),0);
        }
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
                  (*(long *)(param_1 + 0x28),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
                  (*(long *)(param_1 + 0x30),0);
      }
      else {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
                  (*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Show_359dba4
                  (*(long *)(param_1 + 0x28),0);
LAB_017ef748:
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Hide_3e19ec8
                  (*(long *)(param_1 + 0x18),0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_017ef880;
        Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Hide_3cf37e8
                  (*(long *)(param_1 + 0x20),0);
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_017ef880;
      Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceBannerView__Hide_1c69628
                (*(long *)(param_1 + 0x38),0);
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_017ef880;
      Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceBannerView__Show_1c684c0
                (*(long *)(param_1 + 0x38),0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
      Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
                (*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
      Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
                (*(long *)(param_1 + 0x30),0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_017ef880;
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Hide_3e19ec8
                (*(long *)(param_1 + 0x18),0);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_017ef880;
      Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Hide_3cf37e8
                (*(long *)(param_1 + 0x20),0);
    }
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageBannerView__Hide_3b0cb90
              (*(long *)(param_1 + 0x40),0);
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceBannerView__Hide_1c69628
              (*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageBannerView__Hide_3b0cb90
              (*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
              (*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
              (*(long *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Hide_3e19ec8
              (*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_017ef880;
    Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeBannerView__Hide_3cf37e8
              (*(long *)(param_1 + 0x20),0);
  }
LAB_017ef788:
  lVar18 = *(long *)(param_1 + 0x48);
  if (lVar18 != 0) {
LAB_017ef790:
    Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushBannerView__Dispose_40f7928(lVar18,0);
    lVar18 = UnityEngine_Component__get_gameObject_408b480(lVar18,0);
    if (lVar18 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar18,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_017ef880:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

