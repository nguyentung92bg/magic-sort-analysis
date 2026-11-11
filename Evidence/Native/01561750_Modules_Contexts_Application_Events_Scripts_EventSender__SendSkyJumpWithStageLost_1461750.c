/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageLost
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageLost (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageLost
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageLost
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageLost_1461750
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
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237a9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057ec640);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05817638);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057ff1e8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237a9 = 1;
  }
  lVar14 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_057ec640);
    puVar3 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar15 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar15,*(undefined8 *)PTR_DAT_057ff1e8,0), puVar6 = PTR_DAT_05817638,
         puVar5 = PTR_DAT_057fcce8, puVar1 = PTR_DAT_057e4da8, puVar4 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057d6138, puVar2 = PTR_DAT_057b8b10, lVar14 != 0)) {
        uVar11 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetTournamentId_2333b80
                           (lVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar5,uVar11,0);
        uStack_58 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetStartTimeAsUnix_233305c
                              (lVar14,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar2,uVar11,0);
        uStack_64 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetRemainingSeconds_2332e94
                              (lVar14,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar1,uVar11,0);
                    /* try { // try from 01561978 to 01661b57 has its CatchHandler @ 01561978
                       catch() { ... } // from try @ 01561978 with catch @ 01561978
                       catch() { ... } // from try @ 01561bc4 with catch @ 01561978
                       catch() { ... } // from try @ 01561c04 with catch @ 01561978
                       catch() { ... } // from try @ 01561ec4 with catch @ 01561978
                       catch() { ... } // from try @ 01561fd4 with catch @ 01561978
                       catch() { ... } // from try @ 01561fe0 with catch @ 01561978
                       catch() { ... } // from try @ 01561ff8 with catch @ 01561978
                       catch() { ... } // from try @ 015620b8 with catch @ 01561978 */
        uStack_68 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetMaxScoreReached_2332d38
                              (lVar14,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar6,uVar11,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01561a10;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01561a10:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_6c = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar3,uVar11,0);
          uVar11 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetTournamentId_2333b80
                             (lVar14,0);
          uVar13 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetStartTimeAsUnix_233305c
                             (lVar14,0);
          iVar7 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetRemainingSeconds_2332e94
                            (lVar14,0);
          iVar8 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetMaxScoreReached_2332d38
                            (lVar14,0);
          lVar14 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01561adc;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar2,1);
LAB_01561adc:
          iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SkyJumpWithStageLost_2dacb04
                             (uVar11,uVar13,(long)iVar7,(long)iVar8,(long)iVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar15)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

