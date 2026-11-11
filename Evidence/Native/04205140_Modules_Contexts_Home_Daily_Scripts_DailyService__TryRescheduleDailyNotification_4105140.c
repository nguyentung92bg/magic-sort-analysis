/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$TryRescheduleDailyNotification
void Modules_Contexts_Home_Daily_Scripts_DailyService__TryRescheduleDailyNotification (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$TryRescheduleDailyNotification
   void Modules_Contexts_Home_Daily_Scripts_DailyService__TryRescheduleDailyNotification
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o dateTime, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__TryRescheduleDailyNotification_4105140
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  uStack_28 = param_2;
  if ((bRam0000000005c3ab91 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab91 = 1;
  }
  uStack_30 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = System_DateTime__get_Date_20ffe88(&uStack_28,0);
  uStack_30 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  uVar3 = System_DateTime__get_Date_20ffe88(&uStack_30,0);
  uVar4 = System_DateTime__op_Equality_2101fc8(uVar2,uVar3,0);
  if ((uVar4 & 1) != 0) {
    Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDailyNotification_4104e48(param_1);
  }
  return;
}

