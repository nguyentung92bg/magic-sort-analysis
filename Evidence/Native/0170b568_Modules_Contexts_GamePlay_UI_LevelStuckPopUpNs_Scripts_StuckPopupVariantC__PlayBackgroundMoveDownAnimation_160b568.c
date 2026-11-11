/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayBackgroundMoveDownAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayBackgroundMoveDownAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayBackgroundMoveDownAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayBackgroundMoveDownAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayBackgroundMoveDownAnimation_160b568
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000005c24432 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0580b168);
    bRam0000000005c24432 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar3 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (0,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0xf0),
                       *(undefined8 *)(param_1 + 0x38),0);
    puVar2 = PTR_DAT_0580b168;
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0xf8),
                         *(undefined8 *)PTR_DAT_0580b168);
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar4 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0x3f800000,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x100),
                           *(undefined8 *)(param_1 + 0x40),0);
        puVar1 = PTR_DAT_057815e0;
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x108),
                             *(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
          lVar6 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar3,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,uVar4,0);
          if ((uVar7 & 1) != 0) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar6 + 0x130),lVar6,uVar4);
          }
          return lVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

