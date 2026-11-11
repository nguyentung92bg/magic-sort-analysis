/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferStateService$$GetState
int32_t Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService__GetState (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferStateService$$GetState
   int32_t Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService__GetState
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService__GetState_3464e4c
          (long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x100), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      uVar2 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_03564ec0;
      uVar1 = Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService__HasNoAds_2b054f8
                        (*(long *)(param_1 + 0x20),0);
      if ((uVar1 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 == 0)) goto LAB_03564ec0;
        uVar2 = 2;
        if (*(long *)(lVar3 + 0x10) != 0) {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
LAB_03564ec0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

