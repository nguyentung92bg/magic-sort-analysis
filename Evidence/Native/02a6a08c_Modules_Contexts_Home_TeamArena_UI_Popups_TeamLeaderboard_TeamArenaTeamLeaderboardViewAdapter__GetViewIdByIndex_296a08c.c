/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamLeaderboardViewAdapter$$GetViewIdByIndex
int32_t Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetViewIdByIndex (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamLeaderboardViewAdapter$$GetViewIdByIndex
   int32_t
   Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetViewIdByIndex
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetViewIdByIndex_296a08c
               (long param_1,int param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 02a6a09c to 02b6a09f has its CatchHandler @ 02a69e18 */
                    /* try { // try from 02a6a0a0 to 02b6a0a3 has its CatchHandler @ 02a6a0ac */
                    /* try { // try from 02a6a0a4 to 02b6a0cf has its CatchHandler @ 02a69e18 */
  if ((bRam0000000005c2d67c & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a6a0a0 with catch @ 02a6a0ac
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a69fa4 with catch @ 02a6a0b0
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02a6a068 with catch @ 02a6a0b0
                        */
    FUN_012d0dc8(PTR_DAT_057d84f0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a69f4c with catch @ 02a6a0b4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a69ef0 with catch @ 02a6a0b8
                        */
    FUN_012d0dc8(PTR_DAT_057beb50);
    FUN_012d0dc8(PTR_DAT_05782180);
                    /* try { // try from 02a6a0d0 to 02b6a0d3 has its CatchHandler @ 02a6a154 */
    bRam0000000005c2d67c = 1;
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
                    /* try { // try from 02a6a118 to 02b6a13f has its CatchHandler @ 02a6a160 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_05782180 + 300);
    if (bVar1 <= *(byte *)(*plVar2 + 300)) {
                    /* try { // try from 02a6a140 to 02b6a14b has its CatchHandler @ 02a69e18 */
                    /* try { // try from 02a6a14c to 02b6a153 has its CatchHandler @ 02a6a160 */
      return (ulong)(*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_05782180) << 1;
                    /* catch() { ... } // from try @ 02a6a0d0 with catch @ 02a6a154 */
    }
  }
  return 0;
}

