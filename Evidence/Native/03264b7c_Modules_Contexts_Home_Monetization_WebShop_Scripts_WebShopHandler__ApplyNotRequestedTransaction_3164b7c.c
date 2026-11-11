/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$ApplyNotRequestedTransaction
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__ApplyNotRequestedTransaction (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_String_o* purchaseId, System_String_o* webProductId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$ApplyNotRequestedTransaction
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__ApplyNotRequestedTransaction
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_String_o*
   purchaseId, System_String_o* webProductId, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__ApplyNotRequestedTransaction_3164b7c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c31543 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b0f0);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c31543 = 1;
  }
  puVar2 = PTR_DAT_0578b0f0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_d8,0);
  uVar3 = (ulong)&uStack_a0 | 8;
  uStack_b0 = uStack_c8;
  uStack_b8 = uStack_d0;
  uStack_c0 = uStack_d8;
  uStack_90 = uStack_d0;
  uStack_98 = uStack_d8;
  uStack_88 = uStack_c8;
  FUN_012d0d74(uVar3,0);
  uStack_80 = param_1;
  FUN_012d0d74(&uStack_80,param_1);
  uStack_70 = param_2;
  FUN_012d0d74(&uStack_70,param_2);
  uStack_78 = param_3;
  FUN_012d0d74(&uStack_78,param_3);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_WebShopHandler__ApplyNotRequestedTransaction_d__11__20cee94
            (uVar3,&uStack_a0,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

