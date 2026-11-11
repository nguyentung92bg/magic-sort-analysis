/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$OnPlayOnAnimations
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__OnPlayOnAnimations (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$OnPlayOnAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__OnPlayOnAnimations
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__OnPlayOnAnimations_3e24ab0
          (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f24a3c with catch @ 03f24ab0
                        */
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 03f24ac8 to 04024adf has its CatchHandler @ 03f24b10 */
  if ((bRam0000000005c38140 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 03f24ae0 to 04024aff has its CatchHandler @ 03f249cc */
    bRam0000000005c38140 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    /* try { // try from 03f24b00 to 04024b0f has its CatchHandler @ 03f24b10 */
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayHeaderTextExitAnimation_3e24ba4
                    (param_1);
                    /* catch() { ... } // from try @ 03f24ac8 with catch @ 03f24b10
                       catch() { ... } // from try @ 03f24b00 with catch @ 03f24b10 */
                    /* try { // try from 03f24b14 to 04024b17 has its CatchHandler @ 03f24b20 */
                    /* try { // try from 03f24b18 to 04024b23 has its CatchHandler @ 03f249cc */
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f24b14 with catch @ 03f24b20
                        */
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayCoinPlayOnAnimation_3e24bc8
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayPlayOnButtonExitAnimation_3e24bec
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayGiveUpButtonExitAnimation_3e24c10
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundExitAnimation_3e24c34
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar3,uVar4,0);
  if ((uVar2 & 1) != 0) {
    DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar3,uVar4);
  }
  return uVar3;
}

