/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueStartEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueStartEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueStartEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueStartEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueStartEvent_146c0a0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057f2760);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237d5 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_05792f78);
    puVar3 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar13,*(undefined8 *)PTR_DAT_057c2940);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar8 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar8,*(undefined8 *)PTR_DAT_057f2760,0), puVar5 = PTR_DAT_05815af0,
         puVar4 = PTR_DAT_057fcce8, puVar2 = PTR_DAT_057e4da8, puVar3 = PTR_DAT_057db748,
         puVar1 = PTR_DAT_057d6138, lVar13 != 0)) {
        uVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                          (lVar13,0);
                    /* try { // try from 0156c23c to 0166c30f has its CatchHandler @ 0156c23c
                       catch() { ... } // from try @ 0156c23c with catch @ 0156c23c
                       catch() { ... } // from try @ 0156c348 with catch @ 0156c23c
                       catch() { ... } // from try @ 0156c450 with catch @ 0156c23c */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar4,uVar9,0);
        uStack_58 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                              (lVar13,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar5,uVar9,0);
        uStack_5c = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                              (lVar13,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_5c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar2,uVar9,0);
        puVar4 = PTR_DAT_057d3f68;
        puVar2 = PTR_DAT_057a29c0;
        puVar1 = PTR_DAT_0575f9f0;
        if (lVar12 != 0) {
          uVar9 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                            (lVar12,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar4,uVar9,0);
          iStack_60 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                                (lVar13,0);
          iStack_60 = iStack_60 + 1;
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_60);
                    /* try { // try from 0156c310 to 0166c31f has its CatchHandler @ 0156c3d0 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar2,uVar9,0);
                    /* try { // try from 0156c324 to 0166c333 has its CatchHandler @ 0156c3cc */
          uVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                            (lVar13,0);
          uVar10 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                             (lVar13,0);
                    /* try { // try from 0156c340 to 0166c347 has its CatchHandler @ 0156c3d4 */
                    /* try { // try from 0156c348 to 0166c3eb has its CatchHandler @ 0156c23c */
          iVar6 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                            (lVar13,0);
          uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar12,0);
          iVar7 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                            (lVar13,0);
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MasterLeagueStart_2dba41c
                            (uVar9,uVar10,(long)iVar6,uVar11,(long)(iVar7 + 1),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156c324 with catch @ 0156c3cc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156c310 with catch @ 0156c3d0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156c340 with catch @ 0156c3d4
                        */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

