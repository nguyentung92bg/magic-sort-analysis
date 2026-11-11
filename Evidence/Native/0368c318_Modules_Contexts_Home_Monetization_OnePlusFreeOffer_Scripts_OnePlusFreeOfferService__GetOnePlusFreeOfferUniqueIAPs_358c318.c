/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetOnePlusFreeOfferUniqueIAPs
System_Collections_Generic_Dictionary_string__IAPConfigModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetOnePlusFreeOfferUniqueIAPs (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetOnePlusFreeOfferUniqueIAPs
   System_Collections_Generic_Dictionary_string__IAPConfigModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetOnePlusFreeOfferUniqueIAPs
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetOnePlusFreeOfferUniqueIAPs_358c318
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_0575d9f8;
  if ((bRam0000000005c32dfd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5fa8);
    FUN_012d0dc8(PTR_DAT_057c3ab8);
    FUN_012d0dc8(PTR_DAT_0575d9f8);
    FUN_012d0dc8(PTR_DAT_057b2840);
    FUN_012d0dc8(PTR_DAT_057a6e48);
    FUN_012d0dc8(PTR_DAT_0578a030);
    FUN_012d0dc8(PTR_DAT_057ab7b0);
    bRam0000000005c32dfd = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar4,*(undefined8 *)PTR_DAT_057f5fa8);
    puVar3 = PTR_DAT_057c3ab8;
    puVar2 = PTR_DAT_057b2840;
    puVar1 = PTR_DAT_057a6e48;
    if ((((*(long *)(param_1 + 0x28) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar6 != 0)) &&
        (lVar6 = *(long *)(lVar6 + 0x128), lVar6 != 0)) &&
       (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,lVar6,*(undefined8 *)PTR_DAT_057ab7b0);
                    /* try { // try from 0368c414 to 0378c557 has its CatchHandler @ 0368c414
                       catch() { ... } // from try @ 0368c414 with catch @ 0368c414
                       catch() { ... } // from try @ 0368c5ac with catch @ 0368c414
                       catch() { ... } // from try @ 0368c678 with catch @ 0368c414
                       catch() { ... } // from try @ 0368c7c8 with catch @ 0368c414
                       catch() { ... } // from try @ 0368c7f8 with catch @ 0368c414 */
      while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_48,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                  (lVar4,*(undefined8 *)(lStack_38 + 0x10),lStack_38,*(undefined8 *)puVar3);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar2);
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

