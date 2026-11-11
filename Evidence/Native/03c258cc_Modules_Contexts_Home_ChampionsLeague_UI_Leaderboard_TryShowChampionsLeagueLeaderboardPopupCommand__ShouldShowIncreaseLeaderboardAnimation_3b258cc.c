/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupCommand$$ShouldShowIncreaseLeaderboardAnimation
bool Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__ShouldShowIncreaseLeaderboardAnimation (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.Leaderboard.TryShowChampionsLeagueLeaderboardPopupCommand$$ShouldShowIncreaseLeaderboardAnimation
   bool 
   Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__ShouldShowIncreaseLeaderboardAnimation
   (Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_ChampionsLeague_UI_Leaderboard_TryShowChampionsLeagueLeaderboardPopupCommand__ShouldShowIncreaseLeaderboardAnimation_3b258cc
               (long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uStack_18;
  
  if ((bRam0000000005c36312 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b41b0);
    FUN_012d0dc8(PTR_DAT_0577d870);
    FUN_012d0dc8(PTR_DAT_057c0428);
    bRam0000000005c36312 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x20) != 0)) {
    uVar3 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueDataService__GetLastSeenRank_3b27928
                      ();
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar2 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                        (*(long *)(param_1 + 0x10));
      if ((uVar3 & 0xff) == 0) {
        bVar1 = false;
      }
      else {
        uStack_18 = 0;
        System_Nullable_int____ctor_203c398
                  (&uStack_18,(int)(uVar3 >> 0x20) - iVar2,*(undefined8 *)PTR_DAT_0577d870);
        bVar1 = (uStack_18 & 0xff) != 0 && 2 < uStack_18._4_4_;
      }
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

