/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$IsTokenCurrency
bool Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__IsTokenCurrency (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$IsTokenCurrency
   bool Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__IsTokenCurrency
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__IsTokenCurrency_1384f10
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c23044 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23044 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a4e4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0,0);
    bRam0000000005c3a4e4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_40913ac(uVar3,0);
  return ~uVar2 & 1;
}

