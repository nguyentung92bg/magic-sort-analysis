/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$AssignTournamentRewardToPlayer
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardToPlayer (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o* player, int32_t rankIndex, Modules_Contexts_Home_MagicStreakTournament_Scripts_TournamentRewards_o* rewardsConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$AssignTournamentRewardToPlayer
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardToPlayer
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o*
   player, int32_t rankIndex,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_TournamentRewards_o* rewardsConfig, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__AssignTournamentRewardToPlayer_411f16c
               (undefined8 param_1,long param_2,int param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 1) {
    if ((param_4 != 0) && (param_2 != 0)) {
      uVar5 = *(undefined8 *)(param_4 + 0x18);
      goto LAB_0421f1c8;
    }
  }
  else if (param_3 == 0) {
    if ((param_4 != 0) && (param_2 != 0)) {
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      goto LAB_0421f1c8;
    }
  }
  else if (param_4 != 0) {
    if (param_3 == 2) {
      if (param_2 == 0) goto LAB_0421f1e4;
      uVar5 = *(undefined8 *)(param_4 + 0x20);
    }
    else {
      if (*(int *)(param_4 + 0x30) <= param_3) {
        return;
      }
      if (param_2 == 0) goto LAB_0421f1e4;
      uVar5 = *(undefined8 *)(param_4 + 0x28);
    }
LAB_0421f1c8:
    puVar4 = (undefined8 *)(param_2 + 0x48);
    *puVar4 = uVar5;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_0421f1e4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

