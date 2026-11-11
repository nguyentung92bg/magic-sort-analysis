/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ClearSpecialOfferData
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClearSpecialOfferData (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ClearSpecialOfferData
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClearSpecialOfferData
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClearSpecialOfferData_3595c74
               (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__SetIsPurchased_35942d0
              (*(long *)(param_1 + 0x10),0);
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x18), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x24) = 0;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined1 *)(lVar1 + 0x20) = 1;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         ((lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0 &&
          (lVar3 = *(long *)(lVar3 + 0xb8), lVar3 != 0)))) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          *(undefined4 *)(lVar2 + 0x28) = 1;
          *(undefined1 *)(lVar1 + 0x20) = 1;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

