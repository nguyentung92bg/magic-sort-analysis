/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$<ScheduleDateCheckAtEndOfTheDay>b__15_0
void Modules_Contexts_Home_Daily_Scripts_DailyService___ScheduleDateCheckAtEndOfTheDay_b__15_0 (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$<ScheduleDateCheckAtEndOfTheDay>b__15_0
   void Modules_Contexts_Home_Daily_Scripts_DailyService___ScheduleDateCheckAtEndOfTheDay_b__15_0
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService___ScheduleDateCheckAtEndOfTheDay_b__15_0_4105c6c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c3ab8f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0575a610);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3ab8f = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_04204d54;
  uStack_28 = Modules_Contexts_Home_Daily_Scripts_DailyDataService__GetMostRecentMonthDate_4103940()
  ;
  uStack_30 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  iVar3 = System_DateTime__get_Month_21004b8(&uStack_28,0);
  iVar4 = System_DateTime__get_Month_21004b8(&uStack_30,0);
  if (iVar3 == iVar4) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar3 = System_DateTime__get_Year_21007a4(&uStack_28,0);
    iVar4 = System_DateTime__get_Year_21007a4(&uStack_30,0);
    if (iVar3 == iVar4) {
      return;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar3 = System_DateTime__get_Month_21004b8(&uStack_28,0);
  iVar4 = System_DateTime__get_Month_21004b8(&uStack_30,0);
  if (iVar4 < iVar3) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar3 = System_DateTime__get_Year_21007a4(&uStack_28,0);
    iVar4 = System_DateTime__get_Year_21007a4(&uStack_30,0);
    if (iVar3 != iVar4) goto LAB_04204cb0;
LAB_04204ce4:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_04204d54;
    Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveAllSavedData_41036b0();
  }
  else {
LAB_04204cb0:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar3 = System_DateTime__get_Year_21007a4(&uStack_28,0);
    iVar4 = System_DateTime__get_Year_21007a4(&uStack_30,0);
    if (iVar4 < iVar3) goto LAB_04204ce4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveOutdatedMonthsUpTo_41034f0
              (*(long *)(param_1 + 0x10),uStack_30);
    puVar2 = PTR_DAT_057b8520;
    puVar1 = PTR_DAT_0575a610;
    if (*(long *)(param_1 + 0x10) != 0) {
      Modules_Contexts_Home_Daily_Scripts_DailyDataService__AddMissingMonthModel_4103728
                (*(long *)(param_1 + 0x10),uStack_30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
        return;
      }
    }
  }
LAB_04204d54:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

