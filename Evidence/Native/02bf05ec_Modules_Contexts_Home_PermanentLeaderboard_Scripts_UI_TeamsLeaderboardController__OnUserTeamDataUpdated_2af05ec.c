/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$OnUserTeamDataUpdated
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__OnUserTeamDataUpdated (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$OnUserTeamDataUpdated
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__OnUserTeamDataUpdated
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__OnUserTeamDataUpdated_2af05ec
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iStack_14;
  
  iStack_14 = 0;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_02bf06b0;
  uVar2 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__get_IsUserInTeam_35a31e0
                    (*(long *)(param_1 + 0x58),0);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x48);
  }
  else {
    if (((*(long *)(param_1 + 0x58) == 0) ||
        (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar4 == 0)) ||
       (*(long *)(param_1 + 0x40) == 0)) goto LAB_02bf06b0;
    uVar3 = Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetTeamData_345ec40
                      (*(long *)(param_1 + 0x40),*(undefined8 *)(lVar4 + 0x30),&iStack_14,0);
    iVar1 = iStack_14;
    lVar4 = *(long *)(param_1 + 0x48);
    if (-1 < iStack_14) {
      if (lVar4 != 0) {
        Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Initialize_400d10c
                  (lVar4,iStack_14,uVar3,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                    (*(long *)(param_1 + 0x30),0);
          if (*(long *)(param_1 + 0x30) != 0) {
            Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                      (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),iVar1,0);
            return;
          }
        }
      }
      goto LAB_02bf06b0;
    }
  }
  if (lVar4 != 0) {
    Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
              (lVar4,0);
    return;
  }
LAB_02bf06b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

