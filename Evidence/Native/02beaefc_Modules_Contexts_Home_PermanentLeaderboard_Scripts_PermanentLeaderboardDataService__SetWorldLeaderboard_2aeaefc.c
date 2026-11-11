/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetWorldLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetWorldLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* remoteLeaderboardPlayers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetWorldLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetWorldLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* remoteLeaderboardPlayers,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetWorldLeaderboard_2aeaefc
               (long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__CacheRemoteLeaderboard_2aeaf28
              (param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

