/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$Awake
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Awake (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$Awake
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Awake
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Awake_32ddef4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31d9c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057fbec0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a60a0);
    FUN_012d0dc8(PTR_DAT_0575fcd0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057ce740);
    bRam0000000005c31d9c = 1;
  }
  puVar4 = PTR_DAT_057b8520;
  puVar1 = PTR_DAT_057a60a0;
  puVar3 = PTR_DAT_0578b048;
  lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar10,*(undefined8 *)PTR_DAT_057fbec0);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    FUN_012d0d74();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)puVar1);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_057ce740;
    if (lVar7 != 0) {
      System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057ce740,0);
      puVar1 = PTR_DAT_0575fcd0;
      if (lVar10 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar10,lVar7,0);
        lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                           (*(undefined8 *)puVar1);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar7 != 0) &&
           (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar2,0), lVar10 != 0)) {
          if ((bRam0000000005c3aa34 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar7,0);
            bRam0000000005c3aa34 = 1;
          }
          puVar2 = PTR_DAT_0578b048;
          lVar11 = *(long *)(lVar10 + 0x20);
          while ((plVar8 = (long *)System_Delegate__Combine_23e3964(lVar11,lVar7,0),
                 plVar8 == (long *)0x0 || (*plVar8 == *(long *)puVar2))) {
            lVar9 = FUN_01351224((long *)(lVar10 + 0x20),plVar8,lVar11);
            bVar5 = lVar11 == lVar9;
            lVar11 = lVar9;
            if (bVar5) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

