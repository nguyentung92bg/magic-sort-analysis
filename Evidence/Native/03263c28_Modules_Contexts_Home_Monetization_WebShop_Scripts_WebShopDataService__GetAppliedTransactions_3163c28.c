/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$GetAppliedTransactions
System_Collections_Generic_List_WebShopTransactionDataModel__o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__GetAppliedTransactions (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$GetAppliedTransactions
   System_Collections_Generic_List_WebShopTransactionDataModel__o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__GetAppliedTransactions
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__GetAppliedTransactions_3163c28
               (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c31531 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2000);
    FUN_012d0dc8(PTR_DAT_057fdc48);
    bRam0000000005c31531 = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 == 0)) {
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057fdc48);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar1,*(undefined8 *)PTR_DAT_057d2000);
  }
  return lVar1;
}

