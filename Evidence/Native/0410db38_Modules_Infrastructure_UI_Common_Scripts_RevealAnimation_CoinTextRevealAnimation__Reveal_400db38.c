/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.CoinTextRevealAnimation$$Reveal
DG_Tweening_Tween_o* Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation__Reveal (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.CoinTextRevealAnimation$$Reveal
   DG_Tweening_Tween_o*
   Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation__Reveal
   (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation_o* __this,
   float delay, const MethodInfo* method); */

undefined8
Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_CoinTextRevealAnimation__Reveal_400db38
          (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  
  if ((bRam0000000005c393d2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b7360);
    FUN_012d0dc8(PTR_DAT_057da530);
    FUN_012d0dc8(PTR_DAT_057de828);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05795438);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05787b20);
    FUN_012d0dc8(PTR_DAT_057e0f00);
    FUN_012d0dc8(PTR_DAT_0578dc40);
    bRam0000000005c393d2 = 1;
  }
  puVar3 = PTR_DAT_057815e0;
  puVar2 = PTR_DAT_057606c8;
  plVar5 = *(long **)(param_2 + 0x20);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x558))
              (plVar5,*(undefined8 *)PTR_DAT_0578dc40,*(undefined8 *)(*plVar5 + 0x560));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar10 = (undefined8 *)(param_2 + 0x38);
    *puVar10 = uVar6;
    FUN_012d0d74(puVar10,uVar6);
    DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(param_1,*puVar10,0);
    uVar6 = *puVar10;
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_2,*(undefined8 *)PTR_DAT_057b7360,0);
      uVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar6,lVar7,0);
      uVar8 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      puVar3 = PTR_DAT_05805c10;
      if (*(long *)(param_2 + 0x18) != 0) {
        fVar11 = *(float *)(*(long *)(param_2 + 0x18) + 0x1c);
        lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(float *)(lVar7 + 0xc) * fVar11,*(float *)(lVar7 + 0x10) * fVar11,
                           *(float *)(lVar7 + 0x14) * fVar11,0,uVar8,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar8,0);
        uVar8 = UnityEngine_Component__get_transform_408b444(param_2,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (*(long *)(param_2 + 0x18) != 0) {
          lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                             *(undefined4 *)(lVar7 + 0x14),
                             *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x20),uVar8,0);
          puVar4 = PTR_DAT_057874c0;
          if (*(long *)(param_2 + 0x18) != 0) {
            uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar8,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28),
                               *(undefined8 *)PTR_DAT_057874c0);
            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar8,0);
            if (*(long *)(param_2 + 0x18) != 0) {
              DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                        (*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x30),
                         *(undefined8 *)(param_2 + 0x38),0);
              if (*(long *)(param_2 + 0x18) != 0) {
                uVar6 = *(undefined8 *)(param_2 + 0x38);
                uVar1 = *(undefined4 *)(param_2 + 0x30);
                uVar13 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x34);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05795438);
                if (lVar7 != 0) {
                  DG_Tweening_TweenCallback_int____ctor_341ef50
                            (lVar7,param_2,*(undefined8 *)PTR_DAT_057de828,0);
                  uVar8 = DG_Tweening_DOVirtual__Int_1edbd60(uVar13,0,uVar1,lVar7,0);
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar8,0);
                  fVar11 = (float)DG_Tweening_TweenExtensions__Duration_1edeccc
                                            (*(undefined8 *)(param_2 + 0x38),1,0);
                  if (*(long *)(param_2 + 0x18) != 0) {
                    uVar8 = *(undefined8 *)(param_2 + 0x38);
                    fVar14 = *(float *)(*(long *)(param_2 + 0x18) + 0x38);
                    uVar6 = UnityEngine_Component__get_transform_408b444(param_2,0);
                    if (cRam0000000005c230a9 == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230a9 = '\x01';
                    }
                    lVar7 = *(long *)(param_2 + 0x18);
                    if (lVar7 != 0) {
                      fVar12 = *(float *)(lVar7 + 0x40);
                      lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
                      uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                        (*(float *)(lVar9 + 0xc) * fVar12,
                                         *(float *)(lVar9 + 0x10) * fVar12,
                                         *(float *)(lVar9 + 0x14) * fVar12,
                                         *(undefined4 *)(lVar7 + 0x3c),uVar6,0);
                      if (*(long *)(param_2 + 0x18) != 0) {
                        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar6,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x48),
                                           *(undefined8 *)puVar4);
                        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                  (fVar11 + fVar14,uVar8,uVar6,0);
                        if (*(long *)(param_2 + 0x18) != 0) {
                          uVar6 = *(undefined8 *)(param_2 + 0x38);
                          fVar14 = *(float *)(*(long *)(param_2 + 0x18) + 0x50);
                          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                          if (lVar7 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar7,param_2,*(undefined8 *)PTR_DAT_057da530,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar11 + fVar14,uVar6,lVar7,0);
                            puVar3 = PTR_DAT_057e0f00;
                            if (*(long *)(param_2 + 0x18) != 0) {
                              uVar6 = *(undefined8 *)(param_2 + 0x38);
                              fVar14 = *(float *)(*(long *)(param_2 + 0x18) + 0x50);
                              lVar7 = *(long *)PTR_DAT_057e0f00;
                              if (*(int *)(lVar7 + 0xe0) == 0) {
                                thunk_FUN_0130472c();
                                lVar7 = *(long *)puVar3;
                              }
                              lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                              if (lVar9 == 0) {
                                if (*(int *)(lVar7 + 0xe0) == 0) {
                                  thunk_FUN_0130472c();
                                  lVar7 = *(long *)puVar3;
                                }
                                uVar8 = **(undefined8 **)(lVar7 + 0xb8);
                                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                if (lVar9 == 0) goto LAB_0410dfd4;
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar9,uVar8,*(undefined8 *)PTR_DAT_05787b20,0);
                                plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                                *plVar5 = lVar9;
                                FUN_012d0d74(plVar5,lVar9);
                              }
                              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                        (fVar11 + fVar14,uVar6,lVar9,0);
                              return *puVar10;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0410dfd4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

