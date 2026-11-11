/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyShineView$$Play
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__Play (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView_o* __this, float from, float to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyShineView$$Play
   DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__Play
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView_o* __this, float from, float
   to, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__Play_1381788
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  
  if ((bRam0000000005c23026 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057942d0);
    FUN_012d0dc8(PTR_DAT_0578aeb8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_0580da90);
    FUN_012d0dc8(PTR_DAT_057b6800);
    bRam0000000005c23026 = 1;
  }
  if ((*(long *)(param_3 + 0x18) == 0) || (*(long *)(*(long *)(param_3 + 0x18) + 0x18) == 0)) {
    return 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
  uVar5 = 0;
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    if (*(float *)(*(long *)(param_3 + 0x20) + 0x18) <= 0.0) {
      return 0;
    }
    plVar6 = (long *)(param_3 + 0x30);
    if (*plVar6 == 0) {
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578aeb8);
      uVar5 = 0;
      if (lVar3 == 0) goto LAB_01481980;
      UnityEngine_MaterialPropertyBlock___ctor_38410b0(lVar3,0);
      *plVar6 = lVar3;
      FUN_012d0d74(plVar6,lVar3);
    }
    lVar3 = *(long *)(param_3 + 0x38);
    uVar5 = 0;
    if (lVar3 != 0) {
      uVar5 = DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar3,0,0);
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      uVar7 = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x18);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
      uVar5 = 0;
      if (lVar3 != 0) {
        DG_Tweening_TweenCallback_float____ctor_341f244
                  (lVar3,param_3,*(undefined8 *)PTR_DAT_057942d0,0);
        uVar5 = DG_Tweening_DOVirtual__Float_1edbb8c(param_1,param_2,uVar7,lVar3,0);
        puVar1 = PTR_DAT_057b6800;
        if (*(long *)(param_3 + 0x20) != 0) {
          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar5,*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20),
                             *(undefined8 *)PTR_DAT_0580da90);
          uVar4 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
          uVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                            (uVar5,uVar4,*(undefined8 *)puVar1);
          *(undefined8 *)(param_3 + 0x38) = uVar5;
          FUN_012d0d74((long *)(param_3 + 0x38),uVar5);
          return *(undefined8 *)(param_3 + 0x38);
        }
      }
    }
  }
LAB_01481980:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(uVar5);
}

