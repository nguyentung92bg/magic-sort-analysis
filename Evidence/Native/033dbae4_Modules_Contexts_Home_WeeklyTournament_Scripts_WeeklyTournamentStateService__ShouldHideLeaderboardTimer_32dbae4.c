/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldHideLeaderboardTimer
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldHideLeaderboardTimer (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldHideLeaderboardTimer
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldHideLeaderboardTimer
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldHideLeaderboardTimer_32dbae4
               (void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if ((uVar2 < 8) && ((1 << (ulong)(uVar2 & 0x1f) & 0x83U) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < uVar2 - 5;
  }
  return bVar1;
}

