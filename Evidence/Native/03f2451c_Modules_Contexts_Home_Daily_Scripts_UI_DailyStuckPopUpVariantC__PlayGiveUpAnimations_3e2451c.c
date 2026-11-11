/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayGiveUpAnimations
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayGiveUpAnimations (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayGiveUpAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayGiveUpAnimations
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayGiveUpAnimations_3e2451c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3813b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c3813b = 1;
  }
  puVar2 = PTR_DAT_057fc1d0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar4,uVar5,*(undefined8 *)puVar2);
  uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayHeaderTextMoveDownAnimation_3e2479c
                    (param_1);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar5,0);
  uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayPlayOnButtonMoveDownAnimation_3e247c0
                    (param_1);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar5,0);
  uVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayGiveUpButtonMoveDownAnimation_3e247e4
                    (param_1);
  lVar6 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar5,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundMoveDownAnimation_3e24808
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar6 + 0x130),lVar6,uVar4);
  }
  return lVar6;
}

