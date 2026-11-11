/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowDailyCommand$$IsSkippable
bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__IsSkippable (Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowDailyCommand$$IsSkippable
   bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__IsSkippable
   (Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand_o* __this, const MethodInfo* method);
    */

uint Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__IsSkippable_1f0583c(void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__ShouldOpenAutomaticallyOnLobbyReturn_1f05854
                    ();
  return ~uVar1 & 1;
}

