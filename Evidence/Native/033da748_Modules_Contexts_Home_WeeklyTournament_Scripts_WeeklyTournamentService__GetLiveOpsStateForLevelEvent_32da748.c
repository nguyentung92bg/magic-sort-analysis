/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetLiveOpsStateForLevelEvent
int32_t Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLiveOpsStateForLevelEvent (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetLiveOpsStateForLevelEvent
   int32_t
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLiveOpsStateForLevelEvent
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLiveOpsStateForLevelEvent_32da748
          (long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if (uVar1 < 8) {
    return *(undefined4 *)(&UNK_04399170 + (long)(int)uVar1 * 4);
  }
  return 0;
}

