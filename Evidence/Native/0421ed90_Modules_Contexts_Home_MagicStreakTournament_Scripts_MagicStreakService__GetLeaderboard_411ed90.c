/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetLeaderboard
System_Collections_Generic_List_MagicStreakTournamentLeaderboardPlayerViewModel__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetLeaderboard
   System_Collections_Generic_List_MagicStreakTournamentLeaderboardPlayerViewModel__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard_411ed90
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__UpdateLeaderboard_411edb4
              (param_1);
    lVar1 = *(long *)(param_1 + 0x68);
  }
  return lVar1;
}

