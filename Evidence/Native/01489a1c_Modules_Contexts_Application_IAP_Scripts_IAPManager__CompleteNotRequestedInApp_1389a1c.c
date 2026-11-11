/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$CompleteNotRequestedInApp
void Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteNotRequestedInApp (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, bool verified, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$CompleteNotRequestedInApp
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteNotRequestedInApp
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, bool
   verified, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteNotRequestedInApp_1389a1c
          (long param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
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
  puVar2 = PTR_DAT_057f4dd8;
  puVar3 = PTR_DAT_05789cd0;
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) {
LAB_01489b14:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_EventSender__SendNotRequestedIAPStat_14654b4
            (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar9 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                    (*(undefined8 *)puVar3);
  if (lVar9 == 0) goto LAB_01489b14;
  *(undefined8 *)(lVar9 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(lVar9 + 0x10),param_2);
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined2 *)(lVar9 + 0x24) = 0x100;
  *(byte *)(lVar9 + 0x26) = param_3 & 1;
  puVar3 = PTR_DAT_0576aae0;
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
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar10 == 0))
  goto LAB_02c046dc;
  lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar10,*(undefined8 *)PTR_DAT_057b7a50);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 == 0))
  goto LAB_02c046dc;
  lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar11,*(undefined8 *)PTR_DAT_057bc6b0);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar12 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar12 == 0))
  goto LAB_02c046dc;
  lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar12,*(undefined8 *)PTR_DAT_0581b878);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar13 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar13 == 0))
  goto LAB_02c046dc;
  lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar13,*(undefined8 *)PTR_DAT_057a2938);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar14 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar14 == 0))
  goto LAB_02c046dc;
  lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar14,*(undefined8 *)PTR_DAT_0579b5c0);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar15 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar15 == 0))
  goto LAB_02c046dc;
  lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar15,*(undefined8 *)PTR_DAT_057b4008);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar16 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar16 == 0))
  goto LAB_02c046dc;
  lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar16,*(undefined8 *)PTR_DAT_057a1840);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar17 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar17 == 0))
  goto LAB_02c046dc;
  lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar17,*(undefined8 *)PTR_DAT_057a4fb0);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar18 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar18 == 0))
  goto LAB_02c046dc;
  lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar18,*(undefined8 *)PTR_DAT_05815878);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar19 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar19 == 0))
  goto LAB_02c046dc;
  lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar19,*(undefined8 *)PTR_DAT_057f6180);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar20 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar20 == 0))
  goto LAB_02c046dc;
  lVar20 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar20,*(undefined8 *)PTR_DAT_0576b2f0);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar21 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar21 == 0))
  goto LAB_02c046dc;
  lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar21,*(undefined8 *)PTR_DAT_0576dc60);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar22 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar22 == 0))
  goto LAB_02c046dc;
  lVar22 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar22,*(undefined8 *)PTR_DAT_057d5558);
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
     (lVar23 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar23 == 0))
  goto LAB_02c046dc;
  lVar23 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar23,*(undefined8 *)PTR_DAT_057dc218);
  if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
      (lVar24 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar24 == 0)) ||
     (lVar24 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar24,*(undefined8 *)PTR_DAT_057c3020), puVar4 = PTR_DAT_057d6f00,
     puVar2 = PTR_DAT_0575eb20, lVar10 == 0)) goto LAB_02c046dc;
  puVar1 = (undefined8 *)(lVar9 + 0x10);
  uVar25 = Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetCoinStoreBundle_2461c24
                     (lVar10,*puVar1,&lStack_68,&uStack_74,0);
  if ((uVar25 & 1) == 0) {
    uVar25 = Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetSpecialStoreBundle_2461ca0
                       (lVar10,*puVar1,&lStack_80,0);
    if ((uVar25 & 1) != 0) {
      if (lStack_80 == 0) goto LAB_02c046dc;
      uVar27 = Modules_Contexts_Home_Store_Scripts_StoreModelService__SetCurrentOfferRank_2461da0
                         (lVar10,*(undefined4 *)(lStack_80 + 0x24),0);
      uVar27 = Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__GetRewards_2b047f0
                         (uVar27,lStack_80);
      if ((*(char *)(lVar9 + 0x25) == '\0') && (*(char *)(lVar9 + 0x24) == '\0')) {
        if (lVar11 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                  (lVar11,3,uVar27,0);
      }
      else {
        if (lVar11 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
                  (lVar11,3,uVar27,0);
      }
      if (lVar20 == 0) goto LAB_02c046dc;
      uVar7 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__ShouldCloseAds_2b046e0
                        (lVar20,lStack_80);
      lVar11 = lStack_80;
      goto joined_r0x02c03a6c;
    }
    uVar25 = Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetPermanentStoreBundle_2461d24
                       (lVar10,*puVar1,&lStack_88,&uStack_8c,0);
    if ((uVar25 & 1) != 0) {
      uVar5 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetMaxPurchasedBundleIndex_2461e10
                        (lVar10,0);
      uVar6 = uStack_8c;
      lVar15 = *(long *)puVar4;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar15);
      }
      uVar6 = System_Math__Max_26cd24c(uVar5,uVar6,0);
      Modules_Contexts_Home_Store_Scripts_StoreModelService__SetMaxPurchasedBundleIndex_2461dec
                (lVar10,uVar6,0);
      if (lVar20 == 0) goto LAB_02c046dc;
      uVar25 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__IsNoAdsAvailableInBundle_2b04ba4
                         (lVar20,lStack_88);
      uVar27 = Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__GetRewards_2b04bbc
                         (uVar25,lStack_88);
      if ((*(char *)(lVar9 + 0x25) == '\0') && (*(char *)(lVar9 + 0x24) == '\0')) {
        if (lVar11 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                  (lVar11,3,uVar27,0);
        if ((uVar25 & 1) != 0) {
          lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar15 == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar15,0);
          *(undefined8 *)(lVar15 + 0x10) = _UNK_04394cd8;
          Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkReward_3ce9518
                    (lVar11,3,lVar15,0);
          if (lVar13 == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Ads_Scripts_AdService__HideBanner_1b5f5c4(lVar13,0);
        }
      }
      else {
        if (lVar11 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
                  (lVar11,3,uVar27,0);
      }
      uVar7 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__ShouldCloseAds_2b046e0
                        (lVar20,lStack_88);
      if (lStack_88 == 0) goto LAB_02c046dc;
      lVar11 = *(long *)(lStack_88 + 0x10);
      goto LAB_02c03a74;
    }
    if ((lVar15 == 0) ||
       (lVar11 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetUniqueIAPs_3469354
                           (lVar15,0), puVar2 = PTR_DAT_0579e488, lVar11 == 0)) goto LAB_02c046dc;
    uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                       (lVar11,*puVar1,&lStack_98,*(undefined8 *)PTR_DAT_0579e488);
    puVar4 = PTR_DAT_057ece38;
    if ((uVar25 & 1) != 0) {
      if (lVar12 == 0) goto LAB_02c046dc;
      uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                         (lVar12,*puVar1,&uStack_a0,0);
      if ((uVar25 & 1) != 0) {
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalPurchaseStat_14632f0
                  (**(long **)(*(long *)puVar4 + 0xb8),uStack_a0,0);
      }
      uVar25 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__HasStepRewardInEventCache_346980c
                         (lVar15,0);
      if ((uVar25 & 1) == 0) {
        Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__ClaimWithFallbackStepsForUniqueInApps_3469f44
                  (lVar15,*puVar1,0);
        lVar11 = lStack_98;
      }
      else {
        Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__ClaimStepRewards_346987c
                  (lVar15,0);
        lVar11 = lStack_98;
      }
      goto joined_r0x02c03f78;
    }
    if ((lVar16 == 0) ||
       (lVar11 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferUniqueIAPs_3596110
                           (lVar16,0), lVar11 == 0)) goto LAB_02c046dc;
    uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                       (lVar11,*puVar1,&lStack_a8,*(undefined8 *)puVar2);
    if ((uVar25 & 1) == 0) {
      if ((lVar17 == 0) ||
         (lVar11 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetChooseOneSpecialOfferUniqueIAPs_20ad10c
                             (lVar17,0), lVar11 == 0)) goto LAB_02c046dc;
      uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar11,*puVar1,&lStack_b8,*(undefined8 *)puVar2);
      if ((uVar25 & 1) != 0) {
        uVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetPackageIdByProductId_20adda0
                          (lVar17,*puVar1,0);
        if (lVar12 == 0) goto LAB_02c046dc;
        uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar12,*puVar1,&uStack_c0,0);
        if ((uVar25 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePurchasedEvent_1470154
                    (**(long **)(*(long *)puVar4 + 0xb8),uStack_c0,uVar6,lStack_b8,0);
        }
        Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClaimPurchasedChooseOneSpecialOfferRewards_20ad2d8
                  (lVar17,*(undefined8 *)(lVar9 + 0x10),*(undefined1 *)(lVar9 + 0x24),0);
        if ((lStack_b8 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
        Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
                  (*(undefined4 *)(lStack_b8 + 0x1c),lVar14,0);
        if (*(long *)(lVar17 + 0x18) == 0) goto LAB_02c046dc;
        Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__UpdateState_20ace34
                  (*(long *)(lVar17 + 0x18),0);
        goto LAB_02c03a90;
      }
      if ((lVar18 == 0) ||
         (lVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetOnePlusFreeOfferUniqueIAPs_358c318
                             (lVar18,0), lVar11 == 0)) goto LAB_02c046dc;
      uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar11,*puVar1,&lStack_c8,*(undefined8 *)puVar2);
      if ((uVar25 & 1) != 0) {
        if (lVar12 == 0) goto LAB_02c046dc;
        uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar12,*puVar1,&uStack_d0,0);
        if ((uVar25 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchasedEvent_14708b8
                    (**(long **)(*(long *)puVar4 + 0xb8),uStack_d0,lStack_c8,0);
        }
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimPurchasedOnePlusFreeOfferRewards_358c4e4
                  (lVar18,*(undefined8 *)(lVar9 + 0x10),*(undefined1 *)(lVar9 + 0x24),0);
        if ((lStack_c8 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
        Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
                  (*(undefined4 *)(lStack_c8 + 0x1c),lVar14,0);
        if (*(long *)(lVar18 + 0x18) == 0) goto LAB_02c046dc;
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__UpdateState_358bf5c
                  (*(long *)(lVar18 + 0x18),0);
        goto LAB_02c03a90;
      }
      if ((lVar19 == 0) ||
         (lVar11 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetUniqueIAPConfigModels_3473128
                             (lVar19,0), lVar11 == 0)) goto LAB_02c046dc;
      uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar11,*puVar1,&lStack_d8,*(undefined8 *)puVar2);
      if ((uVar25 & 1) != 0) {
        uVar27 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPurchaseOffer_3472f50
                           (lVar19,*puVar1,&uStack_e0,0);
        if (lStack_d8 == 0) goto LAB_02c046dc;
        Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__ClaimRewards_2b04f70
                  (*(undefined4 *)(lStack_d8 + 0x1c),uVar27,uStack_e0,*(undefined1 *)(lVar9 + 0x24),
                   0x14,0);
        goto LAB_02c03a90;
      }
      if (lVar21 == 0) goto LAB_02c046dc;
      uVar25 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryGetIAPModel_34647e0
                         (lVar21,*puVar1,&lStack_e8,0);
      if ((uVar25 & 1) != 0) {
        if (lVar12 == 0) goto LAB_02c046dc;
        uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar12,*puVar1,&uStack_f0,0);
        if ((uVar25 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendNoAdsOfferPurchasedStat_146f6c8
                    (**(long **)(*(long *)puVar4 + 0xb8),uStack_f0,0);
        }
        if (lStack_e8 == 0) goto LAB_02c046dc;
        uVar6 = *(undefined4 *)(lStack_e8 + 0x1c);
        uVar27 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetRewards_3464470
                           (lVar21,0);
        Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__ClaimRewards_2b04f70
                  (uVar6,uVar27,uVar27,*(undefined1 *)(lVar9 + 0x24),0x1b,1);
        if (lVar13 == 0) goto LAB_02c046dc;
        Modules_Contexts_Application_Ads_Scripts_AdService__HideBanner_1b5f5c4(lVar13,0);
        Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Claim_3464864
                  (lVar21,0);
        goto LAB_02c03a90;
      }
      if ((lVar22 == 0) ||
         (lVar11 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetUniqueIAPConfigModels_3305358
                             (lVar22,0), lVar11 == 0)) goto LAB_02c046dc;
      uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                         (lVar11,*puVar1,&uStack_f8,*(undefined8 *)puVar2);
      if ((uVar25 & 1) == 0) {
        if ((lVar23 == 0) ||
           (lVar11 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUniqueIAPConfigModels_38dc048
                               (lVar23,0), lVar11 == 0)) goto LAB_02c046dc;
        uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                           (lVar11,*puVar1,&lStack_108,*(undefined8 *)puVar2);
        if ((uVar25 & 1) == 0) {
          if ((lVar24 == 0) ||
             (lVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetUniqueIAPConfigModels_20b5908
                                 (lVar24,0), lVar11 == 0)) goto LAB_02c046dc;
          uVar25 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                             (lVar11,*puVar1,&lStack_118,*(undefined8 *)puVar2);
          if ((uVar25 & 1) == 0) {
            lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ee4a0);
            if (lVar11 == 0) goto LAB_02c046dc;
            System_Exception___ctor_23a6458(lVar11,*(undefined8 *)PTR_DAT_0581bc18,0);
            Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseCrashlyticsWrapper__LogException_1cb4458
                      (lVar11,0);
          }
          else {
            if (lVar12 == 0) goto LAB_02c046dc;
            uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                               (lVar12,*puVar1,&uStack_120,0);
            if ((uVar25 & 1) != 0) {
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
              Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameOfferPurchasedStat_148a3d0
                        (**(long **)(*(long *)puVar4 + 0xb8),0);
            }
            uVar25 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__IsOfferEnabled_20b73f8
                               (lVar24,0);
            if ((uVar25 & 1) == 0) {
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
              Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGamePurchasedFallback_148a924
                        (**(long **)(*(long *)puVar4 + 0xb8),0);
            }
            else {
              lVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__TridentOfferPurchased_20b7604
                                 (lVar24,0);
              if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
                if (lStack_118 == 0) goto LAB_02c046dc;
                Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__ClaimRewards_2b04f70
                          (*(undefined4 *)(lStack_118 + 0x1c),lVar11,lVar11,
                           *(undefined1 *)(lVar9 + 0x24),0x35,0);
              }
              if ((lStack_118 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
              uVar6 = *(undefined4 *)(lStack_118 + 0x1c);
LAB_02c04624:
              Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
                        (uVar6,lVar14,0);
            }
          }
          goto LAB_02c03a90;
        }
        if (lVar12 == 0) goto LAB_02c046dc;
        uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar12,*puVar1,&uStack_110,0);
        if (((uVar25 & 1) != 0) && (*(char *)(lVar9 + 0x25) != '\0')) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedEvent_147d6b4
                    (**(long **)(*(long *)puVar4 + 0xb8),6,0);
        }
        uVar25 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsEventActive_38dc758
                           (lVar23,0);
        if ((uVar25 & 1) == 0) {
          uVar25 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsTimeUp_38de42c
                             (lVar23,0);
          if (((uVar25 & 1) == 0) &&
             (uVar25 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsClaimedLocally_38dbf70
                                 (lVar23,0), (uVar25 & 1) == 0)) {
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
            Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicPassPurchasedFallback_14800c8
                      (**(long **)(*(long *)puVar4 + 0xb8),0);
            goto LAB_02c03a90;
          }
          Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GiveUnclaimedRewardsDirectly_38dddc4
                    (lVar23,0);
          Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__MarkEventAsClaimedLocally_38de93c
                    (lVar23,0);
          lVar11 = lStack_108;
        }
        else {
          Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__MarkPassAsActivated_38dc43c
                    (lVar23,0);
          lVar11 = lStack_108;
        }
joined_r0x02c03f78:
        if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
        uVar6 = *(undefined4 *)(lVar11 + 0x1c);
      }
      else {
        if (lVar12 == 0) goto LAB_02c046dc;
        uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                           (lVar12,*puVar1,&uStack_100,0);
        if ((uVar25 & 1) != 0) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedStat_147ad9c
                    (**(long **)(*(long *)puVar4 + 0xb8),0);
        }
        if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02c046dc;
        uVar25 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillStateService__IsInProgress_3305c98
                           (*(long *)(lVar22 + 0x18),0);
        if ((uVar25 & 1) == 0) {
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02c046dc;
          uVar7 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillStateService__GetEventState_3306890
                            (*(long *)(lVar22 + 0x18),0);
          if ((uVar7 | 2) != 7) {
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02c046dc;
            iVar8 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillStateService__GetEventState_3306890
                              (*(long *)(lVar22 + 0x18),0);
            if (iVar8 == 6) {
              Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__ClaimEligibleRewardsDirectly_330485c
                        (lVar22,0);
              lVar11 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegmentedIAPConfigModel_3303b5c
                                 (lVar22,0);
              if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
              uVar6 = *(undefined4 *)(lVar11 + 0x1c);
              goto LAB_02c04624;
            }
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
            Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedFallback_147bac0
                      (**(long **)(*(long *)puVar4 + 0xb8),0);
            goto LAB_02c03a90;
          }
        }
        Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__SetPurchased_3305298
                  (lVar22,0);
        lVar11 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegmentedIAPConfigModel_3303b5c
                           (lVar22,0);
        if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
        uVar6 = *(undefined4 *)(lVar11 + 0x1c);
      }
      uVar7 = 0;
      goto LAB_02c03a8c;
    }
    if (lVar12 == 0) goto LAB_02c046dc;
    uVar25 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                       (lVar12,*puVar1,&uStack_b0,0);
    if ((uVar25 & 1) != 0) {
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_02c046dc;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferPurchasedStat_14648e0
                (**(long **)(*(long *)puVar4 + 0xb8),uStack_b0,0);
    }
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClaimPurchasedSpecialOfferRewards_35962d4
              (lVar16,*(undefined8 *)(lVar9 + 0x10),*(undefined1 *)(lVar9 + 0x24),0);
    if ((lStack_a8 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
    Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
              (*(undefined4 *)(lStack_a8 + 0x1c),lVar14,0);
    if (*(long *)(lVar16 + 0x18) == 0) goto LAB_02c046dc;
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__UpdateState_3595ce4
              (*(long *)(lVar16 + 0x18),0);
  }
  else {
    uVar5 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetMaxPurchasedBundleIndex_2461e10
                      (lVar10,0);
    uVar6 = uStack_74;
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar13);
    }
    uVar6 = System_Math__Max_26cd24c(uVar5,uVar6,0);
    Modules_Contexts_Home_Store_Scripts_StoreModelService__SetMaxPurchasedBundleIndex_2461dec
              (lVar10,uVar6,0);
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar13 == 0) ||
       (Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar13,0),
       lStack_68 == 0)) goto LAB_02c046dc;
    uVar6 = *(undefined4 *)(lStack_68 + 0x18);
    *(undefined4 *)(lVar13 + 0x10) = 1;
    *(undefined4 *)(lVar13 + 0x14) = uVar6;
    if ((*(char *)(lVar9 + 0x25) == '\0') && (*(char *)(lVar9 + 0x24) == '\0')) {
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
      puVar2 = PTR_DAT_05766c50;
      if (lVar15 == 0) goto LAB_02c046dc;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar15,*(undefined8 *)PTR_DAT_057994c8)
      ;
      lVar16 = *(long *)(lVar15 + 0x10);
      lVar17 = *(long *)puVar2;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar16 == 0) goto LAB_02c046dc;
      uVar7 = *(uint *)(lVar15 + 0x18);
      if (uVar7 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar7 + 1;
        plVar26 = (long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
        *plVar26 = lVar13;
        FUN_012d0d74(plVar26,lVar13);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar15,lVar13);
      }
      if (lVar11 == 0) goto LAB_02c046dc;
      Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                (lVar11,3,lVar15,0);
    }
    else {
      if (lVar11 == 0) goto LAB_02c046dc;
      Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyReward_3ce7f84
                (lVar11,3,lVar13,0);
    }
    if (lVar20 == 0) goto LAB_02c046dc;
    uVar7 = Modules_Contexts_Home_Store_Scripts_BundleNoAdsAvailabilityService__ShouldCloseAds_2b046e0
                      (lVar20,lStack_68);
    lVar11 = lStack_68;
