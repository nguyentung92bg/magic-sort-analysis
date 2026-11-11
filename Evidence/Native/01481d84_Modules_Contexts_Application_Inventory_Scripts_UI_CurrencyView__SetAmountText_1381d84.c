/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetAmountText
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetAmountText
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_String_o* text,
   const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText_1381d84
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2302b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2302b = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x40);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01481e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x558))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x560));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

