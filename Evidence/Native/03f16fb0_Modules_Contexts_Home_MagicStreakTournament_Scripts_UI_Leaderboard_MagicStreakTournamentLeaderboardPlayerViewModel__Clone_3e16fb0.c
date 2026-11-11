/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardPlayerViewModel$$Clone
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel__Clone (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardPlayerViewModel$$Clone
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel__Clone
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel__Clone_3e16fb0
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar7 = PTR_DAT_0575a528;
  if ((bRam0000000005c380b7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a528);
    bRam0000000005c380b7 = 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  cVar5 = *(char *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  cVar6 = *(char *)(param_1 + 0x50);
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar7);
  if (lVar8 != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel___ctor_3e0735c
              (lVar8,uVar3,uVar9,cVar5 != '\0',uVar4,uVar1,uVar2,uVar10,cVar6 != '\0');
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    FUN_012d0d74();
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

