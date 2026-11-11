/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueLeaderboardImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueLeaderboardImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueLeaderboardImpression
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueLeaderboardImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueLeaderboardImpression_146cd44
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
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
                    /* try { // try from 0156ce40 to 0166ceff has its CatchHandler @ 0156ce40
                       catch() { ... } // from try @ 0156ce40 with catch @ 0156ce40
                       catch() { ... } // from try @ 0156cf0c with catch @ 0156ce40
                       catch() { ... } // from try @ 0156d010 with catch @ 0156ce40 */
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_05792f78);
    puVar2 = PTR_DAT_057c8a60;
    lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
      lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar17,*(undefined8 *)PTR_DAT_057c2940);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar12 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar12,*(undefined8 *)PTR_DAT_05789528,0), puVar5 = PTR_DAT_05815af0,
         puVar4 = PTR_DAT_057fcce8, puVar3 = PTR_DAT_057e4da8, puVar6 = PTR_DAT_057db748,
         puVar2 = PTR_DAT_057d6138, puVar1 = PTR_DAT_057a29c0, lVar17 != 0)) {
                    /* try { // try from 0156cf00 to 0166cf0b has its CatchHandler @ 0156cf90 */
        uVar13 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                           (lVar17,0);
                    /* try { // try from 0156cf0c to 0166cfa7 has its CatchHandler @ 0156ce40 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar4,uVar13,0);
        iStack_64 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                              (lVar17,0);
        iStack_64 = iStack_64 + 1;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar1,uVar13,0);
        uStack_70 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                              (lVar17,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar5,uVar13,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156cf00 with catch @ 0156cf90
                        */
        uStack_74 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                              (lVar17,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_74);
                    /* try { // try from 0156cfa8 to 0166cfab has its CatchHandler @ 0156d024 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar3,uVar13,0);
        puVar5 = PTR_DAT_057d3f68;
        puVar4 = PTR_DAT_057c7308;
        puVar3 = PTR_DAT_057b9a08;
        puVar2 = PTR_DAT_05771950;
        puVar1 = PTR_DAT_0575f9f0;
        if (lVar16 != 0) {
                    /* try { // try from 0156cfe8 to 0166d00f has its CatchHandler @ 0156d02c */
          uVar13 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar16,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar5,uVar13,0);
                    /* try { // try from 0156d010 to 0166d01b has its CatchHandler @ 0156ce40 */
          uStack_78 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                                (lVar17,0);
                    /* try { // try from 0156d01c to 0166d023 has its CatchHandler @ 0156d02c */
                    /* catch() { ... } // from try @ 0156cfa8 with catch @ 0156d024 */
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_78);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0156cfe8 with catch @ 0156d02c
                       catch(type#2 @ 00000000) { ... } // from try @ 0156d01c with catch @ 0156d02c
                        */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar2,uVar13,0);
          uStack_7c = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerScore_3b2d70c
                                (lVar17,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar4,uVar13,0);
          uStack_80 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderScore_3b2e9e4
                                (lVar17,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar3,uVar13,0);
          uVar13 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                             (lVar17,0);
          iVar7 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                            (lVar17,0);
          uVar14 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                             (lVar17,0);
          iVar8 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                            (lVar17,0);
          uVar15 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar16,0);
          iVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                            (lVar17,0);
          iVar10 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerScore_3b2d70c
                             (lVar17,0);
          iVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderScore_3b2e9e4
                             (lVar17,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MasterLeagueLeaderboardImpression_2dae704
                             (uVar13,(long)(iVar7 + 1),uVar14,(long)iVar8,uVar15,(long)iVar9,
                              (long)iVar10,(long)iVar11,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

