/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$SetWeeklyTournamentSeenByUser
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SetWeeklyTournamentSeenByUser (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$SetWeeklyTournamentSeenByUser
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SetWeeklyTournamentSeenByUser
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SetWeeklyTournamentSeenByUser_32da678
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                      (lVar2);
    if (*(long *)(lVar2 + 0x20) != 0) {
      *(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x18) = uVar1;
      *(undefined2 *)(lVar2 + 0x18) = 0x101;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

