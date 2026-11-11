/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ClearChooseOneSpecialOfferData
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClearChooseOneSpecialOfferData (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ClearChooseOneSpecialOfferData
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClearChooseOneSpecialOfferData
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClearChooseOneSpecialOfferData_20acdf0
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__SetIsPurchased_20ab8c8
              (*(long *)(param_1 + 0x10),0);
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x18), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x24) = 0;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined1 *)(lVar1 + 0x20) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

