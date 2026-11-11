/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopStateService$$CanTemporarilyDisableWebShop
bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__CanTemporarilyDisableWebShop (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopStateService$$CanTemporarilyDisableWebShop
   bool 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__CanTemporarilyDisableWebShop
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__CanTemporarilyDisableWebShop_316c298
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8();
    iVar2 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopStateService__GetState_316c424
                      (param_1);
    if (iVar2 == 4) {
      if (lVar3 == 0) goto LAB_0326c2e8;
      bVar1 = *(char *)(lVar3 + 0x28) != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0326c2e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

