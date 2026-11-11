/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$ShouldFetchCurrentEvent
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldFetchCurrentEvent (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$ShouldFetchCurrentEvent
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldFetchCurrentEvent
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldFetchCurrentEvent_38d3c7c
               (void)

{
  int iVar1;
  
  iVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24()
  ;
  return iVar1 == 0 || (iVar1 == 5 || iVar1 == 3);
}

