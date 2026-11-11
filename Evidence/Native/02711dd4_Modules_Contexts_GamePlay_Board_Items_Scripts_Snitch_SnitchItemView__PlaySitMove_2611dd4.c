/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitMove
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitMove
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMove_2611dd4
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2ba07 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c2ba07 = 1;
  }
  puVar2 = PTR_DAT_057fc1d0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar3,uVar4,*(undefined8 *)puVar2);
  uVar4 = UnityEngine_Component__get_transform_408b444(param_3,0);
  if (*(long *)(param_3 + 0x38) != 0) {
    uVar4 = DG_Tweening_ShortcutExtensions__DOMoveX_1ee516c
                      (param_1,*(undefined4 *)(*(long *)(param_3 + 0x38) + 0x1d0),uVar4,0,0);
    puVar1 = PTR_DAT_057874c0;
    if (*(long *)(param_3 + 0x38) != 0) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar4,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x1d8),
                         *(undefined8 *)PTR_DAT_057874c0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
      uVar4 = UnityEngine_Component__get_transform_408b444(param_3,0);
      if (*(long *)(param_3 + 0x38) != 0) {
        uVar4 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c
                          (param_2,*(undefined4 *)(*(long *)(param_3 + 0x38) + 0x1d0),uVar4,0,0);
        if (*(long *)(param_3 + 0x38) != 0) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x1e0),
                             *(undefined8 *)puVar1);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
          return uVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

