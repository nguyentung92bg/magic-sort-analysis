/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageJoinedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageJoinedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageJoinedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageJoinedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageJoinedEvent_145c334
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
  uint uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  byte abStack_7c [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23797 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057fae88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057f0f30);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_0578bc20);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23797 = 1;
  }
  lVar18 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
    lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar18,*(undefined8 *)PTR_DAT_057fae88);
    puVar3 = PTR_DAT_057c8a60;
    lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar19,*(undefined8 *)PTR_DAT_057a1e60);
      lVar19 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar19 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar19,*(undefined8 *)PTR_DAT_0578bc20,0), puVar1 = PTR_DAT_058196c0,
         puVar7 = PTR_DAT_05803ca0, puVar6 = PTR_DAT_057fcce8, puVar4 = PTR_DAT_057e4da8,
         puVar5 = PTR_DAT_057db748, puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057b8b10,
         lVar18 != 0)) {
        uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                           (lVar18,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar6,uVar13,0);
        uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                           (lVar18,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar7,uVar13,0);
        iStack_64 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                              (lVar18,0);
        iStack_64 = iStack_64 + 1;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar1,uVar13,0);
        uStack_70 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetStartTimeAsUnix_3a899cc
                              (lVar18,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar2,uVar13,0);
        uStack_74 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                              (lVar18,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar4,uVar13,0);
        puVar7 = PTR_DAT_057f0f30;
        puVar6 = PTR_DAT_057e66c0;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057b4910;
        puVar2 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar20 = *plVar12;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_0155c668;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0155c668:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_78 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar4,uVar13,0);
          abStack_7c[0] =
               Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__CanCloseJoinPopup_3a8b044
                         (lVar18,0);
          abStack_7c[0] = abStack_7c[0] & 1;
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,abStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar7,uVar13,0);
          uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                             (lVar18,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar6,uVar13,0);
          uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                             (lVar18,0);
          uVar15 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                             (lVar18,0);
          iVar8 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                            (lVar18,0);
          uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetStartTimeAsUnix_3a899cc
                             (lVar18,0);
          iVar9 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                            (lVar18,0);
          lVar20 = *plVar12;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_0155c79c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_0155c79c:
          iVar10 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar11 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__CanCloseJoinPopup_3a8b044
                             (lVar18,0);
          uVar17 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                             (lVar18,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceStagedJoined_2dab838
                             (uVar13,uVar15,(long)(iVar8 + 1),uVar16,(long)iVar9,(long)iVar10,
                              uVar11 & 1,uVar17,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar19)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

