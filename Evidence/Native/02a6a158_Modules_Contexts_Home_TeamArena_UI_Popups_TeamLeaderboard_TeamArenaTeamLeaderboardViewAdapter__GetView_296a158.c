/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetView (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetView_296a158
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a6a118 with catch @ 02a6a160
                       catch(type#2 @ 00000000) { ... } // from try @ 02a6a14c with catch @ 02a6a160
                        */
  uVar1 = Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamLeaderboardViewAdapter__GetViewIdByIndex_296a08c
                    ();
  plVar4 = *(long **)(param_1 + 0x20);
  if (((plVar4 != (long *)0x0) &&
      (lVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x1d0)),
      lVar2 != 0)) && (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar3 != 0))
  {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

