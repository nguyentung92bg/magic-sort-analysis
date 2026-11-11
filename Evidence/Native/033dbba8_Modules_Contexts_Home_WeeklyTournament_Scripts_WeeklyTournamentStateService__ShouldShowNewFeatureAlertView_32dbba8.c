/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldShowNewFeatureAlertView
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldShowNewFeatureAlertView (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldShowNewFeatureAlertView
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldShowNewFeatureAlertView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldShowNewFeatureAlertView_32dbba8
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar3 != 0)) {
    if ((*(int *)(lVar3 + 0x18) == *(int *)(lVar3 + 0x1c)) || (*(int *)(lVar3 + 0x1c) < 1)) {
      iVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                        ();
      bVar1 = iVar2 == 1;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

