/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageWon
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageWon (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageWon
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageWon
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageWon_145d7f8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2379b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057fae88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057a8880);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057f65e0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_0580c590);
    FUN_012d0dc8(PTR_DAT_0579d2a0);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2379b = 1;
  }
  lVar21 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) {
    lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar21,*(undefined8 *)PTR_DAT_057fae88);
    puVar2 = PTR_DAT_057c8a60;
    lVar22 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
      plVar15 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar22,*(undefined8 *)PTR_DAT_057a1e60);
      lVar22 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar22 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar22,*(undefined8 *)PTR_DAT_057f65e0,0);
        puVar8 = PTR_DAT_058196c0;
        puVar7 = PTR_DAT_05803ca0;
        puVar6 = PTR_DAT_057fcce8;
        puVar5 = PTR_DAT_057e4da8;
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057d6138;
        puVar2 = PTR_DAT_057b8b10;
        puVar1 = PTR_DAT_057a8880;
        if (lVar21 != 0) {
          uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                             (lVar21,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar6,uVar16,0);
          uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                             (lVar21,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar7,uVar16,0);
          iStack_64 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                                (lVar21,0);
          iStack_64 = iStack_64 + 1;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar8,uVar16,0);
          uStack_70 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetStartTimeAsUnix_3a899cc
                                (lVar21,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar2,uVar16,0);
          uStack_74 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                                (lVar21,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar5,uVar16,0);
          uStack_78 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetScore_3a89c84
                                (lVar21,0);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar22,*(undefined8 *)puVar1,uVar16,0);
          puVar6 = PTR_DAT_0580c590;
          puVar5 = PTR_DAT_057e66c0;
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_0579d2a0;
          puVar1 = PTR_DAT_057636d0;
          if (plVar15 != (long *)0x0) {
            lVar23 = *plVar15;
            uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar17 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                  goto LAB_0155db78;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            puVar17 = (undefined8 *)FUN_0131971c(plVar15,*(long *)PTR_DAT_057636d0,1);
LAB_0155db78:
            uStack_7c = (*(code *)*puVar17)(plVar15,puVar17[1]);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar3,uVar16,0);
            uStack_80 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRank_3a8ac50
                                  (lVar21,0);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar6,uVar16,0);
            uStack_84 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetMaxScore_3a8ad74
                                  (lVar21,0);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_84);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar2,uVar16,0);
            uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                               (lVar21,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar22,*(undefined8 *)puVar5,uVar16,0);
            uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                               (lVar21,0);
            uVar18 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                               (lVar21,0);
            iVar9 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                              (lVar21,0);
            uVar19 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetStartTimeAsUnix_3a899cc
                               (lVar21,0);
            iVar10 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                               (lVar21,0);
            iVar11 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetScore_3a89c84
                               (lVar21,0);
            lVar23 = *plVar15;
            uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)puVar1) {
                  puVar17 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                  goto LAB_0155dce4;
                }
                uVar24 = uVar24 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar24 != 0);
            }
            puVar17 = (undefined8 *)FUN_0131971c(plVar15,*(long *)puVar1,1);
LAB_0155dce4:
            iVar12 = (*(code *)*puVar17)(plVar15,puVar17[1]);
            iVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRank_3a8ac50
                               (lVar21,0);
            iVar14 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetMaxScore_3a8ad74
                               (lVar21,0);
            uVar20 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                               (lVar21,0);
            uVar16 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceStagedWon_2dabd7c
                               (uVar16,uVar18,(long)(iVar9 + 1),uVar19,(long)iVar10,(long)iVar11,
                                (long)iVar12,(long)iVar13,(long)iVar14,uVar20,0);
            if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar16,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar22);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

