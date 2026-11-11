/* IL2CPP: DailyRewardPopUpHatView$$PlayOpenAnimation
void DailyRewardPopUpHatView__PlayOpenAnimation (DailyRewardPopUpHatView_o* __this, bool darkenRewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: DailyRewardPopUpHatView$$PlayOpenAnimation
   void DailyRewardPopUpHatView__PlayOpenAnimation (DailyRewardPopUpHatView_o* __this, bool
   darkenRewards, const MethodInfo* method); */

void DailyRewardPopUpHatView__PlayOpenAnimation_19ed6f8(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    uVar5 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x38),0);
    if (lVar6 != 0) {
      UnityEngine_Animation__Play_1f7a100(lVar6,uVar5,0);
      uVar1 = _UNK_04321764;
      if ((param_2 & 1) == 0) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x60);
      if (lVar6 != 0) {
        if ((bRam0000000005c23033 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576c200,0);
          bRam0000000005c23033 = 1;
        }
        puVar2 = PTR_DAT_0576c200;
        if (*(long *)(lVar6 + 0x58) != 0) {
          UnityEngine_SpriteRenderer__set_color_4095de0
                    (uVar1,uVar1,uVar1,0x3f800000,*(long *)(lVar6 + 0x58),0);
          uVar5 = *(undefined8 *)(lVar6 + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          plVar4 = *(long **)(lVar6 + 0x40);
          if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01483318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x2a8))
                      (uVar1,uVar1,uVar1,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

