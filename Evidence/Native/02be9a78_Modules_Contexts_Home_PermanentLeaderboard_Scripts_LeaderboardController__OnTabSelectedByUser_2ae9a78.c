/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$OnTabSelectedByUser
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelectedByUser (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$OnTabSelectedByUser
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelectedByUser
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelectedByUser_2ae9a78
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000005c2eb6f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d69c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2eb6f = 1;
  }
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelected_2ae9b54
            (param_1,param_2);
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057d69c8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Equality_407f288(param_2,uVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      if ((bRam0000000005c31d7a & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057aa180,0);
        FUN_012d0dc8(PTR_DAT_057b8520);
        bRam0000000005c31d7a = 1;
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 != 0) {
        uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                          (lVar6);
        puVar1 = PTR_DAT_057b8520;
        if (*(long *)(lVar6 + 0x20) != 0) {
          *(undefined4 *)(*(long *)(lVar6 + 0x20) + 0x18) = uVar3;
          *(undefined2 *)(lVar6 + 0x18) = 0x101;
          puVar2 = PTR_DAT_057aa180;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          if (lVar6 != 0) {
            lVar7 = *(long *)(lVar6 + 0x20);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
            }
            lVar7 = *(long *)(lVar6 + 0x10);
            if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),lVar6,0,*(undefined8 *)(lVar7 + 0x28));
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

