/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$OnPlayOnAnimations
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__OnPlayOnAnimations (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$OnPlayOnAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__OnPlayOnAnimations
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__OnPlayOnAnimations_16089a8
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2440d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c2440d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayHeaderTextExitAnimation_1608b58
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayPlayOnButtonExitAnimation_1608b7c
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayRightButtonExitAnimation_1608ba0
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayBackgroundExitAnimation_1608bb0
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayExitButtonExitAnimation_1608c60
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayCoinExitAnimation_1608c84
                    (param_1);
  uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar2,uVar3,0);
  if ((uVar4 & 1) != 0) {
    DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar2,uVar3);
  }
  return uVar2;
}

