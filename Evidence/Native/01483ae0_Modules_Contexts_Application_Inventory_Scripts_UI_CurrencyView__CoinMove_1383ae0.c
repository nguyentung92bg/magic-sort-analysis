/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CoinMove
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinMove (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Vector3_o targetPosition, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CoinMove
   DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinMove
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Vector3_o
   targetPosition, System_Action_o* callback, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinMove_1383ae0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_DAT_057c7b10;
  uVar4 = param_3;
  if ((bRam0000000005c2303a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057ab958);
    FUN_012d0dc8(PTR_DAT_057c7b10);
    bRam0000000005c2303a = 1;
  }
  uStack_78 = 0;
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_5;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_5);
    *(long *)(lVar3 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x18),param_4);
    if (*(long *)(param_4 + 0x28) != 0) {
      uStack_78 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x78);
      lVar6 = *(long *)(param_4 + 0x48);
      Modules_Infrastructure_UI_Common_Scripts_Scroll_MaxMin__GetRandomValue_4009024(&uStack_78,0);
      if (lVar6 != 0) {
        UnityEngine_Animator__set_speed_1f798ac(lVar6,0);
        lVar6 = *(long *)(param_4 + 0x48);
        uVar10 = *(undefined8 *)(param_4 + 0x50);
        fVar11 = 1.0;
        UnityEngine_Random__Range_383a610(0,0);
        if (lVar6 != 0) {
          UnityEngine_Animator__Play_1f79a6c(lVar6,uVar10,0xffffffff,0);
          lVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
          if (lVar6 != 0) {
            fVar7 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
            lVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
            if (lVar6 != 0) {
              UnityEngine_Transform__get_position_4092b08(lVar6,0);
              lVar6 = *(long *)(param_4 + 0x38);
              if (lVar6 != 0) {
                fVar8 = (float)UnityEngine_Random__Range_383a610
                                         (*(undefined4 *)(lVar6 + 0x4c),
                                          *(undefined4 *)(lVar6 + 0x50),0);
                lVar6 = *(long *)(param_4 + 0x38);
                if (lVar6 != 0) {
                  UnityEngine_Random__Range_383a610
                            (*(undefined4 *)(lVar6 + 0x54),*(undefined4 *)(lVar6 + 0x58),0);
                  lVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
                  if (lVar6 != 0) {
                    uVar12 = (ulong)(uint)(fVar11 - (float)param_2);
                    fVar8 = (fVar7 - (float)param_1) * fVar8;
                    uVar10 = UnityEngine_Transform__get_position_4092b08(lVar6,0);
                    if (cRam0000000005c230aa == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230aa = '\x01';
                    }
                    uVar9 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
                    uVar5 = **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    uVar14 = 0;
                    uVar4 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                                      (uVar10,uVar12,uVar4,param_1,param_2,param_3,0);
                    uVar10 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    lVar6 = *(long *)(param_4 + 0x38);
                    if (lVar6 != 0) {
                      uVar13 = *(undefined4 *)(lVar6 + 100);
                      uVar1 = *(undefined4 *)(lVar6 + 0x48);
                      uStack_90 = 0;
                      uStack_88 = 0;
                      uStack_80 = 0;
                      System_Nullable_Color____ctor_2037044
                                (0x3f800000,0,0,0x3f800000,&uStack_90,
                                 *(undefined8 *)PTR_DAT_057dc5e0);
                      uStack_a8 = uStack_88;
                      uStack_b0 = uStack_90;
                      uStack_a0 = uStack_80;
                      uVar4 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                        (uVar13,uVar10,uVar4,2,2,uVar1,&uStack_b0,0,in_x7,fVar8,
                                         uVar14,uVar5,uVar9);
                      puVar2 = PTR_DAT_057606c8;
                      if (*(long *)(param_4 + 0x38) != 0) {
                        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar4,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68),
                                           *(undefined8 *)PTR_DAT_057ccae0);
                        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                        puVar2 = PTR_DAT_0578afb0;
                        if (lVar6 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar6,lVar3,*(undefined8 *)PTR_DAT_057ab958,0);
                          DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                    (uVar4,lVar6,*(undefined8 *)puVar2);
                          return uVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

