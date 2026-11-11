/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$OnWebShopPopupShown
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnWebShopPopupShown (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$OnWebShopPopupShown
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnWebShopPopupShown
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnWebShopPopupShown_3162070
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__IsWebShopPurchaseProtectionActive_3163d3c
                      ();
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                      (param_1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x30) < 1) {
        return;
      }
      if (*(char *)(lVar3 + 0x28) == '\0') {
        return;
      }
      uVar4 = Modules_Infrastructure_Utils_TimeProvider__get_UtcNow_3de72e4(0);
      uVar4 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__AddFlowDuration_316c3b8
                        (uVar4,uVar4,*(undefined4 *)(lVar3 + 0x30));
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        if ((bRam0000000005c31538 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0580b9d0);
          bRam0000000005c31538 = 1;
        }
        puVar1 = PTR_DAT_0580b9d0;
        if ((*(long *)(lVar3 + 0x18) != 0) &&
           (lVar5 = *(long *)(*(long *)(lVar3 + 0x18) + 0x18), lVar5 != 0)) {
          uVar6 = *(undefined8 *)(lVar5 + 0x30);
          lVar5 = *(long *)PTR_DAT_0580b9d0;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar5 = *(long *)puVar1;
          }
          uVar2 = System_DateTime__op_Inequality_2102030
                            (uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
          if ((uVar2 & 1) == 0) {
            if ((*(long *)(lVar3 + 0x18) == 0) ||
               (lVar5 = *(long *)(*(long *)(lVar3 + 0x18) + 0x18), lVar5 == 0)) goto LAB_032641b0;
            *(undefined8 *)(lVar5 + 0x30) = uVar4;
            *(undefined2 *)(lVar3 + 0x20) = 0x101;
          }
          return;
        }
LAB_032641b0:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

