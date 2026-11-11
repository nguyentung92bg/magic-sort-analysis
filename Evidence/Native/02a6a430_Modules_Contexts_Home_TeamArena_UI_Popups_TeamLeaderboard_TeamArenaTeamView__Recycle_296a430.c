/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$Recycle
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__Recycle (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$Recycle
   void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__Recycle
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__Recycle_296a430
               (long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0xa0),0);
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__RecycleCurrentCurrencyView_2969e6c
              ();
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar1,0,0);
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a6a498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

