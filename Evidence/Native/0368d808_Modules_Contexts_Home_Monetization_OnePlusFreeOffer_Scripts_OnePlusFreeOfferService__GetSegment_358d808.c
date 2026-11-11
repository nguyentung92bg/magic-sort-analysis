/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetSegment
System_String_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetSegment
   System_String_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetSegment_358d808
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x38);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

