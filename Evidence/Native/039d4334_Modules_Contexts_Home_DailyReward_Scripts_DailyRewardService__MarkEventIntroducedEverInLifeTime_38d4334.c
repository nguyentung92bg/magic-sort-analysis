/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$MarkEventIntroducedEverInLifeTime
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__MarkEventIntroducedEverInLifeTime (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$MarkEventIntroducedEverInLifeTime
   void 
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__MarkEventIntroducedEverInLifeTime
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__MarkEventIntroducedEverInLifeTime_38d4334
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x10) = 1;
    *(undefined2 *)(lVar1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

