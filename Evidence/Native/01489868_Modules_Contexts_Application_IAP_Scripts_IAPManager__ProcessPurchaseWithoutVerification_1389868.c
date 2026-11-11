/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$ProcessPurchaseWithoutVerification
void Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchaseWithoutVerification (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_PurchaseEventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$ProcessPurchaseWithoutVerification
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchaseWithoutVerification
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this,
   UnityEngine_Purchasing_PurchaseEventArgs_o* args, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchaseWithoutVerification_1389868
          (long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_74;
  long lStack_68;
  
  if ((bRam0000000005c23073 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811a38);
    bRam0000000005c23073 = 1;
  }
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     (lVar29 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar29 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar31 = *(undefined8 *)(lVar29 + 0x10);
  System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_05811a38,uVar31,0);
  uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested_13899e8(param_1,uVar31);
  if ((uVar12 & 1) != 0) {
    uVar13 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Success_1388394();
    if ((bRam0000000005c23078 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057e81f0);
      bRam0000000005c23078 = 1;
    }
    auVar32 = Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested_13899e8
                        (param_1,uVar31);
    if ((auVar32._0_8_ & 1) == 0) {
      return auVar32;
    }
    plVar30 = (long *)(param_1 + 0x10);
    if ((*plVar30 != 0) && (lVar29 = *(long *)(*plVar30 + 0x10), lVar29 != 0)) {
      System_Threading_Tasks_TaskCompletionSource_object___TrySetResult_1db6120
                (lVar29,uVar13,*(undefined8 *)PTR_DAT_057e81f0);
      *plVar30 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar2 = (ulong *)(((ulong)plVar30 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar30 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      auVar32._8_8_ = 0;
      auVar32._0_8_ = plVar30;
      return auVar32;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c23075 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789cd0);
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    bRam0000000005c23075 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  puVar5 = PTR_DAT_057f4dd8;
  puVar6 = PTR_DAT_05789cd0;
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) {
LAB_01489b14:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_EventSender__SendNotRequestedIAPStat_14654b4
            (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),uVar31,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar29 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                     (*(undefined8 *)puVar6);
  if (lVar29 == 0) goto LAB_01489b14;
  *(undefined8 *)(lVar29 + 0x10) = uVar31;
  FUN_012d0d74((undefined8 *)(lVar29 + 0x10),uVar31);
  *(undefined8 *)(lVar29 + 0x18) = 0;
  *(undefined4 *)(lVar29 + 0x20) = 0;
  *(undefined2 *)(lVar29 + 0x24) = 0x100;
  *(undefined1 *)(lVar29 + 0x26) = 1;
  puVar6 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2ec59 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2938,0);
    FUN_012d0dc8(PTR_DAT_057763b0);
    FUN_012d0dc8(PTR_DAT_0576b2f0);
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_057b4008);
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_057d9600);
    FUN_012d0dc8(PTR_DAT_0579b5c0);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_057c3020);
    FUN_012d0dc8(PTR_DAT_0576dc60);
    FUN_012d0dc8(PTR_DAT_05815878);
    FUN_012d0dc8(PTR_DAT_057f6180);
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_057a1840);
    FUN_012d0dc8(PTR_DAT_057b7a50);
    FUN_012d0dc8(PTR_DAT_0576b260);
    FUN_012d0dc8(PTR_DAT_057d5558);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579e488);
    FUN_012d0dc8(PTR_DAT_057ee4a0);
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_0581bc18);
    bRam0000000005c2ec59 = 1;
  }
  lStack_68 = 0;
  uStack_74 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_8c = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar14 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar14 == 0))
  goto LAB_02c046dc;
  lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar14,*(undefined8 *)PTR_DAT_057b7a50);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar15 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar15 == 0))
  goto LAB_02c046dc;
  lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar15,*(undefined8 *)PTR_DAT_057bc6b0);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar16 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar16 == 0))
  goto LAB_02c046dc;
  lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar16,*(undefined8 *)PTR_DAT_0581b878);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar17 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar17 == 0))
  goto LAB_02c046dc;
  lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar17,*(undefined8 *)PTR_DAT_057a2938);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar18 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar18 == 0))
  goto LAB_02c046dc;
  lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar18,*(undefined8 *)PTR_DAT_0579b5c0);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar19 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar19 == 0))
  goto LAB_02c046dc;
  lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar19,*(undefined8 *)PTR_DAT_057b4008);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar20 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar20 == 0))
  goto LAB_02c046dc;
  lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar20,*(undefined8 *)PTR_DAT_057a1840);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar21 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar21 == 0))
  goto LAB_02c046dc;
  lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar21,*(undefined8 *)PTR_DAT_057a4fb0);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar22 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar22 == 0))
  goto LAB_02c046dc;
  lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar22,*(undefined8 *)PTR_DAT_05815878);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar23 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar23 == 0))
  goto LAB_02c046dc;
  lVar23 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar23,*(undefined8 *)PTR_DAT_057f6180);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar24 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar24 == 0))
  goto LAB_02c046dc;
  lVar24 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar24,*(undefined8 *)PTR_DAT_0576b2f0);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar25 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar25 == 0))
  goto LAB_02c046dc;
  lVar25 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar25,*(undefined8 *)PTR_DAT_0576dc60);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar26 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar26 == 0))
  goto LAB_02c046dc;
  lVar26 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar26,*(undefined8 *)PTR_DAT_057d5558);
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar27 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar27 == 0))
  goto LAB_02c046dc;
  lVar27 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar27,*(undefined8 *)PTR_DAT_057dc218);
  if (((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
      (lVar28 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar28 == 0)) ||
     (lVar28 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar28,*(undefined8 *)PTR_DAT_057c3020), puVar7 = PTR_DAT_057d6f00,
     puVar5 = PTR_DAT_0575eb20, lVar14 == 0)) goto LAB_02c046dc;
  puVar1 = (undefined8 *)(lVar29 + 0x10);
  uVar12 = Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetCoinStoreBundle_2461c24
                     (lVar14,*puVar1,&lStack_68,&uStack_74,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetSpecialStoreBundle_2461ca0
                       (lVar14,*puVar1,&lStack_80,0);
    if ((uVar12 & 1) != 0) {
      if (lStack_80 == 0) goto LAB_02c046dc;
      uVar31 = Modules_Contexts_Home_Store_Scripts_StoreModelService__SetCurrentOfferRank_2461da0
                         (lVar14,*(undefined4 *)(lStack_80 + 0x24),0);
      uVar31 = Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__GetRewards_2b047f0
                         (uVar31,lStack_80);
      if ((*(char *)(lVar29 + 0x25) == '\0') && (*(char *)(lVar29 + 0x24) == '\0')) {
        if (lVar15 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                  (lVar15,3,uVar31,0);
      }
      else {
        if (lVar15 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
                  (lVar15,3,uVar31,0);
      }
      if (lVar24 == 0) goto LAB_02c046dc;
      uVar10 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__ShouldCloseAds_2b046e0
                         (lVar24,lStack_80);
      lVar15 = lStack_80;
      goto joined_r0x02c03a6c;
    }
    uVar12 = Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetPermanentStoreBundle_2461d24
                       (lVar14,*puVar1,&lStack_88,&uStack_8c,0);
    if ((uVar12 & 1) != 0) {
      uVar8 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetMaxPurchasedBundleIndex_2461e10
                        (lVar14,0);
      uVar9 = uStack_8c;
      lVar19 = *(long *)puVar7;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar19);
      }
      uVar9 = System_Math__Max_26cd24c(uVar8,uVar9,0);
      Modules_Contexts_Home_Store_Scripts_StoreModelService__SetMaxPurchasedBundleIndex_2461dec
                (lVar14,uVar9,0);
      if (lVar24 == 0) goto LAB_02c046dc;
      uVar12 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__IsNoAdsAvailableInBundle_2b04ba4
                         (lVar24,lStack_88);
      uVar31 = Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__GetRewards_2b04bbc
                         (uVar12,lStack_88);
      if ((*(char *)(lVar29 + 0x25) == '\0') && (*(char *)(lVar29 + 0x24) == '\0')) {
        if (lVar15 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                  (lVar15,3,uVar31,0);
        if ((uVar12 & 1) != 0) {
          lVar19 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if (lVar19 == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar19,0);
          *(undefined8 *)(lVar19 + 0x10) = _UNK_04394cd8;
          Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkReward_3ce9518
                    (lVar15,3,lVar19,0);
          if (lVar17 == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Ads_Scripts_AdService__HideBanner_1b5f5c4(lVar17,0);
        }
      }
      else {
        if (lVar15 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
                  (lVar15,3,uVar31,0);
      }
      uVar10 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__ShouldCloseAds_2b046e0
                         (lVar24,lStack_88);
      if (lStack_88 == 0) goto LAB_02c046dc;
      lVar15 = *(long *)(lStack_88 + 0x10);
      goto LAB_02c03a74;
    }
    if ((lVar19 == 0) ||
       (lVar15 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetUniqueIAPs_3469354
                           (lVar19,0), puVar5 = PTR_DAT_0579e488, lVar15 == 0)) goto LAB_02c046dc;
    uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                       (lVar15,*puVar1,&lStack_98,*(undefined8 *)PTR_DAT_0579e488);
    puVar7 = PTR_DAT_057ece38;
    if ((uVar12 & 1) != 0) {
      if (lVar16 == 0) goto LAB_02c046dc;
      uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                         (lVar16,*puVar1,&uStack_a0,0);
      if ((uVar12 & 1) != 0) {
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalPurchaseStat_14632f0
                  (**(long **)(*(long *)puVar7 + 0xb8),uStack_a0,0);
      }
      uVar12 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__HasStepRewardInEventCache_346980c
                         (lVar19,0);
      if ((uVar12 & 1) == 0) {
        Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__ClaimWithFallbackStepsForUniqueInApps_3469f44
                  (lVar19,*puVar1,0);
        lVar15 = lStack_98;
      }
      else {
        Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__ClaimStepRewards_346987c
                  (lVar19,0);
        lVar15 = lStack_98;
      }
      goto joined_r0x02c03f78;
    }
    if ((lVar20 == 0) ||
       (lVar15 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferUniqueIAPs_3596110
                           (lVar20,0), lVar15 == 0)) goto LAB_02c046dc;
    uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                       (lVar15,*puVar1,&lStack_a8,*(undefined8 *)puVar5);
    if ((uVar12 & 1) == 0) {
      if ((lVar21 == 0) ||
         (lVar15 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetChooseOneSpecialOfferUniqueIAPs_20ad10c
                             (lVar21,0), lVar15 == 0)) goto LAB_02c046dc;
      uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar15,*puVar1,&lStack_b8,*(undefined8 *)puVar5);
      if ((uVar12 & 1) != 0) {
        uVar9 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetPackageIdByProductId_20adda0
                          (lVar21,*puVar1,0);
        if (lVar16 == 0) goto LAB_02c046dc;
        uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar16,*puVar1,&uStack_c0,0);
        if ((uVar12 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePurchasedEvent_1470154
                    (**(long **)(*(long *)puVar7 + 0xb8),uStack_c0,uVar9,lStack_b8,0);
        }
        Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClaimPurchasedChooseOneSpecialOfferRewards_20ad2d8
                  (lVar21,*(undefined8 *)(lVar29 + 0x10),*(undefined1 *)(lVar29 + 0x24),0);
        if ((lStack_b8 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
        Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
                  (*(undefined4 *)(lStack_b8 + 0x1c),lVar18,0);
        if (*(long *)(lVar21 + 0x18) == 0) goto LAB_02c046dc;
        Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__UpdateState_20ace34
                  (*(long *)(lVar21 + 0x18),0);
        goto LAB_02c03a90;
      }
      if ((lVar22 == 0) ||
         (lVar15 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetOnePlusFreeOfferUniqueIAPs_358c318
                             (lVar22,0), lVar15 == 0)) goto LAB_02c046dc;
      uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar15,*puVar1,&lStack_c8,*(undefined8 *)puVar5);
      if ((uVar12 & 1) != 0) {
        if (lVar16 == 0) goto LAB_02c046dc;
        uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar16,*puVar1,&uStack_d0,0);
        if ((uVar12 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchasedEvent_14708b8
                    (**(long **)(*(long *)puVar7 + 0xb8),uStack_d0,lStack_c8,0);
        }
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimPurchasedOnePlusFreeOfferRewards_358c4e4
                  (lVar22,*(undefined8 *)(lVar29 + 0x10),*(undefined1 *)(lVar29 + 0x24),0);
        if ((lStack_c8 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
        Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
                  (*(undefined4 *)(lStack_c8 + 0x1c),lVar18,0);
        if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02c046dc;
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__UpdateState_358bf5c
                  (*(long *)(lVar22 + 0x18),0);
        goto LAB_02c03a90;
      }
      if ((lVar23 == 0) ||
         (lVar15 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetUniqueIAPConfigModels_3473128
                             (lVar23,0), lVar15 == 0)) goto LAB_02c046dc;
      uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar15,*puVar1,&lStack_d8,*(undefined8 *)puVar5);
      if ((uVar12 & 1) != 0) {
        uVar31 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPurchaseOffer_3472f50
                           (lVar23,*puVar1,&uStack_e0,0);
        if (lStack_d8 == 0) goto LAB_02c046dc;
        Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__ClaimRewards_2b04f70
                  (*(undefined4 *)(lStack_d8 + 0x1c),uVar31,uStack_e0,*(undefined1 *)(lVar29 + 0x24)
                   ,0x14,0);
        goto LAB_02c03a90;
      }
      if (lVar25 == 0) goto LAB_02c046dc;
      uVar12 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryGetIAPModel_34647e0
                         (lVar25,*puVar1,&lStack_e8,0);
      if ((uVar12 & 1) != 0) {
        if (lVar16 == 0) goto LAB_02c046dc;
        uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar16,*puVar1,&uStack_f0,0);
        if ((uVar12 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendNoAdsOfferPurchasedStat_146f6c8
                    (**(long **)(*(long *)puVar7 + 0xb8),uStack_f0,0);
        }
        if (lStack_e8 == 0) goto LAB_02c046dc;
        uVar9 = *(undefined4 *)(lStack_e8 + 0x1c);
        uVar31 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetRewards_3464470
                           (lVar25,0);
        Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__ClaimRewards_2b04f70
                  (uVar9,uVar31,uVar31,*(undefined1 *)(lVar29 + 0x24),0x1b,1);
        if (lVar17 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Ads_Scripts_AdService__HideBanner_1b5f5c4(lVar17,0);
        Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Claim_3464864
                  (lVar25,0);
        goto LAB_02c03a90;
      }
      if ((lVar26 == 0) ||
         (lVar15 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetUniqueIAPConfigModels_3305358
                             (lVar26,0), lVar15 == 0)) goto LAB_02c046dc;
      uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar15,*puVar1,&uStack_f8,*(undefined8 *)puVar5);
      if ((uVar12 & 1) == 0) {
        if ((lVar27 == 0) ||
           (lVar15 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUniqueIAPConfigModels_38dc048
                               (lVar27,0), lVar15 == 0)) goto LAB_02c046dc;
        uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                           (lVar15,*puVar1,&lStack_108,*(undefined8 *)puVar5);
        if ((uVar12 & 1) == 0) {
          if ((lVar28 == 0) ||
             (lVar15 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetUniqueIAPConfigModels_20b5908
                                 (lVar28,0), lVar15 == 0)) goto LAB_02c046dc;
          uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                             (lVar15,*puVar1,&lStack_118,*(undefined8 *)puVar5);
          if ((uVar12 & 1) == 0) {
            lVar15 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ee4a0);
            if (lVar15 == 0) goto LAB_02c046dc;
            System_Exception___ctor_23a6458(lVar15,*(undefined8 *)PTR_DAT_0581bc18,0);
            Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseCrashlyticsWrapper__LogException_1cb4458
                      (lVar15,0);
          }
          else {
            if (lVar16 == 0) goto LAB_02c046dc;
            uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                               (lVar16,*puVar1,&uStack_120,0);
            if ((uVar12 & 1) != 0) {
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
              Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameOfferPurchasedStat_148a3d0
                        (**(long **)(*(long *)puVar7 + 0xb8),0);
            }
            uVar12 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__IsOfferEnabled_20b73f8
                               (lVar28,0);
            if ((uVar12 & 1) == 0) {
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
              Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGamePurchasedFallback_148a924
                        (**(long **)(*(long *)puVar7 + 0xb8),0);
            }
            else {
              lVar15 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__TridentOfferPurchased_20b7604
                                 (lVar28,0);
              if ((lVar15 != 0) && (*(int *)(lVar15 + 0x18) != 0)) {
                if (lStack_118 == 0) goto LAB_02c046dc;
                Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__ClaimRewards_2b04f70
                          (*(undefined4 *)(lStack_118 + 0x1c),lVar15,lVar15,
                           *(undefined1 *)(lVar29 + 0x24),0x35,0);
              }
              if ((lStack_118 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
              uVar9 = *(undefined4 *)(lStack_118 + 0x1c);
LAB_02c04624:
              Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
                        (uVar9,lVar18,0);
            }
          }
          goto LAB_02c03a90;
        }
        if (lVar16 == 0) goto LAB_02c046dc;
        uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar16,*puVar1,&uStack_110,0);
        if (((uVar12 & 1) != 0) && (*(char *)(lVar29 + 0x25) != '\0')) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedEvent_147d6b4
                    (**(long **)(*(long *)puVar7 + 0xb8),6,0);
        }
        uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsEventActive_38dc758
                           (lVar27,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsTimeUp_38de42c
                             (lVar27,0);
          if (((uVar12 & 1) == 0) &&
             (uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsClaimedLocally_38dbf70
                                 (lVar27,0), (uVar12 & 1) == 0)) {
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
            Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedFallback_14800c8
                      (**(long **)(*(long *)puVar7 + 0xb8),0);
            goto LAB_02c03a90;
          }
          Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GiveUnclaimedRewardsDirectly_38dddc4
                    (lVar27,0);
          Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__MarkEventAsClaimedLocally_38de93c
                    (lVar27,0);
          lVar15 = lStack_108;
        }
        else {
          Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__MarkPassAsActivated_38dc43c
                    (lVar27,0);
          lVar15 = lStack_108;
        }
joined_r0x02c03f78:
        if ((lVar15 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
        uVar9 = *(undefined4 *)(lVar15 + 0x1c);
      }
      else {
        if (lVar16 == 0) goto LAB_02c046dc;
        uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar16,*puVar1,&uStack_100,0);
        if ((uVar12 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedStat_147ad9c
                    (**(long **)(*(long *)puVar7 + 0xb8),0);
        }
        if (*(long *)(lVar26 + 0x18) == 0) goto LAB_02c046dc;
        uVar12 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillStateService__IsInProgress_3305c98
                           (*(long *)(lVar26 + 0x18),0);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(lVar26 + 0x18) == 0) goto LAB_02c046dc;
          uVar10 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillStateService__GetEventState_3306890
                             (*(long *)(lVar26 + 0x18),0);
          if ((uVar10 | 2) != 7) {
            if (*(long *)(lVar26 + 0x18) == 0) goto LAB_02c046dc;
            iVar11 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillStateService__GetEventState_3306890
                               (*(long *)(lVar26 + 0x18),0);
            if (iVar11 == 6) {
              Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__ClaimEligibleRewardsDirectly_330485c
                        (lVar26,0);
              lVar15 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegmentedIAPConfigModel_3303b5c
                                 (lVar26,0);
              if ((lVar15 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
              uVar9 = *(undefined4 *)(lVar15 + 0x1c);
              goto LAB_02c04624;
            }
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
            Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedFallback_147bac0
                      (**(long **)(*(long *)puVar7 + 0xb8),0);
            goto LAB_02c03a90;
          }
        }
        Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__SetPurchased_3305298
                  (lVar26,0);
        lVar15 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegmentedIAPConfigModel_3303b5c
                           (lVar26,0);
        if ((lVar15 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
        uVar9 = *(undefined4 *)(lVar15 + 0x1c);
      }
      uVar10 = 0;
      goto LAB_02c03a8c;
    }
    if (lVar16 == 0) goto LAB_02c046dc;
    uVar12 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                       (lVar16,*puVar1,&uStack_b0,0);
    if ((uVar12 & 1) != 0) {
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_02c046dc;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferPurchasedStat_14648e0
                (**(long **)(*(long *)puVar7 + 0xb8),uStack_b0,0);
    }
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClaimPurchasedSpecialOfferRewards_35962d4
              (lVar20,*(undefined8 *)(lVar29 + 0x10),*(undefined1 *)(lVar29 + 0x24),0);
    if ((lStack_a8 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
    Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
              (*(undefined4 *)(lStack_a8 + 0x1c),lVar18,0);
    if (*(long *)(lVar20 + 0x18) == 0) goto LAB_02c046dc;
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__UpdateState_3595ce4
              (*(long *)(lVar20 + 0x18),0);
  }
  else {
    uVar8 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetMaxPurchasedBundleIndex_2461e10
                      (lVar14,0);
    uVar9 = uStack_74;
    lVar17 = *(long *)puVar7;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar17);
    }
    uVar9 = System_Math__Max_26cd24c(uVar8,uVar9,0);
    Modules_Contexts_Home_Store_Scripts_StoreModelService__SetMaxPurchasedBundleIndex_2461dec
              (lVar14,uVar9,0);
    lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if ((lVar17 == 0) ||
       (Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar17,0),
       lStack_68 == 0)) goto LAB_02c046dc;
    uVar9 = *(undefined4 *)(lStack_68 + 0x18);
    *(undefined4 *)(lVar17 + 0x10) = 1;
    *(undefined4 *)(lVar17 + 0x14) = uVar9;
    if ((*(char *)(lVar29 + 0x25) == '\0') && (*(char *)(lVar29 + 0x24) == '\0')) {
      lVar19 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
      puVar5 = PTR_DAT_05766c50;
      if (lVar19 == 0) goto LAB_02c046dc;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar19,*(undefined8 *)PTR_DAT_057994c8)
      ;
      lVar20 = *(long *)(lVar19 + 0x10);
      lVar21 = *(long *)puVar5;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_02c046dc;
      uVar10 = *(uint *)(lVar19 + 0x18);
      if (uVar10 < *(uint *)(lVar20 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar10 + 1;
        plVar30 = (long *)(lVar20 + (long)(int)uVar10 * 8 + 0x20);
        *plVar30 = lVar17;
        FUN_012d0d74(plVar30,lVar17);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar19,lVar17);
      }
      if (lVar15 == 0) goto LAB_02c046dc;
      Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                (lVar15,3,lVar19,0);
    }
    else {
      if (lVar15 == 0) goto LAB_02c046dc;
      Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyReward_3ce7f84
                (lVar15,3,lVar17,0);
    }
    if (lVar24 == 0) goto LAB_02c046dc;
    uVar10 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__ShouldCloseAds_2b046e0
                       (lVar24,lStack_68);
    lVar15 = lStack_68;
joined_r0x02c03a6c:
    if (lVar15 == 0) goto LAB_02c046dc;
    lVar15 = *(long *)(lVar15 + 0x10);
LAB_02c03a74:
    if ((lVar15 == 0) || (lVar18 == 0)) goto LAB_02c046dc;
    uVar9 = *(undefined4 *)(lVar15 + 0x1c);
    uVar10 = uVar10 & 1;
LAB_02c03a8c:
    Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
              (uVar9,lVar18,uVar10);
  }
LAB_02c03a90:
  if (*(char *)(lVar29 + 0x26) != '\0') {
    uVar31 = *(undefined8 *)(lVar29 + 0x10);
    if (*(char *)(lVar29 + 0x27) != '\0') {
      if (((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar15 == 0)) ||
         (lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar15,*(undefined8 *)PTR_DAT_057f83f8), lVar15 == 0))
      goto LAB_02c046dc;
      lVar17 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct_31617a4
                         (lVar15,*puVar1,0);
      if (lVar17 != 0) {
        uVar31 = *(undefined8 *)(lVar17 + 0x18);
      }
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnWebShopPurchaseSucceeded_316c608
                (lVar15,0);
    }
    if (((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
        (lVar15 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar15 == 0)) ||
       (lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar15,*(undefined8 *)PTR_DAT_057d9600), lVar15 == 0))
    goto LAB_02c046dc;
    uVar12 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldSkipSendingEventToAdjust_138eb6c
                       (lVar15,*(undefined1 *)(lVar29 + 0x27),0);
    if ((uVar12 & 1) == 0) {
      if (((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar15 == 0)) ||
         (lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar15,*(undefined8 *)PTR_DAT_057763b0), lVar15 == 0))
      goto LAB_02c046dc;
      Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatSender__SendIAPStat_3e29dfc
                (lVar15,uVar31,0);
    }
  }
  if (((**(long **)(*(long *)puVar6 + 0xb8) != 0) &&
      (lVar15 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar15 != 0)) &&
     (lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar15,*(undefined8 *)PTR_DAT_0576b260), puVar6 = PTR_DAT_05798298,
     lVar15 != 0)) {
    Modules_Contexts_Application_ServerCommunication_Scripts_SyncService__TrySyncAllData_3e33320
              (lVar15,1,0);
    Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__SendInAppPurchaseEvent_2b05084
              (lVar29,lVar16,lVar14);
    uVar31 = extraout_x1;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      uVar31 = extraout_x1_00;
    }
    if (cRam0000000005c244b5 == '\0') {
      FUN_012d0dc8(PTR_DAT_05798298);
      cRam0000000005c244b5 = '\x01';
      uVar31 = extraout_x1_01;
    }
    lVar29 = *(long *)puVar6;
    if (*(int *)(lVar29 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar29 = *(long *)puVar6;
      uVar31 = extraout_x1_02;
    }
    auVar33._0_8_ = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x30);
    auVar33._8_8_ = uVar31;
    return auVar33;
  }
LAB_02c046dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

