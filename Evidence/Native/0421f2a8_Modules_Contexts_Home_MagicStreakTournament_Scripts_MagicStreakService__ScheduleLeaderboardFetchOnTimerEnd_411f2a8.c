/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ScheduleLeaderboardFetchOnTimerEnd
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ScheduleLeaderboardFetchOnTimerEnd (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ScheduleLeaderboardFetchOnTimerEnd
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ScheduleLeaderboardFetchOnTimerEnd
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ScheduleLeaderboardFetchOnTimerEnd_411f2a8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c3ac77 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0579d058);
    bRam0000000005c3ac77 = 1;
  }
  uStack_28 = 0;
  lVar4 = *(long *)(param_1 + 0x50);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0580b9d0;
  if (lVar2 != 0) {
    System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_0579d058,0);
    uStack_28 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEndDate_411f1e8
                          (param_1);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar3 = System_DateTime__AddSeconds_20ff238(0x3ff0000000000000,&uStack_28,0);
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SecondTimer__Start_40e4ccc(lVar4,lVar2,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

