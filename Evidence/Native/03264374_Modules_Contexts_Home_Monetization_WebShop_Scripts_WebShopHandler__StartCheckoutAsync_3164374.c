/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$StartCheckoutAsync
System_Threading_Tasks_Task_WebShopTransactionDataModel__o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__StartCheckoutAsync (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_String_o* productId, System_String_o* webProductId, int32_t iapOrigin, int32_t iapReason, int32_t context, bool giveRewardsWithoutAnimation, System_String_o* countryCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$StartCheckoutAsync
   System_Threading_Tasks_Task_WebShopTransactionDataModel__o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__StartCheckoutAsync
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_String_o*
   productId, System_String_o* webProductId, int32_t iapOrigin, int32_t iapReason, int32_t context,
   bool giveRewardsWithoutAnimation, System_String_o* countryCode, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__StartCheckoutAsync_3164374
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_0577ac50;
  if ((bRam0000000005c3153c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580d438);
    FUN_012d0dc8(PTR_DAT_05789690);
    FUN_012d0dc8(PTR_DAT_05787c80);
    FUN_012d0dc8(PTR_DAT_0577ac50);
    bRam0000000005c3153c = 1;
  }
  puVar3 = PTR_DAT_0580d438;
  puVar2 = PTR_DAT_05789690;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_e8,*(undefined8 *)puVar3);
  uVar4 = (ulong)&uStack_d0 | 8;
  uStack_c0 = uStack_e0;
  uStack_c8 = uStack_e8;
  uStack_b8 = uStack_d8;
  FUN_012d0d74(uVar4,0);
  uStack_98 = param_1;
  FUN_012d0d74(&uStack_98,param_1);
  uStack_b0 = param_2;
  FUN_012d0d74(&uStack_b0,param_2);
  uStack_a8 = param_3;
  FUN_012d0d74(&uStack_a8,param_3);
  uStack_90 = CONCAT44(param_5,param_4);
  uStack_88 = CONCAT35(uStack_88._5_3_,CONCAT14(param_7,param_6)) & 0xffffff01ffffffff;
  uStack_a0 = param_8;
  FUN_012d0d74(&uStack_a0,param_8);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_WebShopHandler__StartCheckoutAsync_d__4__332ce10
            (uVar4,&uStack_d0,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar4,*(undefined8 *)PTR_DAT_05787c80);
  return;
}

