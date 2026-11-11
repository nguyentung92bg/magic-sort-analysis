/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetRequestModel
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferRequestModel_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRequestModel (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetRequestModel
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferRequestModel_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRequestModel
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRequestModel_3595944
               (long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c32e5e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578ecb0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c32e5e = 1;
  }
  puVar1 = PTR_DAT_0578ecb0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                      ();
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      System_Object___ctor_23dfe5c(lVar4,0);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
        lVar5 = *(long *)(lVar5 + 0x18);
        if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) {
          lVar5 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
        }
        *(long *)(lVar4 + 0x10) = lVar5;
        FUN_012d0d74();
        if (lVar3 != 0) {
          *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
          if (*(long *)(param_1 + 0x10) != 0) {
            bVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__IsPurchased_35942ac
                              ();
            *(byte *)(lVar4 + 0x1c) = bVar2 & 1;
            return lVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

