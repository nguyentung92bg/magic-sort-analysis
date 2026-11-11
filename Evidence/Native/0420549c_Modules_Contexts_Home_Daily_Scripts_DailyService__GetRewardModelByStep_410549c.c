/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetRewardModelByStep
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, int32_t step, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetRewardModelByStep
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, int32_t step, const MethodInfo*
   method); */

long Modules_Contexts_Home_Daily_Scripts_DailyService__GetRewardModelByStep_410549c
               (long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c3ab92 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579c548);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    bRam0000000005c3ab92 = 1;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0xa8), lVar1 != 0)) {
    lVar1 = *(long *)(lVar1 + 0x20);
    if ((lVar1 != 0) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
      if (*(uint *)(lVar1 + 0x18) <= param_2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,param_2,*(undefined8 *)PTR_DAT_0579c548);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (param_2 < *(uint *)(lVar1 + 0x18)) {
          return *(long *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575eb20);
    if (lVar1 != 0) {
      Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar1,0);
      *(undefined8 *)(lVar1 + 0x10) = 0x100000001;
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

