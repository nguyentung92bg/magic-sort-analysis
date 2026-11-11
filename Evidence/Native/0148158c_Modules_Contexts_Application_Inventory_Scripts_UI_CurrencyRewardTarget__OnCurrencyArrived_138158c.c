/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyRewardTarget$$OnCurrencyArrived
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget__OnCurrencyArrived (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyRewardTarget$$OnCurrencyArrived
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget__OnCurrencyArrived
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyRewardTarget__OnCurrencyArrived_138158c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((bRam0000000005c23025 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7c50);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577fe10);
    FUN_012d0dc8(PTR_DAT_0580da90);
    bRam0000000005c23025 = 1;
  }
  puVar2 = PTR_DAT_0580da90;
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(param_1 + 0x18),0);
    uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
    DG_Tweening_ShortcutExtensions__DORewind_1eeb7a4(uVar3,1,0);
    uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
    uVar3 = DG_Tweening_ShortcutExtensions__DOPunchScale_1ee71cc
                      (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0x3f800000,
                       uVar3,*(undefined4 *)(param_1 + 0x48),0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar2);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_0577fe10;
    puVar1 = PTR_DAT_0576c200;
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057d7c50,0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (uVar3,lVar4,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      FUN_012d0d74((undefined8 *)(param_1 + 0x60),uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar3,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyDisplayerController__UpdateView_1380e10
                  ();
        plVar6 = *(long **)(param_1 + 0x68);
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01481708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

