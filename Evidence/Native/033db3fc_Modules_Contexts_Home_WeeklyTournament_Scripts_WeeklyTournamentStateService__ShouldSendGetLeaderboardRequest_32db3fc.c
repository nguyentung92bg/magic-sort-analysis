/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldSendGetLeaderboardRequest
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldSendGetLeaderboardRequest (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldSendGetLeaderboardRequest
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldSendGetLeaderboardRequest
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldSendGetLeaderboardRequest_32db3fc
               (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if ((uVar1 | 4) == 4) {
    return true;
  }
  return uVar1 - 5 < 2;
}

