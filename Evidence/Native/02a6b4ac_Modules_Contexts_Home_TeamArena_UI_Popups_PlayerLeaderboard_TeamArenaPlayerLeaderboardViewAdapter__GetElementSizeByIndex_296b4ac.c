/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerLeaderboardViewAdapter$$GetElementSizeByIndex
UnityEngine_Vector3_o Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetElementSizeByIndex (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerLeaderboardViewAdapter$$GetElementSizeByIndex
   UnityEngine_Vector3_o
   Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetElementSizeByIndex
   (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetElementSizeByIndex_296b4ac
          (long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  uVar1 = Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__GetViewIdByIndex_296b52c
                    ();
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x1d0))
     , plVar2 != (long *)0x0)) {
    auVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    uVar4 = auVar3._8_8_;
    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    auVar3._8_8_ = uVar4;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

