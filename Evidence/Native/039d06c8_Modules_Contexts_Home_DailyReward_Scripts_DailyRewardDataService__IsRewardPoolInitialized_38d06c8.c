/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$IsRewardPoolInitialized
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsRewardPoolInitialized (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$IsRewardPoolInitialized
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsRewardPoolInitialized
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsRewardPoolInitialized_38d06c8
               (long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(long *)(lVar2 + 0x38) != 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

