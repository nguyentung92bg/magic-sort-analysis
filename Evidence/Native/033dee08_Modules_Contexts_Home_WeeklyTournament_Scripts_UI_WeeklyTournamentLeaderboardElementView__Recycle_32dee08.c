/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardElementView$$Recycle
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__Recycle (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardElementView$$Recycle
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__Recycle
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__Recycle_32dee08
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Dispose_2981380
              (*(long *)(param_1 + 0x80),0);
  }
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_Transform__SetParent_409352c(lVar1,0,0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033dee58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

