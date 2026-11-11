/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$OnPopupOpened
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__OnPopupOpened (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$OnPopupOpened
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__OnPopupOpened
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__OnPopupOpened_3595908
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferRemoteService__CancelRequests_3594484
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

