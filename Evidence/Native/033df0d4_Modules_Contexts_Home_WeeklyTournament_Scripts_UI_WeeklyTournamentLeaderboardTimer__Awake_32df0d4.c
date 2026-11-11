/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardTimer$$Awake
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer__Awake (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardTimer$$Awake
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer__Awake
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer__Awake_32df0d4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c31da5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a60a0);
    FUN_012d0dc8(PTR_DAT_0575fcd0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05762a18);
    bRam0000000005c31da5 = 1;
  }
  puVar1 = PTR_DAT_057a60a0;
  puVar3 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_05762a18;
  if (lVar6 != 0) {
    System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05762a18,0);
    puVar1 = PTR_DAT_0575fcd0;
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar2,0), lVar5 != 0)) {
        if ((bRam0000000005c3aa34 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
          bRam0000000005c3aa34 = 1;
        }
        puVar2 = PTR_DAT_0578b048;
        lVar9 = *(long *)(lVar5 + 0x20);
        while ((plVar7 = (long *)System_Delegate__Combine_23e3964(lVar9,lVar6,0),
               plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar2))) {
          lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar7,lVar9);
          bVar4 = lVar9 == lVar8;
          lVar9 = lVar8;
          if (bVar4) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(plVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

