/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$<TextScaleOut>b__67_0
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView___TextScaleOut_b__67_0 (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$<TextScaleOut>b__67_0
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView___TextScaleOut_b__67_0
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView___TextScaleOut_b__67_0_13855f4
               (long param_1)

{
  long lVar1;
  
  Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetTextScale_1384860();
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0), lVar1 != 0
     )) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

