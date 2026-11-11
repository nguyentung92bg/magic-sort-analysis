/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageInfoImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageInfoImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageInfoImpression
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageInfoImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageInfoImpression_145cdb0
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
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23799 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057fae88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a8880);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057c1af0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_0580c590);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23799 = 1;
  }
  lVar17 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_057fae88);
    puVar3 = PTR_DAT_057c8a60;
    lVar18 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar18 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar18,*(undefined8 *)PTR_DAT_057c1af0,0), puVar1 = PTR_DAT_058196c0,
         puVar6 = PTR_DAT_05803ca0, puVar5 = PTR_DAT_057fcce8, puVar4 = PTR_DAT_057e4da8,
         puVar3 = PTR_DAT_057db748, puVar2 = PTR_DAT_057a8880, lVar17 != 0)) {
        uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                           (lVar17,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar5,uVar13,0);
        uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                           (lVar17,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar6,uVar13,0);
        iStack_64 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                              (lVar17,0);
        iStack_64 = iStack_64 + 1;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar13,0);
        uStack_68 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                              (lVar17,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar4,uVar13,0);
        uStack_6c = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetScore_3a89c84
                              (lVar17,0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar2,uVar13,0);
        puVar6 = PTR_DAT_0580c590;
        puVar5 = PTR_DAT_057e66c0;
        puVar4 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar19 = *plVar12;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0155d0bc;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0155d0bc:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_70 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar13,0);
          uStack_74 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRank_3a8ac50
                                (lVar17,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar6,uVar13,0);
          uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar5,uVar13,0);
          uVar13 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                             (lVar17,0);
          uVar15 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                             (lVar17,0);
          iVar7 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                            (lVar17,0);
          iVar8 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                            (lVar17,0);
          iVar9 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetScore_3a89c84
                            (lVar17,0);
          lVar19 = *plVar12;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0155d1ec;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_0155d1ec:
          iVar10 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          iVar11 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRank_3a8ac50
                             (lVar17,0);
          uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                             (lVar17,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceStagedInfoImpression_2dabadc
                             (uVar13,uVar15,(long)(iVar7 + 1),(long)iVar8,(long)iVar9,(long)iVar10,
                              (long)iVar11,uVar16,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

