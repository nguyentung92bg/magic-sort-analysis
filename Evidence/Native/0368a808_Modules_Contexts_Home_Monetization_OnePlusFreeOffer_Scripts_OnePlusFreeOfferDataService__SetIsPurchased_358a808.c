/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$SetIsPurchased
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPurchased (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o* __this, bool isPurchased, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$SetIsPurchased
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPurchased
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o*
   __this, bool isPurchased, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPurchased_358a808
               (long param_1,byte param_2)

{
  long lVar1;
  
                    /* try { // try from 0368a808 to 0378a84f has its CatchHandler @ 0368a2b8 */
                    /* catch() { ... } // from try @ 0368a368 with catch @ 0368a80c
                       catch() { ... } // from try @ 0368a700 with catch @ 0368a80c */
                    /* catch() { ... } // from try @ 0368a360 with catch @ 0368a810 */
                    /* catch() { ... } // from try @ 0368a5f0 with catch @ 0368a814
                       catch() { ... } // from try @ 0368a708 with catch @ 0368a814 */
                    /* catch() { ... } // from try @ 0368a3ac with catch @ 0368a818
                       catch() { ... } // from try @ 0368a3f8 with catch @ 0368a818 */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
                    /* catch() { ... } // from try @ 0368a4fc with catch @ 0368a824 */
    *(byte *)(lVar1 + 0x10) = param_2 & 1;
                    /* catch() { ... } // from try @ 0368a50c with catch @ 0368a828 */
    *(undefined2 *)(param_1 + 0x20) = 0x101;
                    /* catch() { ... } // from try @ 0368a500 with catch @ 0368a82c */
                    /* catch() { ... } // from try @ 0368a4c4 with catch @ 0368a830 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368a468 with catch @ 0368a834 */
  FUN_012d0ef0();
}

