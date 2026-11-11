/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldOpenAutomaticallyOnSessionStart
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldOpenAutomaticallyOnSessionStart (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$ShouldOpenAutomaticallyOnSessionStart
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldOpenAutomaticallyOnSessionStart
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

byte Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldOpenAutomaticallyOnSessionStart_32d6c2c
               (long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x18), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
    cVar1 = *(char *)(lVar4 + 0x21);
    bVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsNotIntroducedAndVisible_32d6cd4
                      (param_1);
    return bVar2 & 1 | (iVar3 == 1 && cVar1 != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

