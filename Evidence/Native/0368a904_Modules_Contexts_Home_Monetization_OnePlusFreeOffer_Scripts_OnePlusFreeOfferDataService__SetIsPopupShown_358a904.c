/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$SetIsPopupShown
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPopupShown (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o* __this, bool isShown, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$SetIsPopupShown
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPopupShown
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o*
   __this, bool isShown, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPopupShown_358a904
               (long param_1,byte param_2)

{
                    /* try { // try from 0368a90c to 0378a91b has its CatchHandler @ 0368a938 */
  if (*(long *)(param_1 + 0x18) != 0) {
    *(byte *)(*(long *)(param_1 + 0x18) + 0x24) = param_2 & 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0368a920 to 0378a93f has its CatchHandler @ 0368a948 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368a850 with catch @ 0368a928 */
  FUN_012d0ef0();
}

