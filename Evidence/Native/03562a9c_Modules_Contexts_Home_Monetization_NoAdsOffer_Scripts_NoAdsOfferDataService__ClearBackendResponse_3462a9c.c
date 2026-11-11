/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferDataService$$ClearBackendResponse
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__ClearBackendResponse (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferDataService$$ClearBackendResponse
   void 
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__ClearBackendResponse
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__ClearBackendResponse_3462a9c
               (long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    *puVar1 = 0;
    FUN_012d0d74(puVar1,0);
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

