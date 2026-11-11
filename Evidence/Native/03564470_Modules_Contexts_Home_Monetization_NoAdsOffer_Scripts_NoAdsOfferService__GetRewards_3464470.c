/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$GetRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetRewards (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$GetRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetRewards
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetRewards_3464470
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c32665 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057928d8);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c32665 = 1;
  }
  lVar1 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                    (param_1);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
    if (lVar1 != 0) {
      System_Collections_Generic_List_object____ctor_21fc324
                (lVar1,uVar2,*(undefined8 *)PTR_DAT_057928d8);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

