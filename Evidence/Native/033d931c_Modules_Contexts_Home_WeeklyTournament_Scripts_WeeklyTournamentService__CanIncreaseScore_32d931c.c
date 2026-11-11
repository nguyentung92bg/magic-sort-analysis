/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$CanIncreaseScore
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CanIncreaseScore (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$CanIncreaseScore
   bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CanIncreaseScore
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CanIncreaseScore_32d931c
               (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                      ();
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

