/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$HasIapChosenOverWebShopCountdownEnded
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__HasIapChosenOverWebShopCountdownEnded (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$HasIapChosenOverWebShopCountdownEnded
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__HasIapChosenOverWebShopCountdownEnded
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__HasIapChosenOverWebShopCountdownEnded_3163db0
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c31534 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c31534 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = System_DateTime__get_UtcNow_2100638(0);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) {
    uVar5 = *(ulong *)(lVar4 + 0x28);
    uVar3 = System_DateTime__op_Inequality_2102030
                      (uVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar1 = PTR_DAT_0580b9d0;
      if ((bRam0000000005c297ff & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0580b9d0,uVar5,0);
        bRam0000000005c297ff = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      return (uVar5 & 0x3fffffffffffffff) <= (uVar2 & 0x3fffffffffffffff);
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

