/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsEventClaimed
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsEventClaimed (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsEventClaimed
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsEventClaimed
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

undefined1
Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsEventClaimed_38d4614(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x18), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

