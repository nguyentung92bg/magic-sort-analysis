/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$SetHasEverSeenOffer
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetHasEverSeenOffer (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$SetHasEverSeenOffer
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetHasEverSeenOffer
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetHasEverSeenOffer_358a8b0
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 0368a8c0 to 0378a8d7 has its CatchHandler @ 0368a2b8 */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x12) == '\0') {
      *(undefined1 *)(lVar1 + 0x12) = 1;
                    /* try { // try from 0368a8d8 to 0378a8ef has its CatchHandler @ 0368a938 */
      *(undefined2 *)(param_1 + 0x20) = 0x101;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

