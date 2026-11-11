/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldShowAreYouSure
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowAreYouSure (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldShowAreYouSure
   bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowAreYouSure
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowAreYouSure_411ff94
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__CanEarnTournamentScore_3e0803c
                      (*(long *)(param_1 + 0x18),0);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0421ffd8;
      bVar1 = 1 < *(int *)(*(long *)(param_1 + 0x28) + 0x34) + 1;
    }
    return bVar1;
  }
LAB_0421ffd8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

