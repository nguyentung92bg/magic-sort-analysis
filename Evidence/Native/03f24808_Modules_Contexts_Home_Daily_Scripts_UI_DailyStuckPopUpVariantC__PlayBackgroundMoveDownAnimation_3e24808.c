/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayBackgroundMoveDownAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundMoveDownAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayBackgroundMoveDownAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundMoveDownAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundMoveDownAnimation_3e24808
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000005c3813d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0580b168);
    bRam0000000005c3813d = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar4 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (0,*(undefined4 *)(*(long *)(param_1 + 0x58) + 0xf0),
                       *(undefined8 *)(param_1 + 0x38),0);
    puVar2 = PTR_DAT_0580b168;
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0xf8),
                         *(undefined8 *)PTR_DAT_0580b168);
      if (*(long *)(param_1 + 0x58) != 0) {
        uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0x3f800000,*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x100),
                           *(undefined8 *)(param_1 + 0x40),0);
        puVar1 = PTR_DAT_057815e0;
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x108),
                             *(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
          lVar7 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar4,0);
          uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar7,uVar5,0);
          if ((uVar3 & 1) != 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar7 + 0x130),lVar7,uVar5);
          }
          return lVar7;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

