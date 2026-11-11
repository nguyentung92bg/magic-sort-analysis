/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$HandleClaimablePurchases
System_Threading_Tasks_Task_List_AppchargeClaimablePurchase___o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__HandleClaimablePurchases (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$HandleClaimablePurchases
   System_Threading_Tasks_Task_List_AppchargeClaimablePurchase___o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__HandleClaimablePurchases
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__HandleClaimablePurchases_3164968
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_057da0e0;
  if ((bRam0000000005c31541 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805838);
    FUN_012d0dc8(PTR_DAT_05815e00);
    FUN_012d0dc8(PTR_DAT_057e1d50);
    FUN_012d0dc8(PTR_DAT_057da0e0);
    bRam0000000005c31541 = 1;
  }
  puVar4 = PTR_DAT_05815e00;
  puVar3 = PTR_DAT_05805838;
  puVar2 = PTR_DAT_057e1d50;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_88,*(undefined8 *)puVar3);
  uVar5 = (ulong)&uStack_70 | 8;
  uStack_60 = uStack_80;
  uStack_68 = uStack_88;
  uStack_58 = uStack_78;
  FUN_012d0d74(uVar5,0);
  uStack_50 = param_1;
  FUN_012d0d74(&uStack_50,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_WebShopHandler__HandleClaimablePurchases_d__9__332cd0c
            (uVar5,&uStack_70,*(undefined8 *)puVar4);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar2);
  return;
}

