/* IL2CPP: DailyRewardPopUpHatView$$PlayOpenAnimationWithoutDarkening
void DailyRewardPopUpHatView__PlayOpenAnimationWithoutDarkening (DailyRewardPopUpHatView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardPopUpHatView$$PlayOpenAnimationWithoutDarkening
   void DailyRewardPopUpHatView__PlayOpenAnimationWithoutDarkening (DailyRewardPopUpHatView_o*
   __this, const MethodInfo* method); */

void DailyRewardPopUpHatView__PlayOpenAnimationWithoutDarkening_19ed770(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
    if (lVar2 != 0) {
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

