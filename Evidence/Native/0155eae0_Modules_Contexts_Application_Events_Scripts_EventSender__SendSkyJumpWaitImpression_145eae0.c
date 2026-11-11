/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWaitImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWaitImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpWaitImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWaitImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpWaitImpression_145eae0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2379f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057e1e18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_057e1780);
    FUN_012d0dc8(PTR_DAT_057d22b8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2379f = 1;
  }
  uStack_58 = 0;
  lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_057e1e18);
    puVar3 = PTR_DAT_057c8a60;
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar2 = PTR_DAT_0580b9d0;
      if (lVar11 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar11,*(undefined8 *)PTR_DAT_057d22b8,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = System_DateTime__get_UtcNow_2100638(0);
        puVar4 = PTR_DAT_057e1780;
        puVar3 = PTR_DAT_057c1328;
        puVar2 = PTR_DAT_0576c1b8;
        if (lVar10 != 0) {
          uVar8 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetNextTournamentStartTime_2f1752c
                            (lVar10,0);
          uStack_58 = System_DateTime__op_Subtraction_2101f60(uVar7,uVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          uStack_60 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_58,0);
          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_60);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar4,uVar7,0);
          puVar4 = PTR_DAT_057db748;
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar6 != (long *)0x0) {
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0155ed54;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,1);
LAB_0155ed54:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_64 = (*(code *)*puVar9)(plVar6,puVar9[1]);
            uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar3,uVar7,0);
            uVar7 = System_DateTime__get_UtcNow_2100638(0);
            uVar8 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetNextTournamentStartTime_2f1752c
                              (lVar10,0);
            uStack_58 = System_DateTime__op_Subtraction_2101f60(uVar7,uVar8,0);
            uVar7 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_58,0);
            lVar10 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0155ee1c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,1);
LAB_0155ee1c:
            iVar5 = (*(code *)*puVar9)(plVar6,puVar9[1]);
            uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SkyJumpWaitImpression_2dac1c4
                              (uVar7,(long)iVar5,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar11);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

