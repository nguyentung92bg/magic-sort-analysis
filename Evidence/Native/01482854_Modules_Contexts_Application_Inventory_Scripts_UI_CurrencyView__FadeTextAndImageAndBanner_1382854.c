/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$FadeTextAndImageAndBanner
DG_Tweening_Sequence_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBanner (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, float duration, float target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$FadeTextAndImageAndBanner
   DG_Tweening_Sequence_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBanner
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, float duration, float
   target, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBanner_1382854
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c23030 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23030 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar5 = *(undefined8 *)(param_3 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (param_2,param_1,*(undefined8 *)(param_3 + 0x58),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
  }
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = DG_Tweening_DOTweenModuleUI__DOFade_33e3960
                      (param_2,param_1,*(undefined8 *)(param_3 + 0x40),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
  }
  uVar5 = *(undefined8 *)(param_3 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (param_2,param_1,*(undefined8 *)(param_3 + 0x78),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
  }
  return uVar3;
}

