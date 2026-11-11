/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerLeaderboardViewAdapter$$GetViewIdByIndex
int32_t Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetViewIdByIndex (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerLeaderboardViewAdapter$$GetViewIdByIndex
   int32_t
   Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetViewIdByIndex
   (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetViewIdByIndex_296b52c
               (long param_1,int param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000005c2d68f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d84f0);
    FUN_012d0dc8(PTR_DAT_057beb50);
    FUN_012d0dc8(PTR_DAT_05782180);
    FUN_012d0dc8(PTR_DAT_057f8ad0);
    bRam0000000005c2d68f = 1;
  }
  if (param_2 < 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 <= *(int *)(lVar3 + 0x18)) {
    plVar2 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar3,param_2,*(undefined8 *)PTR_DAT_057beb50);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    lVar3 = *plVar2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f8ad0 + 300);
    if ((bVar1 <= *(byte *)(lVar3 + 300)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057f8ad0)) {
      return 1;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_05782180 + 300);
    if (bVar1 <= *(byte *)(lVar3 + 300)) {
      return (ulong)(*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_05782180) << 1;
    }
  }
  return 0;
}

