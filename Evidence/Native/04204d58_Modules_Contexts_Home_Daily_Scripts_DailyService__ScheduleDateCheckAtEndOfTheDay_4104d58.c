/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$ScheduleDateCheckAtEndOfTheDay
void Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDateCheckAtEndOfTheDay (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$ScheduleDateCheckAtEndOfTheDay
   void Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDateCheckAtEndOfTheDay
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDateCheckAtEndOfTheDay_4104d58
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c3ab8d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a14d8);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab8d = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  uStack_30 = 0;
  uStack_28 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetNextDayLocalDateTime_41050b8();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  uStack_30 = System_DateTime__ToUniversalTime_21016ec(&uStack_28,0);
  lVar5 = *(long *)(param_1 + 0x30);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_057a14d8,0);
    uVar4 = System_DateTime__AddSeconds_20ff238(0x3ff0000000000000,&uStack_30,0);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SecondTimer__Start_40e4ccc(lVar5,lVar3,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

