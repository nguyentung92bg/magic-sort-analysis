/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$ShouldShowLobbyIcon
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldShowLobbyIcon (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$ShouldShowLobbyIcon
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldShowLobbyIcon
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldShowLobbyIcon_3e07fd0
               (void)

{
  int iVar1;
  
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    ();
  if (iVar1 == 4) {
    return true;
  }
  return iVar1 - 5U < 2;
}

