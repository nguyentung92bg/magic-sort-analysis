/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$AnimateRankChange
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__AnimateRankChange (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o* __this, int32_t currentRank, int32_t targetRank, float totalDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$AnimateRankChange
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__AnimateRankChange
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o*
   __this, int32_t currentRank, int32_t targetRank, float totalDuration, const MethodInfo* method);
    */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__AnimateRankChange_3e16754
               (undefined8 param_1,long param_2,int param_3,int param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((bRam0000000005c380b2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a008);
    FUN_012d0dc8(PTR_DAT_057cc518);
    bRam0000000005c380b2 = 1;
  }
  puVar4 = PTR_DAT_057cc518;
  plVar7 = (long *)(param_2 + 0x20);
  if (*plVar7 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback_float____ctor_341f244(lVar5,param_2,*(undefined8 *)PTR_DAT_0577a008,0)
    ;
    uVar6 = DG_Tweening_DOVirtual__Float_1edbb8c((float)param_3,(float)param_4,param_1,lVar5,0);
    *(undefined8 *)(param_2 + 0x20) = uVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

