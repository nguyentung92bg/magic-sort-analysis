/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$TryGetFallbackRewards
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__TryGetFallbackRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, System_String_o* productId, bool isPaidStep, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$TryGetFallbackRewards
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__TryGetFallbackRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   System_String_o* productId, bool isPaidStep, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__TryGetFallbackRewards_358ce1c
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c32e05 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780c08);
    FUN_012d0dc8(PTR_DAT_057cffa8);
    FUN_012d0dc8(PTR_DAT_0579bc78);
    FUN_012d0dc8(PTR_DAT_057d35c0);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_057cbaa0);
    FUN_012d0dc8(PTR_DAT_057ef3b8);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_0579d708);
    bRam0000000005c32e05 = 1;
  }
  puVar4 = PTR_DAT_057ef3b8;
  puVar3 = PTR_DAT_057cffa8;
  puVar2 = PTR_DAT_0579d708;
  puVar1 = PTR_DAT_05780c08;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar8 != 0)) &&
     (lVar8 = *(long *)(lVar8 + 0x128), lVar8 != 0)) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
      if (lVar8 == 0) goto LAB_0368d02c;
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_057994c8);
    }
    else {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_057d35c0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      lStack_60 = lStack_78;
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_70,*(undefined8 *)puVar3);
        lVar5 = lStack_60;
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_70,*(undefined8 *)puVar1);
          uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar8,0,*(undefined8 *)puVar4);
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar8);
          }
          lVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetMappingRewards_358d4c8
                            (uVar7,param_3 & 1);
          return lVar8;
        }
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar6 = System_String__Equals_1ecf17c(*(undefined8 *)(lStack_60 + 0x10),param_2,4,0);
      } while ((uVar6 & 1) == 0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetMappingRewards_358d4c8
                        (lVar5,param_3 & 1);
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar1);
    }
    return lVar8;
  }
LAB_0368d02c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

