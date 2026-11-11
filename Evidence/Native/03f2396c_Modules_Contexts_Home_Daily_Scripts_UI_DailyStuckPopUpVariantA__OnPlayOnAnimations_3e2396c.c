/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$OnPlayOnAnimations
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__OnPlayOnAnimations (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$OnPlayOnAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__OnPlayOnAnimations
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__OnPlayOnAnimations_3e2396c
          (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3812f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3812f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayHeaderTextExitAnimation_3e23a40
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayPlayOnButtonExitAnimation_3e23a64
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayGiveUpButtonExitAnimation_3e23a88
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayBackgroundExitAnimation_3e23aac
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar3,uVar4,0);
  if ((uVar2 & 1) != 0) {
    DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar3,uVar4);
  }
  return uVar3;
}

