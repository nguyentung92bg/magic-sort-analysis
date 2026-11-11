/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseTournamentScore
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentScore (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, int32_t scoreIncrement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseTournamentScore
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentScore
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, int32_t
   scoreIncrement, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentScore_411f510
               (long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0x20) + 0x10);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x2c);
  }
  if ((*(long *)(lVar1 + 0x20) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar1 + 0x20) + 0x10), lVar3 != 0)) {
    *(int *)(lVar3 + 0x2c) = iVar2 + param_2;
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

