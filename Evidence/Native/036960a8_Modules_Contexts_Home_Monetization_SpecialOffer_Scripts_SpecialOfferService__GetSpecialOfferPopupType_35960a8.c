/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetSpecialOfferPopupType
int32_t Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetSpecialOfferPopupType
   int32_t
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

int Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType_35960a8
              (long param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  if ((((*(long *)(param_1 + 0x28) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar1 != 0)) &&
      (lVar1 = *(long *)(lVar1 + 0xb8), lVar1 != 0)) && (*(long *)(param_1 + 0x10) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      if (lVar2 == 0) goto LAB_0369610c;
      piVar3 = (int *)(lVar2 + 0x28);
    }
    else {
      if (lVar2 == 0) goto LAB_0369610c;
      if (*(long *)(lVar2 + 0x18) == 0) {
        return 0;
      }
      piVar3 = (int *)(*(long *)(lVar2 + 0x18) + 0x38);
    }
    return *piVar3 + -1;
  }
LAB_0369610c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

