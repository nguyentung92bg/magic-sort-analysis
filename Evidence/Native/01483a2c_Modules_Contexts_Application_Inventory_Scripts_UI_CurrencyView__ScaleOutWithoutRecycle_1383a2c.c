/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ScaleOutWithoutRecycle
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleOutWithoutRecycle (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ScaleOutWithoutRecycle
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleOutWithoutRecycle
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleOutWithoutRecycle_1383a2c
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if ((bRam0000000005c23039 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c23039 = 1;
  }
  uVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    lVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*puVar6,puVar6[1],puVar6[2],*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x88)
                       ,uVar2,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x90);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar2,*(undefined8 *)PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar3 + 0xb4) = 0x25;
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar4 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar2,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar5,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar3 + 0xb8) = lVar5;
            FUN_012d0d74((long *)(lVar3 + 0xb8),lVar5);
            return lVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

