/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CoinMoveTriangularWave
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinMoveTriangularWave (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t sortOrder, UnityEngine_Vector3_o targetPosition, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CoinMoveTriangularWave
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinMoveTriangularWave
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t sortOrder,
   UnityEngine_Vector3_o targetPosition, System_Action_o* callback, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinMoveTriangularWave_1383e38
          (float param_1,float param_2,float param_3,long param_4,uint param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_057ee1b0;
  fVar22 = param_3;
  if ((bRam0000000005c2303b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057de720);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_058116a8);
    FUN_012d0dc8(PTR_DAT_057ee1b0);
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c2303b = 1;
  }
  uStack_38 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = param_6;
    FUN_012d0d74((undefined8 *)(lVar5 + 0x10),param_6);
    *(long *)(lVar5 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar5 + 0x18),param_4);
    if (*(long *)(param_4 + 0x28) != 0) {
      uStack_38 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x78);
      lVar9 = *(long *)(param_4 + 0x48);
      Modules_Infrastructure_UI_Common_Scripts_Scroll_MaxMin__GetRandomValue_4009024(&uStack_38,0);
      if (lVar9 != 0) {
        UnityEngine_Animator__set_speed_1f798ac(lVar9,0);
        lVar9 = *(long *)(param_4 + 0x48);
        uVar10 = *(undefined8 *)(param_4 + 0x50);
        fVar21 = 1.0;
        UnityEngine_Random__Range_383a610(0,0);
        if (lVar9 != 0) {
          UnityEngine_Animator__Play_1f79a6c(lVar9,uVar10,0xffffffff,0);
          lVar9 = UnityEngine_Component__get_transform_408b444(param_4,0);
          if (lVar9 != 0) {
            fVar11 = (float)UnityEngine_Transform__get_position_4092b08(lVar9,0);
            lVar9 = *(long *)(param_4 + 0x28);
            if (lVar9 != 0) {
              fVar19 = *(float *)(lVar9 + 0x6c);
              fVar24 = *(float *)(lVar9 + 0x70);
              uVar2 = param_5 + 7;
              if (-1 < (int)param_5) {
                uVar2 = param_5;
              }
              iVar3 = param_5 - (uVar2 & 0xfffffff8);
              iVar1 = 8 - iVar3;
              if (iVar3 < 5) {
                iVar1 = iVar3;
              }
              fVar12 = (float)UnityEngine_Random__Range_383a610(0,0x3f800000,0);
              lVar9 = UnityEngine_Component__get_transform_408b444(param_4,0);
              if (lVar9 != 0) {
                fVar21 = fVar21 + fVar24 * fVar12;
                fVar11 = fVar11 + fVar19 * 0.25 * (float)iVar1;
                fVar22 = fVar22 + 0.0;
                UnityEngine_Transform__set_position_4092ba8(fVar11,fVar21,fVar22,lVar9,0);
                lVar9 = UnityEngine_Component__get_transform_408b444(param_4,0);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230aa = '\x01';
                }
                puVar4 = PTR_DAT_05805c10;
                if (lVar9 != 0) {
                  puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                  UnityEngine_Transform__set_localScale_40932d0(*puVar8,puVar8[1],puVar8[2],lVar9,0)
                  ;
                  lVar9 = *(long *)(param_4 + 0x28);
                  if (lVar9 != 0) {
                    fVar19 = *(float *)(lVar9 + 0x48);
                    fVar27 = *(float *)(lVar9 + 0x4c);
                    uVar10 = *(undefined8 *)(param_4 + 0x58);
                    fVar24 = *(float *)(lVar9 + 0x24);
                    fVar26 = *(float *)(lVar9 + 0x50);
                    fVar25 = *(float *)(lVar9 + 0x54);
                    fVar23 = *(float *)(lVar9 + 0x1c);
                    fVar20 = *(float *)(lVar9 + 0x20);
                    fVar12 = *(float *)(lVar9 + 0x28);
                    fVar13 = *(float *)(lVar9 + 0x2c);
                    fVar14 = *(float *)(lVar9 + 0x30);
                    fVar15 = *(float *)(lVar9 + 0x34);
                    fVar16 = *(float *)(lVar9 + 0x38);
                    fVar17 = *(float *)(lVar9 + 0x3c);
                    uVar18 = *(undefined8 *)(lVar9 + 0x40);
                    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar10,0,0);
                    if ((uVar6 & 1) != 0) {
                      if (*(long *)(param_4 + 0x58) == 0) goto LAB_0148442c;
                      UnityEngine_Renderer__set_sortingOrder_40826fc
                                (*(long *)(param_4 + 0x58),
                                 param_5 + *(int *)(param_4 + 0x100) + 1000,0);
                      if (*(long *)(param_4 + 0x58) == 0) goto LAB_0148442c;
                      UnityEngine_SpriteRenderer__set_color_4095de0
                                (0x3f800000,0x3f800000,0x3f800000,0,*(long *)(param_4 + 0x58),0);
                      if (*(long *)(param_4 + 0x28) == 0) goto LAB_0148442c;
                      DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                 *(undefined4 *)(*(long *)(param_4 + 0x28) + 0x88),
                                 *(undefined8 *)(param_4 + 0x58),0);
                    }
                    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    uVar10 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    uVar7 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    if (cRam0000000005c230a9 == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230a9 = '\x01';
                    }
                    if (*(long *)(param_4 + 0x28) != 0) {
                      lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
                      uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                        (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                                         *(undefined4 *)(lVar9 + 0x14),
                                         *(undefined4 *)(*(long *)(param_4 + 0x28) + 0x8c),uVar7,0);
                      puVar4 = PTR_DAT_058030a8;
                      if (*(long *)(param_4 + 0x28) != 0) {
                        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar7,*(undefined8 *)(*(long *)(param_4 + 0x28) + 0x90),
                                           *(undefined8 *)PTR_DAT_057874c0);
                        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar10,uVar7,0);
                        uVar7 = UnityEngine_Component__get_transform_408b444(param_4,0);
                        lVar9 = FUN_012d0e38(*(undefined8 *)puVar4,6);
                        if (lVar9 != 0) {
                          uVar2 = *(uint *)(lVar9 + 0x18);
                          if (uVar2 != 0) {
                            fVar27 = (param_1 - fVar11) * 0.5 + fVar11 + fVar27;
                            fVar26 = (param_2 - fVar21) * 0.5 + fVar21 + fVar26;
                            fVar25 = (param_3 - fVar22) * 0.5 + fVar22 + fVar25;
                            *(float *)(lVar9 + 0x20) = fVar27;
                            *(float *)(lVar9 + 0x24) = fVar26;
                            *(float *)(lVar9 + 0x28) = fVar25;
                            if (uVar2 != 1) {
                              *(float *)(lVar9 + 0x2c) = fVar11 + fVar23;
                              *(float *)(lVar9 + 0x30) = fVar21 + fVar20;
                              *(float *)(lVar9 + 0x34) = fVar22 + fVar24;
                              if (2 < uVar2) {
                                *(float *)(lVar9 + 0x38) = fVar27 + fVar12;
                                *(float *)(lVar9 + 0x3c) = fVar26 + fVar13;
                                *(float *)(lVar9 + 0x40) = fVar25 + fVar14;
                                if (uVar2 != 3) {
                                  *(float *)(lVar9 + 0x44) = param_1;
                                  *(float *)(lVar9 + 0x48) = param_2;
                                  *(float *)(lVar9 + 0x4c) = param_3;
                                  if (4 < uVar2) {
                                    *(float *)(lVar9 + 0x50) = fVar27 + fVar15;
                                    *(float *)(lVar9 + 0x54) = fVar26 + fVar16;
                                    *(float *)(lVar9 + 0x58) = fVar25 + fVar17;
                                    if (uVar2 != 5) {
                                      *(ulong *)(lVar9 + 0x5c) =
                                           CONCAT44(param_2 + (float)((ulong)uVar18 >> 0x20),
                                                    param_1 + (float)uVar18);
                                      *(float *)(lVar9 + 100) = param_3 + fVar19;
                                      if (*(long *)(param_4 + 0x28) != 0) {
                                        uStack_98 = 0;
                                        uStack_90 = 0;
                                        uStack_88 = 0;
                                        uVar18 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                                           (*(undefined4 *)
                                                             (*(long *)(param_4 + 0x28) + 0x18),
                                                            uVar7,lVar9,2,1,10,&uStack_98,0);
                                        puVar4 = PTR_DAT_057606c8;
                                        if (*(long *)(param_4 + 0x28) != 0) {
                                          uVar18 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar18,*(undefined8 *)
                                                                     (*(long *)(param_4 + 0x28) +
                                                                     0x58),
                                                             *(undefined8 *)PTR_DAT_057ccae0);
                                          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                                          puVar4 = PTR_DAT_057de720;
                                          if (lVar9 != 0) {
                                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                                      (lVar9,lVar5,*(undefined8 *)PTR_DAT_058116a8,0
                                                      );
                                            uVar18 = 
                                                  DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                                            (uVar18,lVar9,*(undefined8 *)puVar4);
                                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                      (0,uVar10,uVar18,0);
                                            return uVar10;
                                          }
                                        }
                                      }
                                      goto LAB_0148442c;
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
      }
    }
  }
LAB_0148442c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

