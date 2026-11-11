/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetColor
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetColor (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetColor
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetColor
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Color_o
   color, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetColor_1383250
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c23033 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23033 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_5 + 0x58) != 0) {
    UnityEngine_SpriteRenderer__set_color_4095de0
              (param_1,param_2,param_3,param_4,*(long *)(param_5 + 0x58),0);
    uVar4 = *(undefined8 *)(param_5 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar3 = *(long **)(param_5 + 0x40);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01483318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2a8))
                (param_1,param_2,param_3,param_4,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

