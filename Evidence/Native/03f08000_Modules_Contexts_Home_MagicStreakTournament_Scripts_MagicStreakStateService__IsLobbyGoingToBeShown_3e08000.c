/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$IsLobbyGoingToBeShown
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsLobbyGoingToBeShown (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$IsLobbyGoingToBeShown
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsLobbyGoingToBeShown
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__IsLobbyGoingToBeShown_3e08000
               (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    ();
  if ((uVar1 & 0xfffffffe) == 4) {
    return true;
  }
  return uVar1 == 6 || uVar1 == 3;
}

