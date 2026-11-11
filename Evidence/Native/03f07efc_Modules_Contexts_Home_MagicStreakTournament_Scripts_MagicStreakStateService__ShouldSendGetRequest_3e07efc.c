/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$ShouldSendGetRequest
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldSendGetRequest (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakStateService$$ShouldSendGetRequest
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldSendGetRequest
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldSendGetRequest_3e07efc
               (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    ();
  if ((uVar1 & 0xfffffffe) == 2) {
    return true;
  }
  return (uVar1 | 1) == 5;
}

