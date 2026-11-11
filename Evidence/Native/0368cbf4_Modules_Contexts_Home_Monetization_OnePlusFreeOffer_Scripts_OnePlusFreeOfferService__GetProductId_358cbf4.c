/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetProductId
System_String_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetProductId (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetProductId
   System_String_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetProductId
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetProductId_358cbf4
               (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c32dfe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c32dfe = 1;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368cb54 with catch @ 0368cc2c
                        */
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar1 != 0)) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368cb3c with catch @ 0368cc30
                        */
    lVar1 = *(long *)(lVar1 + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368cb1c with catch @ 0368cc38
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368cb0c with catch @ 0368cc3c
                        */
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x40), lVar1 == 0)) {
      lVar1 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
    }
                    /* try { // try from 0368cc58 to 0378cc5b has its CatchHandler @ 0368cc7c */
                    /* try { // try from 0368cc5c to 0378cc7f has its CatchHandler @ 0368c99c */
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

