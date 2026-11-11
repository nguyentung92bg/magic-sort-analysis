/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPawTouchOfferContainerImpressionStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendPawTouchOfferContainerImpressionStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o* offerPackage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendPawTouchOfferContainerImpressionStat
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendPawTouchOfferContainerImpressionStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o* offerPackage,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendPawTouchOfferContainerImpressionStat_1466834
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_100;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_94;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar4 = PTR_DAT_0576aae0;
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000005c237bb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057f6180);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057712b8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_057fe0b0);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_0575ba40);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237bb = 1;
  }
  lStack_90 = 0;
  uStack_94 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057f6180);
    if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
      plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
        lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar12,*(undefined8 *)PTR_DAT_0581b878);
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar14 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar14,*(undefined8 *)PTR_DAT_057fe0b0,0), puVar2 = PTR_DAT_057e4da8,
           puVar4 = PTR_DAT_057db748, lVar11 != 0)) {
          uVar8 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds_3472954
                            (lVar11,0);
          uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar2,uVar15,0);
          puVar2 = PTR_DAT_0578d4b0;
          if (*(long *)(lVar11 + 0x10) != 0) {
            uVar15 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetSegment_34713b8
                               (*(long *)(lVar11 + 0x10),0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar14,*(undefined8 *)puVar2,uVar15,0);
            puVar2 = PTR_DAT_0575a580;
            if (*(long *)(lVar11 + 0x10) != 0) {
              uVar15 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventId_347117c
                                 (*(long *)(lVar11 + 0x10),0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar14,*(undefined8 *)puVar2,uVar15,0);
              puVar2 = PTR_DAT_057b6548;
              if (*(long *)(lVar11 + 0x10) != 0) {
                uStack_b4 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventType_3471368
                                      (*(long *)(lVar11 + 0x10),0);
                uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_b4);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar14,*(undefined8 *)puVar2,uVar15,0);
                if ((param_2 != 0) &&
                   (Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar14,*(undefined8 *)PTR_DAT_05800b30,
                               *(undefined8 *)(param_2 + 0x10),0), puVar6 = PTR_DAT_057d60e0,
                   puVar3 = PTR_DAT_05765ce8, puVar2 = PTR_DAT_0575ba40, lVar12 != 0)) {
                  Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                            (lVar12,*(undefined8 *)(param_2 + 0x10),&lStack_90,0);
                  if (lStack_90 != 0) {
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar14,*(undefined8 *)puVar6,*(undefined8 *)(lStack_90 + 0x38),0);
                    puVar5 = PTR_DAT_057712b8;
                    if (lStack_90 == 0) goto LAB_015670d4;
                    uStack_88 = *(ulong *)(lStack_90 + 0x40);
                    uStack_80 = *(undefined8 *)(lStack_90 + 0x48);
                    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_88);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar14,*(undefined8 *)puVar5,uVar15,0);
                    if (lStack_90 == 0) goto LAB_015670d4;
                    uStack_b4 = *(undefined4 *)(lStack_90 + 0x50);
                    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_b4);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar14,*(undefined8 *)puVar2,uVar15,0);
                  }
                  Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                            (*(undefined8 *)(param_2 + 0x20),lVar14);
                  puVar2 = PTR_DAT_057caaf0;
                  if (plVar13 != (long *)0x0) {
                    lVar12 = *plVar13;
                    uVar22 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar22 != 0) {
                      piVar23 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                          puVar16 = (undefined8 *)(lVar12 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                          goto LAB_01566cd8;
                        }
                        uVar22 = uVar22 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar22 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01566cd8:
                    uVar8 = (*(code *)*puVar16)(plVar13,puVar16[1]);
                    uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
                    uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (lVar14,*(undefined8 *)puVar2,uVar15,0);
                    iVar9 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds_3472954
                                      (lVar11,0);
                    if (*(long *)(lVar11 + 0x10) != 0) {
                      uVar15 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetSegment_34713b8
                                         (*(long *)(lVar11 + 0x10),0);
                      if (*(long *)(lVar11 + 0x10) != 0) {
                        uVar17 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventId_347117c
                                           (*(long *)(lVar11 + 0x10),0);
                        puVar5 = PTR_DAT_05802ff8;
                        puVar2 = PTR_DAT_05774390;
                        if (*(long *)(lVar11 + 0x10) != 0) {
                          uStack_94 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventType_3471368
                                                (*(long *)(lVar11 + 0x10),0);
                          uVar18 = System_Int32__ToString_26c9768(&uStack_94,0);
                          uVar26 = *(undefined8 *)(param_2 + 0x10);
                          plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                      (*(undefined8 *)(lVar14 + 0x18),
                                                       *(undefined8 *)puVar6,*(undefined8 *)puVar2,
                                                       *(undefined8 *)puVar5);
                          puVar2 = PTR_DAT_0579fa30;
                          if (plVar19 != (long *)0x0) {
                            uVar20 = (**(code **)(*plVar19 + 0x168))
                                               (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                            if (lStack_90 == 0) {
                              uStack_100 = **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
                            }
                            else {
                              uStack_a8 = *(undefined8 *)(lStack_90 + 0x48);
                              uStack_b0 = *(undefined8 *)(lStack_90 + 0x40);
                              if (*(int *)(*(long *)PTR_DAT_0579d5c0 + 0xe0) == 0) {
                                thunk_FUN_0130472c();
                              }
                              uVar21 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c
                                                 (0);
                              lVar11 = *(long *)puVar3;
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_0130472c(lVar11);
                              }
                              uStack_100 = System_Decimal__ToString_2a93dec(&uStack_b0,uVar21,0);
                            }
                            puVar7 = PTR_DAT_057e54d0;
                            puVar6 = PTR_DAT_05786c98;
                            puVar3 = PTR_DAT_0575a8a0;
                            uVar24 = *(undefined8 *)(lVar14 + 0x18);
                            uStack_88 = uStack_88 & 0xffffffff00000000;
                            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_88);
                            uVar21 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar24,*(undefined8 *)PTR_DAT_0575ba40,uVar21,
                                                *(undefined8 *)puVar5);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_0130472c(*(long *)puVar2);
                            }
                            uVar30 = System_Convert__ToDouble_21312e0(uVar21,0);
                            uVar24 = *(undefined8 *)(lVar14 + 0x18);
                            uStack_b4 = 0;
                            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_b4);
                            uVar21 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar24,*(undefined8 *)puVar6,uVar21,
                                                *(undefined8 *)puVar5);
                            uVar21 = System_Convert__ToInt64_2130754(uVar21,0);
                            uVar25 = *(undefined8 *)(lVar14 + 0x18);
                            uStack_b8 = 0;
                            uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_b8);
                            uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar25,*(undefined8 *)puVar3,uVar24,
                                                *(undefined8 *)puVar5);
                            uVar24 = System_Convert__ToInt64_2130754(uVar24,0);
                            uVar28 = *(undefined8 *)(lVar14 + 0x18);
                            uStack_bc = 0;
                            uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_bc);
                            uVar25 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar28,*(undefined8 *)puVar7,uVar25,
                                                *(undefined8 *)puVar5);
                            uVar25 = System_Convert__ToInt64_2130754(uVar25,0);
                            uVar29 = *(undefined8 *)(lVar14 + 0x18);
                            uStack_c0 = 0;
                            uVar28 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_c0);
                            uVar28 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar29,*(undefined8 *)PTR_DAT_057e3b08,uVar28,
                                                *(undefined8 *)puVar5);
                            uVar28 = System_Convert__ToInt64_2130754(uVar28,0);
                            uVar27 = *(undefined8 *)(lVar14 + 0x18);
                            uStack_c4 = 0;
                            uVar29 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_c4);
                            uVar29 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar27,*(undefined8 *)PTR_DAT_057a3b60,uVar29,
                                                *(undefined8 *)puVar5);
                            uVar29 = System_Convert__ToDouble_21312e0(uVar29,0);
                            lVar11 = *plVar13;
                            uVar22 = (ulong)*(ushort *)(lVar11 + 0x12a);
                            if (uVar22 != 0) {
                              piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                                  puVar16 = (undefined8 *)
                                            (lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                                  goto LAB_01567024;
                                }
                                uVar22 = uVar22 - 1;
                                piVar23 = piVar23 + 4;
                              } while (uVar22 != 0);
                            }
                            puVar16 = (undefined8 *)
                                      FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01567024:
                            iVar10 = (*(code *)*puVar16)(plVar13,puVar16[1]);
                            uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__PawTouchOfferImpression_2dadea0
                                               (uVar30,uVar29,(long)iVar9,uVar15,uVar17,uVar18,
                                                uVar26,uVar20,uStack_100,uVar21,uVar24,uVar25,uVar28
                                                ,(long)iVar10,0);
                            if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                              thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                            }
                            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
                            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                      (param_1,lVar14);
                            if (*(long *)(lVar1 + 0x28) == lStack_78) {
                              return;
                            }
                    /* WARNING: Subroutine does not return */
                            __stack_chk_fail();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_015670d4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

