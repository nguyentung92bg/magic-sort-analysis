/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$HasTime
bool Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__HasTime (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$HasTime
   bool 
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__HasTime
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, int32_t currencyType, const MethodInfo* method); */

bool Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__HasTime_1385eec
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [16];
  
                    /* catch() { ... } // from try @ 01485c9c with catch @ 01485f04 */
  if ((bRam0000000005c23052 & 1) == 0) {
                    /* catch() { ... } // from try @ 01485e14 with catch @ 01485f0c */
                    /* catch() { ... } // from try @ 01485ca4 with catch @ 01485f10 */
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c23052 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__HasVisibleTimedCurrencyByType_137ee10
                      (*(long *)(param_1 + 0x30),param_2);
    puVar2 = PTR_DAT_05814758;
    puVar1 = PTR_DAT_0580b9d0;
    if ((uVar3 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleTimedCurrencyEndDateByType_137e8e0
                        (*(long *)(param_1 + 0x30),param_2);
      auVar6 = Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__GetClampedEventMultiplierEndDate_1385da4
                         (param_1,uVar4);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = System_DateTime__get_UtcNow_2100638(0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      System_DateTimeOffset__op_Implicit_2106a94(uVar4,0);
      puVar1 = PTR_DAT_05814758;
      auStack_40 = auVar6;
      if ((bRam0000000005c2983d & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05814758);
        FUN_012d0dc8(PTR_DAT_0580b9d0);
        bRam0000000005c2983d = 1;
      }
      puVar2 = PTR_DAT_0580b9d0;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = System_DateTimeOffset__get_UtcDateTime_2103804(&stack0xffffffffffffffd0);
      uVar5 = System_DateTimeOffset__get_UtcDateTime_2103804(auStack_40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      puVar1 = PTR_DAT_0580b9d0;
      if ((bRam0000000005c297fc & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0580b9d0);
        bRam0000000005c297fc = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      return (uVar3 & 0x3fffffffffffffff) < (uVar5 & 0x3fffffffffffffff);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

