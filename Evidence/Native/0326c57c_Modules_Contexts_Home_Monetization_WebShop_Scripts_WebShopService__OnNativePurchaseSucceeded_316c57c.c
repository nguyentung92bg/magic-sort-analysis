/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$OnNativePurchaseSucceeded
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnNativePurchaseSucceeded (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$OnNativePurchaseSucceeded
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnNativePurchaseSucceeded
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnNativePurchaseSucceeded_316c57c
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsWebShopPurchaseProtectionActive_3163d3c
                      ();
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                      (param_1);
    if (lVar3 != 0) {
      if ((0 < *(int *)(lVar3 + 0x2c)) && (*(char *)(lVar3 + 0x28) != '\0')) {
        uVar4 = Modules_Infrastructure_Utils_TimeProvider__get_UtcNow_3de72e4(0);
        uVar4 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__AddFlowDuration_316c3b8
                          (uVar4,uVar4,*(undefined4 *)(lVar3 + 0x2c));
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_0326c604;
        Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__StartIapChosenOverWebShopCountdown_316405c
                  (*(long *)(param_1 + 0x18),uVar4);
      }
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        if ((bRam0000000005c31539 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0580b9d0);
          bRam0000000005c31539 = 1;
        }
        puVar1 = PTR_DAT_0580b9d0;
        if (*(long *)(lVar3 + 0x18) != 0) {
          lVar5 = *(long *)(*(long *)(lVar3 + 0x18) + 0x18);
          if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x30) =
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            *(undefined2 *)(lVar3 + 0x20) = 0x101;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
LAB_0326c604:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

