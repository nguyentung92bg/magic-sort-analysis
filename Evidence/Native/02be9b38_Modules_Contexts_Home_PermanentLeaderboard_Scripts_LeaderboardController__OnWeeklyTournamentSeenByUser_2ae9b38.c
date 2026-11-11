/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$OnWeeklyTournamentSeenByUser
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnWeeklyTournamentSeenByUser (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$OnWeeklyTournamentSeenByUser
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnWeeklyTournamentSeenByUser
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnWeeklyTournamentSeenByUser_2ae9b38
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c31d7a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aa180,0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c31d7a = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 != 0) {
    uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                      (lVar4);
    puVar2 = PTR_DAT_057b8520;
    if (*(long *)(lVar4 + 0x20) != 0) {
      *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x18) = uVar3;
      *(undefined2 *)(lVar4 + 0x18) = 0x101;
      puVar1 = PTR_DAT_057aa180;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x20);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),lVar4,0,*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

