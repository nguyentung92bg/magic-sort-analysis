/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetCountryLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetCountryLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* remoteLeaderboardPlayers, System_String_o* country, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$SetCountryLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetCountryLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* remoteLeaderboardPlayers,
   System_String_o* country, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__SetCountryLeaderboard_2aeb35c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__CacheRemoteLeaderboard_2aeaf28
              (param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      *puVar1 = param_3;
      FUN_012d0d74(puVar1,param_3);
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

