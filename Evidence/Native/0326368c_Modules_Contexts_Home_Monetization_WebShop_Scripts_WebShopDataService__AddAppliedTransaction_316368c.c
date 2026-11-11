/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$AddAppliedTransaction
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__AddAppliedTransaction (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopDataService$$AddAppliedTransaction
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__AddAppliedTransaction
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopDataService__AddAppliedTransaction_316368c
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((bRam0000000005c3152d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808df0);
    bRam0000000005c3152d = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar2 != 0)) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)PTR_DAT_05808df0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = param_2;
      FUN_012d0d74(puVar4,param_2);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x58) + 8))(lVar2,param_2);
    }
    *(undefined2 *)(param_1 + 0x20) = 0x101;
  }
  return;
}

