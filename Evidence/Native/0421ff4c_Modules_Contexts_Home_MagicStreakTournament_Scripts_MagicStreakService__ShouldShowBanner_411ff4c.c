/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldShowBanner
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowBanner (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldShowBanner
   bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowBanner
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowBanner_411ff4c
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x1c) == '\0') {
      return false;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                        (*(long *)(param_1 + 0x18),0);
      return iVar1 == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

