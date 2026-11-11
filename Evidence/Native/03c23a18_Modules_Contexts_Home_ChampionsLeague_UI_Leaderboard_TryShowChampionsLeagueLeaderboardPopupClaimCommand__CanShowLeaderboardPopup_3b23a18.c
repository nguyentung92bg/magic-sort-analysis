/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupClaimCommand$$CanShowLeaderboardPopup
bool Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupClaimCommand__CanShowLeaderboardPopup (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupClaimCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupClaimCommand$$CanShowLeaderboardPopup
   bool 
   Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupClaimCommand__CanShowLeaderboardPopup
   (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupClaimCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupClaimCommand__CanShowLeaderboardPopup_3b23a18
               (long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x20) != 0)) &&
     (lVar2 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueDataService__GetSessionCacheModel_3b28868
                        (), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) != '\0') {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueStateService__GetState_3b30ed8
                        ();
      if ((uVar1 | 1) == 9) {
        if (*(long *)(lVar2 + 0x20) != 0) {
          uVar1 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueDataService__HasNoCachedLeaderboardData_3b26dcc
                            ();
          return ~uVar1 & 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

