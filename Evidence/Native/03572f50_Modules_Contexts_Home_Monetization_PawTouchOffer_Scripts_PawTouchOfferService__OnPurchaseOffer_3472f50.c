/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$OnPurchaseOffer
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPurchaseOffer (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, System_String_o* productId, System_Collections_Generic_List_RewardModel__o** rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03572fb8) */
/* WARNING: Removing unreachable block (ram,0x03572fc0) */
/* WARNING: Removing unreachable block (ram,0x03572fd4) */
/* WARNING: Removing unreachable block (ram,0x03572fe4) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$OnPurchaseOffer
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPurchaseOffer
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this,
   System_String_o* productId, System_Collections_Generic_List_RewardModel__o** rewards, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPurchaseOffer_3472f50
               (long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  int *piVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_24 [4];
  
  lVar23 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetOfferPackage_3473034
                     (param_1,param_2,auStack_24);
  if (lVar23 != 0) {
    *param_3 = *(undefined8 *)(lVar23 + 0x20);
    FUN_012d0d74(param_3);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__SetIsPurchased_3471240
                  (*(long *)(param_1 + 0x10),1), *(long *)(param_1 + 0x18) != 0)) {
      Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetState_34743ac
                ();
      puVar5 = PTR_DAT_057ece38;
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar2 = PTR_DAT_0576aae0;
      lVar24 = **(long **)(*(long *)puVar5 + 0xb8);
      if (lVar24 != 0) {
        lVar1 = tpidr_el0;
        lStack_78 = *(long *)(lVar1 + 0x28);
        if ((bRam0000000005c237bd & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575f9f0,lVar23,0);
          FUN_012d0dc8(PTR_DAT_05802ff8);
          FUN_012d0dc8(PTR_DAT_0581b878);
          FUN_012d0dc8(PTR_DAT_057a1e60);
          FUN_012d0dc8(PTR_DAT_057f6180);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          FUN_012d0dc8(PTR_DAT_0579fa30);
          FUN_012d0dc8(PTR_DAT_05765ce8);
          FUN_012d0dc8(PTR_DAT_057c8a60);
          FUN_012d0dc8(PTR_DAT_057636d0);
          FUN_012d0dc8(PTR_DAT_057db748);
          FUN_012d0dc8(PTR_DAT_057ce7d0);
          FUN_012d0dc8(PTR_DAT_0575a8a0);
          FUN_012d0dc8(PTR_DAT_057e54d0);
          FUN_012d0dc8(PTR_DAT_05800b30);
          FUN_012d0dc8(PTR_DAT_057712b8);
          FUN_012d0dc8(PTR_DAT_057e4da8);
          FUN_012d0dc8(PTR_DAT_057b6548);
          FUN_012d0dc8(PTR_DAT_0578d4b0);
          FUN_012d0dc8(PTR_DAT_05786c98);
          FUN_012d0dc8(PTR_DAT_057ad168);
          FUN_012d0dc8(PTR_DAT_057e3b08);
          FUN_012d0dc8(PTR_DAT_0575ba40);
          FUN_012d0dc8(PTR_DAT_057d60e0);
          FUN_012d0dc8(PTR_DAT_057a3b60);
          FUN_012d0dc8(PTR_DAT_0575a580);
          FUN_012d0dc8(PTR_DAT_05774390);
          FUN_012d0dc8(PTR_DAT_057caaf0);
          bRam0000000005c237bd = 1;
        }
        lStack_90 = 0;
        uStack_94 = 0;
        if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
           (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) {
          lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar11,*(undefined8 *)PTR_DAT_057f6180);
          if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
             (lVar12 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar12 != 0)) {
            plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                        (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
            puVar5 = PTR_DAT_057c8a60;
            if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
               (lVar12 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar12 != 0)) {
              lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar12,*(undefined8 *)PTR_DAT_0581b878);
              lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
              if ((lVar14 != 0) &&
                 (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                            (lVar14,*(undefined8 *)PTR_DAT_057ad168,0), puVar2 = PTR_DAT_057e4da8,
                 puVar5 = PTR_DAT_057db748, lVar11 != 0)) {
                uVar8 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds_3472954
                                  (lVar11,0);
                uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
                uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
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
                      uStack_98 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventType_3471368
                                            (*(long *)(lVar11 + 0x10),0);
                      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_98);
                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                (lVar14,*(undefined8 *)puVar2,uVar15,0);
                      if ((lVar23 != 0) &&
                         (Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar14,*(undefined8 *)PTR_DAT_05800b30,
                                     *(undefined8 *)(lVar23 + 0x10),0), puVar4 = PTR_DAT_057d60e0,
                         puVar3 = PTR_DAT_057712b8, puVar2 = PTR_DAT_0575ba40, lVar12 != 0)) {
                        Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                                  (lVar12,*(undefined8 *)(lVar23 + 0x10),&lStack_90,0);
                        if (lStack_90 != 0) {
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar14,*(undefined8 *)puVar4,*(undefined8 *)(lStack_90 + 0x38),
                                     0);
                          if (lStack_90 == 0) goto LAB_015681d0;
                          uStack_88 = *(undefined8 *)(lStack_90 + 0x40);
                          uStack_80 = *(undefined8 *)(lStack_90 + 0x48);
                          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05765ce8,&uStack_88);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar14,*(undefined8 *)puVar3,uVar15,0);
                          if (lStack_90 == 0) goto LAB_015681d0;
                          uStack_98 = *(undefined4 *)(lStack_90 + 0x50);
                          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_98);
                          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                    (lVar14,*(undefined8 *)puVar2,uVar15,0);
                        }
                        Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                                  (*(undefined8 *)(lVar23 + 0x20),lVar14);
                        puVar2 = PTR_DAT_057caaf0;
                        if (plVar13 != (long *)0x0) {
                          lVar12 = *plVar13;
                          uVar26 = (ulong)*(ushort *)(lVar12 + 0x12a);
                          if (uVar26 != 0) {
                            piVar27 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_057636d0) {
                                puVar16 = (undefined8 *)
                                          (lVar12 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                                goto LAB_01567e0c;
                              }
                              uVar26 = uVar26 - 1;
                              piVar27 = piVar27 + 4;
                            } while (uVar26 != 0);
                          }
                          puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01567e0c:
                          uVar8 = (*(code *)*puVar16)(plVar13,puVar16[1]);
                          uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
                          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
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
                              puVar7 = PTR_DAT_05802ff8;
                              puVar2 = PTR_DAT_05774390;
                              if (*(long *)(lVar11 + 0x10) != 0) {
                                uStack_94 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventType_3471368
                                                      (*(long *)(lVar11 + 0x10),0);
                                uVar18 = System_Int32__ToString_26c9768(&uStack_94,0);
                                uVar25 = *(undefined8 *)(lVar23 + 0x10);
                                plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (*(undefined8 *)(lVar14 + 0x18),
                                                             *(undefined8 *)puVar4,
                                                             *(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar7);
                                if (plVar19 != (long *)0x0) {
                                  uVar20 = (**(code **)(*plVar19 + 0x168))
                                                     (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                                  plVar19 = (long *)
                                                  System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                            (*(undefined8 *)(lVar14 + 0x18),
                                                             *(undefined8 *)puVar3,
                                                             *(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar7);
                                  puVar6 = PTR_DAT_057e54d0;
                                  puVar4 = PTR_DAT_0579fa30;
                                  puVar3 = PTR_DAT_05786c98;
                                  puVar2 = PTR_DAT_0575a8a0;
                                  if (plVar19 != (long *)0x0) {
                                    uVar21 = (**(code **)(*plVar19 + 0x168))
                                                       (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                                    uVar28 = *(undefined8 *)(lVar14 + 0x18);
                                    uStack_98 = 0;
                                    uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_98);
                                    uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                       (uVar28,*(undefined8 *)PTR_DAT_0575ba40,
                                                        uVar22,*(undefined8 *)puVar7);
                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                      thunk_FUN_0130472c(*(long *)puVar4);
                                    }
                                    uVar33 = System_Convert__ToDouble_21312e0(uVar22,0);
                                    uVar28 = *(undefined8 *)(lVar14 + 0x18);
                                    uStack_9c = 0;
                                    uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_9c);
                                    uVar22 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                       (uVar28,*(undefined8 *)puVar3,uVar22,
                                                        *(undefined8 *)puVar7);
                                    uVar22 = System_Convert__ToInt64_2130754(uVar22,0);
                                    uVar29 = *(undefined8 *)(lVar14 + 0x18);
                                    uStack_a0 = 0;
                                    uVar28 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a0);
                                    uVar28 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                       (uVar29,*(undefined8 *)puVar2,uVar28,
                                                        *(undefined8 *)puVar7);
                                    uVar28 = System_Convert__ToInt64_2130754(uVar28,0);
                                    uVar31 = *(undefined8 *)(lVar14 + 0x18);
                                    uStack_a4 = 0;
                                    uVar29 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a4);
                                    uVar29 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                       (uVar31,*(undefined8 *)puVar6,uVar29,
                                                        *(undefined8 *)puVar7);
                                    uVar29 = System_Convert__ToInt64_2130754(uVar29,0);
                                    uVar32 = *(undefined8 *)(lVar14 + 0x18);
                                    uStack_a8 = 0;
                                    uVar31 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a8);
                                    uVar31 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                       (uVar32,*(undefined8 *)PTR_DAT_057e3b08,
                                                        uVar31,*(undefined8 *)puVar7);
                                    uVar31 = System_Convert__ToInt64_2130754(uVar31,0);
                                    uVar30 = *(undefined8 *)(lVar14 + 0x18);
                                    uStack_ac = 0;
                                    uVar32 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_ac);
                                    uVar32 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                       (uVar30,*(undefined8 *)PTR_DAT_057a3b60,
                                                        uVar32,*(undefined8 *)puVar7);
                                    uVar32 = System_Convert__ToDouble_21312e0(uVar32,0);
                                    lVar23 = *plVar13;
                                    uVar26 = (ulong)*(ushort *)(lVar23 + 0x12a);
                                    if (uVar26 != 0) {
                                      piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_057636d0) {
                                          puVar16 = (undefined8 *)
                                                    (lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                                          goto LAB_01568118;
                                        }
                                        uVar26 = uVar26 - 1;
                                        piVar27 = piVar27 + 4;
                                      } while (uVar26 != 0);
                                    }
                                    puVar16 = (undefined8 *)
                                              FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01568118:
                                    iVar10 = (*(code *)*puVar16)(plVar13,puVar16[1]);
                                    uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__PawTouchOfferPurchased_2dae270
                                                       (uVar33,uVar32,(long)iVar9,uVar15,uVar17,
                                                        uVar18,uVar25,uVar20,uVar21,uVar22,uVar28,
                                                        uVar29,uVar31,(long)iVar10,0);
                                    if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                                      thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                                    }
                                    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
                                    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                              (lVar24,lVar14);
                                    if (*(long *)(lVar1 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
                                      __stack_chk_fail();
                                    }
                                    return;
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
        }
LAB_015681d0:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

