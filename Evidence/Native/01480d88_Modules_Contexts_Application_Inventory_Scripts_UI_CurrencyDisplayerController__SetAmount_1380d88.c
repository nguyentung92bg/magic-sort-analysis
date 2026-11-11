/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$SetAmount
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmount (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$SetAmount
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmount
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, int32_t
   amount, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmount_1380d88
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x48),0,0);
      }
      *(undefined4 *)(param_1 + 0x40) = param_2;
      uVar2 = System_Int32__ToString_26c9768(&uStack_14,0);
      Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmountText_1380a00
                (param_1,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

