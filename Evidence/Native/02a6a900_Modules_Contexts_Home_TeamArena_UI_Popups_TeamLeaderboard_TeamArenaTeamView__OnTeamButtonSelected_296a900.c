/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$OnTeamButtonSelected
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__OnTeamButtonSelected (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaTeamView$$OnTeamButtonSelected
   void 
   Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__OnTeamButtonSelected
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaTeamView__OnTeamButtonSelected_296a900
               (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c2d680 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05812a38);
    bRam0000000005c2d680 = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10);
    plVar1 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05812a38);
    if (plVar1 != (long *)0x0) {
      Modules_Contexts_Home_Teams_Scripts_UI_Commands_ShowTeamCommand___ctor_2f021e8
                (plVar1,uVar2,0,0);
                    /* WARNING: Could not recover jumptable at 0x02a6a974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

