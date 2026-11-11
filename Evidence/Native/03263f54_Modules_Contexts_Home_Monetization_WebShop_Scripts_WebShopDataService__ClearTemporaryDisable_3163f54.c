/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$ClearTemporaryDisable
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearTemporaryDisable (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$ClearTemporaryDisable
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearTemporaryDisable
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearTemporaryDisable_3163f54
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c31536 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c31536 = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *(undefined2 *)(param_1 + 0x20) = 0x101;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

