/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferDataService$$ResetPopupShownCount
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__ResetPopupShownCount (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* __this, System_DateTime_o now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferDataService$$ResetPopupShownCount
   void 
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__ResetPopupShownCount
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* __this,
   System_DateTime_o now, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__ResetPopupShownCount_3462c38
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

