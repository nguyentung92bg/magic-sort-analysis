/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetAmountOrDurationWithSign
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetAmountOrDurationWithSign
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
               (long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2302a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0578d9b8);
    bRam0000000005c2302a = 1;
  }
  uStack_24 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (((*(long *)(param_1 + 0x40) == 0) ||
        (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
        lVar3 == 0)) || (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0), param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(int *)(param_2 + 0x10) == 1) {
      uStack_24 = *(undefined4 *)(param_2 + 0x14);
      uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
    }
    else {
      uVar2 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                        (param_2,0);
      puVar1 = PTR_DAT_0578d9b8;
      if ((uVar2 & 1) == 0) {
        uStack_24 = *(undefined4 *)(param_2 + 0x14);
        uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
        uVar4 = System_String__Concat_1ec3580(*(undefined8 *)puVar1,uVar4,0);
      }
      else {
        uVar4 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc
                          (*(undefined8 *)(param_2 + 0x18),0);
      }
    }
    Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText_1381d84
              (param_1,uVar4);
  }
  return;
}

