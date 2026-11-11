/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$OnCachedLeaderboardChanged
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnCachedLeaderboardChanged (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$OnCachedLeaderboardChanged
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnCachedLeaderboardChanged
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyGetLeaderboardResponse_o* response, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnCachedLeaderboardChanged_32d9870
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_28;
  
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
            lVar5 = *(long *)(param_1 + 0x48);
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
              if (lVar5 != 0) {
                Modules_Infrastructure_Common_Scripts_SecondTimer__Start_40e4ccc
                          (lVar5,lVar6,uVar4,0);
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

