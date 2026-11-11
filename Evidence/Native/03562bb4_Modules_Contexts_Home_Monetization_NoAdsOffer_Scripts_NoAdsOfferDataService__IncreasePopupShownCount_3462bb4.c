/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferDataService$$IncreasePopupShownCount
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__IncreasePopupShownCount (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferDataService$$IncreasePopupShownCount
   void 
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__IncreasePopupShownCount
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__IncreasePopupShownCount_3462bb4
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
    *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

