/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInfoPopup$$ClosePopup
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__ClosePopup (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInfoPopup$$ClosePopup
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__ClosePopup
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__ClosePopup_32dc7f4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c31d8a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c31d8a = 1;
  }
  puVar2 = PTR_DAT_057e7410;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
    puVar1 = PTR_DAT_0578b048;
    if ((bRam0000000005c31d89 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048);
      FUN_012d0dc8(PTR_DAT_057e72a8);
      bRam0000000005c31d89 = 1;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_057e72a8,0), lVar7 != 0))
    {
      if ((bRam0000000005c39420 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar4,0);
        bRam0000000005c39420 = 1;
      }
      puVar1 = PTR_DAT_0578b048;
      plVar8 = (long *)(lVar7 + 0x38);
      lVar7 = *plVar8;
      while ((plVar5 = (long *)System_Delegate__Remove_23e3b70(lVar7,lVar4,0), plVar5 == (long *)0x0
             || (*plVar5 == *(long *)puVar1))) {
        lVar6 = FUN_01351224(plVar8,plVar5,lVar7);
        bVar3 = lVar7 == lVar6;
        lVar7 = lVar6;
        if (bVar3) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

