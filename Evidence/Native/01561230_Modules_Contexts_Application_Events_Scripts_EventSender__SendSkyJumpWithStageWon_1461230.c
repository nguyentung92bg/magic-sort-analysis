/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageWon
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageWon (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageWon
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageWon
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageWon_1461230
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
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  int iVar21;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237a8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057ec640);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057f1460);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057addc0);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05802f00);
    FUN_012d0dc8(PTR_DAT_0576e7a8);
    bRam0000000005c237a8 = 1;
  }
  lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_057ec640);
    puVar1 = PTR_DAT_057c8a60;
    lVar17 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar17 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar17,*(undefined8 *)PTR_DAT_057addc0,0), puVar6 = PTR_DAT_057fcce8,
         puVar3 = PTR_DAT_057f1460, puVar5 = PTR_DAT_057e4da8, puVar4 = PTR_DAT_057db748,
         puVar1 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057b8b10, lVar16 != 0)) {
        uVar12 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetTournamentId_2333b80
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar6,uVar12,0);
        uStack_68 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetStartTimeAsUnix_233305c
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar2,uVar12,0);
        uStack_70 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetEndTimeAsUnix_2333084
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar3,uVar12,0);
        uStack_74 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetRemainingSeconds_2332e94
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar5,uVar12,0);
        puVar5 = PTR_DAT_05802f00;
        puVar1 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_0156151c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0156151c:
          puVar6 = PTR_DAT_058196c0;
          puVar3 = PTR_DAT_0576e7a8;
          uStack_78 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar1,uVar12,0);
          uStack_7c = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetWinnerCount_2333640
                                (lVar16,0);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar5,uVar12,0);
          lVar18 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetPlayerReward_2333768
                             (lVar16,0);
          puVar1 = PTR_DAT_0575f9f0;
          if (lVar18 == 0) {
            iVar21 = 0;
          }
          else {
            iVar21 = *(int *)(lVar18 + 0x14);
          }
          uStack_68 = CONCAT44(uStack_68._4_4_,iVar21);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar3,uVar12,0);
          iVar7 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetCurrentStage_2333830
                            (lVar16,0);
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar7 + 1);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar6,uVar12,0);
          uVar12 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetTournamentId_2333b80
                             (lVar16,0);
          uVar14 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetStartTimeAsUnix_233305c
                             (lVar16,0);
          uVar15 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetEndTimeAsUnix_2333084
                             (lVar16,0);
          iVar7 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetRemainingSeconds_2332e94
                            (lVar16,0);
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_015616a4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar2,1);
LAB_015616a4:
          iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          iVar9 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetWinnerCount_2333640
                            (lVar16,0);
          iVar10 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetCurrentStage_2333830
                             (lVar16,0);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SkyJumpStagedWon_2dac9dc
                             (uVar12,uVar14,uVar15,(long)iVar7,(long)iVar8,(long)iVar9,(long)iVar21,
                              (long)(iVar10 + 1),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar17)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

