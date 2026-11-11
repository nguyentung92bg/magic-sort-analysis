/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ScaleIn
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleIn (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ScaleIn
   DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleIn
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleIn_1383840(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if ((bRam0000000005c23037 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c23037 = 1;
  }
  lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if (lVar2 != 0) {
    puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0(*puVar6,puVar6[1],puVar6[2],lVar2,0);
    uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      lVar2 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                        (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),uVar3,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
        if ((bRam0000000005c2b025 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05805638,uVar3,*(undefined8 *)PTR_DAT_057874c0);
          FUN_012d0dc8(PTR_DAT_05776a80);
          FUN_012d0dc8(PTR_DAT_0580b108);
          bRam0000000005c2b025 = 1;
        }
        puVar1 = PTR_DAT_05776a80;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar2 + 0xb4) = 0x25;
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0580b108;
          if (lVar4 != 0) {
            DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar3,0);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar5,lVar4,*(undefined8 *)PTR_DAT_05805638,0)
              ;
              *(long *)(lVar2 + 0xb8) = lVar5;
              FUN_012d0d74((long *)(lVar2 + 0xb8),lVar5);
              return lVar2;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

