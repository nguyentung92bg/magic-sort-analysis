/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetMonthText
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetMonthText (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetMonthText
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetMonthText
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, System_DateTime_o
   dateTime, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetMonthText_4107048
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  uVar1 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTimeWithYear_3de71c0(param_2,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04207078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

