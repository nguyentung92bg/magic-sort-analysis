/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$Awake
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__Awake (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$Awake
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__Awake
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__Awake_1381bd0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c23029 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23029 = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = UnityEngine_Renderer__get_sortingOrder_40826c0(*(long *)(param_1 + 0x58),0);
    *(undefined4 *)(param_1 + 0x100) = uVar2;
  }
  return;
}

