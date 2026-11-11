/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard.TeamArenaPlayerLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_PlayerLeaderboard_TeamArenaPlayerLeaderboardViewAdapter__UpdateView_296b77c
               (undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c2d68d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05770330);
    FUN_012d0dc8(PTR_DAT_057aefb0);
    bRam0000000005c2d68d = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)PTR_DAT_057aefb0;
    if ((*(byte *)(lVar1 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
      lVar2 = *param_2;
      if ((*(byte *)(lVar1 + 300) <= *(byte *)(lVar2 + 300)) &&
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
        if (param_3 == 0) {
          lVar1 = 0;
        }
        else {
          uVar3 = *(undefined8 *)PTR_DAT_05770330;
          lVar1 = thunk_FUN_01320d5c(param_3,uVar3);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(param_3,uVar3);
          }
          lVar2 = *param_2;
        }
                    /* WARNING: Could not recover jumptable at 0x02a6b858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x1d8))(param_2,lVar1,*(undefined8 *)(lVar2 + 0x1e0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

