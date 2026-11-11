/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupCommand$$CanShowPopup
bool Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__CanShowPopup (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupCommand$$CanShowPopup
   bool 
   Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__CanShowPopup
   (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__CanShowPopup_3b25860
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x20) != 0)) &&
     (lVar2 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueDataService__GetSessionCacheModel_3b28868
                        (), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x12) != '\0') {
      return false;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
        iVar1 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueStateService__GetState_3b30ed8
                          ();
        return iVar1 == 4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

