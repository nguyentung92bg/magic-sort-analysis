/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$GetUserTeamIndex
int32_t Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__GetUserTeamIndex (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, System_Collections_Generic_List_LeaderboardTeam__o* leaderboard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$GetUserTeamIndex
   int32_t
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__GetUserTeamIndex
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   System_Collections_Generic_List_LeaderboardTeam__o* leaderboard, const MethodInfo* method); */

int Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__GetUserTeamIndex_2af04dc
              (long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c2eba8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c6b8);
    FUN_012d0dc8(PTR_DAT_057d1730);
    bRam0000000005c2eba8 = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_02bf05b0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar2 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__get_IsUserInTeam_35a31e0
                    (*(long *)(param_1 + 0x58),0);
  puVar1 = PTR_DAT_057d1730;
  if ((uVar2 & 1) != 0) {
    if (((*(long *)(param_1 + 0x58) == 0) ||
        (lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar3 == 0)) || (param_2 == 0))
    goto LAB_02bf05b0;
    if (0 < *(int *)(param_2 + 0x18)) {
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      iVar4 = 0;
      do {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_2,iVar4,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_02bf05b0;
        uVar2 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar3 + 0x10),uVar5,0);
        if ((uVar2 & 1) != 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 0x18));
    }
  }
  return -1;
}

