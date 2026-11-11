/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$ClearCountdowns
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearCountdowns (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$ClearCountdowns
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearCountdowns
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ClearCountdowns_3164230
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c3153a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3153a = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    lVar2 = *(long *)PTR_DAT_0580b9d0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar2 = *(long *)puVar1;
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 != 0)) {
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
        *(undefined2 *)(param_1 + 0x20) = 0x101;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

