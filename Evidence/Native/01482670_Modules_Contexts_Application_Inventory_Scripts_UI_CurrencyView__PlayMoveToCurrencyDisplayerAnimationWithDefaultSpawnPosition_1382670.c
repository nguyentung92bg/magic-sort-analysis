/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayMoveToCurrencyDisplayerAnimationWithDefaultSpawnPosition
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayMoveToCurrencyDisplayerAnimationWithDefaultSpawnPosition (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t sortOrder, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayMoveToCurrencyDisplayerAnimationWithDefaultSpawnPosition
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayMoveToCurrencyDisplayerAnimationWithDefaultSpawnPosition
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t sortOrder,
   System_Action_o* callback, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayMoveToCurrencyDisplayerAnimationWithDefaultSpawnPosition_1382670
          (long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  puVar4 = PTR_DAT_057f9c70;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  fVar26 = *(float *)(lVar9 + 0x60);
  fVar29 = *(float *)(lVar9 + 100);
  fVar31 = *(float *)(lVar9 + 0x68);
  if ((bRam0000000005c2302e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057de720);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0575c050);
    FUN_012d0dc8(PTR_DAT_057f9c70);
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c2302e = 1;
  }
  uStack_88 = 0;
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_0576c200;
  if (lVar9 == 0) goto LAB_01482634;
  System_Object___ctor_23dfe5c(lVar9,0);
  *(undefined8 *)(lVar9 + 0x10) = param_3;
  FUN_012d0d74((undefined8 *)(lVar9 + 0x10),param_3);
  *(long *)(lVar9 + 0x18) = param_1;
  FUN_012d0d74((long *)(lVar9 + 0x18),param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01482634;
    uStack_88 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78);
    lVar11 = *(long *)(param_1 + 0x48);
    Modules_Infrastructure_UI_Common_Scripts_Scroll_MaxMin__GetRandomValue_4009024(&uStack_88,0);
    if (lVar11 == 0) goto LAB_01482634;
    UnityEngine_Animator__set_speed_1f798ac(lVar11,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    UnityEngine_Random__Range_383a610(0,0x3f800000,0);
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_01482634;
    UnityEngine_Animator__Play_1f79a6c
              (*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),0xffffffff,0);
  }
  lVar11 = *(long *)(param_1 + 0x28);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x74) == '\0') {
      if (param_2 != 0) {
        fVar32 = (float)UnityEngine_Random__Range_383a610(-*(float *)(lVar11 + 0x6c),0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_01482634;
        fVar34 = (float)UnityEngine_Random__Range_383a610
                                  (-*(float *)(*(long *)(param_1 + 0x28) + 0x70),0);
        fVar29 = fVar29 + fVar34;
        fVar26 = fVar26 + fVar32;
        fVar31 = fVar31 + 0.0;
      }
    }
    else {
      fVar32 = *(float *)(lVar11 + 0x6c);
      fVar34 = *(float *)(lVar11 + 0x70);
      iVar3 = param_2 % 8;
      iVar1 = 8 - iVar3;
      if (iVar3 < 5) {
        iVar1 = iVar3;
      }
      fVar12 = (float)UnityEngine_Random__Range_383a610(0,0x3f800000,0);
      fVar29 = fVar29 + fVar34 * fVar12;
      fVar26 = fVar26 + fVar32 * 0.25 * (float)iVar1;
      fVar31 = fVar31 + 0.0;
    }
    lVar11 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar11 != 0) {
      UnityEngine_Transform__set_position_4092ba8(fVar26,fVar29,fVar31,lVar11,0);
      lVar11 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar5 = PTR_DAT_05805c10;
      if (lVar11 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        fVar32 = (float)puVar8[1];
        fVar34 = (float)puVar8[2];
        UnityEngine_Transform__set_localScale_40932d0(*puVar8,lVar11,0);
        lVar11 = *(long *)(param_1 + 0x28);
        if ((lVar11 != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
          fVar12 = *(float *)(lVar11 + 0x54);
          fVar33 = *(float *)(lVar11 + 0x4c);
          fVar35 = *(float *)(lVar11 + 0x50);
          fVar13 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0xf8),0);
          lVar11 = *(long *)(param_1 + 0x28);
          if ((lVar11 != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
            fVar14 = *(float *)(lVar11 + 0x1c);
            fVar15 = *(float *)(lVar11 + 0x20);
            fVar16 = *(float *)(lVar11 + 0x24);
            fVar17 = *(float *)(lVar11 + 0x28);
            fVar18 = *(float *)(lVar11 + 0x2c);
            fVar19 = *(float *)(lVar11 + 0x30);
            fVar20 = *(float *)(lVar11 + 0x34);
            fVar21 = *(float *)(lVar11 + 0x38);
            fVar22 = *(float *)(lVar11 + 0x3c);
            fVar30 = fVar34;
            fVar28 = fVar32;
            fVar23 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0xf8),0)
            ;
            lVar11 = *(long *)(param_1 + 0x28);
            if (lVar11 != 0) {
              uVar27 = *(undefined8 *)(lVar11 + 0x40);
              uVar10 = *(undefined8 *)(param_1 + 0x58);
              fVar24 = *(float *)(lVar11 + 0x48);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar10,0,0);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x58) == 0) goto LAB_01482634;
                UnityEngine_Renderer__set_sortingOrder_40826fc
                          (*(long *)(param_1 + 0x58),*(int *)(param_1 + 0x100) + param_2,0);
                if (*(long *)(param_1 + 0x58) == 0) goto LAB_01482634;
                UnityEngine_SpriteRenderer__set_color_4095de0
                          (0x3f800000,0x3f800000,0x3f800000,0,*(long *)(param_1 + 0x58),0);
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_01482634;
                DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                           *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x88),
                           *(undefined8 *)(param_1 + 0x58),0);
              }
              if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar10 = DG_Tweening_DOTween__Sequence_1eda154(0);
              uVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
              }
              if (*(long *)(param_1 + 0x28) != 0) {
                lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
                uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                  (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                                   *(undefined4 *)(lVar11 + 0x14),
                                   *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x8c),uVar7,0);
                puVar4 = PTR_DAT_058030a8;
                if (*(long *)(param_1 + 0x28) != 0) {
                  uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90),
                                     *(undefined8 *)PTR_DAT_057874c0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar10,uVar7,0);
                  uVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
                  lVar11 = FUN_012d0e38(*(undefined8 *)puVar4,6);
                  if (lVar11 != 0) {
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 != 0) {
                      fVar33 = fVar26 + fVar33 + (fVar13 - fVar26) * 0.5;
                      fVar13 = fVar29 + fVar35 + (fVar32 - fVar29) * 0.5;
                      fVar32 = fVar31 + fVar12 + (fVar34 - fVar31) * 0.5;
                      *(float *)(lVar11 + 0x20) = fVar33;
                      *(float *)(lVar11 + 0x24) = fVar13;
                      *(float *)(lVar11 + 0x28) = fVar32;
                      if (uVar2 != 1) {
                        *(float *)(lVar11 + 0x2c) = fVar26 + fVar14;
                        *(float *)(lVar11 + 0x30) = fVar29 + fVar15;
                        *(float *)(lVar11 + 0x34) = fVar31 + fVar16;
                        if (2 < uVar2) {
                          fVar18 = fVar13 + fVar18;
                          fVar19 = fVar32 + fVar19;
                          *(float *)(lVar11 + 0x38) = fVar33 + fVar17;
                          *(float *)(lVar11 + 0x3c) = fVar18;
                          *(float *)(lVar11 + 0x40) = fVar19;
                          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_01482634;
                          uVar25 = UnityEngine_Transform__get_position_4092b08
                                             (*(long *)(param_1 + 0xf8),0);
                          uVar2 = *(uint *)(lVar11 + 0x18);
                          if (3 < uVar2) {
                            *(undefined4 *)(lVar11 + 0x44) = uVar25;
                            *(float *)(lVar11 + 0x48) = fVar18;
                            *(float *)(lVar11 + 0x4c) = fVar19;
                            if (uVar2 != 4) {
                              *(float *)(lVar11 + 0x50) = fVar33 + fVar20;
                              *(float *)(lVar11 + 0x54) = fVar13 + fVar21;
                              *(float *)(lVar11 + 0x58) = fVar32 + fVar22;
                              if (5 < uVar2) {
                                *(float *)(lVar11 + 100) = fVar30 + fVar24;
                                *(ulong *)(lVar11 + 0x5c) =
                                     CONCAT44(fVar28 + (float)((ulong)uVar27 >> 0x20),
                                              fVar23 + (float)uVar27);
                                if (*(long *)(param_1 + 0x28) != 0) {
                                  uStack_a0 = 0;
                                  uStack_98 = 0;
                                  uStack_90 = 0;
                                  uVar27 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                                     (*(undefined4 *)
                                                       (*(long *)(param_1 + 0x28) + 0x18),uVar7,
                                                      lVar11,2,1,10,&uStack_a0,0);
                                  puVar4 = PTR_DAT_057606c8;
                                  if (*(long *)(param_1 + 0x28) != 0) {
                                    uVar27 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                       (uVar27,*(undefined8 *)
                                                                (*(long *)(param_1 + 0x28) + 0x58),
                                                        *(undefined8 *)PTR_DAT_057ccae0);
                                    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                                    puVar4 = PTR_DAT_057de720;
                                    if (lVar11 != 0) {
                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                (lVar11,lVar9,*(undefined8 *)PTR_DAT_0575c050,0);
                                      uVar27 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                                         (uVar27,lVar11,*(undefined8 *)puVar4);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (0,uVar10,uVar27,0);
                                      return uVar10;
                                    }
                                  }
                                }
                                goto LAB_01482634;
                              }
                            }
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef8();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01482634:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

