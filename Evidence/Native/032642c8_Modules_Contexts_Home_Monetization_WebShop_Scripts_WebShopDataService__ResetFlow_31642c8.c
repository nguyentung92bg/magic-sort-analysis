/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$ResetFlow
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ResetFlow (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$ResetFlow
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ResetFlow
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__ResetFlow_31642c8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_058102c8;
  if ((bRam0000000005c3153b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058102c8);
    bRam0000000005c3153b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (System_Object___ctor_23dfe5c(lVar2,0), lVar3 != 0)) {
    plVar4 = (long *)(lVar3 + 0x18);
    *plVar4 = lVar2;
    FUN_012d0d74(plVar4,lVar2);
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

