/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$DeleteCachedLeaderboard
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__DeleteCachedLeaderboard (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$DeleteCachedLeaderboard
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__DeleteCachedLeaderboard
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__DeleteCachedLeaderboard_32d5554
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x28) = 0;
    FUN_012d0d74();
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

