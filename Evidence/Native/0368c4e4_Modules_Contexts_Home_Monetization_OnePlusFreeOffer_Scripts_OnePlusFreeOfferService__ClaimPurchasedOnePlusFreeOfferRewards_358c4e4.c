/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ClaimPurchasedOnePlusFreeOfferRewards
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimPurchasedOnePlusFreeOfferRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, System_String_o* productId, bool giveRewardsWithoutAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01547e70) */
/* WARNING: Removing unreachable block (ram,0x01547e80) */
/* WARNING: Removing unreachable block (ram,0x01547e88) */
/* WARNING: Removing unreachable block (ram,0x01547eb0) */
/* WARNING: Removing unreachable block (ram,0x01547e94) */
/* WARNING: Removing unreachable block (ram,0x01547ea0) */
/* WARNING: Removing unreachable block (ram,0x01547ebc) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ClaimPurchasedOnePlusFreeOfferRewards
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimPurchasedOnePlusFreeOfferRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   System_String_o* productId, bool giveRewardsWithoutAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimPurchasedOnePlusFreeOfferRewards_358c4e4
               (long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPurchased_358a808
              (*(long *)(param_1 + 0x10),1);
    uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetPaidRewards_358c590
                       (param_1,param_2);
    if (*(long *)(param_1 + 0x30) != 0) {
      if ((param_3 & 1) == 0) {
        Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
                  (*(long *)(param_1 + 0x30),0x3e,uVar11,0);
      }
      else {
        Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc();
      }
      *(undefined1 *)(param_1 + 0x60) = 1;
      if (cRam0000000005c230a8 == '\0') {
                    /* try { // try from 0368c558 to 0378c56f has its CatchHandler @ 0368c7a8 */
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar2 = PTR_DAT_057c8a60;
      lVar12 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      if (lVar12 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 100);
        if ((bRam0000000005c237ea & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575f9f0,uVar1,0);
          FUN_012d0dc8(PTR_DAT_057c8a60);
          FUN_012d0dc8(PTR_DAT_0578d4b0);
          FUN_012d0dc8(PTR_DAT_057ab1a0);
          FUN_012d0dc8(PTR_DAT_0575a580);
          FUN_012d0dc8(PTR_DAT_05797538);
          bRam0000000005c237ea = 1;
        }
        lVar7 = Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService_1470674
                          ();
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar8 == 0) ||
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar8,*(undefined8 *)PTR_DAT_05797538,0), puVar5 = PTR_DAT_057ab1a0,
           puVar4 = PTR_DAT_0578d4b0, puVar3 = PTR_DAT_0575f9f0, puVar2 = PTR_DAT_0575a580,
           lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                           (lVar7,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar4,uVar11,0);
        uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                           (uVar1,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar5,uVar11,0);
        uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                           (lVar7,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar2,uVar11,0);
        uVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
                           (lVar7,0);
        uVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopupImpressionSourceExtensions__ToAnalyticsValue_358fbd4
                          (uVar1,0);
        uVar10 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
                           (lVar7,0);
        uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__OnePlusFreeIapClaimed_2dbea9c
                           (uVar11,uVar9,uVar10,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar3);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
        if ((bRam0000000005c2373b & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057f8670);
          FUN_012d0dc8(PTR_DAT_0576fba0);
          FUN_012d0dc8(PTR_DAT_057fde78);
          FUN_012d0dc8(PTR_DAT_0577a090);
          FUN_012d0dc8(PTR_DAT_0581bc50);
          bRam0000000005c2373b = 1;
        }
        puVar3 = PTR_DAT_057f8670;
        puVar2 = PTR_DAT_0576fba0;
        uStack_48 = 0;
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_48,lVar12,*(undefined8 *)PTR_DAT_0581bc50);
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_48,*(undefined8 *)puVar2);
          if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

