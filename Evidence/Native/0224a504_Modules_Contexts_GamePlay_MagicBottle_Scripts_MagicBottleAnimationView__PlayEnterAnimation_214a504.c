/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayEnterAnimation (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayEnterAnimation
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayEnterAnimation_214a504
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c29b4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d4e18);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    bRam0000000005c29b4d = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05818d48;
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057d4e18,0);
    DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0(uVar3,lVar4,*(undefined8 *)puVar2);
    uVar5 = UnityEngine_Component__get_transform_408b444(param_1,0);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      uVar5 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                        (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x28),
                         *(undefined4 *)(lVar4 + 0x2c),*(undefined4 *)(lVar4 + 0x30),uVar5,0,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                           *(undefined8 *)PTR_DAT_057bcc80);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

