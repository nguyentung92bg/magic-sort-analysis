/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$CompareByDisplayOrder
int32_t Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CompareByDisplayOrder (Modules_Contexts_Application_Reward_Scripts_RewardModel_o* first, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* second, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$CompareByDisplayOrder
   int32_t
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CompareByDisplayOrder
   (Modules_Contexts_Application_Reward_Scripts_RewardModel_o* first,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* second, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CompareByDisplayOrder_358d350
               (long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000005c32e03 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d708);
    bRam0000000005c32e03 = 1;
  }
  uStack_24 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_0579d708 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uStack_24 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetDisplayOrder_358d400
                          (uVar1);
    if (param_2 != 0) {
      uVar1 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetDisplayOrder_358d400
                        (*(undefined4 *)(param_2 + 0x10));
      iVar2 = System_Int32__CompareTo_26c96bc(&uStack_24,uVar1,0);
      if (iVar2 == 0) {
        uStack_24 = *(undefined4 *)(param_1 + 0x2c);
        System_Int32__CompareTo_26c96bc(&uStack_24,*(undefined4 *)(param_2 + 0x2c),0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

