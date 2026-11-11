/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayGiveUpAnimations
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayGiveUpAnimations (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayGiveUpAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayGiveUpAnimations
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayGiveUpAnimations_160b27c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c24430 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c24430 = 1;
  }
  puVar2 = PTR_DAT_057fc1d0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar3,uVar4,*(undefined8 *)puVar2);
  uVar4 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayHeaderTextMoveDownAnimation_160b4fc
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  uVar4 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayPlayOnButtonMoveDownAnimation_160b520
                    (param_1);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  uVar4 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayGiveUpButtonMoveDownAnimation_160b544
                    (param_1);
  lVar5 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayBackgroundMoveDownAnimation_160b568
                    (param_1);
  uVar6 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar5,uVar3,0);
  if ((uVar6 & 1) != 0) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar5 + 0x130),lVar5,uVar3);
  }
  return lVar5;
}

