/* IL2CPP: Modules.Contexts.Home.SkyJump.Scripts.UI.SkyJumpSearchUserViewRevealAnimation$$Reveal
DG_Tweening_Tween_o* Modules_Contexts_Home_SkyJump_Scripts_UI_SkyJumpSearchUserViewRevealAnimation__Reveal (Modules_Contexts_Home_SkyJump_Scripts_UI_SkyJumpSearchUserViewRevealAnimation_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.SkyJump.Scripts.UI.SkyJumpSearchUserViewRevealAnimation$$Reveal
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_SkyJump_Scripts_UI_SkyJumpSearchUserViewRevealAnimation__Reveal
   (Modules_Contexts_Home_SkyJump_Scripts_UI_SkyJumpSearchUserViewRevealAnimation_o* __this, float
   delay, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_SkyJump_Scripts_UI_SkyJumpSearchUserViewRevealAnimation__Reveal_2f231ec
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((bRam0000000005c30712 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05808b68);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c30712 = 1;
  }
  lVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
    uVar7 = UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
    *(undefined4 *)(param_4 + 0x28) = uVar7;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(param_1,uVar4,0);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_4,*(undefined8 *)PTR_DAT_05808b68,0);
      uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar4,lVar3,0);
      uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      puVar1 = PTR_DAT_05805c10;
      if (*(long *)(param_4 + 0x18) != 0) {
        fVar8 = *(float *)(*(long *)(param_4 + 0x18) + 0x1b4);
        lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(float *)(lVar3 + 0xc) * fVar8,*(float *)(lVar3 + 0x10) * fVar8,
                           *(float *)(lVar3 + 0x14) * fVar8,0,uVar5,0);
        uVar4 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
        uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (*(long *)(param_4 + 0x18) != 0) {
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                             *(undefined4 *)(lVar3 + 0x14),
                             *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x1b8),uVar5,0);
          puVar1 = PTR_DAT_057874c0;
          if (*(long *)(param_4 + 0x18) != 0) {
            uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x1c8),
                               *(undefined8 *)PTR_DAT_057874c0);
            uVar4 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
            uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
            lVar3 = *(long *)(param_4 + 0x18);
            if (lVar3 != 0) {
              fVar8 = (float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar3 + 0x1bc) >> 0x20);
              uVar5 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                (CONCAT44(fVar8,(float)*(undefined8 *)(param_4 + 0x28) +
                                                (float)*(undefined8 *)(lVar3 + 0x1bc)),fVar8,
                                 *(float *)(param_4 + 0x30) + *(float *)(lVar3 + 0x1c4),
                                 *(undefined4 *)(lVar3 + 0x1d0),uVar5,0,0);
              if (*(long *)(param_4 + 0x18) != 0) {
                uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x1d8),
                                   *(undefined8 *)puVar1);
                uVar4 = DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar5,0);
                puVar6 = (undefined8 *)(param_4 + 0x20);
                *puVar6 = uVar4;
                FUN_012d0d74(puVar6,uVar4);
                return *puVar6;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

