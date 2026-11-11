/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayScaleXY
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayScaleXY (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayScaleXY
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayScaleXY
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayScaleXY_214ad3c
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c29b50 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c29b50 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    uVar3 = DG_Tweening_ShortcutExtensions__DOScaleX_1ee67cc
                      (*(undefined4 *)(lVar4 + 0xf0),*(undefined4 *)(lVar4 + 0xdc),uVar3,0);
    puVar1 = PTR_DAT_057874c0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0),
                         *(undefined8 *)PTR_DAT_057874c0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
      uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        uVar3 = DG_Tweening_ShortcutExtensions__DOScaleY_1ee6970
                          (*(undefined4 *)(lVar4 + 0xf0),*(undefined4 *)(lVar4 + 0xdc),uVar3,0);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe8),
                             *(undefined8 *)puVar1);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar3,0);
          return uVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

