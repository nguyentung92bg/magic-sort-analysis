/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ShouldDisplayBeforeStore
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldDisplayBeforeStore (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ShouldDisplayBeforeStore
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldDisplayBeforeStore
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldDisplayBeforeStore_358d55c
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                      ();
    if ((iVar3 != 6) && (iVar3 != 3)) {
      return false;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                        ();
      if ((uVar4 & 1) != 0) {
        return false;
      }
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar5 != 0)) &&
         (lVar5 = *(long *)(lVar5 + 0x128), lVar5 != 0)) {
        iVar3 = *(int *)(lVar5 + 0x1c);
        if (iVar3 == 0) {
          return false;
        }
        if (*(int *)(lVar5 + 0x20) == 0) {
          return false;
        }
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 != 0)) {
          iVar1 = *(int *)(lVar6 + 0x20);
          iVar2 = 0;
          if (iVar3 != 0) {
            iVar2 = iVar1 / iVar3;
          }
          return iVar1 < *(int *)(lVar5 + 0x20) * iVar3 && iVar1 == iVar2 * iVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

