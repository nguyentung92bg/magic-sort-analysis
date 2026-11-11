/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyNewFeatureAlertView$$UpdateView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__UpdateView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyNewFeatureAlertView$$UpdateView
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__UpdateView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__UpdateView_32dbf74
               (long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x60), lVar2 != 0)) {
    iVar1 = Modules_Contexts_Home_UI_SwipeMenu_Scripts_SwipeMenuManager__GetCurrentPageType_2dd045c
                      (lVar2,0);
    if (iVar1 == 2) {
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar2 == 0)) goto LAB_033dbff4;
      uVar3 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__WeeklyTabSelected_2ae9928
                        (lVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_033dbff4;
        Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SetWeeklyTournamentSeenByUser_32da678
                  ();
      }
    }
    if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0)) {
      uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldShowNewFeatureAlertView_32dbba8
                        ();
      if ((uVar3 & 1) == 0) {
        lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar4 = 0;
      }
      else {
        lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar4 = 1;
      }
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar2,uVar4);
      return;
    }
  }
LAB_033dbff4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

