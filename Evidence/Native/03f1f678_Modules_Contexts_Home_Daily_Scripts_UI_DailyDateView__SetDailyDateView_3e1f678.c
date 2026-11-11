/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetDailyDateView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetDailyDateView (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyDateModel_o dailyDateModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetDailyDateView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetDailyDateView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyDateModel_o dailyDateModel, const MethodInfo* method);
    */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetDailyDateView_3e1f678
               (long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c380fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c380fa = 1;
  }
  uStack_3c = 0;
  uStack_38 = param_3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uStack_3c = System_DateTime__get_Day_2100110(&uStack_38,0);
  uVar2 = System_Int32__ToString_26c9768(&uStack_3c,0);
  Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetAllTexts_3e1f76c(param_1,uVar2);
                    /* try { // try from 03f1f708 to 0401f73f has its CatchHandler @ 03f1f80c */
  switch(param_2) {
  case 0:
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView_3e1f7d8(param_1);
    break;
  case 1:
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnclaimedView_3e1f0d4(param_1);
    break;
  case 2:
  case 3:
  case 4:
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUpcomingView_3e1f88c(param_1);
  }
                    /* try { // try from 03f1f740 to 0401f747 has its CatchHandler @ 03f1f758 */
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* catch() { ... } // from try @ 03f1f5f4 with catch @ 03f1f748
                       try { // try from 03f1f748 to 0401f777 has its CatchHandler @ 03f1f1dc */
  *(bool *)(*(long *)(param_1 + 0x18) + 0x1c) = param_2 == 1;
                    /* catch() { ... } // from try @ 03f1f640 with catch @ 03f1f758
                       catch() { ... } // from try @ 03f1f740 with catch @ 03f1f758 */
                    /* catch() { ... } // from try @ 03f1f2f8 with catch @ 03f1f75c
                       catch() { ... } // from try @ 03f1f4c0 with catch @ 03f1f75c */
  return;
}

