/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$ScheduleDailyNotification
void Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDailyNotification (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$ScheduleDailyNotification
   void Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDailyNotification
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__ScheduleDailyNotification_4104e48
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c3ab90 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c3ab90 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uVar4 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0(param_1);
  puVar3 = PTR_DAT_0580b9d0;
  puVar2 = PTR_DAT_0576c1b8;
  if ((uVar4 & 1) != 0) {
    if (((*(long *)(param_1 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0xa8), lVar7 == 0)) {
LAB_04204f90:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(char *)(lVar7 + 0x28) != '\0') {
      uStack_28 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar3);
      }
      uStack_28 = System_DateTime__get_Date_20ffe88(&uStack_28,0);
      uStack_28 = System_DateTime__AddDays_20feb78(0x3ff0000000000000,&uStack_28,0);
      uVar5 = System_DateTime__AddHours_20febe4(0x4024000000000000,&uStack_28,0);
      uVar6 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
      uStack_30 = System_DateTime__op_Subtraction_2101f60(uVar5,uVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      dVar8 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_30,0);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_04204f90;
      iVar1 = -0x80000000;
      if (dVar8 != INFINITY) {
        iVar1 = (int)dVar8;
      }
      Modules_Contexts_Application_Notification_Scripts_NotificationService__SendDailyStartedNotification_137ad5c
                (*(long *)(param_1 + 0x40),iVar1,0);
    }
  }
  return;
}

