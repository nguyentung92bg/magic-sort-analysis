/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.PopupAnimationController$$PlayIntroAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__PlayIntroAnimation (Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.PopupAnimationController$$PlayIntroAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__PlayIntroAnimation
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__PlayIntroAnimation_3161de8
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c31589 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576bb90);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    bRam0000000005c31589 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x28),
                           *(undefined4 *)(lVar4 + 0x2c),*(undefined4 *)(lVar4 + 0x20),
                           *(undefined8 *)(param_1 + 0x18),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                             *(undefined8 *)PTR_DAT_057874c0);
          puVar1 = PTR_DAT_05777ce8;
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != 0) {
            uVar3 = DG_Tweening_TweenSettingsExtensions__From_Vector3__Vector3__VectorOptions__2450470
                              (*(undefined4 *)(lVar4 + 0x30),*(undefined4 *)(lVar4 + 0x34),
                               *(undefined4 *)(lVar4 + 0x38),uVar3,1,0,
                               *(undefined8 *)PTR_DAT_0576bb90);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar3,0);
            DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                      (uVar5,param_1,*(undefined8 *)puVar1);
            return uVar5;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return 0;
}

