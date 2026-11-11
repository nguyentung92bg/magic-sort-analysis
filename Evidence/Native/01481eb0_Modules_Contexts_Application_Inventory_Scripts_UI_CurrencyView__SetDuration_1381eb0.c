/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetDuration
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetDuration (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_TimeSpan_o timeSpan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetDuration
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetDuration
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_TimeSpan_o
   timeSpan, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetDuration_1381eb0
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2302d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2302d = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc(param_2,0);
    puVar1 = PTR_DAT_0576c200;
    if ((bRam0000000005c2302b & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200);
      bRam0000000005c2302b = 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x40);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01481e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x558))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x560));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    return;
  }
  return;
}

