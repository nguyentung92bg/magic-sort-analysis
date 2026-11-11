/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$RewardMoveBezier
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RewardMoveBezier (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Vector3_o targetPosition, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$RewardMoveBezier
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RewardMoveBezier
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Vector3_o
   targetPosition, System_Action_o* callback, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RewardMoveBezier_1383334
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar2 = PTR_DAT_0577f160;
  uVar10 = param_2;
  uVar5 = param_3;
  if ((bRam0000000005c23035 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057e2ce8);
    FUN_012d0dc8(PTR_DAT_0577f160);
    bRam0000000005c23035 = 1;
  }
  fVar9 = (float)uVar10;
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_5;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_5);
    *(long *)(lVar3 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x18),param_4);
    lVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar4 != 0) {
      fVar7 = (float)UnityEngine_Transform__get_position_4092b08(lVar4,0);
      lVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__get_position_4092b08(lVar4,0);
        if (*(long *)(param_4 + 0x38) != 0) {
          fVar14 = *(float *)(*(long *)(param_4 + 0x38) + 0x40);
          lVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
          if (lVar4 != 0) {
            uVar11 = (ulong)(uint)(fVar9 - (float)param_2);
            fVar14 = (fVar7 - (float)param_1) * fVar14;
            uVar10 = UnityEngine_Transform__get_position_4092b08(lVar4,0);
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            uVar8 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
            uVar6 = **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
            uVar15 = 0;
            uVar10 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                               (uVar10,uVar11,uVar5,param_1,param_2,param_3,0);
            if (*(long *)(param_4 + 0x38) != 0) {
              fVar9 = (float)Modules_Infrastructure_Utils_BezierUtils__GetBezierPathLength_3de0bf8
                                       (uVar10,*(undefined4 *)(*(long *)(param_4 + 0x38) + 0x48),0);
              lVar4 = *(long *)(param_4 + 0x38);
              if (lVar4 != 0) {
                fVar7 = *(float *)(lVar4 + 0x2c);
                fVar13 = *(float *)(lVar4 + 0x30);
                fVar12 = *(float *)(lVar4 + 0x28);
                uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
                if (*(long *)(param_4 + 0x38) != 0) {
                  fVar9 = fVar9 * fVar13;
                  uVar1 = *(undefined4 *)(*(long *)(param_4 + 0x38) + 0x48);
                  if (fVar9 <= fVar7) {
                    fVar7 = fVar9;
                  }
                  if (fVar9 < fVar12) {
                    fVar7 = fVar12;
                  }
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_78 = 0;
                  System_Nullable_Color____ctor_2037044
                            (0x3f800000,0,0,0x3f800000,&uStack_88,*(undefined8 *)PTR_DAT_057dc5e0);
                  uStack_98 = uStack_80;
                  uStack_a0 = uStack_88;
                  uStack_90 = uStack_78;
                  uVar10 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                     (fVar7,uVar5,uVar10,2,3,uVar1,&uStack_a0,0,in_x7,fVar14,uVar15,
                                      uVar6,uVar8);
                  puVar2 = PTR_DAT_057606c8;
                  if (*(long *)(param_4 + 0x38) != 0) {
                    uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                       (uVar10,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x38),
                                        *(undefined8 *)PTR_DAT_057ccae0);
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    puVar2 = PTR_DAT_0578afb0;
                    if (lVar4 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar4,lVar3,*(undefined8 *)PTR_DAT_057e2ce8,0);
                      DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                (uVar10,lVar4,*(undefined8 *)puVar2);
                      return uVar10;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

