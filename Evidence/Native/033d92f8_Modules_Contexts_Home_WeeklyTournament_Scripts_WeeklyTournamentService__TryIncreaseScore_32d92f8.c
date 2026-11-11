/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryIncreaseScore
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryIncreaseScore (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryIncreaseScore
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryIncreaseScore
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryIncreaseScore_32d92f8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_28;
  
  uVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__CanIncreaseScore_32d931c
                    ();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar7 != 0)) {
    lVar9 = *(long *)(lVar7 + 0x28);
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    if ((lVar9 == 0) ||
       (((lVar7 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__FindPlayer_32d9400
                            (param_1,*(undefined8 *)(lVar9 + 0x18)), *(char *)(lVar9 + 0x31) != '\0'
         || (iVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRemainingSeconds_32d9518
                               (param_1), lVar7 == 0)) || (iVar3 < 1)))) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar8 != 0)) {
      iVar3 = *(int *)(lVar8 + 0x14);
      if (iVar3 <= *(int *)(lVar7 + 0x18)) {
        return;
      }
      *(int *)(lVar7 + 0x18) = iVar3;
      uVar6 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SendSetScoreRequest_32d9628
                        (param_1);
      Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__ManipulateLeaderboardResponse_32d96e0
                (uVar6,lVar9);
      if (*(long *)(param_1 + 0x20) != 0) {
        Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__CacheLeaderboardResponse_32d5f28
                  (*(long *)(param_1 + 0x20),lVar9);
        if ((bRam0000000005c31d71 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578b048);
          FUN_012d0dc8(PTR_DAT_0580b9d0);
          FUN_012d0dc8(PTR_DAT_057a60a0);
          FUN_012d0dc8(PTR_DAT_057b8520);
          FUN_012d0dc8(PTR_DAT_057e0560);
          bRam0000000005c31d71 = 1;
        }
        uStack_28 = 0;
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 != 0) {
          uVar4 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                            (lVar7);
          if (*(long *)(lVar7 + 0x20) != 0) {
            *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x1c) = uVar4;
            *(undefined2 *)(lVar7 + 0x18) = 0x101;
            if (((lVar9 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
               (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprites_3e088b8
                          (*(long *)(param_1 + 0x40),*(undefined8 *)(lVar9 + 0x18),0),
               puVar2 = PTR_DAT_057b8520, puVar1 = PTR_DAT_057a60a0, *(long *)(param_1 + 0x18) != 0)
               ) {
              Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                        ();
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_0578b048;
              if (lVar7 != 0) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
                lVar9 = *(long *)(param_1 + 0x48);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_0580b9d0;
                if (lVar7 != 0) {
                  System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057e0560,0);
                  uStack_28 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetEndDate_32da290
                                        (param_1);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar1);
                  }
                  uVar6 = System_DateTime__AddSeconds_20ff238(0x3ff0000000000000,&uStack_28,0);
                  if (lVar9 != 0) {
                    Modules_Infrastructure_Common_Scripts_SecondTimer__Start_40e4ccc
                              (lVar9,lVar7,uVar6,0);
                    return;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

