/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CompleteOpenPackAnimInstant
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CompleteOpenPackAnimInstant (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CompleteOpenPackAnimInstant
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CompleteOpenPackAnimInstant
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CompleteOpenPackAnimInstant_1384efc
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    return 0;
  }
  if ((bRam0000000005c35a28 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e2018,0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c35a28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(lVar2 + 0x18) != 0) {
    DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
              (*(undefined4 *)(*(long *)(lVar2 + 0x18) + 0xa8),uVar3,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar2,*(undefined8 *)PTR_DAT_057e2018,0);
      DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar3,lVar4,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

