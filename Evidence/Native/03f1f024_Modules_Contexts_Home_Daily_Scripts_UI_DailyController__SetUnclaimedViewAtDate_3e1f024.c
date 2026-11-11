/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$SetUnclaimedViewAtDate
void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetUnclaimedViewAtDate (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$SetUnclaimedViewAtDate
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetUnclaimedViewAtDate
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, System_DateTime_o dateTime,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetUnclaimedViewAtDate_3e1f024
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_0580b9d0;
  uStack_28 = param_2;
  if ((bRam0000000005c380f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c380f7 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
                    /* try { // try from 03f1f06c to 0401f06f has its CatchHandler @ 03f1f084 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03f1eef4 with catch @ 03f1f070
                       try { // try from 03f1f070 to 0401f0bf has its CatchHandler @ 03f1ee70 */
    thunk_FUN_0130472c();
  }
                    /* catch() { ... } // from try @ 03f1ef94 with catch @ 03f1f074 */
                    /* catch() { ... } // from try @ 03f1efa8 with catch @ 03f1f078 */
                    /* catch() { ... } // from try @ 03f1ef74 with catch @ 03f1f07c */
  iVar3 = System_DateTime__get_Day_2100110(&uStack_28,0);
                    /* catch() { ... } // from try @ 03f1ef68 with catch @ 03f1f080 */
                    /* catch() { ... } // from try @ 03f1ef60 with catch @ 03f1f084
                       catch() { ... } // from try @ 03f1f06c with catch @ 03f1f084 */
                    /* catch() { ... } // from try @ 03f1ef54 with catch @ 03f1f088 */
                    /* catch() { ... } // from try @ 03f1ef28 with catch @ 03f1f08c */
                    /* catch() { ... } // from try @ 03f1ef24 with catch @ 03f1f090 */
                    /* catch() { ... } // from try @ 03f1eed0 with catch @ 03f1f094 */
  if ((lVar4 != 0) &&
     (lVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__GetDailyDateView_4106ff0
                        (lVar4,iVar3 + -1,0), lVar4 != 0)) {
                    /* catch() { ... } // from try @ 03f1f008 with catch @ 03f1f098 */
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnclaimedView_3e1f0d4();
                    /* catch() { ... } // from try @ 03f1eff4 with catch @ 03f1f09c */
                    /* catch() { ... } // from try @ 03f1efe0 with catch @ 03f1f0a0 */
                    /* catch() { ... } // from try @ 03f1ef34 with catch @ 03f1f0a4 */
                    /* catch() { ... } // from try @ 03f1eef8 with catch @ 03f1f0a8 */
    uVar1 = *(int *)(param_1 + 0x68) - 1;
    if (0x1f < (int)uVar1) {
      uVar1 = 0x20;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
                (*(long *)(param_1 + 0x18),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
                    /* try { // try from 03f1f0c0 to 0401f0d7 has its CatchHandler @ 03f1f15c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

