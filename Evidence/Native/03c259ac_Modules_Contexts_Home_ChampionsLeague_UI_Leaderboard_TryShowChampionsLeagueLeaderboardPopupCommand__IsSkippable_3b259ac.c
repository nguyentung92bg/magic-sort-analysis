/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupCommand$$IsSkippable
bool Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__IsSkippable (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__IsSkippable
   (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__IsSkippable_3b259ac
               (undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__CanShowPopup_3b25860
                    ();
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__ShouldShowIncreaseLeaderboardAnimation_3b258cc
                      (param_1);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

