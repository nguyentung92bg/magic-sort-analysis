/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup__Hide (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup__Hide
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopup__Hide_3a78d1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 03b78d20 to 03c78d4b has its CatchHandler @ 03b78dd8 */
  if ((bRam0000000005c35ab8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c35ab8 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 03b78d6c to 03c78db7 has its CatchHandler @ 03b78de8 */
    System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
              (*(long *)(param_1 + 0x50),1,*(undefined8 *)PTR_DAT_057b3270);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState__Dispose_3a77eb4
              ();
    puVar1 = PTR_DAT_05798298;
    if (*(long *)(param_1 + 0x40) != 0) {
      Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState__Dispose_3a73cc0
                ();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c244b5 == '\0') {
        FUN_012d0dc8(PTR_DAT_05798298);
        cRam0000000005c244b5 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
                    /* try { // try from 03b78dcc to 03c78dd7 has its CatchHandler @ 03b78dd8 */
        thunk_FUN_0130472c();
        lVar2 = *(long *)puVar1;
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78d20 with catch @ 03b78dd8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03b78dcc with catch @ 03b78dd8
                       try { // try from 03b78dd8 to 03c78e07 has its CatchHandler @ 03b78cc4 */
      return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78d6c with catch @ 03b78de8
                        */
  FUN_012d0ef0();
}

