/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryShowMagicStreakLeaderboardLobbyReturnCommand$$ShouldTerminateTheFlow
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__ShouldTerminateTheFlow (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryShowMagicStreakLeaderboardLobbyReturnCommand$$ShouldTerminateTheFlow
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__ShouldTerminateTheFlow
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__ShouldTerminateTheFlow_3cf25dc
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService__get_IsPopupLimitAbEnabled_2151204
                      (*(long *)(param_1 + 0x18),0);
    if ((uVar2 & 1) == 0) {
      bVar1 = *(char *)(param_1 + 0x10) != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

