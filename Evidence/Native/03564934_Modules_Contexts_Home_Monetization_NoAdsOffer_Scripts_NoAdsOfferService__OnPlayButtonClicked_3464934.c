/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$OnPlayButtonClicked
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__OnPlayButtonClicked (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$OnPlayButtonClicked
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__OnPlayButtonClicked
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__OnPlayButtonClicked_3464934
               (long param_1)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__ShouldForceShowPopup_3460e8c
                    ();
  if ((uVar1 & 1) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  return;
}

