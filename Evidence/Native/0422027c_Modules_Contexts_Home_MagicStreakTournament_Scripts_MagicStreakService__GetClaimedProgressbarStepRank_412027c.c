/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetClaimedProgressbarStepRank
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetClaimedProgressbarStepRank (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetClaimedProgressbarStepRank
   int32_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetClaimedProgressbarStepRank
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

int Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetClaimedProgressbarStepRank_412027c
              (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 != 0)) {
    return *(int *)(lVar1 + 0x20) + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

