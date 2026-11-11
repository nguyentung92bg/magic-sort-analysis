/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$FadeTextAndImage
DG_Tweening_Sequence_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImage (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, float duration, float target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$FadeTextAndImage
   DG_Tweening_Sequence_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImage
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, float duration, float
   target, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImage_1382724
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2302f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2302f = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar5 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(param_3 + 0x58);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c(lVar5);
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (param_2,param_1,*(undefined8 *)(param_3 + 0x58),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar6,0);
  }
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = DG_Tweening_DOTweenModuleUI__DOFade_33e3960
                      (param_2,param_1,*(undefined8 *)(param_3 + 0x40),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar6,0);
  }
  return uVar3;
}

