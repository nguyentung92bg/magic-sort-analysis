/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$ShouldStartNewEvent
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldStartNewEvent (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$ShouldStartNewEvent
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldStartNewEvent
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldStartNewEvent_38d3e38
               (void)

{
  int iVar1;
  
  iVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24()
  ;
  if (iVar1 != 0) {
    return iVar1 == 5 || iVar1 == 3;
  }
  return true;
}

