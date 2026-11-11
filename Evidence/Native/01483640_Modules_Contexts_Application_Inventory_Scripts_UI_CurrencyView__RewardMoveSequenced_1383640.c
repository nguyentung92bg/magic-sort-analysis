/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$RewardMoveSequenced
DG_Tweening_Sequence_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RewardMoveSequenced (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Vector3_o targetPosition, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$RewardMoveSequenced
   DG_Tweening_Sequence_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RewardMoveSequenced
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, UnityEngine_Vector3_o
   targetPosition, System_Action_o* callback, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RewardMoveSequenced_1383640
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_057bf758;
  if ((bRam0000000005c23036 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057deb10);
    FUN_012d0dc8(PTR_DAT_057bf758);
    bRam0000000005c23036 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_5;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_5);
    *(long *)(lVar3 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x18),param_4);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (*(long *)(param_4 + 0x38) != 0) {
      uVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (param_1,param_2,param_3,*(undefined4 *)(*(long *)(param_4 + 0x38) + 0xc0),
                         uVar5,0,0);
      puVar2 = PTR_DAT_057874c0;
      if (*(long *)(param_4 + 0x38) != 0) {
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x38) + 200),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
        uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
        lVar6 = *(long *)(param_4 + 0x38);
        if (lVar6 != 0) {
          uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(lVar6 + 0xa8),*(undefined4 *)(lVar6 + 0xac),
                             *(undefined4 *)(lVar6 + 0xb0),*(undefined4 *)(lVar6 + 0x98),uVar5,0);
          puVar1 = PTR_DAT_057606c8;
          if (*(long *)(param_4 + 0x38) != 0) {
            uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0xa0),
                               *(undefined8 *)puVar2);
            DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar5,0);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar2 = PTR_DAT_0579e470;
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,lVar3,*(undefined8 *)PTR_DAT_057deb10,0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (uVar4,lVar6,*(undefined8 *)puVar2);
              return uVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

