/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageWaitImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageWaitImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWithStageWaitImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageWaitImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWithStageWaitImpression_14609b0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237a6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057ec640);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_057e1780);
    FUN_012d0dc8(PTR_DAT_057e4938);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237a6 = 1;
  }
  uStack_58 = 0;
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_057ec640);
    puVar3 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar2 = PTR_DAT_0580b9d0;
      if (lVar13 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar13,*(undefined8 *)PTR_DAT_057e4938,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar9 = System_DateTime__get_UtcNow_2100638(0);
        puVar4 = PTR_DAT_057e1780;
        puVar3 = PTR_DAT_057c1328;
        puVar2 = PTR_DAT_0576c1b8;
        if (lVar12 != 0) {
          uVar10 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetNextTournamentStartTime_23330ac
                             (lVar12,0);
          uStack_58 = System_DateTime__op_Subtraction_2101f60(uVar9,uVar10,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          uStack_68 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_58,0);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar4,uVar9,0);
          puVar5 = PTR_DAT_058196c0;
          puVar4 = PTR_DAT_057db748;
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar8 != (long *)0x0) {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_01560c38;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01560c38:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_6c = (*(code *)*puVar11)(plVar8,puVar11[1]);
            uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar3,uVar9,0);
            iStack_70 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetCurrentStage_2333830
                                  (lVar12,0);
            iStack_70 = iStack_70 + 1;
            uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar5,uVar9,0);
            uVar9 = System_DateTime__get_UtcNow_2100638(0);
            uVar10 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetNextTournamentStartTime_23330ac
                               (lVar12,0);
            uStack_58 = System_DateTime__op_Subtraction_2101f60(uVar9,uVar10,0);
            uVar9 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_58,0);
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_01560d38;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_01560d38:
            iVar6 = (*(code *)*puVar11)(plVar8,puVar11[1]);
            iVar7 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetCurrentStage_2333830
                              (lVar12,0);
            uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SkyJumpStagedWaitImpression_2dac83c
                              (uVar9,(long)iVar6,(long)(iVar7 + 1),0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar13);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

