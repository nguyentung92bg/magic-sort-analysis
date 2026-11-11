/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$TryClaimTransactionAsync
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__TryClaimTransactionAsync (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction, bool shouldShowPurchaseFailPopup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$TryClaimTransactionAsync
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__TryClaimTransactionAsync
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction,
   bool shouldShowPurchaseFailPopup, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__TryClaimTransactionAsync_31644f8
               (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_05766da0;
  if ((bRam0000000005c3153d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_057c7f18);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
    bRam0000000005c3153d = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_057c7f18;
  puVar2 = PTR_DAT_0577b428;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_c8,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_90 | 8;
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_80 = uStack_c0;
  uStack_88 = uStack_c8;
  uStack_78 = uStack_b8;
  FUN_012d0d74(uVar5,0);
  uStack_68 = param_1;
  FUN_012d0d74(&uStack_68,param_1);
  uStack_70 = param_2;
  FUN_012d0d74(&uStack_70,param_2);
  uStack_60 = CONCAT71(uStack_60._1_7_,param_3) & 0xffffffffffffff01;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_WebShopHandler__TryClaimTransactionAsync_d__5__3c636d4
            (uVar5,&uStack_90,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
  return;
}

