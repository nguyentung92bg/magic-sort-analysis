/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldShowEgoOffer
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowEgoOffer (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldShowEgoOffer
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowEgoOffer
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowEgoOffer_3596a38
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                        (), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x24) == '\0') {
      bVar1 = false;
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_03696a7c;
      iVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetState_35974f4
                        ();
      bVar1 = iVar2 == 3;
    }
    return bVar1;
  }
LAB_03696a7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

