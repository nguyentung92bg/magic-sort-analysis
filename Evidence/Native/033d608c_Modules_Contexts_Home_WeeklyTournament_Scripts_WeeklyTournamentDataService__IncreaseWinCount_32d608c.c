/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$IncreaseWinCount
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__IncreaseWinCount (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$IncreaseWinCount
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__IncreaseWinCount
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__IncreaseWinCount_32d608c
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

