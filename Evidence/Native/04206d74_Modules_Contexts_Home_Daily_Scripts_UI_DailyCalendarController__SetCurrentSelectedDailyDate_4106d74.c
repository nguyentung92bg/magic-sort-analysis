/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetCurrentSelectedDailyDate
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetCurrentSelectedDailyDate (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* dailyDateView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetCurrentSelectedDailyDate
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetCurrentSelectedDailyDate
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this,
   Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* dailyDateView, const MethodInfo* method);
    */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetCurrentSelectedDailyDate_4106d74
               (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c3aba7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3aba7 = 1;
  }
  plVar4 = (long *)(param_1 + 0x40);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*plVar4 == 0) goto LAB_04206e2c;
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetBackUnselectedView_3e1fb34(*plVar4,0);
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78) = *(undefined8 *)(param_2 + 0x50);
    *plVar4 = param_2;
    FUN_012d0d74(plVar4,param_2);
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x48);
      if (iVar1 == 0) {
        Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView_3e1f7d8(lVar5,0);
      }
      else if ((iVar1 == 4) || (iVar1 == 1)) {
        Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnlockedView_3e1f9a4(lVar5);
      }
      else {
        Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetLockedView_3e1fa58(lVar5);
      }
      if (*(long *)(lVar5 + 0x18) != 0) {
        *(bool *)(*(long *)(lVar5 + 0x18) + 0x1c) = *(int *)(lVar5 + 0x48) == 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_04206e2c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

