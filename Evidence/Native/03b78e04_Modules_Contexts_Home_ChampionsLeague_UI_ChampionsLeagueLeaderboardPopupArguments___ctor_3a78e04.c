/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPopupArguments$$.ctor
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopupArguments___ctor (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopupArguments_o* __this, bool shouldForceShowIncreaseProgressAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPopupArguments$$.ctor
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopupArguments___ctor
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopupArguments_o* __this,
   bool shouldForceShowIncreaseProgressAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPopupArguments___ctor_3a78e04
               (long param_1,byte param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_057fff18;
                    /* try { // try from 03b78e08 to 03c78e1f has its CatchHandler @ 03b78ea4 */
                    /* try { // try from 03b78e24 to 03c78e27 has its CatchHandler @ 03b78e90 */
  if ((bRam0000000005c35ab9 & 1) == 0) {
                    /* try { // try from 03b78e34 to 03c78e4b has its CatchHandler @ 03b78e94 */
    FUN_012d0dc8(PTR_DAT_057fff18);
    bRam0000000005c35ab9 = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
                    /* try { // try from 03b78e4c to 03c78e67 has its CatchHandler @ 03b78e98 */
  *(byte *)(param_1 + 0x21) = param_2 & 1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)puVar1;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 03b78e68 to 03c78e7b has its CatchHandler @ 03b78cc4 */
  return;
}

