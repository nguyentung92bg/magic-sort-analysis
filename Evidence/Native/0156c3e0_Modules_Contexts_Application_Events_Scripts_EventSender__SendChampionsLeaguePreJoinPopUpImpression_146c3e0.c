/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeaguePreJoinPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeaguePreJoinPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeaguePreJoinPopUpImpression
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeaguePreJoinPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeaguePreJoinPopUpImpression_146c3e0
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
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_58;
  int iStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0156c3ec to 0166c3ef has its CatchHandler @ 0156c464 */
  if ((bRam0000000005c237d6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0156c428 to 0166c44f has its CatchHandler @ 0156c46c */
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 0156c450 to 0166c45b has its CatchHandler @ 0156c23c */
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* try { // try from 0156c45c to 0166c463 has its CatchHandler @ 0156c46c */
                    /* catch() { ... } // from try @ 0156c3ec with catch @ 0156c464 */
    FUN_012d0dc8(PTR_DAT_057d6138);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0156c428 with catch @ 0156c46c
                       catch(type#2 @ 00000000) { ... } // from try @ 0156c45c with catch @ 0156c46c
                        */
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0576f398);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057f5730);
    bRam0000000005c237d6 = 1;
  }
  lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_05792f78);
    puVar2 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar15,*(undefined8 *)PTR_DAT_057c2940);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar10 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar10,*(undefined8 *)PTR_DAT_0576f398,0), puVar6 = PTR_DAT_05815af0,
         puVar5 = PTR_DAT_057fcce8, puVar4 = PTR_DAT_057e4da8, puVar3 = PTR_DAT_057db748,
         puVar2 = PTR_DAT_057d6138, puVar1 = PTR_DAT_057a29c0, lVar15 != 0)) {
        uVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar5,uVar11,0);
        iStack_54 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                              (lVar15,0);
        iStack_54 = iStack_54 + 1;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar1,uVar11,0);
        uStack_68 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                              (lVar15,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar6,uVar11,0);
        uStack_58 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                              (lVar15,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar11,0);
        puVar4 = PTR_DAT_057f5730;
        puVar2 = PTR_DAT_057d3f68;
        puVar1 = PTR_DAT_0575f9f0;
        if (lVar14 != 0) {
          uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar14,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar2,uVar11,0);
          uStack_6c = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetPreJoinScore_3b2d91c
                                (lVar15,0);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar4,uVar11,0);
          uVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                             (lVar15,0);
          iVar7 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                            (lVar15,0);
          uVar12 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                             (lVar15,0);
          iVar8 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                            (lVar15,0);
          uVar13 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar14,0);
          iVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetPreJoinScore_3b2d91c
                            (lVar15,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MasterLeaguePrejoinPopupImpression_2dba504
                             (uVar11,(long)(iVar7 + 1),uVar12,(long)iVar8,uVar13,(long)iVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

