/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueJoined
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueJoined (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueJoined
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueJoined
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueJoined_146c784
               (undefined8 param_1)

{
  undefined *puVar1;
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
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0575a448);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057e5f28);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_057b9a08);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05805a88);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237d7 = 1;
  }
  uStack_64 = 0;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar13 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar13 != 0)) {
    lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar13,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar14 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar14 != 0)) {
      lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar14,*(undefined8 *)PTR_DAT_057c2940);
      puVar3 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar15 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar15 != 0)) {
        plVar16 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
        lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar15 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar15,*(undefined8 *)PTR_DAT_0575a448,0), puVar7 = PTR_DAT_05815af0,
           puVar6 = PTR_DAT_057fcce8, puVar4 = PTR_DAT_057e4da8, puVar5 = PTR_DAT_057db748,
           puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057a29c0, lVar14 != 0)) {
          uVar17 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                             (lVar14,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar6,uVar17,0);
          iStack_68 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                                (lVar14,0);
          iStack_68 = iStack_68 + 1;
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar2,uVar17,0);
          uStack_70 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                                (lVar14,0);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar7,uVar17,0);
          uStack_74 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                                (lVar14,0);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar4,uVar17,0);
          puVar2 = PTR_DAT_057d3f68;
          if (lVar13 != 0) {
            uVar17 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar13,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar2,uVar17,0);
            puVar7 = PTR_DAT_05805a88;
            puVar6 = PTR_DAT_057e5f28;
            puVar4 = PTR_DAT_057caaf0;
            puVar3 = PTR_DAT_057b9a08;
            puVar2 = PTR_DAT_057636d0;
            if (plVar16 != (long *)0x0) {
              lVar22 = *plVar16;
              uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar18 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_0156cafc;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar18 = (undefined8 *)FUN_0131971c(plVar16,*(long *)PTR_DAT_057636d0,1);
LAB_0156cafc:
              puVar1 = PTR_DAT_0575f9f0;
              uStack_78 = (*(code *)*puVar18)(plVar16,puVar18[1]);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar4,uVar17,0);
              uStack_7c = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetPreviousPromotionInfo_3b2e964
                                    (lVar14,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_7c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar7,uVar17,0);
              uStack_80 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetPlayerCountInTheLeague_3b2e97c
                                    (lVar14,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar6,uVar17,0);
              uStack_84 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderScore_3b2e9e4
                                    (lVar14,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_84);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar3,uVar17,0);
              uVar17 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetTournamentId_3b2e8c0
                                 (lVar14,0);
              iVar8 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                                (lVar14,0);
              uVar19 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetStartTimeAsUnix_3b2e934
                                 (lVar14,0);
              iVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                                (lVar14,0);
              uVar20 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar13,0);
              lVar13 = *plVar16;
              uVar23 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar2) {
                    puVar18 = (undefined8 *)(lVar13 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_0156cc74;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar18 = (undefined8 *)FUN_0131971c(plVar16,*(long *)puVar2,1);
LAB_0156cc74:
              iVar10 = (*(code *)*puVar18)(plVar16,puVar18[1]);
              uStack_64 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetPreviousPromotionInfo_3b2e964
                                    (lVar14,0);
              uVar21 = System_Int32__ToString_26c9768(&uStack_64,0);
              iVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetPlayerCountInTheLeague_3b2e97c
                                 (lVar14,0);
              iVar12 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderScore_3b2e9e4
                                 (lVar14,0);
              uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MasterLeagueJoined_2dae5b0
                                 (uVar17,(long)(iVar8 + 1),uVar19,(long)iVar9,uVar20,(long)iVar10,
                                  uVar21,(long)iVar11,(long)iVar12,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar15);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

