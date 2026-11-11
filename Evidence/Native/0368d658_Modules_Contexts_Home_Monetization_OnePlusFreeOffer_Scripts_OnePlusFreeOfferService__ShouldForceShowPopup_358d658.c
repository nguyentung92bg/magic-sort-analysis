/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ShouldForceShowPopup
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldForceShowPopup (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ShouldForceShowPopup
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldForceShowPopup
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldForceShowPopup_358d658
               (long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                      ();
    if ((iVar2 == 6) || (iVar2 == 3)) {
      uVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldGiveFreeRewardsAuto_358d6c0
                        (param_1);
      if ((uVar3 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 == 0)) goto LAB_0368d6bc;
        bVar1 = *(char *)(lVar4 + 0x24) == '\0';
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0368d6bc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

