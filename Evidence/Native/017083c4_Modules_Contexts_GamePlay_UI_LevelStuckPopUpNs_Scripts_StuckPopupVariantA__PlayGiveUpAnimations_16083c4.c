/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$PlayGiveUpAnimations
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayGiveUpAnimations (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$PlayGiveUpAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayGiveUpAnimations
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayGiveUpAnimations_16083c4
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c24408 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c24408 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayCoinTextMoveUpAnimation_1608604
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayHeaderTextMoveDownAnimation_1608628
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayPlayOnButtonMoveDownAnimation_160864c
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayRightButtonMoveDownAnimation_1608670
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  uVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayBackgroundMoveDownAnimation_1608680
                    (param_1);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  lVar4 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayExitButtonMoveUpAnimation_1608770
                    (param_1);
  if (lVar4 != 0) {
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,lVar4,0);
  }
  return uVar2;
}

