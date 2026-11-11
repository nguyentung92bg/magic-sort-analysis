/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$StartNoPurchaseAfterPromptCountdown
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__StartNoPurchaseAfterPromptCountdown (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, System_DateTime_o endsAtUtc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$StartNoPurchaseAfterPromptCountdown
   void 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__StartNoPurchaseAfterPromptCountdown
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this,
   System_DateTime_o endsAtUtc, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__StartNoPurchaseAfterPromptCountdown_3164108
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c31538 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c31538 = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    lVar3 = *(long *)PTR_DAT_0580b9d0;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    uVar2 = System_DateTime__op_Inequality_2102030
                      (uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),0);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 == 0)) goto LAB_032641b0;
      *(undefined8 *)(lVar3 + 0x30) = param_2;
      *(undefined2 *)(param_1 + 0x20) = 0x101;
    }
    return;
  }
LAB_032641b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

