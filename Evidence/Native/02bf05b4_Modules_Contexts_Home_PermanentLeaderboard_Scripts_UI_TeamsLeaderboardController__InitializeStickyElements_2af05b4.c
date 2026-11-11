/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$InitializeStickyElements
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__InitializeStickyElements (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, Modules_Contexts_Home_Teams_Scripts_UI_LeaderboardTeam_o* userTeamData, int32_t userTeamIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0410d468) */
/* WARNING: Removing unreachable block (ram,0x0410d470) */
/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$InitializeStickyElements
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__InitializeStickyElements
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   Modules_Contexts_Home_Teams_Scripts_UI_LeaderboardTeam_o* userTeamData, int32_t userTeamIndex,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__InitializeStickyElements_2af05b4
               (long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (param_3 < 0) {
    *(undefined1 *)(lVar1 + 0x50) = 0;
    Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__SetElementVisibilityAtTop_400d37c
              (lVar1,0);
    if ((*(long *)(lVar1 + 0x38) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar1 + 0x38),0), lVar2 != 0
       )) {
      UnityEngine_GameObject__get_activeSelf_408e35c(lVar2,0);
      if ((*(long *)(lVar1 + 0x38) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar1 + 0x38),0),
         lVar1 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Hide_400d14c();
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  *(int *)(lVar1 + 0x40) = param_3;
  FUN_012d0d74((undefined8 *)(lVar1 + 0x48),param_2);
  *(undefined1 *)(lVar1 + 0x50) = 1;
  return;
}

