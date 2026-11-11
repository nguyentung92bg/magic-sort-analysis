/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$AddFlowDuration
System_DateTime_o Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__AddFlowDuration (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_DateTime_o startUtc, int32_t configDays, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$AddFlowDuration
   System_DateTime_o
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__AddFlowDuration
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, System_DateTime_o
   startUtc, int32_t configDays, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__AddFlowDuration_316c3b8
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  uStack_28 = param_2;
  if ((bRam0000000005c3157a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3157a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_DateTime__AddDays_20feb78((double)param_3,&uStack_28,0);
  return;
}

