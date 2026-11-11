/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$AssignTournamentRewardsAndSetRanks
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardsAndSetRanks (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, System_Collections_Generic_List_MagicStreakTournamentLeaderboardPlayerViewModel__o* sortedLeaderboard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$AssignTournamentRewardsAndSetRanks
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardsAndSetRanks
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this,
   System_Collections_Generic_List_MagicStreakTournamentLeaderboardPlayerViewModel__o*
   sortedLeaderboard, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardsAndSetRanks_411f07c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000005c3ac74 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f0490);
    FUN_012d0dc8(PTR_DAT_05813eb8);
    bRam0000000005c3ac74 = 1;
  }
  puVar1 = PTR_DAT_05813eb8;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) && (param_2 != 0)) {
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar4 = *(long *)(lVar4 + 0x80);
      iVar5 = 0;
      do {
        uVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_2,iVar5,*(undefined8 *)puVar1);
        if (lVar4 == 0) goto LAB_0421f150;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardToPlayer_411f16c
                  (uVar2,uVar2,iVar5,*(undefined8 *)(lVar4 + 0x30));
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_2,iVar5,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_0421f150;
        iVar5 = iVar5 + 1;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel__SetRank_3e1708c
                  (lVar3,iVar5,0);
      } while (iVar5 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_0421f150:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

