/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$TryTemporarilyDisableWebShop
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__TryTemporarilyDisableWebShop (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$TryTemporarilyDisableWebShop
   void 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__TryTemporarilyDisableWebShop
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__TryTemporarilyDisableWebShop_3161678
               (long param_1)

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
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  long lVar27;
  int *piVar28;
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
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar23 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__CanTemporarilyDisableWebShop_316c298
                       ();
    if ((uVar23 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar23 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__HasIapChosenOverWebShopCountdownEnded_3163db0
                         ();
      if ((uVar23 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_032616d4;
        uVar23 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__HasNoPurchaseAfterPromptCountdownEnded_3163e6c
                           ();
        if ((uVar23 & 1) == 0) {
          return;
        }
        uVar26 = 0;
      }
      else {
        uVar26 = 1;
      }
      lVar24 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                         ();
      if (lVar24 != 0) {
        if (0 < *(int *)(lVar24 + 0x34)) {
          uVar25 = Modules_Infrastructure_Utils_TimeProvider__get_UtcNow_3de72e4(0);
          uVar25 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__AddFlowDuration_316c3b8
                             (uVar25,uVar25,*(undefined4 *)(lVar24 + 0x34));
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_0326c3b4;
          Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__TemporarilyDisableWebShop_3163f28
                    (*(long *)(param_1 + 0x18),uVar25);
        }
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearCountdowns_3164230
                      (), *(long *)(param_1 + 0x18) != 0)) {
          Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IncrementUsedCycleCount_3163fd0
                    ();
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar24 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
            uVar11 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__GetState_316c424
                               ();
            puVar3 = PTR_DAT_0576aae0;
            if (lVar24 != 0) {
              if ((bRam0000000005c23886 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0575f9f0,uVar11,uVar26,0);
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
                 (lVar12 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar12 != 0)) {
                plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                            (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
                if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
                   (lVar12 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar12 != 0)) {
                  lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar12,*(undefined8 *)PTR_DAT_057f83f8);
                  if ((((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
                       (lVar14 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar14 != 0)
                       ) && (lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                (lVar14,*(undefined8 *)PTR_DAT_057cb2e0),
                            lVar14 != 0)) &&
                     (lVar14 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__GetAdaptiveFlowData_3163cac
                                         (lVar14,0), puVar3 = PTR_DAT_057c8a60, lVar12 != 0)) {
                    lVar15 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                                       (lVar12,0);
                    lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    if ((lVar16 != 0) &&
                       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                                  (lVar16,*(undefined8 *)PTR_DAT_05785bb8,0),
                       puVar5 = PTR_DAT_057e3618, puVar7 = PTR_DAT_057db748,
                       puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_057bb470, plVar13 != (long *)0x0)
                       ) {
                      lVar27 = *plVar13;
                      uVar23 = (ulong)*(ushort *)(lVar27 + 0x12a);
                      if (uVar23 != 0) {
                        piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                            puVar17 = (undefined8 *)(lVar27 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                            goto LAB_0159577c;
                          }
                          uVar23 = uVar23 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar23 != 0);
                      }
                      puVar17 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_0159577c:
                      uStack_64 = (*(code *)*puVar17)(plVar13,puVar17[1]);
                      uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_64);
                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                (lVar16,*(undefined8 *)puVar4,uVar25,0);
                      uStack_80 = *(undefined8 *)PTR_DAT_057759a8;
                      uStack_78 = 0xffffffffffffffff;
                      uStack_70 = uVar11;
                      uVar25 = System_Enum__ToString_23a4eac(&uStack_80,0);
                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                (lVar16,*(undefined8 *)puVar3,uVar25,0);
                      uStack_98 = *(undefined8 *)PTR_DAT_05794ab0;
                      uStack_90 = 0xffffffffffffffff;
                      uStack_88 = uVar26;
                      uVar25 = System_Enum__ToString_23a4eac(&uStack_98,0);
                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                (lVar16,*(undefined8 *)puVar5,uVar25,0);
                      puVar3 = PTR_DAT_057dcce8;
                      if (lVar14 != 0) {
                        uStack_9c = *(undefined4 *)(lVar14 + 0x10);
                        uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_9c);
                        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                  (lVar16,*(undefined8 *)puVar3,uVar25,0);
                        puVar9 = PTR_DAT_05804240;
                        puVar8 = PTR_DAT_057e0170;
                        puVar6 = PTR_DAT_057d6138;
                        puVar5 = PTR_DAT_057a7400;
                        puVar4 = PTR_DAT_057a44e0;
                        puVar3 = PTR_DAT_05791948;
                        if (lVar15 != 0) {
                          uStack_a0 = *(undefined4 *)(lVar15 + 0x3c);
                          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_a0);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar16,*(undefined8 *)puVar4,uVar25,0);
                          uStack_a8 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPromptDisableUntilAsUnix_316c0fc
                                                (lVar12,0);
                          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_a8);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar16,*(undefined8 *)puVar3,uVar25,0);
                          uStack_b0 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPurchaseProtectionEndTimeAsUnix_316c214
                                                (lVar12,0);
                          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_b0);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar16,*(undefined8 *)puVar5,uVar25,0);
                          uStack_b8 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
                                                (lVar12,0);
                          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_b8);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar16,*(undefined8 *)puVar9,uVar25,0);
                          uStack_c0 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetNoPurchaseCountdownEndTimeAsUnix_316c26c
                                                (lVar12,0);
                          uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_c0);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar16,*(undefined8 *)puVar8,uVar25,0);
                          lVar27 = *plVar13;
                          uVar23 = (ulong)*(ushort *)(lVar27 + 0x12a);
                          if (uVar23 != 0) {
                            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_057636d0) {
                                puVar17 = (undefined8 *)
                                          (lVar27 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                                goto LAB_015959e0;
                              }
                              uVar23 = uVar23 - 1;
                              piVar28 = piVar28 + 4;
                            } while (uVar23 != 0);
                          }
                          puVar17 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_015959e0:
                          iVar10 = (*(code *)*puVar17)(plVar13,puVar17[1]);
                          uStack_d8 = *(undefined8 *)PTR_DAT_057759a8;
                          uStack_d0 = 0xffffffffffffffff;
                          uStack_c8 = uVar11;
                          uVar25 = System_Enum__ToString_23a4eac(&uStack_d8,0);
                          uStack_f0 = *(undefined8 *)PTR_DAT_05794ab0;
                          uStack_e8 = 0xffffffffffffffff;
                          uStack_e0 = uVar26;
                          uVar18 = System_Enum__ToString_23a4eac(&uStack_f0,0);
                          iVar1 = *(int *)(lVar14 + 0x10);
                          iVar2 = *(int *)(lVar15 + 0x3c);
                          uVar19 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPromptDisableUntilAsUnix_316c0fc
                                             (lVar12,0);
                          uVar20 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPurchaseProtectionEndTimeAsUnix_316c214
                                             (lVar12,0);
                          uVar21 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
                                             (lVar12,0);
                          uVar22 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetNoPurchaseCountdownEndTimeAsUnix_316c26c
                                             (lVar12,0);
                          uVar25 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopFlowChanged_2dbb060
                                             ((long)iVar10,uVar25,uVar18,(long)iVar1,(long)iVar2,
                                              uVar19,uVar20,uVar21,uVar22,0);
                          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                          }
                          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar25,0);
                          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                    (lVar24,lVar16);
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
          }
        }
      }
LAB_0326c3b4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_032616d4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

