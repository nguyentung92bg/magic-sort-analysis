/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ShouldForceShowPopup
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldForceShowPopup (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ShouldForceShowPopup
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldForceShowPopup
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldForceShowPopup_20ada98
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar2 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
                      ();
    if (iVar2 == 3) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 == 0)) goto LAB_021adae0;
      bVar1 = *(char *)(lVar3 + 0x24) == '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_021adae0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

