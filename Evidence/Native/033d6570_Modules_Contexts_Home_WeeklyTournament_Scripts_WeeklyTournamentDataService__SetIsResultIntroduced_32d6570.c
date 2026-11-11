/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$SetIsResultIntroduced
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__SetIsResultIntroduced (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, bool isResultIntroduced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$SetIsResultIntroduced
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__SetIsResultIntroduced
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, bool
   isResultIntroduced, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__SetIsResultIntroduced_32d6570
               (long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(byte *)(*(long *)(param_1 + 0x20) + 0x21) = param_2 & 1;
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

