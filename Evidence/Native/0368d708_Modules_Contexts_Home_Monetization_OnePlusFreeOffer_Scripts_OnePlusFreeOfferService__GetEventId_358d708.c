/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetEventId
System_String_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetEventId
   System_String_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEventId_358d708
               (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c32e08 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c32e08 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar1 != 0)) {
    lVar1 = *(long *)(lVar1 + 0x18);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x10), lVar1 == 0)) {
      lVar1 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

