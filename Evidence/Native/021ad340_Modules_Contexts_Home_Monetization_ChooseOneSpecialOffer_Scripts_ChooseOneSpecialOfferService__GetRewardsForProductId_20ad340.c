/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetRewardsForProductId
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRewardsForProductId (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$GetRewardsForProductId
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRewardsForProductId
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, System_String_o* productId, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRewardsForProductId_20ad340
          (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c29505 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ea4f0);
    FUN_012d0dc8(PTR_DAT_057f27e8);
    FUN_012d0dc8(PTR_DAT_057b48a0);
    FUN_012d0dc8(PTR_DAT_057f5d30);
    bRam0000000005c29505 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 != 0) {
    lVar1 = *(long *)(lVar5 + 0x30);
    lVar5 = *(long *)(lVar5 + 0x38);
    if ((lVar5 != 0) &&
       (uVar4 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar5 + 0x20),param_2,4,0),
       (uVar4 & 1) != 0)) {
      return *(undefined8 *)(lVar5 + 0x18);
    }
    puVar3 = PTR_DAT_057f27e8;
    puVar2 = PTR_DAT_057ea4f0;
    if (lVar1 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,lVar1,*(undefined8 *)PTR_DAT_057f5d30);
      while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_48,*(undefined8 *)puVar3), lVar5 = lStack_38,
            (uVar4 & 1) != 0) {
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar4 = System_String__Equals_1ecf17c(*(undefined8 *)(lStack_38 + 0x20),param_2,4,0);
        if ((uVar4 & 1) != 0) {
          uVar6 = *(undefined8 *)(lVar5 + 0x18);
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar2);
          return uVar6;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar2);
    }
  }
  uVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__TryGetFallbackRewards_20ad50c
                    (param_1,param_2);
  return uVar6;
}

