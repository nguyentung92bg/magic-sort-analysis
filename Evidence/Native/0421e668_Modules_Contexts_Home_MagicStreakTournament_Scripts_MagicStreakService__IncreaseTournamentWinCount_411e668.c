/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseTournamentWinCount
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentWinCount (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseTournamentWinCount
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentWinCount
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentWinCount_411e668
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x20), lVar2 != 0)) {
    *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + 1;
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

