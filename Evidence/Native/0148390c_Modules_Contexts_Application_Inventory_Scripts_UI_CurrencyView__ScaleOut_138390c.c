/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ScaleOut
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleOut (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ScaleOut
   DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleOut
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ScaleOut_138390c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if ((bRam0000000005c23038 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c23038 = 1;
  }
  uVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if (param_1[7] != 0) {
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar2 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*puVar5,puVar5[1],puVar5[2],*(undefined4 *)(param_1[7] + 0x88),uVar2,0);
    puVar1 = PTR_DAT_057606c8;
    if (param_1[7] != 0) {
      lVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar2,*(undefined8 *)(param_1[7] + 0x90),*(undefined8 *)PTR_DAT_057874c0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057984e0;
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)(*param_1 + 0x1c0),0);
        uVar2 = *(undefined8 *)puVar1;
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(long *)(lVar3 + 0x80) = lVar4;
          FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar2);
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

