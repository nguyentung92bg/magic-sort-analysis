/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldShowLobbyIcon
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowLobbyIcon (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldShowLobbyIcon
   bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowLobbyIcon
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowLobbyIcon_411ff30
               (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    (*(long *)(param_1 + 0x18),0);
  if (iVar1 == 4) {
    return true;
  }
  return iVar1 - 5U < 2;
}

