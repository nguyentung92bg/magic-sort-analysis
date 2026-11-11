/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetMappingRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetMappingRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeFallbackRewardMapping_o* mapping, bool isPaidStep, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetMappingRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetMappingRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeFallbackRewardMapping_o*
   mapping, bool isPaidStep, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetMappingRewards_358d4c8
               (long param_1,ulong param_2)

{
  long lVar1;
  
  if ((bRam0000000005c32e06 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c32e06 = 1;
  }
  if (param_1 != 0) {
    lVar1 = 0x18;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x20;
    }
    lVar1 = *(long *)(param_1 + lVar1);
    if (lVar1 == 0) {
      lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
      if (lVar1 == 0) goto LAB_0368d558;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar1,*(undefined8 *)PTR_DAT_057994c8);
    }
    return lVar1;
  }
LAB_0368d558:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

