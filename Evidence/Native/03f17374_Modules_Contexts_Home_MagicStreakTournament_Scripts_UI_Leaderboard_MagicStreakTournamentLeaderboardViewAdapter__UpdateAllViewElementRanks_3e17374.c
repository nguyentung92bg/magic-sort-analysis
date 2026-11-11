/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$UpdateAllViewElementRanks
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateAllViewElementRanks (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$UpdateAllViewElementRanks
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateAllViewElementRanks
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__UpdateAllViewElementRanks_3e17374
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c380c9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576b680);
    FUN_012d0dc8(PTR_DAT_05800460);
    FUN_012d0dc8(PTR_DAT_057b79e8);
    FUN_012d0dc8(PTR_DAT_0577abf0);
    FUN_012d0dc8(PTR_DAT_057a4f48);
    bRam0000000005c380c9 = 1;
  }
  puVar3 = PTR_DAT_05800460;
  puVar2 = PTR_DAT_057a4f48;
  puVar1 = PTR_DAT_0576b680;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_0577abf0);
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar3);
      lVar4 = lStack_38;
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) break;
      iVar5 = System_Collections_Generic_List_object___IndexOf_21fd78c
                        (*(long *)(param_1 + 0x28),lStack_38,*(undefined8 *)puVar2);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(int *)(lVar4 + 0x10) = iVar5 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

