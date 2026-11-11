/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ClearOnePlusFreeOfferData
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClearOnePlusFreeOfferData (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ClearOnePlusFreeOfferData
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClearOnePlusFreeOfferData
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClearOnePlusFreeOfferData_358bf08
               (long param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0368bf14 to 0378bf1f has its CatchHandler @ 0368bf48 */
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsPurchased_358a808
              (*(long *)(param_1 + 0x10),0);
                    /* try { // try from 0368bf20 to 0378bf33 has its CatchHandler @ 0368bf44 */
    if (*(long *)(param_1 + 0x10) != 0) {
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsFreeClaimed_358a85c
                (*(long *)(param_1 + 0x10),0);
      lVar1 = *(long *)(param_1 + 0x10);
                    /* try { // try from 0368bf34 to 0378bf5f has its CatchHandler @ 0368bef0 */
      if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x18), lVar2 != 0)) {
        *(undefined1 *)(lVar2 + 0x24) = 0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368bf20 with catch @ 0368bf44
                        */
        *(undefined4 *)(lVar2 + 0x20) = 0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368bf14 with catch @ 0368bf48
                        */
        *(undefined1 *)(lVar1 + 0x20) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

