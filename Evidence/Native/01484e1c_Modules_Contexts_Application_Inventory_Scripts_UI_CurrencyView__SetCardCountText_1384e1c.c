/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetCardCountText
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCardCountText (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t cardCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetCardCountText
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCardCountText
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t cardCount,
   const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCardCountText_1384e1c
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576c200;
  uStack_24 = param_2;
  if ((bRam0000000005c23043 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23043 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0xc0);
    uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x560));
  }
  return;
}

