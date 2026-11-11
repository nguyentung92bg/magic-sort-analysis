/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$IncrementUsedCycleCount
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IncrementUsedCycleCount (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$IncrementUsedCycleCount
   void 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IncrementUsedCycleCount
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IncrementUsedCycleCount_3163fd0
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar1 != 0)) {
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

