/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$RemoveAppliedTransaction
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__RemoveAppliedTransaction (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$RemoveAppliedTransaction
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__RemoveAppliedTransaction
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this,
   System_String_o* transactionId, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__RemoveAppliedTransaction_31638e8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000005c3152f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05787e30);
    FUN_012d0dc8(PTR_DAT_0580f420);
    FUN_012d0dc8(PTR_DAT_057e7710);
    FUN_012d0dc8(PTR_DAT_057efd20);
    FUN_012d0dc8(PTR_DAT_057d0408);
    bRam0000000005c3152f = 1;
  }
  puVar3 = PTR_DAT_0580f420;
  puVar2 = PTR_DAT_057d0408;
  puVar1 = PTR_DAT_05787e30;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 == 0)) {
    lVar6 = 0;
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,lVar7,*(undefined8 *)PTR_DAT_057efd20);
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_58,*(undefined8 *)puVar3);
      lVar6 = lStack_48;
      if ((uVar4 & 1) == 0) {
        lVar6 = 0;
        iVar5 = 7;
        goto LAB_032639f0;
      }
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar4 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lStack_48 + 0x10),param_2,0);
    } while ((uVar4 & 1) == 0);
    System_Collections_Generic_List_object___Remove_21fe044(lVar7,lVar6,*(undefined8 *)puVar2);
    iVar5 = 6;
LAB_032639f0:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_58,*(undefined8 *)puVar1);
    if (iVar5 != 6) {
      lVar6 = 0;
    }
  }
  return lVar6;
}

