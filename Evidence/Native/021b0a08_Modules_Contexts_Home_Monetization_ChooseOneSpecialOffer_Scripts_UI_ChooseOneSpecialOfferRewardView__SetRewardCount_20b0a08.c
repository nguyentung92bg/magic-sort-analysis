/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferRewardView$$SetRewardCount
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetRewardCount (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferRewardView$$SetRewardCount
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetRewardCount
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView_o*
   __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetRewardCount_20b0a08
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c29525 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_0578d9b8);
    bRam0000000005c29525 = 1;
  }
  uStack_24 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(long *)(param_1 + 0x20) == 0) ||
        (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0),
        lVar4 == 0)) || (UnityEngine_GameObject__SetActive_408e318(lVar4,1,0), param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(int *)(param_2 + 0x10) == 1) {
      uVar1 = *(undefined4 *)(param_2 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_0575bcf8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = Modules_Infrastructure_Utils_PriceFormatter__FormatNumberWithSpaces_3de4a04(uVar1,0);
    }
    else {
      uVar3 = Modules_Contexts_Application_Reward_Scripts_RewardModel__IsDurationBased_3ce0f44
                        (param_2,0);
      puVar2 = PTR_DAT_0578d9b8;
      if ((uVar3 & 1) == 0) {
        uStack_24 = *(undefined4 *)(param_2 + 0x14);
        uVar5 = System_Int32__ToString_26c9768(&uStack_24,0);
        uVar5 = System_String__Concat_1ec3580(*(undefined8 *)puVar2,uVar5,0);
      }
      else {
        uVar5 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc
                          (*(undefined8 *)(param_2 + 0x18),0);
      }
    }
    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetAmountText_20b0b54
              (param_1,uVar5);
  }
  return;
}

