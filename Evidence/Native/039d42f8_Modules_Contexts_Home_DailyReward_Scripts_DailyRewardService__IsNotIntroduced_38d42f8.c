/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsNotIntroduced
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsNotIntroduced (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsNotIntroduced
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsNotIntroduced
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsNotIntroduced_38d42f8
               (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24
                      ();
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

