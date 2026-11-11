/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$GetLiveOpsStateForLevelEvent
int32_t Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLiveOpsStateForLevelEvent (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentStateService$$GetLiveOpsStateForLevelEvent
   int32_t
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLiveOpsStateForLevelEvent
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLiveOpsStateForLevelEvent_32da760
          (void)

{
  uint uVar1;
  
  uVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if (uVar1 < 8) {
    return *(undefined4 *)(&UNK_04399170 + (long)(int)uVar1 * 4);
  }
  return 0;
}

