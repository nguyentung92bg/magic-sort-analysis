/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferRewardView$$SetAmountText
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetAmountText (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferRewardView$$SetAmountText
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetAmountText
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView_o*
   __this, System_String_o* text, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferRewardView__SetAmountText_20b0b54
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c29526 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c29526 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x021b0bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x558))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x560));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

