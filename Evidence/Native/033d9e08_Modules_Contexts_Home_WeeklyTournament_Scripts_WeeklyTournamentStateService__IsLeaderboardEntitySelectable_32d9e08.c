/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$IsLeaderboardEntitySelectable
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsLeaderboardEntitySelectable (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$IsLeaderboardEntitySelectable
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsLeaderboardEntitySelectable
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsLeaderboardEntitySelectable_32d9e08
               (void)

{
  int iVar1;
  
  iVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  return iVar1 != 1 && iVar1 != 7;
}

