/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$IsWebShopPurchaseProtectionActive
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsWebShopPurchaseProtectionActive (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$IsWebShopPurchaseProtectionActive
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsWebShopPurchaseProtectionActive
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsWebShopPurchaseProtectionActive_3163d3c
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c31533 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c31533 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = System_DateTime__get_UtcNow_2100638(0);
  puVar1 = PTR_DAT_0580b9d0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) {
    uVar3 = *(ulong *)(lVar4 + 0x20);
    if ((bRam0000000005c297fc & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0580b9d0,uVar3,0);
      bRam0000000005c297fc = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    return (uVar2 & 0x3fffffffffffffff) < (uVar3 & 0x3fffffffffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

