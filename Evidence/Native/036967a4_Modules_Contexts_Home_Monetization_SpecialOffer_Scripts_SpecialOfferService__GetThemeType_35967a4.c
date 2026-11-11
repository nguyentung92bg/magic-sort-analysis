/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetThemeType
int32_t Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetThemeType (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetThemeType
   int32_t Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetThemeType
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetThemeType_35967a4
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
      uVar1 = *(undefined4 *)(lVar2 + 0x48);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

