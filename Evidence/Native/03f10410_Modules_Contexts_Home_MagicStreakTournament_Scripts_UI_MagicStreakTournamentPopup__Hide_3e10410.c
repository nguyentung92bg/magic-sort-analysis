/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__Hide (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__Hide
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopup__Hide_3e10410
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c38077 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0580c3b0);
    FUN_012d0dc8(PTR_DAT_057bce30);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c38077 = 1;
  }
  puVar3 = PTR_DAT_057bce30;
  puVar1 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_0580c3b0,0), lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
                (*(long *)(param_1 + 0x28),1,*(undefined8 *)PTR_DAT_057b3270);
      if (*(int *)(param_1 + 0x30) == 4) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_03f10590;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultController__Dispose_3e10594
                  ();
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f10590;
        Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__Dispose_3e0f4c8
                  ();
      }
      puVar2 = PTR_DAT_05798298;
      if (*(int *)(*(long *)PTR_DAT_05798298 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c244b5 == '\0') {
        FUN_012d0dc8(PTR_DAT_05798298);
        cRam0000000005c244b5 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar4 = *(long *)puVar2;
      }
      return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
    }
  }
LAB_03f10590:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

