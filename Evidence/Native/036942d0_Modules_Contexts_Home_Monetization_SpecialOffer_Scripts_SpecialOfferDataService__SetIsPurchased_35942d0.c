/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$SetIsPurchased
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SetIsPurchased (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, bool isPurchased, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferDataService$$SetIsPurchased
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SetIsPurchased
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* __this, bool
   isPurchased, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SetIsPurchased_35942d0
               (long param_1,byte param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
    *(byte *)(lVar1 + 0x10) = param_2 & 1;
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

