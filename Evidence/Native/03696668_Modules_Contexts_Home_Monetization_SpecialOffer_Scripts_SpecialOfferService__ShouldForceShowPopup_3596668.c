/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldForceShowPopup
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldForceShowPopup (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldForceShowPopup
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldForceShowPopup
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldForceShowPopup_3596668
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetState_35974f4
                      ();
    if (iVar2 == 3) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 == 0)) goto LAB_036966b0;
      bVar1 = *(char *)(lVar3 + 0x24) == '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_036966b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

