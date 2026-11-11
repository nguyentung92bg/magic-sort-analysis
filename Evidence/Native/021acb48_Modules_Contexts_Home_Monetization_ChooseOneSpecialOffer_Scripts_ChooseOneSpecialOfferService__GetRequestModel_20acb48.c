/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetRequestModel
Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferRequestModel_o* Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRequestModel (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetRequestModel
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferRequestModel_o*
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRequestModel
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRequestModel_20acb48
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057d8830;
  if ((bRam0000000005c294fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8830);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c294fe = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x18);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) {
        lVar3 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
      }
      *(long *)(lVar2 + 0x10) = lVar3;
      FUN_012d0d74();
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x120), lVar3 != 0)) {
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

