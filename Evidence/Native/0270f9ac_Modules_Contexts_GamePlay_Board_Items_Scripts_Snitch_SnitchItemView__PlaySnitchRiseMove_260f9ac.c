/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchRiseMove
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchRiseMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchRiseMove
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchRiseMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchRiseMove_260f9ac
          (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000005c2ba01 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c2ba01 = 1;
  }
  if (*(long *)(param_3 + 0x38) != 0) {
    uVar6 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseWorldTargetPositionsByIndex_20fa0e8
                      (*(long *)(param_3 + 0x38),param_4,0);
    if (*(long *)(param_3 + 0x38) != 0) {
      uVar7 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseDurationsByIndex_20fa064
                        (*(long *)(param_3 + 0x38),param_4,0);
      puVar3 = PTR_DAT_057fc1d0;
      puVar2 = PTR_DAT_057874c0;
      puVar1 = PTR_DAT_057815e0;
      if (*(long *)(param_3 + 0x38) != 0) {
        auVar8 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseCurvesByIndex_20f9f64
                           (*(long *)(param_3 + 0x38),param_4,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
        uVar5 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                          (uVar4,uVar5,*(undefined8 *)puVar3);
        uVar5 = UnityEngine_Component__get_transform_408b444(param_3,0);
        uVar6 = DG_Tweening_ShortcutExtensions__DOMoveX_1ee516c(uVar6,uVar7,uVar5,0,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar6,auVar8._0_8_,*(undefined8 *)puVar2);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar6,0);
        uVar6 = UnityEngine_Component__get_transform_408b444(param_3,0);
        uVar6 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c(param_2,uVar7,uVar6,0,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar6,auVar8._8_8_,*(undefined8 *)puVar2);
        DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar6,0);
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

