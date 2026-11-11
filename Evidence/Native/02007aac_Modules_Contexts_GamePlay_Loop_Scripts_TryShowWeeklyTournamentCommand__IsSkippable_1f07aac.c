/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowWeeklyTournamentCommand$$IsSkippable
bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__IsSkippable (Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowWeeklyTournamentCommand$$IsSkippable
   bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__IsSkippable
   (Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__IsSkippable_1f07aac
               (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__ShouldOpenAutomaticallyOnLobbyReturn_1f07a24
                    ();
  return ~uVar1 & 1;
}

