/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$OnPopupOpened
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__OnPopupOpened (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$OnPopupOpened
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__OnPopupOpened
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   int32_t impressionSource, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__OnPopupOpened_358bb38
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 100) = param_2;
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService__CancelRequests_358a9ec
              ();
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
      *(undefined1 *)(*(long *)(lVar1 + 0x18) + 0x24) = 1;
      *(undefined1 *)(lVar1 + 0x20) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

