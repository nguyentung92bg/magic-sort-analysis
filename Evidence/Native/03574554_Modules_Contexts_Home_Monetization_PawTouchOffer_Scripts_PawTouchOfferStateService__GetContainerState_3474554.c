/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferStateService$$GetContainerState
int32_t Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetContainerState (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferStateService$$GetContainerState
   int32_t
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetContainerState
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetContainerState_3474554
          (long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetState_34743ac
                    ();
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                      (*(long *)(param_1 + 0x20),1,2000,0);
    if (((uVar2 & 1) == 0) &&
       (iVar1 = UnityEngine_Application__get_internetReachability_383ac8c(0), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

