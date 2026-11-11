/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$HasTime
bool Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__HasTime (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$HasTime
   bool Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__HasTime
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, int32_t
   currencyType, const MethodInfo* method); */

bool Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__HasTime_1381338
               (long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c23006 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c23006 = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  if (param_2 == 0x10) {
    uVar2 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleTimedCurrencyEndDateByType_137e8e0
                      (lVar4,0x10);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar3 = System_DateTime__get_UtcNow_2100638(0);
    puVar1 = PTR_DAT_0580b9d0;
    if ((bRam0000000005c297ff & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0580b9d0,uVar3,0);
      bRam0000000005c297ff = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    return (uVar3 & 0x3fffffffffffffff) <= (uVar2 & 0x3fffffffffffffff);
  }
  return false;
}

