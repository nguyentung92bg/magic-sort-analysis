/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IsLobbyGoingToBeShown
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsLobbyGoingToBeShown (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IsLobbyGoingToBeShown
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsLobbyGoingToBeShown
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsLobbyGoingToBeShown_4120404
               (long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    (*(long *)(param_1 + 0x18),0);
  if ((uVar1 & 0xfffffffe) == 4) {
    return true;
  }
  return uVar1 == 6 || uVar1 == 3;
}

