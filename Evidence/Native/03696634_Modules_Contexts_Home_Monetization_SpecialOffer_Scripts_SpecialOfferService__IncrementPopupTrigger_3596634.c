/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$IncrementPopupTrigger
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IncrementPopupTrigger (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$IncrementPopupTrigger
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IncrementPopupTrigger
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IncrementPopupTrigger_3596634
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x18), lVar2 != 0)) {
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    *(undefined1 *)(lVar1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

