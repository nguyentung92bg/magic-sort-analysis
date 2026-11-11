/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$ApplyNotRequestedTransactions
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__ApplyNotRequestedTransactions (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_Collections_Generic_List_AppchargeClaimablePurchase__o* fulfilledPurchases, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$ApplyNotRequestedTransactions
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__ApplyNotRequestedTransactions
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this,
   System_Collections_Generic_List_AppchargeClaimablePurchase__o* fulfilledPurchases, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__ApplyNotRequestedTransactions_3164a78
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c31542 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791ae8);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c31542 = 1;
  }
  puVar2 = PTR_DAT_05791ae8;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_b8,0);
  uVar3 = (ulong)&uStack_80 | 8;
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_78 = uStack_b8;
  uStack_68 = uStack_a8;
  FUN_012d0d74(uVar3,0);
  uStack_58 = param_1;
  FUN_012d0d74(&uStack_58,param_1);
  uStack_60 = param_2;
  FUN_012d0d74(&uStack_60,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_WebShopHandler__ApplyNotRequestedTransactions_d__10__20cef98
            (uVar3,&uStack_80,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

