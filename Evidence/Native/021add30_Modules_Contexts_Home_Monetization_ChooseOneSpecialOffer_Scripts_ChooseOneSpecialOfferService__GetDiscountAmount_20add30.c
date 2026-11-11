/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetDiscountAmount
int32_t Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetDiscountAmount (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetDiscountAmount
   int32_t
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetDiscountAmount
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetDiscountAmount_20add30
          (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 == 0) goto LAB_021add68;
      uVar1 = *(undefined4 *)(lVar2 + 0x14);
    }
    return uVar1;
  }
LAB_021add68:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

