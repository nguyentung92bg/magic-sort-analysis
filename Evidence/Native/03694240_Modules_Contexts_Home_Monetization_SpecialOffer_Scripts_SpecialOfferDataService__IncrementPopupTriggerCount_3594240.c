/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$IncrementPopupTriggerCount
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__IncrementPopupTriggerCount (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$IncrementPopupTriggerCount
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__IncrementPopupTriggerCount
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__IncrementPopupTriggerCount_3594240
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

