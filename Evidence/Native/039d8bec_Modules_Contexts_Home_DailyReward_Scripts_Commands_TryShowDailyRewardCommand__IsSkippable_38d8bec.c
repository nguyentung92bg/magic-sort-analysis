/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardCommand$$IsSkippable
bool Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand__IsSkippable (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardCommand$$IsSkippable
   bool Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand__IsSkippable
   (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand__IsSkippable_38d8bec
               (long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 039d8afc with catch @ 039d8bf8
                       catch() { ... } // from try @ 039d8b38 with catch @ 039d8bf8
                       catch() { ... } // from try @ 039d8b64 with catch @ 039d8bf8
                       catch() { ... } // from try @ 039d8be8 with catch @ 039d8bf8 */
    uVar1 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnReturnHome_38d43e4
                      ();
                    /* try { // try from 039d8bfc to 03ad8bff has its CatchHandler @ 039d8c08 */
                    /* try { // try from 039d8c00 to 03ad8c0b has its CatchHandler @ 039d8980 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d8bfc with catch @ 039d8c08
                        */
    return ~uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 039d8c9c with catch @ 039d8c0c
                       catch() { ... } // from try @ 039d8ce8 with catch @ 039d8c0c
                       catch() { ... } // from try @ 039d8d14 with catch @ 039d8c0c
                       catch() { ... } // from try @ 039d8d98 with catch @ 039d8c0c */
  FUN_012d0ef0();
}

