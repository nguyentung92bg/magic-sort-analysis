/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$OnCurrencyAmountIsChanged
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnCurrencyAmountIsChanged (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, int32_t currencyType, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyDisplayerController$$OnCurrencyAmountIsChanged
   void 
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnCurrencyAmountIsChanged
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController_o* __this, int32_t
   currencyType, int32_t amount, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__OnCurrencyAmountIsChanged_13811e4
               (long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x28) != param_2) {
    return;
  }
  if ((bRam0000000005c2301e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05815778);
    FUN_012d0dc8(PTR_DAT_057c0a28);
    FUN_012d0dc8(PTR_DAT_0576bb68);
    FUN_012d0dc8(PTR_DAT_057f6da0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c2301e = 1;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar2,0,0);
  }
  if (param_3 < *(int *)(param_1 + 0x40)) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0);
      if (lVar2 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
        if (*(long *)(param_1 + 0x48) != 0) {
          DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x48),0,0);
        }
        *(int *)(param_1 + 0x40) = param_3;
        uVar4 = System_Int32__ToString_26c9768(&stack0xffffffffffffffec,0);
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__SetAmountText_1380a00
                  (param_1,uVar4);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576bb68);
  puVar1 = PTR_DAT_057f6da0;
  if (lVar2 != 0) {
    DG_Tweening_Core_DOGetter_int____ctor_156cd70(lVar2,param_1,*(undefined8 *)PTR_DAT_05815778,0);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057815e0;
    if (lVar3 != 0) {
      DG_Tweening_Core_DOSetter_int____ctor_156deb0(lVar3,param_1,*(undefined8 *)PTR_DAT_057c0a28,0)
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = DG_Tweening_DOTween__To_1ed85d4(_DAT_04321768,lVar2,lVar3,param_3,0);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      FUN_012d0d74((long *)(param_1 + 0x48),uVar4);
      *(int *)(param_1 + 0x40) = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

