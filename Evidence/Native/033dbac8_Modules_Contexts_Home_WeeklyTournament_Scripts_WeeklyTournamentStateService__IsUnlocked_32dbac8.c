/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$IsUnlocked
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsUnlocked (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$IsUnlocked
   bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsUnlocked
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsUnlocked_32dbac8
               (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  return (uVar1 | 1) != 3;
}

