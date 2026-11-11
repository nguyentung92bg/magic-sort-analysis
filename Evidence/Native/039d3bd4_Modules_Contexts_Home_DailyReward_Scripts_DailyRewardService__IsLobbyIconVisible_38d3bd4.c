/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsLobbyIconVisible
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsLobbyIconVisible (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$IsLobbyIconVisible
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsLobbyIconVisible
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsLobbyIconVisible_38d3bd4
               (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24
                      ();
    return iVar1 == 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

