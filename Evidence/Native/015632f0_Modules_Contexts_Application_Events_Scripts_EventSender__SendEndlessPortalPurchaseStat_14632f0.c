/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEndlessPortalPurchaseStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalPurchaseStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEndlessPortalPurchaseStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalPurchaseStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalPurchaseStat_14632f0
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
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar2 = PTR_DAT_0576aae0;
                    /* try { // try from 01563300 to 0166330b has its CatchHandler @ 01562a7c */
                    /* try { // try from 0156330c to 01663313 has its CatchHandler @ 0156331c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 01563284 with catch @ 01563314 */
  lStack_78 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 01563244 with catch @ 0156331c
                       catch() { ... } // from try @ 01563298 with catch @ 0156331c
                       catch() { ... } // from try @ 0156330c with catch @ 0156331c */
                    /* try { // try from 01563320 to 016634fb has its CatchHandler @ 01563320
                       catch() { ... } // from try @ 01563320 with catch @ 01563320
                       catch() { ... } // from try @ 01563550 with catch @ 01563320
                       catch() { ... } // from try @ 01563598 with catch @ 01563320
                       catch() { ... } // from try @ 01563804 with catch @ 01563320
                       catch() { ... } // from try @ 01563898 with catch @ 01563320
                       catch() { ... } // from try @ 015639a8 with catch @ 01563320
                       catch() { ... } // from try @ 015639e0 with catch @ 01563320
                       catch() { ... } // from try @ 01563a24 with catch @ 01563320
                       catch() { ... } // from try @ 01563ac0 with catch @ 01563320 */
  if ((bRam0000000005c237af & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057b4008);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_057a3710);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057712b8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_0575ba40);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    FUN_012d0dc8(PTR_DAT_057f6af0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237af = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
    lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar19,*(undefined8 *)PTR_DAT_057b4008);
    puVar3 = PTR_DAT_057c8a60;
    lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) {
                    /* try { // try from 015634fc to 0166351f has its CatchHandler @ 01563568 */
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar20,*(undefined8 *)PTR_DAT_057a1e60);
      lVar20 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 01563524 to 01663533 has its CatchHandler @ 01563564 */
      if ((lVar20 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar20,*(undefined8 *)PTR_DAT_057f6af0,0), puVar5 = PTR_DAT_057d6138,
         puVar3 = PTR_DAT_057b8b10, puVar2 = PTR_DAT_0575a580, lVar19 != 0)) {
                    /* try { // try from 01563538 to 0166354f has its CatchHandler @ 01563560 */
                    /* try { // try from 01563550 to 0166357f has its CatchHandler @ 01563320 */
        uVar13 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetEventID_3469afc
                           (lVar19,0);
                    /* catch() { ... } // from try @ 01563538 with catch @ 01563560 */
                    /* catch() { ... } // from try @ 01563524 with catch @ 01563564 */
                    /* catch() { ... } // from try @ 015634fc with catch @ 01563568 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar20,*(undefined8 *)puVar2,uVar13,0);
        uStack_88 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetStartTimeAsUnix_3469b6c
                              (lVar19,0);
                    /* try { // try from 01563580 to 01663597 has its CatchHandler @ 01563a1c */
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
                    /* try { // try from 01563598 to 016636b7 has its CatchHandler @ 01563320 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar20,*(undefined8 *)puVar3,uVar13,0);
        puVar4 = PTR_DAT_057e4da8;
        puVar7 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057d3f68;
        puVar3 = PTR_DAT_057a3710;
        puVar2 = PTR_DAT_05765ce8;
        if (*(long *)(lVar19 + 0x18) != 0) {
          uStack_a4 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalDataService__GetCurrentStepIndex_3467314
                                (*(long *)(lVar19 + 0x18),0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_a4);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar3,uVar13,0);
          uStack_a8 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetRemainingSeconds_3469ba0
                                (lVar19,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_a8);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar4,uVar13,0);
          lVar14 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetCurrentStep_3469928
                             (lVar19,0);
          puVar6 = PTR_DAT_057d60e0;
          puVar4 = PTR_DAT_057ce7d0;
          puVar3 = PTR_DAT_057712b8;
          if (param_2 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)PTR_DAT_05800b30,*(undefined8 *)(param_2 + 0x10),0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar6,*(undefined8 *)(param_2 + 0x38),0);
            uStack_88 = *(ulong *)(param_2 + 0x40);
            uStack_80 = *(undefined8 *)(param_2 + 0x48);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_88);
                    /* try { // try from 015636b8 to 016636df has its CatchHandler @ 01563a30 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar3,uVar13,0);
            uStack_a4 = *(undefined4 *)(param_2 + 0x50);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_a4);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)PTR_DAT_0575ba40,uVar13,0);
          }
          uVar13 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetSegment_3469ed4
                             (lVar19,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar20,*(undefined8 *)puVar5,uVar13,0);
                    /* try { // try from 01563714 to 0166373b has its CatchHandler @ 01563a2c */
          if ((lVar14 != 0) &&
             (Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
                        (*(undefined8 *)(lVar14 + 0x10),lVar20), puVar3 = PTR_DAT_057caaf0,
             puVar2 = PTR_DAT_057636d0, plVar12 != (long *)0x0)) {
            lVar14 = *plVar12;
            uVar21 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    /* try { // try from 01563740 to 01663757 has its CatchHandler @ 01563a28 */
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 0156377c to 01663783 has its CatchHandler @ 0156381c */
                  puVar15 = (undefined8 *)(lVar14 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                  goto LAB_01563784;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
                    /* try { // try from 01563764 to 0166376b has its CatchHandler @ 01563818 */
            puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_01563784:
                    /* try { // try from 0156378c to 016637a7 has its CatchHandler @ 01563814 */
            uVar8 = (*(code *)*puVar15)(plVar12,puVar15[1]);
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar8);
            uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_88);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar20,*(undefined8 *)puVar3,uVar13,0);
            uVar13 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetEventID_3469afc
                               (lVar19,0);
                    /* try { // try from 015637c4 to 016637cf has its CatchHandler @ 01563808 */
            uVar16 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetStartTimeAsUnix_3469b6c
                               (lVar19,0);
            puVar3 = PTR_DAT_057c9ca0;
            if (*(long *)(lVar19 + 0x18) != 0) {
                    /* try { // try from 015637dc to 016637e3 has its CatchHandler @ 01563810 */
                    /* try { // try from 015637e8 to 01663803 has its CatchHandler @ 0156380c */
              iVar9 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalDataService__GetCurrentStepIndex_3467314
                                (*(long *)(lVar19 + 0x18),0);
              iVar10 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetRemainingSeconds_3469ba0
                                 (lVar19,0);
                    /* try { // try from 01563804 to 01663833 has its CatchHandler @ 01563320 */
                    /* catch() { ... } // from try @ 015637c4 with catch @ 01563808 */
              if (param_2 == 0) {
                dVar28 = 0.0;
                lVar14 = **(long **)(*(long *)puVar3 + 0xb8);
                lStack_d8 = lVar14;
                lStack_d0 = lVar14;
              }
              else {
                    /* catch() { ... } // from try @ 015637e8 with catch @ 0156380c */
                lStack_d0 = *(long *)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 015637dc with catch @ 01563810 */
                if (lStack_d0 == 0) {
                    /* catch() { ... } // from try @ 0156378c with catch @ 01563814 */
                    /* catch() { ... } // from try @ 01563764 with catch @ 01563818 */
                    /* catch() { ... } // from try @ 0156377c with catch @ 0156381c */
                  lStack_d0 = **(long **)(*(long *)puVar3 + 0xb8);
                }
                lStack_d8 = *(long *)(param_2 + 0x38);
                if (lStack_d8 == 0) {
                    /* try { // try from 01563834 to 01663847 has its CatchHandler @ 01563a08 */
                  lStack_d8 = **(long **)(*(long *)puVar3 + 0xb8);
                }
                uStack_98 = *(undefined8 *)(param_2 + 0x48);
                uStack_a0 = *(undefined8 *)(param_2 + 0x40);
                    /* try { // try from 01563850 to 01663853 has its CatchHandler @ 01563a04 */
                    /* try { // try from 01563854 to 0166385f has its CatchHandler @ 01563a00 */
                if (*(int *)(*(long *)PTR_DAT_0579d5c0 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                uVar17 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
                    /* try { // try from 01563864 to 01663883 has its CatchHandler @ 015639fc */
                if (*(int *)(*(long *)PTR_DAT_05765ce8 + 0xe0) == 0) {
                  thunk_FUN_0130472c(*(long *)PTR_DAT_05765ce8);
                }
                    /* try { // try from 01563888 to 01663897 has its CatchHandler @ 015639f8 */
                lVar14 = System_Decimal__ToString_2a93dec(&uStack_a0,uVar17,0);
                    /* try { // try from 01563898 to 01663997 has its CatchHandler @ 01563320 */
                dVar28 = (double)*(float *)(param_2 + 0x50);
              }
              puVar5 = PTR_DAT_05802ff8;
              puVar3 = PTR_DAT_05786c98;
              uVar17 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetSegment_3469ed4
                                 (lVar19,0);
              lVar19 = *plVar12;
              uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                    puVar15 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                    goto LAB_0156393c;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_0156393c:
              puVar4 = PTR_DAT_057e54d0;
              puVar2 = PTR_DAT_0575a8a0;
              iVar11 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              uVar23 = *(undefined8 *)(lVar20 + 0x18);
              uStack_88 = uStack_88 & 0xffffffff00000000;
              uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_88);
              uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar23,*(undefined8 *)puVar3,uVar18,*(undefined8 *)puVar5);
                    /* try { // try from 01563998 to 016639a7 has its CatchHandler @ 015639f4 */
              if (*(int *)(*(long *)PTR_DAT_0579fa30 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0579fa30);
              }
                    /* try { // try from 015639a8 to 016639c3 has its CatchHandler @ 01563320 */
              uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
              uVar24 = *(undefined8 *)(lVar20 + 0x18);
                    /* try { // try from 015639c4 to 016639d3 has its CatchHandler @ 015639f0 */
              uStack_a4 = 0;
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_a4);
                    /* try { // try from 015639d4 to 016639db has its CatchHandler @ 015639ec */
                    /* try { // try from 015639dc to 016639df has its CatchHandler @ 015639e8 */
              uVar23 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar24,*(undefined8 *)puVar2,uVar23,*(undefined8 *)puVar5);
                    /* try { // try from 015639e0 to 01663a0f has its CatchHandler @ 01563320 */
              uVar23 = System_Convert__ToInt64_2130754(uVar23,0);
                    /* catch() { ... } // from try @ 015639dc with catch @ 015639e8 */
                    /* catch() { ... } // from try @ 015639d4 with catch @ 015639ec */
                    /* catch() { ... } // from try @ 015639c4 with catch @ 015639f0 */
              uVar26 = *(undefined8 *)(lVar20 + 0x18);
                    /* catch() { ... } // from try @ 01563998 with catch @ 015639f4 */
                    /* catch() { ... } // from try @ 01563888 with catch @ 015639f8 */
              uStack_a8 = 0;
                    /* catch() { ... } // from try @ 01563864 with catch @ 015639fc */
              uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_a8);
                    /* catch() { ... } // from try @ 01563854 with catch @ 01563a00 */
                    /* catch() { ... } // from try @ 01563850 with catch @ 01563a04 */
                    /* catch() { ... } // from try @ 01563834 with catch @ 01563a08 */
                    /* try { // try from 01563a10 to 01663a23 has its CatchHandler @ 01563ae0 */
              uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar26,*(undefined8 *)puVar4,uVar24,*(undefined8 *)puVar5);
              uVar24 = System_Convert__ToInt64_2130754(uVar24,0);
                    /* catch() { ... } // from try @ 01563580 with catch @ 01563a1c */
                    /* try { // try from 01563a24 to 01663a47 has its CatchHandler @ 01563320 */
              uVar27 = *(undefined8 *)(lVar20 + 0x18);
                    /* catch() { ... } // from try @ 01563740 with catch @ 01563a28 */
                    /* catch() { ... } // from try @ 01563714 with catch @ 01563a2c */
              uStack_ac = 0;
                    /* catch() { ... } // from try @ 015636b8 with catch @ 01563a30 */
              uVar26 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_ac);
                    /* try { // try from 01563a48 to 01663a4b has its CatchHandler @ 01563ad4 */
              uVar26 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar27,*(undefined8 *)PTR_DAT_057e3b08,uVar26,
                                  *(undefined8 *)puVar5);
              uVar26 = System_Convert__ToInt64_2130754(uVar26,0);
              uVar25 = *(undefined8 *)(lVar20 + 0x18);
              uStack_b0 = 0;
              uVar27 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_b0);
              uVar27 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                 (uVar25,*(undefined8 *)PTR_DAT_057a3b60,uVar27,
                                  *(undefined8 *)puVar5);
              uVar27 = System_Convert__ToDouble_21312e0(uVar27,0);
                    /* try { // try from 01563a98 to 01663abf has its CatchHandler @ 01563ae0 */
                    /* try { // try from 01563ac0 to 01663acb has its CatchHandler @ 01563320 */
              uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__EndlessPortalPurchase_2dad034
                                 (dVar28,uVar27,uVar13,uVar16,(long)iVar9,(long)iVar10,lStack_d0,
                                  lStack_d8,lVar14,uVar17,uVar18,uVar23,uVar24,uVar26,(long)iVar11,0
                                 );
                    /* try { // try from 01563acc to 01663ad3 has its CatchHandler @ 01563ae0 */
                    /* catch() { ... } // from try @ 01563a48 with catch @ 01563ad4 */
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01563a10 with catch @ 01563ae0
                       catch() { ... } // from try @ 01563a98 with catch @ 01563ae0
                       catch() { ... } // from try @ 01563acc with catch @ 01563ae0 */
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar20);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

