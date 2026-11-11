/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalJoined
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalJoined (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalJoined
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalJoined
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalJoined_1481444
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
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2383c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057dfe38);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_0580edb8);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057bc700);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2383c = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar17 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar18 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar18 != 0)) {
      plVar19 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
      puVar4 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar18 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar18 != 0)) {
        lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar18,*(undefined8 *)PTR_DAT_0577fc18);
        lVar20 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        if ((lVar20 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar20,*(undefined8 *)PTR_DAT_0580edb8,0), puVar1 = PTR_DAT_057d3f68,
           lVar17 != 0)) {
          uVar21 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar1,uVar21,0);
          puVar4 = PTR_DAT_057db748;
          puVar1 = PTR_DAT_057caaf0;
          if (plVar19 != (long *)0x0) {
            lVar26 = *plVar19;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar22 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                  goto LAB_015816d4;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar22 = (undefined8 *)FUN_0131971c(plVar19,*(long *)PTR_DAT_057636d0,1);
LAB_015816d4:
            uStack_64 = (*(code *)*puVar22)(plVar19,puVar22[1]);
            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar1,uVar21,0);
            puVar7 = PTR_DAT_05815af0;
            puVar6 = PTR_DAT_057eaf90;
            puVar5 = PTR_DAT_057e4da8;
            puVar3 = PTR_DAT_057bc700;
            puVar2 = PTR_DAT_057aea40;
            puVar1 = PTR_DAT_05795788;
            if (lVar18 != 0) {
              uStack_68 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)puVar2,uVar21,0);
              uStack_6c = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)puVar7,uVar21,0);
              uStack_70 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)puVar5,uVar21,0);
              uStack_74 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRealUserCount_1b985dc
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)puVar6,uVar21,0);
              uStack_78 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)puVar1,uVar21,0);
              iVar8 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                (lVar18,0);
              iStack_7c = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                    (lVar18,0);
              iStack_7c = iVar8 - iStack_7c;
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_7c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)puVar3,uVar21,0);
              uVar21 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentId_1b98890
                                 (lVar18,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)PTR_DAT_057fcce8,uVar21,0);
              uStack_88 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetAvgProgress_1b9894c
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_88);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)PTR_DAT_057dfe38,uVar21,0);
              uStack_8c = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetElo_1b98970
                                    (lVar18,0);
              uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_8c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)PTR_DAT_057a29c0,uVar21,0);
              uVar21 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderboardId_1b98a68
                                 (lVar18,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar20,*(undefined8 *)PTR_DAT_05803ca0,uVar21,0);
              uVar21 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar17,0);
              lVar17 = *plVar19;
              uVar27 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar22 = (undefined8 *)(lVar17 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                    goto LAB_015819c4;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              puVar22 = (undefined8 *)FUN_0131971c(plVar19,*(long *)PTR_DAT_057636d0,1);
LAB_015819c4:
              iVar8 = (*(code *)*puVar22)(plVar19,puVar22[1]);
              iVar9 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                (lVar18,0);
              iVar10 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                                 (lVar18,0);
              iVar11 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                                 (lVar18,0);
              iVar12 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRealUserCount_1b985dc
                                 (lVar18,0);
              iVar13 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                 (lVar18,0);
              iVar14 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                                 (lVar18,0);
              iVar15 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                                 (lVar18,0);
              uVar23 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentId_1b98890
                                 (lVar18,0);
              uVar24 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetAvgProgress_1b9894c
                                 (lVar18,0);
              iVar16 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetElo_1b98970
                                 (lVar18,0);
              uVar25 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderboardId_1b98a68
                                 (lVar18,0);
              uVar21 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckFestivalJoined_2db26fc
                                 (uVar21,(long)iVar8,(long)iVar9,(long)iVar10,(long)iVar11,
                                  (long)iVar12,(long)iVar13,(long)(iVar14 - iVar15),uVar23,uVar24,
                                  (long)iVar16,uVar25,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar21,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar20);
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

