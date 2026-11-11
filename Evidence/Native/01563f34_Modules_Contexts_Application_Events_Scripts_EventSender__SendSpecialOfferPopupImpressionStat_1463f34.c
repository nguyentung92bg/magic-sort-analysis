/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSpecialOfferPopupImpressionStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferPopupImpressionStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendSpecialOfferPopupImpressionStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferPopupImpressionStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferPopupImpressionStat_1463f34
               (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  int *piVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  
  puVar4 = PTR_DAT_0576aae0;
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000005c237b1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a1840);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057b0468);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057712b8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0578d4b0);
    FUN_012d0dc8(PTR_DAT_057c5210);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_0575ba40);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057ba7c8);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_0578a710);
    bRam0000000005c237b1 = 1;
  }
  lStack_98 = 0;
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_057a1840);
    if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar13 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar13 != 0)) {
      plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar13 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar13 != 0)) {
        lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar13,*(undefined8 *)PTR_DAT_0581b878);
        lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar15 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar15,*(undefined8 *)PTR_DAT_057ba7c8,0), puVar2 = PTR_DAT_057e4da8,
           puVar4 = PTR_DAT_057db748, lVar12 != 0)) {
          uVar9 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRemainingSeconds_3595f90
                            (lVar12,0);
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar2,uVar16,0);
          puVar6 = PTR_DAT_057c5210;
          puVar2 = PTR_DAT_0578d4b0;
          if (*(long *)(lVar12 + 0x10) != 0) {
            lVar17 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__GetCachedBackendResponse_3594224
                               (*(long *)(lVar12 + 0x10),0);
            if (lVar17 != 0) {
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar2,*(undefined8 *)(lVar17 + 0x40),0);
              uVar16 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetOfferName_35966b4
                                 (lVar12,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar6,uVar16,0);
              uVar16 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetEventId_35967d8
                                 (lVar12,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)PTR_DAT_0575a580,uVar16,0);
              uVar9 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetPopupId_3596848
                                (lVar12,0);
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)PTR_DAT_0578a710,uVar16,0);
              if (*(long *)(lVar17 + 0x30) == 0) goto LAB_015648d8;
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)PTR_DAT_05800b30,
                         *(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x20),0);
              if ((*(long *)(lVar17 + 0x30) == 0) || (lVar13 == 0)) goto LAB_015648d8;
              Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                        (lVar13,*(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x20),&lStack_98,0);
              if (lStack_98 != 0) {
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar15,*(undefined8 *)PTR_DAT_057d60e0,*(undefined8 *)(lStack_98 + 0x38),
                           0);
                if (lStack_98 == 0) goto LAB_015648d8;
                uStack_90 = *(undefined8 *)(lStack_98 + 0x40);
                uStack_88 = *(undefined8 *)(lStack_98 + 0x48);
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05765ce8,&uStack_90);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar15,*(undefined8 *)PTR_DAT_057712b8,uVar16,0);
                if (lStack_98 == 0) goto LAB_015648d8;
                uStack_b8 = CONCAT44(uStack_b8._4_4_,*(undefined4 *)(lStack_98 + 0x50));
                uVar16 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_b8);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (lVar15,*(undefined8 *)PTR_DAT_0575ba40,uVar16,0);
              }
              if (*(long *)(lVar17 + 0x30) == 0) goto LAB_015648d8;
              Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                        (*(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x18),lVar15);
            }
            puVar3 = PTR_DAT_057ab1a0;
            uStack_90 = *(undefined8 *)PTR_DAT_057b0468;
            uStack_88 = 0xffffffffffffffff;
            uStack_80 = param_2;
            uVar16 = System_Enum__ToString_23a4eac(&uStack_90,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar3,uVar16,0);
            puVar8 = PTR_DAT_05802ff8;
            puVar7 = PTR_DAT_057caaf0;
            puVar5 = PTR_DAT_05774390;
            puVar3 = PTR_DAT_057636d0;
            if (plVar14 != (long *)0x0) {
              lVar13 = *plVar14;
              uVar28 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar28 != 0) {
                piVar29 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar18 = (undefined8 *)(lVar13 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                    goto LAB_01564470;
                  }
                  uVar28 = uVar28 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar28 != 0);
              }
              puVar18 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_01564470:
              uStack_9c = (*(code *)*puVar18)(plVar14,puVar18[1]);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_9c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar7,uVar16,0);
              iVar10 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRemainingSeconds_3595f90
                                 (lVar12,0);
              plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)puVar2,
                                           *(undefined8 *)puVar5,*(undefined8 *)puVar8);
              if (plVar19 != (long *)0x0) {
                uVar16 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
                plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)puVar6,
                                             *(undefined8 *)puVar5,*(undefined8 *)puVar8);
                if (plVar19 != (long *)0x0) {
                  uVar20 = (**(code **)(*plVar19 + 0x168))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                  plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                              (*(undefined8 *)(lVar15 + 0x18),
                                               *(undefined8 *)PTR_DAT_0575a580,*(undefined8 *)puVar5
                                               ,*(undefined8 *)puVar8);
                  if (plVar19 != (long *)0x0) {
                    uVar21 = (**(code **)(*plVar19 + 0x168))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                    plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                (*(undefined8 *)(lVar15 + 0x18),
                                                 *(undefined8 *)PTR_DAT_0578a710,
                                                 *(undefined8 *)puVar5,*(undefined8 *)puVar8);
                    if (plVar19 != (long *)0x0) {
                      uVar22 = (**(code **)(*plVar19 + 0x168))
                                         (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                      plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                  (*(undefined8 *)(lVar15 + 0x18),
                                                   *(undefined8 *)PTR_DAT_05800b30,
                                                   *(undefined8 *)puVar5,*(undefined8 *)puVar8);
                      if (plVar19 != (long *)0x0) {
                        uVar23 = (**(code **)(*plVar19 + 0x168))
                                           (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                        plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                    (*(undefined8 *)(lVar15 + 0x18),
                                                     *(undefined8 *)PTR_DAT_057d60e0,
                                                     *(undefined8 *)puVar5,*(undefined8 *)puVar8);
                        if (plVar19 != (long *)0x0) {
                          uVar24 = (**(code **)(*plVar19 + 0x168))
                                             (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                          plVar19 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                                      (*(undefined8 *)(lVar15 + 0x18),
                                                       *(undefined8 *)PTR_DAT_057712b8,
                                                       *(undefined8 *)puVar5,*(undefined8 *)puVar8);
                          puVar2 = PTR_DAT_0579fa30;
                          if (plVar19 != (long *)0x0) {
                            uVar25 = (**(code **)(*plVar19 + 0x168))
                                               (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                            uVar30 = *(undefined8 *)(lVar15 + 0x18);
                            uStack_a0 = 0;
                            uVar26 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a0);
                            uVar26 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar30,*(undefined8 *)PTR_DAT_0575ba40,uVar26,
                                                *(undefined8 *)puVar8);
                    /* try { // try from 01564660 to 0166469f has its CatchHandler @ 01564660
                       catch() { ... } // from try @ 01564660 with catch @ 01564660
                       catch() { ... } // from try @ 01564734 with catch @ 01564660
                       catch() { ... } // from try @ 01564770 with catch @ 01564660
                       catch() { ... } // from try @ 01564840 with catch @ 01564660 */
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_0130472c(*(long *)puVar2);
                            }
                            puVar7 = PTR_DAT_057e54d0;
                            puVar5 = PTR_DAT_057e3b08;
                            puVar6 = PTR_DAT_05786c98;
                            puVar2 = PTR_DAT_0575a8a0;
                            uVar30 = System_Convert__ToDouble_21312e0(uVar26,0);
                    /* try { // try from 015646a0 to 016646a7 has its CatchHandler @ 0156473c */
                            uStack_b8 = *(undefined8 *)PTR_DAT_057b0468;
                            uStack_b0 = 0xffffffffffffffff;
                            uStack_a8 = param_2;
                            uVar26 = System_Enum__ToString_23a4eac(&uStack_b8,0);
                            lVar12 = *plVar14;
                            uVar28 = (ulong)*(ushort *)(lVar12 + 0x12a);
                            if (uVar28 != 0) {
                              piVar29 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                              do {
                    /* try { // try from 015646e8 to 0166471b has its CatchHandler @ 01564740 */
                                if (*(long *)(piVar29 + -2) == *(long *)puVar3) {
                                  puVar18 = (undefined8 *)
                                            (lVar12 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                                  goto LAB_0156471c;
                                }
                                uVar28 = uVar28 - 1;
                                piVar29 = piVar29 + 4;
                              } while (uVar28 != 0);
                            }
                            puVar18 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar3,1);
LAB_0156471c:
                            iVar11 = (*(code *)*puVar18)(plVar14,puVar18[1]);
                    /* try { // try from 0156472c to 0166472f has its CatchHandler @ 01564738 */
                    /* try { // try from 01564730 to 01664733 has its CatchHandler @ 01564734 */
                            uVar31 = *(undefined8 *)(lVar15 + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01564730 with catch @ 01564734
                       try { // try from 01564734 to 01664757 has its CatchHandler @ 01564660 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156472c with catch @ 01564738
                        */
                            uStack_bc = 0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015646a0 with catch @ 0156473c
                        */
                            uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_bc);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015646e8 with catch @ 01564740
                        */
                            uVar27 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar31,*(undefined8 *)puVar6,uVar27,
                                                *(undefined8 *)puVar8);
                    /* try { // try from 01564758 to 0166476f has its CatchHandler @ 01564838 */
                            uVar27 = System_Convert__ToInt64_2130754(uVar27,0);
                            uVar32 = *(undefined8 *)(lVar15 + 0x18);
                            uStack_c0 = 0;
                    /* try { // try from 01564770 to 01664827 has its CatchHandler @ 01564660 */
                            uVar31 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_c0);
                            uVar31 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar32,*(undefined8 *)puVar2,uVar31,
                                                *(undefined8 *)puVar8);
                            uVar31 = System_Convert__ToInt64_2130754(uVar31,0);
                            uVar33 = *(undefined8 *)(lVar15 + 0x18);
                            uStack_c4 = 0;
                            uVar32 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_c4);
                            uVar32 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar33,*(undefined8 *)puVar7,uVar32,
                                                *(undefined8 *)puVar8);
                            uVar32 = System_Convert__ToInt64_2130754(uVar32,0);
                            uVar34 = *(undefined8 *)(lVar15 + 0x18);
                            uStack_c8 = 0;
                            uVar33 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_c8);
                            uVar33 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar34,*(undefined8 *)puVar5,uVar33,
                                                *(undefined8 *)puVar8);
                            uVar33 = System_Convert__ToInt64_2130754(uVar33,0);
                            uVar35 = *(undefined8 *)(lVar15 + 0x18);
                            uStack_cc = 0;
                            uVar34 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_cc);
                    /* try { // try from 01564828 to 01664837 has its CatchHandler @ 01564838 */
                            uVar34 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                               (uVar35,*(undefined8 *)PTR_DAT_057a3b60,uVar34,
                                                *(undefined8 *)puVar8);
                            uVar34 = System_Convert__ToDouble_21312e0(uVar34,0);
                    /* catch() { ... } // from try @ 01564758 with catch @ 01564838
                       catch() { ... } // from try @ 01564828 with catch @ 01564838 */
                    /* try { // try from 0156483c to 0166483f has its CatchHandler @ 01564848 */
                    /* try { // try from 01564840 to 0166484b has its CatchHandler @ 01564660 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0156483c with catch @ 01564848
                        */
                            uVar16 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SpecialOfferImpression_2db7e68
                                               (uVar30,uVar34,(long)iVar10,uVar16,uVar20,uVar21,
                                                uVar22,uVar23,uVar24,uVar25,uVar26,(long)iVar11,
                                                uVar27,uVar31,uVar32,uVar33,0);
                            if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                              thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
                            }
                            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar16,0);
                            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                      (param_1,lVar15);
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
LAB_015648d8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

