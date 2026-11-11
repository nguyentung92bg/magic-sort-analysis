/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$GetDailyDateView
Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__GetDailyDateView (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$GetDailyDateView
   Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__GetDailyDateView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, int32_t day, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__GetDailyDateView_4106ff0
          (long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c3abaa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575feb0);
    bRam0000000005c3abaa = 1;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar1 + 0x18) <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,param_2,*(undefined8 *)PTR_DAT_0575feb0);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

