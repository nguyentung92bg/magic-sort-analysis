/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$SelectWeeklyTournamentTab
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__SelectWeeklyTournamentTab (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$SelectWeeklyTournamentTab
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__SelectWeeklyTournamentTab
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__SelectWeeklyTournamentTab_2ae9e6c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb6e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d69c8);
    bRam0000000005c2eb6e = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
      (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar4,*(undefined8 *)PTR_DAT_05790e10), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x18) != 0)) {
    uVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsUnlocked_32dbac8
                      (*(long *)(lVar4 + 0x18),0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057d69c8);
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelected_2ae9b54
                (param_1,uVar6);
      lVar4 = *(long *)(param_1 + 0x58);
      if (lVar4 != 0) {
        if ((bRam0000000005c31d7a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057aa180,0);
          FUN_012d0dc8(PTR_DAT_057b8520);
          bRam0000000005c31d7a = 1;
        }
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 != 0) {
          uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                            (lVar4);
          puVar1 = PTR_DAT_057b8520;
          if (*(long *)(lVar4 + 0x20) != 0) {
            *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x18) = uVar3;
            *(undefined2 *)(lVar4 + 0x18) = 0x101;
            puVar2 = PTR_DAT_057aa180;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar2);
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar4 + 0x20);
              if (lVar7 != 0) {
                (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              }
              lVar7 = *(long *)(lVar4 + 0x10);
              if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),lVar4,0,*(undefined8 *)(lVar7 + 0x28));
                return;
              }
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

