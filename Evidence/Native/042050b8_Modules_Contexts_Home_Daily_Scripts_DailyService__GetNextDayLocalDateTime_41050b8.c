/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetNextDayLocalDateTime
System_DateTime_o Modules_Contexts_Home_Daily_Scripts_DailyService__GetNextDayLocalDateTime (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetNextDayLocalDateTime
   System_DateTime_o Modules_Contexts_Home_Daily_Scripts_DailyService__GetNextDayLocalDateTime
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__GetNextDayLocalDateTime_41050b8(void)

{
  undefined *puVar1;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c3ab8e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab8e = 1;
  }
  uStack_28 = 0;
  uStack_18 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uStack_28 = System_DateTime__AddDays_20feb78(0x3ff0000000000000,&uStack_18,0);
  System_DateTime__get_Date_20ffe88(&uStack_28,0);
  return;
}

