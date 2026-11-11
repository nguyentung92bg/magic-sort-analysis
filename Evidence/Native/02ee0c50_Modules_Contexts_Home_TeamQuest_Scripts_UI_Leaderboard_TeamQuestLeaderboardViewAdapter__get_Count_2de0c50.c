/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$get_Count
int32_t Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__get_Count (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$get_Count
   int32_t
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__get_Count
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__get_Count_2de0c50
          (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c2fd47 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e0d48);
    bRam0000000005c2fd47 = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

