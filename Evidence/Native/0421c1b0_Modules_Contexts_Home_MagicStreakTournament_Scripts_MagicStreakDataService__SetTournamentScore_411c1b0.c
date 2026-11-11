/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$SetTournamentScore
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetTournamentScore (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, int32_t newScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakDataService$$SetTournamentScore
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetTournamentScore
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* __this, int32_t
   newScore, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetTournamentScore_411c1b0
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0x2c) = param_2;
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