joined_r0x02c03a6c:
    if (lVar11 == 0) goto LAB_02c046dc;
    lVar11 = *(long *)(lVar11 + 0x10);
LAB_02c03a74:
    if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_02c046dc;
    uVar6 = *(undefined4 *)(lVar11 + 0x1c);
    uVar7 = uVar7 & 1;
LAB_02c03a8c:
    Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__RecordInAppPurchase_2b047a0
              (uVar6,lVar14,uVar7);
  }
LAB_02c03a90:
  if (*(char *)(lVar9 + 0x26) != '\0') {
    uVar27 = *(undefined8 *)(lVar9 + 0x10);
    if (*(char *)(lVar9 + 0x27) != '\0') {
      if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
          (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 == 0)) ||
         (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar11,*(undefined8 *)PTR_DAT_057f83f8), lVar11 == 0))
      goto LAB_02c046dc;
      lVar13 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetWebShopProduct_31617a4
                         (lVar11,*puVar1,0);
      if (lVar13 != 0) {
        uVar27 = *(undefined8 *)(lVar13 + 0x18);
      }
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnWebShopPurchaseSucceeded_316c608
                (lVar11,0);
    }
    if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
        (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 == 0)) ||
       (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_057d9600), lVar11 == 0))
    goto LAB_02c046dc;
    uVar25 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldSkipSendingEventToAdjust_138eb6c
                       (lVar11,*(undefined1 *)(lVar9 + 0x27),0);
    if ((uVar25 & 1) == 0) {
      if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
          (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 == 0)) ||
         (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar11,*(undefined8 *)PTR_DAT_057763b0), lVar11 == 0))
      goto LAB_02c046dc;
      Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatSender__SendIAPStat_3e29dfc
                (lVar11,uVar27,0);
    }
  }
  if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
      (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 != 0)) &&
     (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar11,*(undefined8 *)PTR_DAT_0576b260), puVar3 = PTR_DAT_05798298,
     lVar11 != 0)) {
    Modules_Contexts_Application_ServerCommunication_Scripts_SyncService__TrySyncAllData_3e33320
              (lVar11,1,0);
    Modules_Contexts_Home_Store_Scripts_ApplyPurchaseSuccessCommand__SendInAppPurchaseEvent_2b05084
              (lVar9,lVar12,lVar10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c244b5 == '\0') {
      FUN_012d0dc8(PTR_DAT_05798298);
      cRam0000000005c244b5 = '\x01';
    }
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar9 = *(long *)puVar3;
    }
    return *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30);
  }
LAB_02c046dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

