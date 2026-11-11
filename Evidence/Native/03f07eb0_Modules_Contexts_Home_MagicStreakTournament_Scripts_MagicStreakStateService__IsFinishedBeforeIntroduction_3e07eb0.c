/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$IsFinishedBeforeIntroduction
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsFinishedBeforeIntroduction (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$IsFinishedBeforeIntroduction
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsFinishedBeforeIntroduction
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsFinishedBeforeIntroduction_3e07eb0
               (long param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (*(long *)(param_1 + 0x28),0);
    if (iVar1 < 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f07ef8;
      uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__GetIsIntroduced_411c1dc
                        (*(long *)(param_1 + 0x20),0);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2 & 1;
  }
LAB_03f07ef8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

