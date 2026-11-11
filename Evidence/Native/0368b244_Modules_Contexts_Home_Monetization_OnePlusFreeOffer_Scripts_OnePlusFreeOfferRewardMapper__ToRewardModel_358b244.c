/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ToRewardModel
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModel (MagicSort_V1_ClientCommonRewardModelWithCollection_o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ToRewardModel
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModel
   (MagicSort_V1_ClientCommonRewardModelWithCollection_o* reward, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModel_358b244
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c32def & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575eb20);
    bRam0000000005c32def = 1;
  }
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575eb20);
    if (lVar1 != 0) {
      Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar1,0);
      *(int *)(lVar1 + 0x10) = (int)uVar2;
      *(int *)(lVar1 + 0x14) = (int)*(undefined8 *)(param_1 + 0x20);
      uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ParseTimeSpan_358b638
                        (*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(lVar1 + 0x18) = uVar2;
      *(int *)(lVar1 + 0x2c) = (int)*(undefined8 *)(param_1 + 0x38);
      uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToNestedRewardModels_358b710
                        (*(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(lVar1 + 0x38) = uVar2;
      FUN_012d0d74();
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

