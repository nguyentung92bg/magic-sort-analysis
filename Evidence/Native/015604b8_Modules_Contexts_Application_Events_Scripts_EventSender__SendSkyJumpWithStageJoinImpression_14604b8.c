/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageJoinImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageJoinImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageJoinImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageJoinImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageJoinImpression_14604b8
               (undefined8 param_1,undefined4 param_2)

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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057ec640);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05776a68);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_057be218);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237a5 = 1;
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
                    (lVar17,*(undefined8 *)PTR_DAT_057be218,0), puVar6 = PTR_DAT_057fcce8,
         puVar5 = PTR_DAT_057e4da8, puVar4 = PTR_DAT_057db748, puVar3 = PTR_DAT_057d6138,
         puVar1 = PTR_DAT_057b8b10, puVar2 = PTR_DAT_05776a68, lVar16 != 0)) {
        uVar12 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetTournamentId_2333b80
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar6,uVar12,0);
        uStack_68 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetStartTimeAsUnix_233305c
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar1,uVar12,0);
        uStack_6c = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetRemainingSeconds_2332e94
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar5,uVar12,0);
        uStack_88 = *(undefined8 *)puVar2;
        uStack_80 = 0xffffffffffffffff;
        uStack_78 = param_2;
        uVar12 = System_Enum__ToString_23a4eac(&uStack_88,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_057dbe68,uVar12,0);
        uStack_8c = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetScore_23328dc
                              (lVar16,0);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_8c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_05774660,uVar12,0);
        puVar5 = PTR_DAT_058196c0;
        puVar3 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_015607f4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_015607f4:
          uStack_90 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar3,uVar12,0);
          iStack_94 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetCurrentStage_2333830
                                (lVar16,0);
          iStack_94 = iStack_94 + 1;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar5,uVar12,0);
          uVar12 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetTournamentId_2333b80
                             (lVar16,0);
          uVar14 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetStartTimeAsUnix_233305c
                             (lVar16,0);
          iVar7 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetRemainingSeconds_2332e94
                            (lVar16,0);
          uStack_b0 = *(undefined8 *)puVar2;
          uStack_a8 = 0xffffffffffffffff;
          uStack_a0 = param_2;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_b0,0);
          iVar8 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetScore_23328dc
                            (lVar16,0);
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01560910;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_01560910:
          iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          iVar10 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetCurrentStage_2333830
                             (lVar16,0);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SkyJumpStagedJoinImpression_2dac724
                             (uVar12,uVar14,(long)iVar7,uVar15,(long)iVar8,(long)iVar9,
                              (long)(iVar10 + 1),0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
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

