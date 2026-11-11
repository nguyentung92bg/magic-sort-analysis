/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CoinScaleIn
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinScaleIn (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$CoinScaleIn
   DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinScaleIn
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__CoinScaleIn_138443c
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c2303c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2303c = 1;
  }
  uVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*(undefined4 *)(lVar5 + 0x70),*(undefined4 *)(lVar5 + 0x74),
                       *(undefined4 *)(lVar5 + 0x78),*(undefined4 *)(lVar5 + 0x7c),uVar2,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x80);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar2,*(undefined8 *)PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar5 + 0xb4) = 0x25;
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar3 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar3,uVar2,0);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar4,lVar3,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar5 + 0xb8) = lVar4;
            FUN_012d0d74((long *)(lVar5 + 0xb8),lVar4);
            return lVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

