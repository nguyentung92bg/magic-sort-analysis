/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$ShouldShowPurchasedCompleted
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ShouldShowPurchasedCompleted (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$ShouldShowPurchasedCompleted
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ShouldShowPurchasedCompleted
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ShouldShowPurchasedCompleted_316bfa8
               (long param_1)

{
  bool bVar1;
  
  if ((bRam0000000005c31577 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d15d0);
    bRam0000000005c31577 = 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(long *)(param_1 + 0x50) + 0x18);
  }
  return bVar1;
}

