/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayCardPackOpenSequence
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayCardPackOpenSequence (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, Modules_Contexts_Home_Collection_Scripts_OpenedCardPackData_o* openedCardPack, System_Collections_Generic_List_Transform__o* layoutParent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayCardPackOpenSequence
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayCardPackOpenSequence
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this,
   Modules_Contexts_Home_Collection_Scripts_OpenedCardPackData_o* openedCardPack,
   System_Collections_Generic_List_Transform__o* layoutParent, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayCardPackOpenSequence_1384ec0
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  
  puVar1 = PTR_DAT_0578d7f0;
  lVar3 = *(long *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    return 0;
  }
  if ((bRam0000000005c35a21 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,param_2,param_3,0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057d03a0);
    FUN_012d0dc8(PTR_DAT_057580d0);
    FUN_012d0dc8(PTR_DAT_057f7248);
    FUN_012d0dc8(PTR_DAT_0579c7e0);
    FUN_012d0dc8(PTR_DAT_057bba30);
    FUN_012d0dc8(PTR_DAT_0578d7f0);
    FUN_012d0dc8(PTR_DAT_0580fa28);
    bRam0000000005c35a21 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar3;
    FUN_012d0d74((long *)(lVar4 + 0x10),lVar3);
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    *puVar9 = param_2;
    FUN_012d0d74(puVar9,param_2);
    Modules_Contexts_Home_Collection_Scripts_UI_CollectionPackOpeningAnimationHandler__CreateCardViews_3a694a0
              (lVar3,*puVar9);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_057f7248,0);
      DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar6,0);
      uVar7 = UnityEngine_Component__get_transform_408b444(lVar3,0);
      lVar6 = *(long *)(lVar3 + 0x18);
      if (lVar6 != 0) {
        uVar7 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                          (*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                           *(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),uVar7,0,0);
        if (*(long *)(lVar3 + 0x18) != 0) {
          uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar7,*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x28),
                             *(undefined8 *)PTR_DAT_057874c0);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar7,0);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_0579c7e0,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
            if ((*(long *)(lVar3 + 0x18) != 0) &&
               (lVar6 = *(long *)(*(long *)(lVar3 + 0x18) + 0x78), lVar6 != 0)) {
              UnityEngine_AnimationClip__get_length_1f78e90(lVar6,0);
              DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar5,0);
              puVar2 = PTR_DAT_0580fa28;
              if (*(long *)(lVar3 + 0x18) != 0) {
                uVar11 = *(undefined4 *)(*(long *)(lVar3 + 0x18) + 0x98);
                lVar6 = *(long *)PTR_DAT_0580fa28;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar6 = *(long *)puVar2;
                }
                lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar10 == 0) {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar6 = *(long *)puVar2;
                  }
                  uVar7 = **(undefined8 **)(lVar6 + 0xb8);
                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar10 == 0) goto LAB_03b69494;
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar10,uVar7,*(undefined8 *)PTR_DAT_057d03a0,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                  *plVar8 = lVar10;
                  FUN_012d0d74(plVar8,lVar10);
                }
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar11,uVar5,lVar10,0);
                if (*(long *)(lVar3 + 0x18) != 0) {
                  lVar6 = *(long *)puVar2;
                  uVar11 = *(undefined4 *)(*(long *)(lVar3 + 0x18) + 0x98);
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar6 = *(long *)puVar2;
                  }
                  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                  if (lVar10 == 0) {
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      lVar6 = *(long *)puVar2;
                    }
                    uVar7 = **(undefined8 **)(lVar6 + 0xb8);
                    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar10 == 0) goto LAB_03b69494;
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar10,uVar7,*(undefined8 *)PTR_DAT_057580d0,0);
                    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                    *plVar8 = lVar10;
                    FUN_012d0d74(plVar8,lVar10);
                  }
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar11,uVar5,lVar10,0)
                  ;
                  if (*(long *)(lVar3 + 0x18) != 0) {
                    DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                              (*(undefined4 *)(*(long *)(lVar3 + 0x18) + 0x30),uVar5,0);
                    uVar7 = Modules_Contexts_Home_Collection_Scripts_UI_CollectionPackOpeningAnimationHandler__MoveCardsToLayout_3a69a50
                                      (lVar3,param_3);
                    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar7,0);
                    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar3 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar3,lVar4,*(undefined8 *)PTR_DAT_057bba30,0);
                      DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar3,0);
                      return uVar5;
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
LAB_03b69494:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

