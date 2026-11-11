/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$Dispose
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Dispose (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$Dispose
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Dispose
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Dispose_32de290
               (long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Dispose_32dd3d0
              ();
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Dispose_32dcaf0
                ();
      *(undefined1 *)(param_1 + 0x58) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

