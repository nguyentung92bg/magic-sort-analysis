/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$CacheLeaderboardResponse
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CacheLeaderboardResponse (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$CacheLeaderboardResponse
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CacheLeaderboardResponse
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CacheLeaderboardResponse_32da058
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar4 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId_32d5eac
                        (), param_2 != 0)) {
    uVar5 = System_String__op_Inequality_1ecf400(uVar4,*(undefined8 *)(param_2 + 0x10),0);
    if ((uVar5 & 1) == 0) {
      Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryHandleNotSyncedScoreAndManipulateResponse_32da108
                (param_1,param_2);
      if (*(long *)(param_1 + 0x20) != 0) {
        Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__CacheLeaderboardResponse_32d5f28
                  (*(long *)(param_1 + 0x20),param_2);

        Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnCachedLeaderboardChanged_32d9870
        :
        if ((bRam0000000005c31d71 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578b048);
          FUN_012d0dc8(PTR_DAT_0580b9d0);
          FUN_012d0dc8(PTR_DAT_057a60a0);
          FUN_012d0dc8(PTR_DAT_057b8520);
          FUN_012d0dc8(PTR_DAT_057e0560);
          bRam0000000005c31d71 = 1;
        }
        uStack_28 = 0;
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 != 0) {
          uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                            (lVar6);
          if (*(long *)(lVar6 + 0x20) != 0) {
            *(undefined4 *)(*(long *)(lVar6 + 0x20) + 0x1c) = uVar3;
            *(undefined2 *)(lVar6 + 0x18) = 0x101;
            if ((param_2 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
              Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprites_3e088b8
                        (*(long *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x18),0);
              puVar2 = PTR_DAT_057b8520;
              puVar1 = PTR_DAT_057a60a0;
              if (*(long *)(param_1 + 0x18) != 0) {
                Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                          ();
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_0578b048;
                if (lVar6 != 0) {
                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
                  lVar7 = *(long *)(param_1 + 0x48);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  puVar1 = PTR_DAT_0580b9d0;
                  if (lVar6 != 0) {
                    System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057e0560,0);
                    uStack_28 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetEndDate_32da290
                                          (param_1);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)puVar1);
                    }
                    uVar4 = System_DateTime__AddSeconds_20ff238(0x3ff0000000000000,&uStack_28,0);
                    if (lVar7 != 0) {
                      Modules_Infrastructure_Common_Scripts_SecondTimer__Start_40e4ccc
                                (lVar7,lVar6,uVar4,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
    else {
      Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__ResetScore_32d9a04
                (param_1);
      Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryHandleNotSyncedScoreAndManipulateResponse_32da108
                (param_1,param_2);
      if (*(long *)(param_1 + 0x20) != 0) {
        Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__CacheLeaderboardResponse_32d5f28
                  (*(long *)(param_1 + 0x20),param_2);
        lVar6 = *(long *)(param_1 + 0x20);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
          *(undefined1 *)(*(long *)(lVar6 + 0x20) + 0x21) = 0;
          *(undefined2 *)(lVar6 + 0x18) = 0x101;
          Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnNewTournamentStarted_32da184
                    (param_1);
          goto 
          Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnCachedLeaderboardChanged_32d9870
          ;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

