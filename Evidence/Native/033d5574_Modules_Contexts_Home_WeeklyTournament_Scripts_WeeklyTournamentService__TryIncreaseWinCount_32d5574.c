/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryIncreaseWinCount
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryIncreaseWinCount (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryIncreaseWinCount
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryIncreaseWinCount
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, int32_t rank,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryIncreaseWinCount_32d5574
               (long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x20);
    if ((lVar1 == 0) || (lVar2 = *(long *)(lVar1 + 0x20), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
  }
  return;
}

