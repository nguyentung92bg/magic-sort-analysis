/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetRewardsForProductId
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRewardsForProductId (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetRewardsForProductId
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRewardsForProductId
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this,
   System_String_o* productId, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRewardsForProductId_359633c
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if ((lVar2 != 0) &&
       ((lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0 &&
        (uVar1 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar2 + 0x20),param_2,4,0),
        (uVar1 & 1) != 0)))) {
      puVar3 = (undefined8 *)(lVar2 + 0x18);
LAB_036963e0:
      return *puVar3;
    }
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferFallBackRewardsStat_14653f8
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0xb0), lVar2 != 0)) {
        puVar3 = (undefined8 *)(lVar2 + 0x30);
        goto LAB_036963e0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

