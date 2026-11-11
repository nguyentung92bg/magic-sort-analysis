/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$FadeTextAndImageAndBannerAndCardCount
DG_Tweening_Sequence_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBannerAndCardCount (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, float duration, float target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$FadeTextAndImageAndBannerAndCardCount
   DG_Tweening_Sequence_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBannerAndCardCount
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, float duration, float
   target, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBannerAndCardCount_13829d4
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c23031 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23031 = 1;
  }
  uVar2 = Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImageAndBanner_1382854
                    (param_1,param_2,param_3);
  uVar4 = *(undefined8 *)(param_3 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (param_2,param_1,*(undefined8 *)(param_3 + 0xd8),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_3 + 0xe0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (param_2,param_1,*(undefined8 *)(param_3 + 0xe0),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_3 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = DG_Tweening_DOTweenModuleUI__DOFade_33e3960
                      (param_2,param_1,*(undefined8 *)(param_3 + 0xc0),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar4,0);
  }
  uVar4 = *(undefined8 *)(param_3 + 0xe8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = DG_Tweening_DOTweenModuleUI__DOFade_33e3960
                      (param_2,param_1,*(undefined8 *)(param_3 + 0xe8),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar4,0);
  }
  return uVar2;
}

