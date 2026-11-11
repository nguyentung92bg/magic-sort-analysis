/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$CacheLeaderboardResponse
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__CacheLeaderboardResponse (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* weeklyGetLeaderboardResponse, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$CacheLeaderboardResponse
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__CacheLeaderboardResponse
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o*
   weeklyGetLeaderboardResponse, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__CacheLeaderboardResponse_32d5f28
               (long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
    FUN_012d0d74();
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

