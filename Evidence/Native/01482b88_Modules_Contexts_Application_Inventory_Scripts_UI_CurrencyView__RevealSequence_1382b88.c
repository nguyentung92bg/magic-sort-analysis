/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$RevealSequence
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RevealSequence (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRevealAnimationConfig_o* currencyRevealAnimationConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$RevealSequence
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RevealSequence
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this,
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRevealAnimationConfig_o*
   currencyRevealAnimationConfig, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RevealSequence_1382b88
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c23032 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801418);
    FUN_012d0dc8(PTR_DAT_05779300);
    FUN_012d0dc8(PTR_DAT_05799f98);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c23032 = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetColor_13830a0(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05818d48;
  if (lVar7 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_1,*(undefined8 *)PTR_DAT_05801418,0);
    DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0(uVar6,lVar7,*(undefined8 *)puVar2);
    lVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar2 = PTR_DAT_05805c10;
    if (lVar7 != 0) {
      puVar14 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0(*puVar14,puVar14[1],puVar14[2],lVar7,0);
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar8,
                   *(undefined8 *)(*plVar8 + 0x2b0));
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (UnityEngine_SpriteRenderer__set_color_4095de0
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(param_1 + 0x58),0),
           param_2 != 0)) {
          if (*(char *)(param_2 + 0x54) != '\0') {
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_01483030;
            UnityEngine_Renderer__set_sortingOrder_40826fc
                      (*(long *)(param_1 + 0x58),*(int *)(param_1 + 0x100) + 2,0);
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_01483030;
            TMPro_TextMeshPro__set_sortingOrder_38b5690
                      (*(long *)(param_1 + 0x40),*(int *)(param_1 + 0x100) + 3,0);
          }
          puVar3 = PTR_DAT_057874c0;
          uVar9 = UnityEngine_Component__get_transform_408b444(param_1,0);
          fVar18 = *(float *)(param_2 + 0x38);
          uVar9 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),fVar18,
                             *(undefined4 *)(param_2 + 0x3c),uVar9,0);
          uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar9,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)puVar3);
          uVar10 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                             (0,*(undefined4 *)(param_2 + 0x48),*(undefined8 *)(param_1 + 0x58),0);
          fVar17 = *(float *)(param_2 + 0x48);
          uVar11 = DG_Tweening_DOTweenModuleUI__DOFade_33e3960
                             (0,fVar17,*(undefined8 *)(param_1 + 0x40),0);
          uVar12 = UnityEngine_Component__get_transform_408b444(param_1,0);
          lVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (lVar7 != 0) {
            fVar15 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar7,0);
            if (cRam0000000005c230ac == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230ac = '\x01';
            }
            fVar16 = *(float *)(param_2 + 0x2c);
            lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar12 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                               (fVar15 + *(float *)(lVar7 + 0x18) * fVar16,
                                fVar17 + *(float *)(lVar7 + 0x1c) * fVar16,
                                fVar18 + *(float *)(lVar7 + 0x20) * fVar16,
                                *(undefined4 *)(param_2 + 0x18),uVar12,0,0);
            uVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                               (uVar12,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)puVar3);
            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar9,0);
            uVar19 = *(undefined4 *)(param_2 + 0x50);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar7 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar7,param_1,*(undefined8 *)PTR_DAT_05779300,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar19,uVar6,lVar7,0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                        (*(undefined4 *)(param_2 + 0x28),uVar6,uVar12,0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                        (*(undefined4 *)(param_2 + 0x4c),uVar6,uVar10,0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                        (*(undefined4 *)(param_2 + 0x4c),uVar6,uVar11,0);
              puVar5 = PTR_DAT_057fbae0;
              puVar4 = PTR_DAT_0579e470;
              puVar3 = PTR_DAT_05799f98;
              puVar2 = PTR_DAT_057936b8;
              if (*(long *)(param_1 + 0x60) != 0) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_98,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_0579f3e8);
                while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                          (&uStack_98,*(undefined8 *)puVar5), (uVar13 & 1) != 0) {
                  uVar19 = *(undefined4 *)(param_2 + 0x4c);
                  uVar9 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                    (0,*(undefined4 *)(param_2 + 0x48),uStack_88,0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar19,uVar6,uVar9,0);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_98,*(undefined8 *)puVar2);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar7 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_1,*(undefined8 *)puVar3,0);
                  DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                            (uVar6,lVar7,*(undefined8 *)puVar4);
                  return uVar6;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01483030:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

