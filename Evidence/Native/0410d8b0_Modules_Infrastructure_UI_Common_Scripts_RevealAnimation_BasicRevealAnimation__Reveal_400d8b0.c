/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.BasicRevealAnimation$$Reveal
DG_Tweening_Tween_o* Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation__Reveal (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.BasicRevealAnimation$$Reveal
   DG_Tweening_Tween_o*
   Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation__Reveal
   (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation_o* __this, float
   delay, const MethodInfo* method); */

undefined8
Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation__Reveal_400d8b0
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c393d1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05767a00);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c393d1 = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(param_1,uVar3,0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_2,*(undefined8 *)PTR_DAT_05767a00,0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar3,lVar4,0);
    uVar5 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    puVar2 = PTR_DAT_05805c10;
    if (*(long *)(param_2 + 0x18) != 0) {
      fVar7 = *(float *)(*(long *)(param_2 + 0x18) + 0x1c);
      lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(float *)(lVar4 + 0xc) * fVar7,*(float *)(lVar4 + 0x10) * fVar7,
                         *(float *)(lVar4 + 0x14) * fVar7,0,uVar5,0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
      uVar5 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                           *(undefined4 *)(lVar4 + 0x14),
                           *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x20),uVar5,0);
        if (*(long *)(param_2 + 0x18) != 0) {
          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar5,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28),
                             *(undefined8 *)PTR_DAT_057874c0);
          uVar3 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
          puVar6 = (undefined8 *)(param_2 + 0x20);
          *puVar6 = uVar3;
          FUN_012d0d74(puVar6,uVar3);
          return *puVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

