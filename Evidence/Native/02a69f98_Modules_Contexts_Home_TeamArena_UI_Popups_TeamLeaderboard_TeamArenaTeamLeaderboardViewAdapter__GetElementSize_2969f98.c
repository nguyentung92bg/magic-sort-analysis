/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamLeaderboardViewAdapter$$GetElementSize
UnityEngine_Vector3_o Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetElementSize (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamLeaderboardViewAdapter$$GetElementSize
   UnityEngine_Vector3_o
   Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetElementSize
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetElementSize_2969f98
          (long param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
                    /* try { // try from 02a69fa4 to 02b69fbf has its CatchHandler @ 02a6a0b0 */
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 02a69fc0 to 02b6a067 has its CatchHandler @ 02a69e18 */
      auVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
      uVar3 = auVar2._8_8_;
      (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      auVar2._8_8_ = uVar3;
      return auVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

