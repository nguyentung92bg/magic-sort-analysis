/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$SetWebShopCustomerUntil
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__SetWebShopCustomerUntil (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, System_DateTime_o untilUtc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$SetWebShopCustomerUntil
   void 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__SetWebShopCustomerUntil
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this,
   System_DateTime_o untilUtc, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__SetWebShopCustomerUntil_3164030
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

