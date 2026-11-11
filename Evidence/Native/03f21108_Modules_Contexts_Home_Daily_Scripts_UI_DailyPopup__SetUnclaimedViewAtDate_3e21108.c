/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$SetUnclaimedViewAtDate
void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__SetUnclaimedViewAtDate (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPopup$$SetUnclaimedViewAtDate
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__SetUnclaimedViewAtDate
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup_o* __this, System_DateTime_o dateTime, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__SetUnclaimedViewAtDate_3e21108
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_0580b9d0;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uStack_28 = param_2;
  if ((bRam0000000005c380f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c380f7 = 1;
  }
  lVar5 = *(long *)(lVar4 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar3 = System_DateTime__get_Day_2100110(&uStack_28,0);
  if ((lVar5 != 0) &&
     (lVar5 = Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__GetDailyDateView_4106ff0
                        (lVar5,iVar3 + -1,0), lVar5 != 0)) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnclaimedView_3e1f0d4();
    uVar1 = *(int *)(lVar4 + 0x68) - 1;
    if (0x1f < (int)uVar1) {
      uVar1 = 0x20;
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
                (*(long *)(lVar4 + 0x18),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

