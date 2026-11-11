/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$StartCheckout
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__StartCheckout (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o* productId, int32_t iapOrigin, int32_t iapReason, int32_t context, bool giveRewardsWithoutAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$StartCheckout
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__StartCheckout
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_String_o*
   productId, int32_t iapOrigin, int32_t iapReason, int32_t context, bool
   giveRewardsWithoutAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__StartCheckout_316bc1c
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_05766da0;
  if ((bRam0000000005c31571 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_057b5110);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
    bRam0000000005c31571 = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_057b5110;
  puVar2 = PTR_DAT_0577b428;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_e8,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_b0 | 8;
  uStack_c0 = uStack_d8;
  uStack_c8 = uStack_e0;
  uStack_d0 = uStack_e8;
  uStack_a0 = uStack_e0;
  uStack_a8 = uStack_e8;
  uStack_98 = uStack_d8;
  FUN_012d0d74(uVar5,0);
  uStack_90 = param_1;
  FUN_012d0d74(&uStack_90,param_1);
  uStack_88 = param_2;
  FUN_012d0d74(&uStack_88,param_2);
  uStack_78 = CONCAT35(uStack_78._5_3_,CONCAT14(param_6,param_5)) & 0xffffff01ffffffff;
  uStack_80 = CONCAT44(param_4,param_3);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_WebShopService__StartCheckout_d__27__3c637d8
            (uVar5,&uStack_b0,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
  return;
}

