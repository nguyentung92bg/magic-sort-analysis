/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$Initialize
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__Initialize (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this, System_Collections_Generic_List_ITeamArenaLeaderboardViewModel__o* playerLeaderboard, System_Collections_Generic_List_ITeamArenaLeaderboardViewModel__o* teamsLeaderboard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$Initialize
   void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__Initialize
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this,
   System_Collections_Generic_List_ITeamArenaLeaderboardViewModel__o* playerLeaderboard,
   System_Collections_Generic_List_ITeamArenaLeaderboardViewModel__o* teamsLeaderboard, const
   MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__Initialize_296545c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c2d66e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057e6108);
    bRam0000000005c2d66e = 1;
  }
  Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__SetPlayersLeaderboard_2969774
            (param_1,param_2);
  Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__SetTeamsLeaderboard_2969804
            (param_1,param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Equality_407f288(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_02a655a4;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_02a655a8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__OnTabSelected_2969894
              (param_1,*(undefined8 *)(lVar6 + 0x20));
  }
  puVar3 = PTR_DAT_057e6108;
  puVar2 = PTR_DAT_057d2d78;
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) goto LAB_02a655a8;
        lVar8 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar5 == 0) ||
           (System_Action_object____ctor_1647468(lVar5,param_1,*(undefined8 *)puVar3,0), lVar8 == 0)
           ) goto LAB_02a655a4;
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__add_OnSelectSuccessEvent_2ae8530
                  (lVar8,lVar5,0);
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    return;
  }
LAB_02a655a4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

