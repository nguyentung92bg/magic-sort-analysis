/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardPopUp$$PlayMoveAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__PlayMoveAnimation (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardPopUp$$PlayMoveAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__PlayMoveAnimation
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp_o* __this,
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardPopUp__PlayMoveAnimation_38d621c
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c34bdb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c34bdb = 1;
  }
  puVar2 = PTR_DAT_057fc1d0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar3,uVar4,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057874c0;
  if (param_2 != 0) {
    uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    uVar4 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                      (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x28),uVar4,0,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
    fVar6 = *(float *)(param_1 + 0x28);
    uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*(float *)(lVar5 + 0xc) * _UNK_043b4398,
                       *(float *)(lVar5 + 0x10) * _UNK_043b4398,
                       *(float *)(lVar5 + 0x14) * _UNK_043b4398,*(undefined4 *)(param_1 + 0x40),
                       uVar4,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar4,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar6 + _UNK_04339bfc,uVar3,uVar4,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

