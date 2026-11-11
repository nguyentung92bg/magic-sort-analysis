/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardHomeWelcomingCommand$$IsSkippable
bool Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand__IsSkippable (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardHomeWelcomingCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand__IsSkippable
   (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand__IsSkippable_38d9178
               (long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnStart_38d4394
                      ();
    return ~uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

