/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$OnPlayOnAnimations
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__OnPlayOnAnimations (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$OnPlayOnAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__OnPlayOnAnimations
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__OnPlayOnAnimations_160a35c
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c24422 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c24422 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayHeaderTextExitAnimation_160a490
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayCoinPlayOnAnimation_160a4b4
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayPlayOnButtonExitAnimation_160a4d8
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayGiveUpButtonExitAnimation_160a4fc
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottlePlayOnAnimation_160a520
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayGradientPlayOnAnimation_160a5d4
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBackgroundExitAnimation_160a684
                    (param_1);
  uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar2,uVar3,0);
  if ((uVar4 & 1) != 0) {
    DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar2,uVar3);
  }
  return uVar2;
}

