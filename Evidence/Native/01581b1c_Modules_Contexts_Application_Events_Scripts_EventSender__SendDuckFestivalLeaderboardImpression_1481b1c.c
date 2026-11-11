/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalLeaderboardImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalLeaderboardImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalLeaderboardImpression
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalLeaderboardImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalLeaderboardImpression_1481b1c
               (undefined8 param_1,undefined4 param_2)

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
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  int *piVar32;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2383d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057dc120);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05758ae0);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_058133c8);
    FUN_012d0dc8(PTR_DAT_057dc2f8);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_05771950);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057bc700);
    FUN_012d0dc8(PTR_DAT_057b9a08);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2383d = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar21 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar21 != 0)) {
    lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar21,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar22 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar22 != 0)) {
      plVar23 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar22,*(undefined8 *)PTR_DAT_057a1e60);
      puVar4 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar22 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar22 != 0)) {
        lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar22,*(undefined8 *)PTR_DAT_0577fc18);
        lVar24 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar4 = PTR_DAT_057dc120;
        puVar1 = PTR_DAT_057dbe68;
        if (lVar24 != 0) {
          Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar24,*(undefined8 *)PTR_DAT_05758ae0,0);
          uStack_78 = *(undefined8 *)puVar4;
          uStack_70 = 0xffffffffffffffff;
          uStack_68 = param_2;
          uVar25 = System_Enum__ToString_23a4eac(&uStack_78,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar24,*(undefined8 *)puVar1,uVar25,0);
          puVar1 = PTR_DAT_057d3f68;
          if (lVar21 != 0) {
            uVar25 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar21,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar24,*(undefined8 *)puVar1,uVar25,0);
            puVar4 = PTR_DAT_057db748;
            puVar1 = PTR_DAT_057caaf0;
            if (plVar23 != (long *)0x0) {
              lVar30 = *plVar23;
              uVar31 = (ulong)*(ushort *)(lVar30 + 0x12a);
              if (uVar31 != 0) {
                piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar26 = (undefined8 *)(lVar30 + (long)(*piVar32 + 1) * 0x10 + 0x138);
                    goto LAB_01581e20;
                  }
                  uVar31 = uVar31 - 1;
                  piVar32 = piVar32 + 4;
                } while (uVar31 != 0);
              }
              puVar26 = (undefined8 *)FUN_0131971c(plVar23,*(long *)PTR_DAT_057636d0,1);
LAB_01581e20:
              uStack_7c = (*(code *)*puVar26)(plVar23,puVar26[1]);
              uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar24,*(undefined8 *)puVar1,uVar25,0);
              puVar7 = PTR_DAT_05815af0;
              puVar6 = PTR_DAT_057eaf90;
              puVar5 = PTR_DAT_057e4da8;
              puVar3 = PTR_DAT_057bc700;
              puVar2 = PTR_DAT_057aea40;
              puVar1 = PTR_DAT_05795788;
              if (lVar22 != 0) {
                uStack_80 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)puVar2,uVar25,0);
                uStack_84 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_84);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)puVar7,uVar25,0);
                uStack_88 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)puVar5,uVar25,0);
                uStack_8c = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRealUserCount_1b985dc
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_8c);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)puVar6,uVar25,0);
                uStack_90 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)puVar1,uVar25,0);
                iVar8 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                  (lVar22,0);
                iStack_94 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                      (lVar22,0);
                iStack_94 = iVar8 - iStack_94;
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_94);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)puVar3,uVar25,0);
                uVar25 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentId_1b98890
                                   (lVar22,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_057fcce8,uVar25,0);
                uStack_98 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerRank_1b9690c
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_98);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_05771950,uVar25,0);
                uStack_9c = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetProgress_1b984d4
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_9c);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_057dc2f8,uVar25,0);
                uStack_a0 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_058133c8,uVar25,0);
                uStack_a4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderScore_1b988cc
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a4);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_057b9a08,uVar25,0);
                uStack_a8 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetElo_1b98970
                                      (lVar22,0);
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a8);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_057a29c0,uVar25,0);
                uVar25 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderboardId_1b98a68
                                   (lVar22,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar24,*(undefined8 *)PTR_DAT_05803ca0,uVar25,0);
                uStack_c0 = *(undefined8 *)PTR_DAT_057dc120;
                uStack_b8 = 0xffffffffffffffff;
                uStack_b0 = param_2;
                uVar25 = System_Enum__ToString_23a4eac(&uStack_c0,0);
                uVar27 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                   (lVar21,0);
                lVar21 = *plVar23;
                uVar31 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar31 != 0) {
                  piVar32 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_057636d0) {
                      puVar26 = (undefined8 *)(lVar21 + (long)(*piVar32 + 1) * 0x10 + 0x138);
                      goto LAB_015821ec;
                    }
                    uVar31 = uVar31 - 1;
                    piVar32 = piVar32 + 4;
                  } while (uVar31 != 0);
                }
                puVar26 = (undefined8 *)FUN_0131971c(plVar23,*(long *)PTR_DAT_057636d0,1);
LAB_015821ec:
                iVar8 = (*(code *)*puVar26)(plVar23,puVar26[1]);
                iVar9 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                  (lVar22,0);
                iVar10 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                                   (lVar22,0);
                iVar11 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                                   (lVar22,0);
                iVar12 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRealUserCount_1b985dc
                                   (lVar22,0);
                iVar13 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                   (lVar22,0);
                iVar14 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                   (lVar22,0);
                iVar15 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                   (lVar22,0);
                uVar28 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentId_1b98890
                                   (lVar22,0);
                iVar16 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerRank_1b9690c
                                   (lVar22,0);
                iVar17 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetProgress_1b984d4
                                   (lVar22,0);
                iVar18 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                                   (lVar22,0);
                iVar19 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderScore_1b988cc
                                   (lVar22,0);
                iVar20 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetElo_1b98970
                                   (lVar22,0);
                uVar29 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderboardId_1b98a68
                                   (lVar22,0);
                uVar25 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckFestivalLeaderboardImpression_2db2890
                                   (uVar25,uVar27,(long)iVar8,(long)iVar9,(long)iVar10,(long)iVar11,
                                    (long)iVar12,(long)iVar13,(long)(iVar14 - iVar15),uVar28,
                                    (long)iVar16,(long)iVar17,(long)iVar18,(long)iVar19,(long)iVar20
                                    ,uVar29,0);
                if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                }
                GrandSDK_Analytics_Analytics__Track_2b38d30(uVar25,0);
                Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                          (param_1,lVar24);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

