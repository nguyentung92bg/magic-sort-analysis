/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayGiveUpAnimations
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayGiveUpAnimations (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayGiveUpAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayGiveUpAnimations
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayGiveUpAnimations_3e2340c
               (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c3812a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3812a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayHeaderTextMoveDownAnimation_3e23658
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayPlayOnButtonMoveDownAnimation_3e2367c
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayGiveUpButtonMoveDownAnimation_3e236a0
                    (param_1);
  lVar5 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  uVar3 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayBackgroundMoveDownAnimation_3e236c4
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar5,uVar3,0);
  if ((uVar2 & 1) != 0) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar5 + 0x130),lVar5,uVar3);
  }
  return lVar5;
}

