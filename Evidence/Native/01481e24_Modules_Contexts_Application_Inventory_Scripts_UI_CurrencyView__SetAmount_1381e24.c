/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetAmount
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmount (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetAmount
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmount
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t amount, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmount_1381e24
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576c200;
  uStack_24 = param_2;
  if ((bRam0000000005c2302c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2302c = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
    Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText_1381d84
              (param_1,uVar3);
  }
  return;
}

