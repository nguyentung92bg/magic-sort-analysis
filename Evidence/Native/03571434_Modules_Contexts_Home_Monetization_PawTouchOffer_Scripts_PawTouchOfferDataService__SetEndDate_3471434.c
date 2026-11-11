/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$SetEndDate
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__SetEndDate (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this, int64_t endDate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferDataService$$SetEndDate
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__SetEndDate
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService_o* __this,
   int64_t endDate, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__SetEndDate_3471434
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

