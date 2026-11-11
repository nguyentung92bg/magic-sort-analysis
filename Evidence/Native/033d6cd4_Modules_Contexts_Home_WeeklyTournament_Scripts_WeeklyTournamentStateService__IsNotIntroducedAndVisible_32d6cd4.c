/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$IsNotIntroducedAndVisible
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsNotIntroducedAndVisible (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$IsNotIntroducedAndVisible
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsNotIntroducedAndVisible
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsNotIntroducedAndVisible_32d6cd4
               (long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if (((uVar2 < 8) && ((1 << (ulong)(uVar2 & 0x1f) & 0x83U) != 0)) || (uVar2 - 5 < 2)) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    bVar1 = *(char *)(lVar3 + 0x20) == '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

