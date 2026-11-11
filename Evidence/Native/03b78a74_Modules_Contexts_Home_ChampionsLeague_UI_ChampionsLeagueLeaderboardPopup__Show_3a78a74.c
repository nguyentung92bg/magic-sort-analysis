/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPopup$$Show
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup__Show (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPopup$$Show
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup__Show
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup__Show_3a78a74
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  if ((bRam0000000005c35ab6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c4bf0);
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c35ab6 = 1;
  }
                    /* try { // try from 03b78ac0 to 03c78acb has its CatchHandler @ 03b78acc */
  if (param_2 != (long *)0x0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78a14 with catch @ 03b78acc
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03b78ac0 with catch @ 03b78acc
                       try { // try from 03b78acc to 03c78afb has its CatchHandler @ 03b789b8 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_057c4bf0 + 300);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78a60 with catch @ 03b78adc
                        */
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057c4bf0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
  }
                    /* try { // try from 03b78afc to 03c78b13 has its CatchHandler @ 03b78b98 */
  if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
     (lVar17 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar17 != 0)) {
                    /* try { // try from 03b78b18 to 03c78b1b has its CatchHandler @ 03b78b84 */
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_057c2940);
                    /* try { // try from 03b78b28 to 03c78b3f has its CatchHandler @ 03b78b88 */
    plVar22 = (long *)(param_1 + 0x58);
    *plVar22 = lVar17;
    FUN_012d0d74(plVar22,lVar17);
                    /* try { // try from 03b78b40 to 03c78b5b has its CatchHandler @ 03b78b8c */
    if (*plVar22 != 0) {
      Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                (*plVar22,0);
      if (*plVar22 != 0) {
        uVar13 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                           (*plVar22,0);
                    /* try { // try from 03b78b5c to 03c78b6f has its CatchHandler @ 03b789b8 */
        if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 03b78b70 to 03c78b7f has its CatchHandler @ 03b78b98 */
          Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__Prepare_3a7417c
                    (*(long *)(param_1 + 0x20),uVar13);
          if (*(long *)(param_1 + 0x28) != 0) {
            Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardEloHeaderController__Prepare_3a76cac
                      (*(long *)(param_1 + 0x28),uVar13);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78b18 with catch @ 03b78b84
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78b28 with catch @ 03b78b88
                        */
            if (*(long *)(param_1 + 0x48) != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78b40 with catch @ 03b78b8c
                        */
              Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardHeroImageView__SetEloCup_3a77064
                        (*(long *)(param_1 + 0x48),uVar13);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78afc with catch @ 03b78b98
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03b78b70 with catch @ 03b78b98
                        */
              if (*plVar22 != 0) {
                    /* try { // try from 03b78ba0 to 03c78ba3 has its CatchHandler @ 03b78c58 */
                uVar18 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetEndDate_3b2dc24
                                   (*plVar22,0);
                    /* try { // try from 03b78ba4 to 03c78bb7 has its CatchHandler @ 03b789b8 */
                if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 03b78bb8 to 03c78bcf has its CatchHandler @ 03b78c48 */
                  Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__Initialize_160dfd0
                            (*(long *)(param_1 + 0x30),uVar18,0,0);
                  if (*plVar22 != 0) {
                    uVar19 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__CanShowClaimButton_3b2da44
                                       (*plVar22,0);
                    /* try { // try from 03b78bd0 to 03c78c37 has its CatchHandler @ 03b789b8 */
                    if ((uVar19 & 1) == 0) {
                      if ((param_2 == (long *)0x0) || (*(long *)(param_1 + 0x38) == 0))
                      goto LAB_03b78c5c;
                      Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState__Show_3a77c64
                                (*(long *)(param_1 + 0x38),*(undefined1 *)((long)param_2 + 0x21));
                      if (*(long *)(param_1 + 0x40) == 0) goto LAB_03b78c5c;
                      Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState__Hide_3a73bfc
                                ();
                    }
                    else {
                      if (*(long *)(param_1 + 0x40) == 0) goto LAB_03b78c5c;
                      Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState__Show_3a7375c
                                ();
                      if (*(long *)(param_1 + 0x38) == 0) goto LAB_03b78c5c;
                      Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState__Hide_3a77e88
                                ();
                    }
                    if (cRam0000000005c230a8 == '\0') {
                      FUN_012d0dc8(PTR_DAT_057ece38);
                      cRam0000000005c230a8 = '\x01';
                    }
                    puVar2 = PTR_DAT_0576aae0;
                    /* try { // try from 03b78c38 to 03c78c47 has its CatchHandler @ 03b78c48 */
                    lVar17 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
                    if (lVar17 != 0) {
                      if ((bRam0000000005c237d8 & 1) == 0) {
                        FUN_012d0dc8(PTR_DAT_0575f9f0,0);
                        FUN_012d0dc8(PTR_DAT_057c2940);
                        FUN_012d0dc8(PTR_DAT_05792f78);
                        FUN_012d0dc8(PTR_DAT_0576aae0);
                        FUN_012d0dc8(PTR_DAT_057c8a60);
                        FUN_012d0dc8(PTR_DAT_057db748);
                        FUN_012d0dc8(PTR_DAT_057d6138);
                        FUN_012d0dc8(PTR_DAT_05789528);
                        FUN_012d0dc8(PTR_DAT_057e4da8);
                        FUN_012d0dc8(PTR_DAT_05815af0);
                        FUN_012d0dc8(PTR_DAT_057fcce8);
                        FUN_012d0dc8(PTR_DAT_05771950);
                        FUN_012d0dc8(PTR_DAT_057a29c0);
                        FUN_012d0dc8(PTR_DAT_057c7308);
                        FUN_012d0dc8(PTR_DAT_057b9a08);
                        FUN_012d0dc8(PTR_DAT_057d3f68);
                        bRam0000000005c237d8 = 1;
                      }
                      lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
                      if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
                        lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                           (lVar20,*(undefined8 *)PTR_DAT_05792f78);
                        puVar3 = PTR_DAT_057c8a60;
                        lVar21 = **(long **)(*(long *)puVar2 + 0xb8);
                        if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) {
                          lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                             (lVar21,*(undefined8 *)PTR_DAT_057c2940);
                          lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if ((lVar14 != 0) &&
                             (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                                        (lVar14,*(undefined8 *)PTR_DAT_05789528,0),
                             puVar6 = PTR_DAT_05815af0, puVar5 = PTR_DAT_057fcce8,
                             puVar4 = PTR_DAT_057e4da8, puVar7 = PTR_DAT_057db748,
                             puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057a29c0, lVar21 != 0)) {
                            uVar18 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                                               (lVar21,0);
                            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                      (lVar14,*(undefined8 *)puVar5,uVar18,0);
                            iStack_64 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                                                  (lVar21,0);
                            iStack_64 = iStack_64 + 1;
                            uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_64);
                            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                      (lVar14,*(undefined8 *)puVar2,uVar18,0);
                            uStack_70 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                                                  (lVar21,0);
                            uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
                            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                      (lVar14,*(undefined8 *)puVar6,uVar18,0);
                            uStack_74 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                                                  (lVar21,0);
                            uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_74);
                            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                      (lVar14,*(undefined8 *)puVar4,uVar18,0);
                            puVar6 = PTR_DAT_057d3f68;
                            puVar5 = PTR_DAT_057c7308;
                            puVar4 = PTR_DAT_057b9a08;
                            puVar3 = PTR_DAT_05771950;
                            puVar2 = PTR_DAT_0575f9f0;
                            if (lVar20 != 0) {
                              uVar18 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                                 (lVar20,0);
                              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                        (lVar14,*(undefined8 *)puVar6,uVar18,0);
                              uStack_78 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                                                    (lVar21,0);
                              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_78);
                              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                        (lVar14,*(undefined8 *)puVar3,uVar18,0);
                              uStack_7c = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerScore_3b2d70c
                                                    (lVar21,0);
                              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_7c);
                              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                        (lVar14,*(undefined8 *)puVar5,uVar18,0);
                              uStack_80 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderScore_3b2e9e4
                                                    (lVar21,0);
                              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_80);
                              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                        (lVar14,*(undefined8 *)puVar4,uVar18,0);
                              uVar18 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                                                 (lVar21,0);
                              iVar8 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                                                (lVar21,0);
                              uVar15 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                                                 (lVar21,0);
                              iVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                                                (lVar21,0);
                              uVar16 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                                 (lVar20,0);
                              iVar10 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                                                 (lVar21,0);
                              iVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerScore_3b2d70c
                                                 (lVar21,0);
                              iVar12 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderScore_3b2e9e4
                                                 (lVar21,0);
                              uVar18 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MasterLeagueLeaderboardImpression_2dae704
                                                 (uVar18,(long)(iVar8 + 1),uVar15,(long)iVar9,uVar16
                                                  ,(long)iVar10,(long)iVar11,(long)iVar12,0);
                              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                thunk_FUN_0130472c(*(long *)puVar2);
                              }
                              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar18,0);
                              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                        (lVar17,lVar14);
                              return;
                            }
                          }
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
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
LAB_03b78c5c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

