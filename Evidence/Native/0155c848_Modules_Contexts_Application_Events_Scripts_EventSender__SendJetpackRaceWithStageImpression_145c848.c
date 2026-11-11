/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t jetpackRaceImpressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendJetpackRaceWithStageImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t
   jetpackRaceImpressionSource, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJetpackRaceWithStageImpression_145c848
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
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23798 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057fae88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05762450);
    FUN_012d0dc8(PTR_DAT_057a8880);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057f55f0);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_0580c590);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23798 = 1;
  }
  lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
    lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar19,*(undefined8 *)PTR_DAT_057fae88);
    puVar3 = PTR_DAT_057c8a60;
    lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
      plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar20,*(undefined8 *)PTR_DAT_057a1e60);
      lVar20 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_057dbe68;
      puVar2 = PTR_DAT_05762450;
      if (lVar20 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar20,*(undefined8 *)PTR_DAT_057f55f0,0);
        uStack_78 = *(undefined8 *)puVar2;
        uStack_70 = 0xffffffffffffffff;
        uStack_68 = param_2;
        uVar14 = System_Enum__ToString_23a4eac(&uStack_78,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar20,*(undefined8 *)puVar3,uVar14,0);
        puVar1 = PTR_DAT_058196c0;
        puVar7 = PTR_DAT_05803ca0;
        puVar6 = PTR_DAT_057fcce8;
        puVar4 = PTR_DAT_057e4da8;
        puVar5 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057a8880;
        if (lVar19 != 0) {
          uVar14 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                             (lVar19,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar6,uVar14,0);
          uVar14 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                             (lVar19,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar7,uVar14,0);
          iStack_7c = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                                (lVar19,0);
          iStack_7c = iStack_7c + 1;
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar1,uVar14,0);
          uStack_80 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                                (lVar19,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar4,uVar14,0);
          uStack_84 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetScore_3a89c84
                                (lVar19,0);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar3,uVar14,0);
          puVar7 = PTR_DAT_0580c590;
          puVar6 = PTR_DAT_057e66c0;
          puVar4 = PTR_DAT_057caaf0;
          puVar3 = PTR_DAT_057636d0;
          if (plVar13 != (long *)0x0) {
            lVar21 = *plVar13;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                  goto LAB_0155cbb4;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_0155cbb4:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_88 = (*(code *)*puVar15)(plVar13,puVar15[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar4,uVar14,0);
            uStack_8c = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRank_3a8ac50
                                  (lVar19,0);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_8c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar7,uVar14,0);
            uVar14 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                               (lVar19,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar6,uVar14,0);
            uStack_a8 = *(undefined8 *)puVar2;
            uStack_a0 = 0xffffffffffffffff;
            uStack_98 = param_2;
            uVar14 = System_Enum__ToString_23a4eac(&uStack_a8,0);
            uVar16 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetTournamentId_3a8ab80
                               (lVar19,0);
            uVar17 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetLeaderboardId_3a8abe8
                               (lVar19,0);
            iVar8 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetCurrentStage_3a88a0c
                              (lVar19,0);
            iVar9 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRemainingSeconds_3a897fc
                              (lVar19,0);
            iVar10 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetScore_3a89c84
                               (lVar19,0);
            lVar21 = *plVar13;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                  goto LAB_0155cd04;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar3,1);
LAB_0155cd04:
            iVar11 = (*(code *)*puVar15)(plVar13,puVar15[1]);
            iVar12 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetRank_3a8ac50
                               (lVar19,0);
            uVar18 = Modules_Contexts_Home_JetpackRaceWithStage_Scripts_JetpackRaceWithStageService__GetEventId_3a8b078
                               (lVar19,0);
            uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JetpackRaceStagedScreenImpression_2dab97c
                               (uVar14,uVar16,uVar17,(long)(iVar8 + 1),(long)iVar9,(long)iVar10,
                                (long)iVar11,(long)iVar12,uVar18,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar20);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

