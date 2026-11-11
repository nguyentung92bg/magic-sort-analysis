/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopFlowChangedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopFlowChangedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t newState, int32_t reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopFlowChangedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopFlowChangedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t newState, int32_t
   reason, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopFlowChangedEvent_14954ec
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23886 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057cb2e0);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05794ab0);
    FUN_012d0dc8(PTR_DAT_057759a8);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057a7400);
    FUN_012d0dc8(PTR_DAT_05785bb8);
    FUN_012d0dc8(PTR_DAT_05791948);
    FUN_012d0dc8(PTR_DAT_05804240);
    FUN_012d0dc8(PTR_DAT_057e0170);
    FUN_012d0dc8(PTR_DAT_057a44e0);
    FUN_012d0dc8(PTR_DAT_057bb470);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057dcce8);
    bRam0000000005c23886 = 1;
  }
  if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 != 0)) {
    plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
    if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 != 0)) {
      lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar11,*(undefined8 *)PTR_DAT_057f83f8);
      if ((((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
           (lVar13 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar13 != 0)) &&
          (lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar13,*(undefined8 *)PTR_DAT_057cb2e0), lVar13 != 0)) &&
         (lVar13 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__GetAdaptiveFlowData_3163cac
                             (lVar13,0), puVar3 = PTR_DAT_057c8a60, lVar11 != 0)) {
        lVar14 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                           (lVar11,0);
        lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar15 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar15,*(undefined8 *)PTR_DAT_05785bb8,0), puVar5 = PTR_DAT_057e3618,
           puVar7 = PTR_DAT_057db748, puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_057bb470,
           plVar12 != (long *)0x0)) {
          lVar23 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar16 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                goto LAB_0159577c;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0159577c:
          uStack_64 = (*(code *)*puVar16)(plVar12,puVar16[1]);
          uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar4,uVar17,0);
          uStack_80 = *(undefined8 *)PTR_DAT_057759a8;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = param_2;
          uVar17 = System_Enum__ToString_23a4eac(&uStack_80,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar3,uVar17,0);
          uStack_98 = *(undefined8 *)PTR_DAT_05794ab0;
          uStack_90 = 0xffffffffffffffff;
          uStack_88 = param_3;
          uVar17 = System_Enum__ToString_23a4eac(&uStack_98,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar5,uVar17,0);
          puVar3 = PTR_DAT_057dcce8;
          if (lVar13 != 0) {
            uStack_9c = *(undefined4 *)(lVar13 + 0x10);
            uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_9c);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar3,uVar17,0);
            puVar9 = PTR_DAT_05804240;
            puVar8 = PTR_DAT_057e0170;
            puVar6 = PTR_DAT_057d6138;
            puVar5 = PTR_DAT_057a7400;
            puVar4 = PTR_DAT_057a44e0;
            puVar3 = PTR_DAT_05791948;
            if (lVar14 != 0) {
              uStack_a0 = *(undefined4 *)(lVar14 + 0x3c);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_a0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar4,uVar17,0);
              uStack_a8 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPromptDisableUntilAsUnix_316c0fc
                                    (lVar11,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_a8);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar3,uVar17,0);
              uStack_b0 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPurchaseProtectionEndTimeAsUnix_316c214
                                    (lVar11,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_b0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar5,uVar17,0);
              uStack_b8 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
                                    (lVar11,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_b8);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar9,uVar17,0);
              uStack_c0 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetNoPurchaseCountdownEndTimeAsUnix_316c26c
                                    (lVar11,0);
              uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_c0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar8,uVar17,0);
              lVar23 = *plVar12;
              uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar24 != 0) {
                piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar16 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                    goto LAB_015959e0;
                  }
                  uVar24 = uVar24 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar24 != 0);
              }
              puVar16 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_015959e0:
              iVar10 = (*(code *)*puVar16)(plVar12,puVar16[1]);
              uStack_d8 = *(undefined8 *)PTR_DAT_057759a8;
              uStack_d0 = 0xffffffffffffffff;
              uStack_c8 = param_2;
              uVar17 = System_Enum__ToString_23a4eac(&uStack_d8,0);
              uStack_f0 = *(undefined8 *)PTR_DAT_05794ab0;
              uStack_e8 = 0xffffffffffffffff;
              uStack_e0 = param_3;
              uVar18 = System_Enum__ToString_23a4eac(&uStack_f0,0);
              iVar1 = *(int *)(lVar13 + 0x10);
              iVar2 = *(int *)(lVar14 + 0x3c);
              uVar19 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPromptDisableUntilAsUnix_316c0fc
                                 (lVar11,0);
              uVar20 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPurchaseProtectionEndTimeAsUnix_316c214
                                 (lVar11,0);
              uVar21 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
                                 (lVar11,0);
              uVar22 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetNoPurchaseCountdownEndTimeAsUnix_316c26c
                                 (lVar11,0);
              uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopFlowChanged_2dbb060
                                 ((long)iVar10,uVar17,uVar18,(long)iVar1,(long)iVar2,uVar19,uVar20,
                                  uVar21,uVar22,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar15);
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

